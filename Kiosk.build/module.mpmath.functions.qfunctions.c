/* Generated code for Python module 'mpmath.functions.qfunctions'
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

/* The "_module_mpmath$functions$qfunctions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mpmath$functions$qfunctions;
PyDictObject *moduledict_mpmath$functions$qfunctions;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_tuple_3d201de6b7406daf5dda55d07495f224_tuple;
extern PyObject *const_str_plain_q;
static PyObject *const_str_plain_qk;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_c088ff11f340782d30d08a3582689756;
static PyObject *const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple;
static PyObject *const_str_digest_5403cd33f2b2c677660148a5373744aa;
extern PyObject *const_int_neg_1;
static PyObject *const_tuple_b1ad8b64b1cbaf666bbcfd5e887445cf_tuple;
extern PyObject *const_str_plain_prec;
extern PyObject *const_str_plain_terms;
extern PyObject *const_str_plain_infinite;
extern PyObject *const_tuple_str_plain_defun_str_plain_defun_wrapped_tuple;
extern PyObject *const_str_plain_mul_accurately;
extern PyObject *const_float_0_5;
extern PyObject *const_str_plain_a_s;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_sum_accurately;
static PyObject *const_str_digest_be653b715ce955ce3065680f2f6035de;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_functions;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_50;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_c54b40d31e80bd60f4f38ccdf9206a8f;
extern PyObject *const_str_plain_qhyper;
static PyObject *const_tuple_b4d734aa9dcdcbea5be14bc771bab9c1_tuple;
extern PyObject *const_str_digest_833779846dc8234ee3dc29fcd1fe5ef0;
extern PyObject *const_str_plain_zero;
extern PyObject *const_str_plain_maxterms;
extern PyObject *const_str_plain_ctx;
extern PyObject *const_str_plain_defun_wrapped;
extern PyObject *const_str_plain_b_s;
extern PyObject *const_str_plain_convert;
extern PyObject *const_str_plain_defun;
static PyObject *const_str_digest_ad252d6fc13ae434fbad3285c730713d;
extern PyObject *const_str_plain_x1;
extern PyObject *const_str_plain_qfac;
static PyObject *const_tuple_7d68a1b9ddd5efef392d3ea6d2a89f2c_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_factors;
extern PyObject *const_str_plain_x2;
extern PyObject *const_str_plain_one;
static PyObject *const_tuple_9a0621e4a2e992b278c9d9346dd49d2a_tuple;
extern PyObject *const_str_plain_NoConvergence;
extern PyObject *const_str_plain_qgamma;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_inf;
extern PyObject *const_str_plain_qp;
extern PyObject *const_str_plain_isint;
extern PyObject *const_str_plain_d;
static PyObject *const_str_digest_90abad958a4ae0423eaa151c336d6a37;
extern PyObject *const_str_plain__re;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_b;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain_same;
extern PyObject *const_str_plain_z;
static PyObject *const_str_digest_73d1483aae37d780fe5168fa4b6bd72b;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_p;
static PyObject *const_tuple_str_plain_ctx_str_plain_z_str_plain_q_str_plain_kwargs_tuple;
static PyObject *const_str_digest_391d9ee3907556f63bfb9e19d3262d42;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_s;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_3d201de6b7406daf5dda55d07495f224_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 2, const_str_plain_a_s ); Py_INCREF( const_str_plain_a_s );
    PyTuple_SET_ITEM( const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 3, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 4, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 5, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 6, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 7, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 8, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 9, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 10, const_str_plain_maxterms ); Py_INCREF( const_str_plain_maxterms );
    PyTuple_SET_ITEM( const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 11, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_qk = UNSTREAM_STRING( &constant_bin[ 564213 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 12, const_str_plain_qk ); Py_INCREF( const_str_plain_qk );
    PyTuple_SET_ITEM( const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 13, const_str_plain_b_s ); Py_INCREF( const_str_plain_b_s );
    const_str_digest_c088ff11f340782d30d08a3582689756 = UNSTREAM_STRING( &constant_bin[ 564215 ], 35, 0 );
    const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple, 1, const_str_plain_a_s ); Py_INCREF( const_str_plain_a_s );
    PyTuple_SET_ITEM( const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple, 2, const_str_plain_b_s ); Py_INCREF( const_str_plain_b_s );
    PyTuple_SET_ITEM( const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple, 3, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple, 4, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple, 5, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple, 6, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple, 7, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple, 8, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple, 9, const_str_plain_maxterms ); Py_INCREF( const_str_plain_maxterms );
    PyTuple_SET_ITEM( const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple, 10, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple, 11, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    PyTuple_SET_ITEM( const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple, 12, const_str_plain_terms ); Py_INCREF( const_str_plain_terms );
    const_str_digest_5403cd33f2b2c677660148a5373744aa = UNSTREAM_STRING( &constant_bin[ 564250 ], 2071, 0 );
    const_tuple_b1ad8b64b1cbaf666bbcfd5e887445cf_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_b1ad8b64b1cbaf666bbcfd5e887445cf_tuple, 0, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_b1ad8b64b1cbaf666bbcfd5e887445cf_tuple, 1, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_b1ad8b64b1cbaf666bbcfd5e887445cf_tuple, 2, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_b1ad8b64b1cbaf666bbcfd5e887445cf_tuple, 3, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_b1ad8b64b1cbaf666bbcfd5e887445cf_tuple, 4, const_str_plain_maxterms ); Py_INCREF( const_str_plain_maxterms );
    PyTuple_SET_ITEM( const_tuple_b1ad8b64b1cbaf666bbcfd5e887445cf_tuple, 5, const_str_plain_x2 ); Py_INCREF( const_str_plain_x2 );
    PyTuple_SET_ITEM( const_tuple_b1ad8b64b1cbaf666bbcfd5e887445cf_tuple, 6, const_str_plain_x1 ); Py_INCREF( const_str_plain_x1 );
    const_str_digest_be653b715ce955ce3065680f2f6035de = UNSTREAM_STRING( &constant_bin[ 566321 ], 27, 0 );
    const_str_digest_c54b40d31e80bd60f4f38ccdf9206a8f = UNSTREAM_STRING( &constant_bin[ 566348 ], 499, 0 );
    const_tuple_b4d734aa9dcdcbea5be14bc771bab9c1_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_b4d734aa9dcdcbea5be14bc771bab9c1_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_b4d734aa9dcdcbea5be14bc771bab9c1_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_b4d734aa9dcdcbea5be14bc771bab9c1_tuple, 2, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_b4d734aa9dcdcbea5be14bc771bab9c1_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_b4d734aa9dcdcbea5be14bc771bab9c1_tuple, 4, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_b4d734aa9dcdcbea5be14bc771bab9c1_tuple, 5, const_str_plain_terms ); Py_INCREF( const_str_plain_terms );
    PyTuple_SET_ITEM( const_tuple_b4d734aa9dcdcbea5be14bc771bab9c1_tuple, 6, const_str_plain_factors ); Py_INCREF( const_str_plain_factors );
    PyTuple_SET_ITEM( const_tuple_b4d734aa9dcdcbea5be14bc771bab9c1_tuple, 7, const_str_plain_maxterms ); Py_INCREF( const_str_plain_maxterms );
    const_str_plain_same = UNSTREAM_STRING( &constant_bin[ 22355 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_b4d734aa9dcdcbea5be14bc771bab9c1_tuple, 8, const_str_plain_same ); Py_INCREF( const_str_plain_same );
    PyTuple_SET_ITEM( const_tuple_b4d734aa9dcdcbea5be14bc771bab9c1_tuple, 9, const_str_plain_infinite ); Py_INCREF( const_str_plain_infinite );
    const_str_digest_ad252d6fc13ae434fbad3285c730713d = UNSTREAM_STRING( &constant_bin[ 566847 ], 766, 0 );
    const_tuple_7d68a1b9ddd5efef392d3ea6d2a89f2c_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_7d68a1b9ddd5efef392d3ea6d2a89f2c_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_7d68a1b9ddd5efef392d3ea6d2a89f2c_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_7d68a1b9ddd5efef392d3ea6d2a89f2c_tuple, 2, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_7d68a1b9ddd5efef392d3ea6d2a89f2c_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_7d68a1b9ddd5efef392d3ea6d2a89f2c_tuple, 4, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_7d68a1b9ddd5efef392d3ea6d2a89f2c_tuple, 5, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_7d68a1b9ddd5efef392d3ea6d2a89f2c_tuple, 6, const_str_plain_maxterms ); Py_INCREF( const_str_plain_maxterms );
    const_tuple_9a0621e4a2e992b278c9d9346dd49d2a_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9a0621e4a2e992b278c9d9346dd49d2a_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_9a0621e4a2e992b278c9d9346dd49d2a_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_9a0621e4a2e992b278c9d9346dd49d2a_tuple, 2, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_9a0621e4a2e992b278c9d9346dd49d2a_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_9a0621e4a2e992b278c9d9346dd49d2a_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_digest_90abad958a4ae0423eaa151c336d6a37 = UNSTREAM_STRING( &constant_bin[ 567613 ], 69, 0 );
    const_str_digest_73d1483aae37d780fe5168fa4b6bd72b = UNSTREAM_STRING( &constant_bin[ 567682 ], 36, 0 );
    const_tuple_str_plain_ctx_str_plain_z_str_plain_q_str_plain_kwargs_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_z_str_plain_q_str_plain_kwargs_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_z_str_plain_q_str_plain_kwargs_tuple, 1, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_z_str_plain_q_str_plain_kwargs_tuple, 2, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_str_plain_ctx_str_plain_z_str_plain_q_str_plain_kwargs_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_391d9ee3907556f63bfb9e19d3262d42 = UNSTREAM_STRING( &constant_bin[ 567718 ], 1294, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_mpmath$functions$qfunctions( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b03b595b8541e06719e201ed1321586e;
static PyCodeObject *codeobj_9b3a420c5cf79fda993787283016848b;
static PyCodeObject *codeobj_8acca203d0440485be4c2c39f0588c80;
static PyCodeObject *codeobj_aa219536cbeb22391bdd58fcf59fe5f6;
static PyCodeObject *codeobj_9554df76dead1f207b9bed07a8400e94;
static PyCodeObject *codeobj_e609adf2be2f1695b8de3d255f26087a;
static PyCodeObject *codeobj_0e007e1070ac1fb7c1b6a32c5dbcd46f;
static PyCodeObject *codeobj_0ba63113a3dc91e0aaf30287bc32b538;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_90abad958a4ae0423eaa151c336d6a37;
    codeobj_b03b595b8541e06719e201ed1321586e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_73d1483aae37d780fe5168fa4b6bd72b, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_9b3a420c5cf79fda993787283016848b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_factors, 118, const_tuple_7d68a1b9ddd5efef392d3ea6d2a89f2c_tuple, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_8acca203d0440485be4c2c39f0588c80 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_qfac, 170, const_tuple_9a0621e4a2e992b278c9d9346dd49d2a_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_aa219536cbeb22391bdd58fcf59fe5f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_qgamma, 131, const_tuple_str_plain_ctx_str_plain_z_str_plain_q_str_plain_kwargs_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_9554df76dead1f207b9bed07a8400e94 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_qhyper, 204, const_tuple_06e852cbb43b1d71a09bbd540be10539_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_e609adf2be2f1695b8de3d255f26087a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_qp, 3, const_tuple_b4d734aa9dcdcbea5be14bc771bab9c1_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_0e007e1070ac1fb7c1b6a32c5dbcd46f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_terms, 102, const_tuple_b1ad8b64b1cbaf666bbcfd5e887445cf_tuple, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_0ba63113a3dc91e0aaf30287bc32b538 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_terms, 257, const_tuple_3d201de6b7406daf5dda55d07495f224_tuple, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
static PyObject *mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms$$$genobj_1_terms_maker( void );


static PyObject *mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors$$$genobj_1_factors_maker( void );


static PyObject *mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms$$$genobj_1_terms_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_1_qp( PyObject *defaults );


static PyObject *MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_2_qgamma(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_3_qfac(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_4_qhyper(  );


static PyObject *MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms(  );


// The module function definitions.
static PyObject *impl_mpmath$functions$qfunctions$$$function_1_qp( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ctx = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_a = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_q = PyCell_NEW1( python_pars[ 2 ] );
    struct Nuitka_CellObject *par_n = PyCell_NEW1( python_pars[ 3 ] );
    PyObject *par_kwargs = python_pars[ 4 ];
    PyObject *var_terms = NULL;
    PyObject *var_factors = NULL;
    struct Nuitka_CellObject *var_maxterms = PyCell_EMPTY();
    PyObject *var_same = NULL;
    PyObject *var_infinite = NULL;
    struct Nuitka_FrameObject *frame_e609adf2be2f1695b8de3d255f26087a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e609adf2be2f1695b8de3d255f26087a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e609adf2be2f1695b8de3d255f26087a, codeobj_e609adf2be2f1695b8de3d255f26087a, module_mpmath$functions$qfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e609adf2be2f1695b8de3d255f26087a = cache_frame_e609adf2be2f1695b8de3d255f26087a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e609adf2be2f1695b8de3d255f26087a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e609adf2be2f1695b8de3d255f26087a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_1 = PyCell_GET( par_ctx );
        CHECK_OBJECT( PyCell_GET( par_a ) );
        tmp_args_element_name_1 = PyCell_GET( par_a );
        frame_e609adf2be2f1695b8de3d255f26087a->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_convert, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "ccccooocoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = PyCell_GET( par_a );
            PyCell_SET( par_a, tmp_assign_source_1 );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( PyCell_GET( par_n ) );
        tmp_compexpr_left_1 = PyCell_GET( par_n );
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
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_source_name_1 = PyCell_GET( par_ctx );
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_inf );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;
                type_description_1 = "ccccooocoo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = PyCell_GET( par_n );
                PyCell_SET( par_n, tmp_assign_source_2 );
                Py_XDECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_called_instance_2 = PyCell_GET( par_ctx );
            CHECK_OBJECT( PyCell_GET( par_n ) );
            tmp_args_element_name_2 = PyCell_GET( par_n );
            frame_e609adf2be2f1695b8de3d255f26087a->m_frame.f_lineno = 81;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_convert, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 81;
                type_description_1 = "ccccooocoo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = PyCell_GET( par_n );
                PyCell_SET( par_n, tmp_assign_source_3 );
                Py_XDECREF( old );
            }

        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( PyCell_GET( par_n ) );
        tmp_compexpr_left_2 = PyCell_GET( par_n );
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ccccooocoo";
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
            tmp_make_exception_arg_1 = const_str_digest_833779846dc8234ee3dc29fcd1fe5ef0;
            frame_e609adf2be2f1695b8de3d255f26087a->m_frame.f_lineno = 83;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 83;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ccccooocoo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( PyCell_GET( par_q ) );
        tmp_compexpr_left_3 = PyCell_GET( par_q );
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
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( PyCell_GET( par_a ) );
            tmp_assign_source_4 = PyCell_GET( par_a );
            {
                PyObject *old = PyCell_GET( par_q );
                PyCell_SET( par_q, tmp_assign_source_4 );
                Py_INCREF( tmp_assign_source_4 );
                Py_XDECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_called_instance_3 = PyCell_GET( par_ctx );
            CHECK_OBJECT( PyCell_GET( par_q ) );
            tmp_args_element_name_3 = PyCell_GET( par_q );
            frame_e609adf2be2f1695b8de3d255f26087a->m_frame.f_lineno = 87;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_convert, call_args );
            }

            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 87;
                type_description_1 = "ccccooocoo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = PyCell_GET( par_q );
                PyCell_SET( par_q, tmp_assign_source_5 );
                Py_XDECREF( old );
            }

        }
        branch_end_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( PyCell_GET( par_n ) );
        tmp_compexpr_left_4 = PyCell_GET( par_n );
        tmp_compexpr_right_4 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ccccooocoo";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_source_name_2 = PyCell_GET( par_ctx );
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_one );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "ccccooocoo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = const_int_0;
            CHECK_OBJECT( PyCell_GET( par_a ) );
            tmp_left_name_3 = PyCell_GET( par_a );
            CHECK_OBJECT( PyCell_GET( par_q ) );
            tmp_right_name_3 = PyCell_GET( par_q );
            tmp_right_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 89;
                type_description_1 = "ccccooocoo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 89;
                type_description_1 = "ccccooocoo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 89;
                type_description_1 = "ccccooocoo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( PyCell_GET( par_n ) );
        tmp_compexpr_left_5 = PyCell_GET( par_n );
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_3 = PyCell_GET( par_ctx );
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_inf );
        if ( tmp_compexpr_right_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ccccooocoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_right_5 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ccccooocoo";
            goto frame_exception_exit_1;
        }
        assert( var_infinite == NULL );
        var_infinite = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( PyCell_GET( par_a ) );
        tmp_compexpr_left_6 = PyCell_GET( par_a );
        CHECK_OBJECT( PyCell_GET( par_q ) );
        tmp_compexpr_right_6 = PyCell_GET( par_q );
        tmp_assign_source_7 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "ccccooocoo";
            goto frame_exception_exit_1;
        }
        assert( var_same == NULL );
        var_same = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_infinite );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_infinite );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ccccooocoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_4;
            tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_1 != NULL );
            CHECK_OBJECT( PyCell_GET( par_q ) );
            tmp_args_element_name_4 = PyCell_GET( par_q );
            frame_e609adf2be2f1695b8de3d255f26087a->m_frame.f_lineno = 93;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_compexpr_left_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_compexpr_left_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "ccccooocoo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_7 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_INT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            Py_DECREF( tmp_compexpr_left_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 93;
                type_description_1 = "ccccooocoo";
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
                nuitka_bool tmp_condition_result_7;
                int tmp_and_left_truth_1;
                nuitka_bool tmp_and_left_value_1;
                nuitka_bool tmp_and_right_value_1;
                int tmp_truth_name_2;
                int tmp_or_left_truth_1;
                nuitka_bool tmp_or_left_value_1;
                nuitka_bool tmp_or_right_value_1;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                PyObject *tmp_compexpr_left_9;
                PyObject *tmp_compexpr_right_9;
                CHECK_OBJECT( var_same );
                tmp_truth_name_2 = CHECK_IF_TRUE( var_same );
                if ( tmp_truth_name_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 94;
                    type_description_1 = "ccccooocoo";
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
                CHECK_OBJECT( PyCell_GET( par_q ) );
                tmp_compexpr_left_8 = PyCell_GET( par_q );
                tmp_compexpr_right_8 = const_int_neg_1;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 94;
                    type_description_1 = "ccccooocoo";
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
                CHECK_OBJECT( PyCell_GET( par_q ) );
                tmp_compexpr_left_9 = PyCell_GET( par_q );
                tmp_compexpr_right_9 = const_int_pos_1;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 94;
                    type_description_1 = "ccccooocoo";
                    goto frame_exception_exit_1;
                }
                tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_and_right_value_1 = tmp_or_right_value_1;
                goto or_end_1;
                or_left_1:;
                tmp_and_right_value_1 = tmp_or_left_value_1;
                or_end_1:;
                tmp_condition_result_7 = tmp_and_right_value_1;
                goto and_end_1;
                and_left_1:;
                tmp_condition_result_7 = tmp_and_left_value_1;
                and_end_1:;
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
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_source_name_4;
                    PyObject *tmp_right_name_4;
                    CHECK_OBJECT( PyCell_GET( par_ctx ) );
                    tmp_source_name_4 = PyCell_GET( par_ctx );
                    tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_zero );
                    if ( tmp_left_name_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 95;
                        type_description_1 = "ccccooocoo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( PyCell_GET( par_q ) );
                    tmp_right_name_4 = PyCell_GET( par_q );
                    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
                    Py_DECREF( tmp_left_name_4 );
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 95;
                        type_description_1 = "ccccooocoo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                branch_no_7:;
            }
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_c088ff11f340782d30d08a3582689756;
                frame_e609adf2be2f1695b8de3d255f26087a->m_frame.f_lineno = 96;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 96;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ccccooocoo";
                goto frame_exception_exit_1;
            }
            goto branch_end_6;
            branch_no_6:;
            {
                nuitka_bool tmp_condition_result_8;
                PyObject *tmp_compexpr_left_10;
                PyObject *tmp_compexpr_right_10;
                CHECK_OBJECT( PyCell_GET( par_q ) );
                tmp_compexpr_left_10 = PyCell_GET( par_q );
                tmp_compexpr_right_10 = const_int_0;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 97;
                    type_description_1 = "ccccooocoo";
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
                    PyObject *tmp_left_name_5;
                    PyObject *tmp_source_name_5;
                    PyObject *tmp_right_name_5;
                    CHECK_OBJECT( PyCell_GET( par_ctx ) );
                    tmp_source_name_5 = PyCell_GET( par_ctx );
                    tmp_left_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_one );
                    if ( tmp_left_name_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 98;
                        type_description_1 = "ccccooocoo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( PyCell_GET( par_a ) );
                    tmp_right_name_5 = PyCell_GET( par_a );
                    tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
                    Py_DECREF( tmp_left_name_5 );
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 98;
                        type_description_1 = "ccccooocoo";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                branch_no_8:;
            }
            branch_end_6:;
        }
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_kwargs );
        tmp_source_name_6 = par_kwargs;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_get );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ccccooocoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = const_str_plain_maxterms;
        tmp_left_name_6 = const_int_pos_50;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_7 = PyCell_GET( par_ctx );
        tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_prec );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 99;
            type_description_1 = "ccccooocoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 99;
            type_description_1 = "ccccooocoo";
            goto frame_exception_exit_1;
        }
        frame_e609adf2be2f1695b8de3d255f26087a->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 99;
            type_description_1 = "ccccooocoo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_maxterms ) == NULL );
        PyCell_SET( var_maxterms, tmp_assign_source_8 );

    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_3;
        int tmp_truth_name_4;
        CHECK_OBJECT( var_infinite );
        tmp_truth_name_3 = CHECK_IF_TRUE( var_infinite );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ccccooocoo";
            goto frame_exception_exit_1;
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
        CHECK_OBJECT( var_same );
        tmp_truth_name_4 = CHECK_IF_TRUE( var_same );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ccccooocoo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_9 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_9 = tmp_and_left_value_2;
        and_end_2:;
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
            tmp_assign_source_9 = MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[0] = par_ctx;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[1] = var_maxterms;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[1] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[2] = par_q;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_9)->m_closure[2] );


            assert( var_terms == NULL );
            var_terms = tmp_assign_source_9;
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_called_instance_4 = PyCell_GET( par_ctx );
            CHECK_OBJECT( var_terms );
            tmp_args_element_name_7 = var_terms;
            frame_e609adf2be2f1695b8de3d255f26087a->m_frame.f_lineno = 116;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_sum_accurately, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;
                type_description_1 = "ccccooocoo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_9:;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[0] = par_a;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[1] = par_ctx;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[2] = var_maxterms;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[3] = par_n;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[3] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[4] = par_q;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_10)->m_closure[4] );


        assert( var_factors == NULL );
        var_factors = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_5 = PyCell_GET( par_ctx );
        CHECK_OBJECT( var_factors );
        tmp_args_element_name_8 = var_factors;
        frame_e609adf2be2f1695b8de3d255f26087a->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_mul_accurately, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ccccooocoo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e609adf2be2f1695b8de3d255f26087a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e609adf2be2f1695b8de3d255f26087a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e609adf2be2f1695b8de3d255f26087a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e609adf2be2f1695b8de3d255f26087a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e609adf2be2f1695b8de3d255f26087a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e609adf2be2f1695b8de3d255f26087a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e609adf2be2f1695b8de3d255f26087a,
        type_description_1,
        par_ctx,
        par_a,
        par_q,
        par_n,
        par_kwargs,
        var_terms,
        var_factors,
        var_maxterms,
        var_same,
        var_infinite
    );


    // Release cached frame.
    if ( frame_e609adf2be2f1695b8de3d255f26087a == cache_frame_e609adf2be2f1695b8de3d255f26087a )
    {
        Py_DECREF( frame_e609adf2be2f1695b8de3d255f26087a );
    }
    cache_frame_e609adf2be2f1695b8de3d255f26087a = NULL;

    assertFrameObject( frame_e609adf2be2f1695b8de3d255f26087a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_1_qp );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_terms );
    var_terms = NULL;

    Py_XDECREF( var_factors );
    var_factors = NULL;

    CHECK_OBJECT( (PyObject *)var_maxterms );
    Py_DECREF( var_maxterms );
    var_maxterms = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_same );
    var_same = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_infinite );
    var_infinite = NULL;

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

    Py_XDECREF( var_terms );
    var_terms = NULL;

    Py_XDECREF( var_factors );
    var_factors = NULL;

    CHECK_OBJECT( (PyObject *)var_maxterms );
    Py_DECREF( var_maxterms );
    var_maxterms = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_same );
    var_same = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_infinite );
    var_infinite = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_1_qp );
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


static PyObject *impl_mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms$$$genobj_1_terms_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = self->m_closure[0];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = self->m_closure[1];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] = self->m_closure[2];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] );


    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms$$$genobj_1_terms_locals {
    PyObject *var_k;
    PyObject *var_x2;
    PyObject *var_x1;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
};

static PyObject *mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms$$$genobj_1_terms_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms$$$genobj_1_terms_locals *generator_heap = (struct mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms$$$genobj_1_terms_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_k = NULL;
    generator_heap->var_x2 = NULL;
    generator_heap->var_x1 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_0e007e1070ac1fb7c1b6a32c5dbcd46f, module_mpmath$functions$qfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    {
        PyObject *tmp_expression_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_name_1 = const_int_pos_1;
        Py_INCREF( tmp_expression_name_1 );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 104;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_pos_1;
        assert( generator_heap->var_k == NULL );
        Py_INCREF( tmp_assign_source_1 );
        generator_heap->var_k = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        if ( PyCell_GET( generator->m_closure[2] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "q" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 106;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_2 = PyCell_GET( generator->m_closure[2] );
        assert( generator_heap->var_x1 == NULL );
        Py_INCREF( tmp_assign_source_2 );
        generator_heap->var_x1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if ( PyCell_GET( generator->m_closure[2] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "q" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = PyCell_GET( generator->m_closure[2] );
        tmp_right_name_1 = const_int_pos_2;
        tmp_assign_source_3 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->var_x2 == NULL );
        generator_heap->var_x2 = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        PyObject *tmp_expression_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        tmp_left_name_3 = const_int_neg_1;
        CHECK_OBJECT( generator_heap->var_k );
        tmp_right_name_2 = generator_heap->var_k;
        tmp_left_name_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 109;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( generator_heap->var_x1 );
        tmp_right_name_3 = generator_heap->var_x1;
        tmp_expression_name_2 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_expression_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 109;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_left_name_2, sizeof(PyObject *), &tmp_left_name_3, sizeof(PyObject *), &tmp_right_name_2, sizeof(PyObject *), &tmp_right_name_3, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 2;
        return tmp_expression_name_2;
        yield_return_2:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_left_name_2, sizeof(PyObject *), &tmp_left_name_3, sizeof(PyObject *), &tmp_right_name_2, sizeof(PyObject *), &tmp_right_name_3, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 109;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_2 = yield_return_value;
    }
    {
        PyObject *tmp_expression_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
        tmp_left_name_5 = const_int_neg_1;
        CHECK_OBJECT( generator_heap->var_k );
        tmp_right_name_4 = generator_heap->var_k;
        tmp_left_name_4 = POWER_OPERATION( tmp_left_name_5, tmp_right_name_4 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 110;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( generator_heap->var_x2 );
        tmp_right_name_5 = generator_heap->var_x2;
        tmp_expression_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_expression_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 110;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_left_name_4, sizeof(PyObject *), &tmp_left_name_5, sizeof(PyObject *), &tmp_right_name_4, sizeof(PyObject *), &tmp_right_name_5, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 3;
        return tmp_expression_name_3;
        yield_return_3:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_left_name_4, sizeof(PyObject *), &tmp_left_name_5, sizeof(PyObject *), &tmp_right_name_4, sizeof(PyObject *), &tmp_right_name_5, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 110;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_3 = yield_return_value;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_8;
        PyObject *tmp_right_name_9;
        CHECK_OBJECT( generator_heap->var_x1 );
        tmp_left_name_6 = generator_heap->var_x1;
        if ( PyCell_GET( generator->m_closure[2] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "q" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_7 = PyCell_GET( generator->m_closure[2] );
        tmp_left_name_9 = const_int_pos_3;
        CHECK_OBJECT( generator_heap->var_k );
        tmp_right_name_8 = generator_heap->var_k;
        tmp_left_name_8 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_8 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_9 = const_int_pos_1;
        tmp_right_name_7 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_8, tmp_right_name_9 );
        Py_DECREF( tmp_left_name_8 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = POWER_OPERATION( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_left_name_6;
        generator_heap->var_x1 = tmp_assign_source_4;

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_12;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT( generator_heap->var_x2 );
        tmp_left_name_10 = generator_heap->var_x2;
        if ( PyCell_GET( generator->m_closure[2] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "q" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 112;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_11 = PyCell_GET( generator->m_closure[2] );
        tmp_left_name_13 = const_int_pos_3;
        CHECK_OBJECT( generator_heap->var_k );
        tmp_right_name_12 = generator_heap->var_k;
        tmp_left_name_12 = BINARY_OPERATION_MUL( tmp_left_name_13, tmp_right_name_12 );
        if ( tmp_left_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 112;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_13 = const_int_pos_2;
        tmp_right_name_11 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_12, tmp_right_name_13 );
        Py_DECREF( tmp_left_name_12 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 112;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_10 = POWER_OPERATION( tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 112;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_10, tmp_right_name_10 );
        Py_DECREF( tmp_right_name_10 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 112;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_left_name_10;
        generator_heap->var_x2 = tmp_assign_source_5;

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT( generator_heap->var_k );
        tmp_left_name_14 = generator_heap->var_k;
        tmp_right_name_14 = const_int_pos_1;
        generator_heap->tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE( &tmp_left_name_14, tmp_right_name_14 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = tmp_left_name_14;
        generator_heap->var_k = tmp_assign_source_6;

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( generator_heap->var_k );
        tmp_compexpr_left_1 = generator_heap->var_k;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "maxterms" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = PyCell_GET( generator->m_closure[1] );
        generator_heap->tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_source_name_1;
            if ( PyCell_GET( generator->m_closure[0] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 115;
                generator_heap->type_description_1 = "occNcoo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = PyCell_GET( generator->m_closure[0] );
            tmp_raise_type_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_NoConvergence );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 115;
                generator_heap->type_description_1 = "occNcoo";
                goto frame_exception_exit_1;
            }
            generator_heap->exception_type = tmp_raise_type_1;
            generator_heap->exception_lineno = 115;
            RAISE_EXCEPTION_WITH_TYPE( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            generator_heap->type_description_1 = "occNcoo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 108;
        generator_heap->type_description_1 = "occNcoo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

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
            generator_heap->var_k,
            generator->m_closure[0],
            generator->m_closure[2],
            NULL,
            generator->m_closure[1],
            generator_heap->var_x2,
            generator_heap->var_x1
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
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms$$$genobj_1_terms );
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_k );
    generator_heap->var_k = NULL;

    Py_XDECREF( generator_heap->var_x2 );
    generator_heap->var_x2 = NULL;

    Py_XDECREF( generator_heap->var_x1 );
    generator_heap->var_x1 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:


    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms$$$genobj_1_terms_maker( void )
{
    return Nuitka_Generator_New(
        mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms$$$genobj_1_terms_context,
        module_mpmath$functions$qfunctions,
        const_str_plain_terms,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_0e007e1070ac1fb7c1b6a32c5dbcd46f,
        3,
        sizeof(struct mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms$$$genobj_1_terms_locals)
    );
}


static PyObject *impl_mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors$$$genobj_1_factors_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = self->m_closure[0];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = self->m_closure[1];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] = self->m_closure[2];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[3] = self->m_closure[3];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[3] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[4] = self->m_closure[4];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[4] );


    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors$$$genobj_1_factors_locals {
    PyObject *var_k;
    PyObject *var_r;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    bool tmp_result;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
};

static PyObject *mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors$$$genobj_1_factors_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors$$$genobj_1_factors_locals *generator_heap = (struct mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors$$$genobj_1_factors_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_k = NULL;
    generator_heap->var_r = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert( generator_heap->var_k == NULL );
        Py_INCREF( tmp_assign_source_1 );
        generator_heap->var_k = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_9b3a420c5cf79fda993787283016848b, module_mpmath$functions$qfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 120;
            generator_heap->type_description_1 = "cocccoc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( generator->m_closure[1] );
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_one );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 120;
            generator_heap->type_description_1 = "cocccoc";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->var_r == NULL );
        generator_heap->var_r = tmp_assign_source_2;
    }
    loop_start_1:;
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_left_name_1 = const_int_pos_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "a" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 122;
            generator_heap->type_description_1 = "cocccoc";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = PyCell_GET( generator->m_closure[0] );
        CHECK_OBJECT( generator_heap->var_r );
        tmp_right_name_2 = generator_heap->var_r;
        tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 122;
            generator_heap->type_description_1 = "cocccoc";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 122;
            generator_heap->type_description_1 = "cocccoc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), &tmp_left_name_2, sizeof(PyObject *), &tmp_right_name_2, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), &tmp_left_name_2, sizeof(PyObject *), &tmp_right_name_2, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 122;
            generator_heap->type_description_1 = "cocccoc";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( generator_heap->var_r );
        tmp_left_name_3 = generator_heap->var_r;
        if ( PyCell_GET( generator->m_closure[4] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "q" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 123;
            generator_heap->type_description_1 = "cocccoc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_3 = PyCell_GET( generator->m_closure[4] );
        generator_heap->tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 123;
            generator_heap->type_description_1 = "cocccoc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_name_3;
        generator_heap->var_r = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( generator_heap->var_k );
        tmp_left_name_4 = generator_heap->var_k;
        tmp_right_name_4 = const_int_pos_1;
        generator_heap->tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 124;
            generator_heap->type_description_1 = "cocccoc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_left_name_4;
        generator_heap->var_k = tmp_assign_source_4;

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( generator_heap->var_k );
        tmp_compexpr_left_1 = generator_heap->var_k;
        if ( PyCell_GET( generator->m_closure[3] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "n" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 125;
            generator_heap->type_description_1 = "cocccoc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = PyCell_GET( generator->m_closure[3] );
        generator_heap->tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 125;
            generator_heap->type_description_1 = "cocccoc";
            goto frame_exception_exit_1;
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
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( generator_heap->var_k );
        tmp_compexpr_left_2 = generator_heap->var_k;
        if ( PyCell_GET( generator->m_closure[2] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "maxterms" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "cocccoc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = PyCell_GET( generator->m_closure[2] );
        generator_heap->tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "cocccoc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_source_name_2;
            if ( PyCell_GET( generator->m_closure[1] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 128;
                generator_heap->type_description_1 = "cocccoc";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = PyCell_GET( generator->m_closure[1] );
            tmp_raise_type_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_NoConvergence );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 128;
                generator_heap->type_description_1 = "cocccoc";
                goto frame_exception_exit_1;
            }
            generator_heap->exception_type = tmp_raise_type_1;
            generator_heap->exception_lineno = 128;
            RAISE_EXCEPTION_WITH_TYPE( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            generator_heap->type_description_1 = "cocccoc";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 121;
        generator_heap->type_description_1 = "cocccoc";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

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

    frame_return_exit_1:;

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
    goto try_return_handler_1;

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
            generator->m_closure[0],
            generator_heap->var_k,
            generator->m_closure[1],
            generator->m_closure[3],
            generator->m_closure[4],
            generator_heap->var_r,
            generator->m_closure[2]
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
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors$$$genobj_1_factors );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)generator_heap->var_k );
    Py_DECREF( generator_heap->var_k );
    generator_heap->var_k = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->var_r );
    Py_DECREF( generator_heap->var_r );
    generator_heap->var_r = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_k );
    generator_heap->var_k = NULL;

    Py_XDECREF( generator_heap->var_r );
    generator_heap->var_r = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:


    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;
    // The above won't return, but we need to make it clear to the compiler
    // as well, or else it will complain and/or generate inferior code.
    assert(false);
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 300
    generator->m_returned = None;
#endif

    return NULL;

}

static PyObject *mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors$$$genobj_1_factors_maker( void )
{
    return Nuitka_Generator_New(
        mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors$$$genobj_1_factors_context,
        module_mpmath$functions$qfunctions,
        const_str_plain_factors,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_9b3a420c5cf79fda993787283016848b,
        5,
        sizeof(struct mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors$$$genobj_1_factors_locals)
    );
}


static PyObject *impl_mpmath$functions$qfunctions$$$function_2_qgamma( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *par_q = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_aa219536cbeb22391bdd58fcf59fe5f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_aa219536cbeb22391bdd58fcf59fe5f6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aa219536cbeb22391bdd58fcf59fe5f6, codeobj_aa219536cbeb22391bdd58fcf59fe5f6, module_mpmath$functions$qfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_aa219536cbeb22391bdd58fcf59fe5f6 = cache_frame_aa219536cbeb22391bdd58fcf59fe5f6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aa219536cbeb22391bdd58fcf59fe5f6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aa219536cbeb22391bdd58fcf59fe5f6 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( par_q );
        tmp_args_element_name_1 = par_q;
        frame_aa219536cbeb22391bdd58fcf59fe5f6->m_frame.f_lineno = 165;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "oooo";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_4;
            PyObject *tmp_right_name_5;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_6;
            PyObject *tmp_right_name_7;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_1 = par_ctx;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_qgamma );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_z );
            tmp_args_element_name_2 = par_z;
            tmp_left_name_2 = const_int_pos_1;
            CHECK_OBJECT( par_q );
            tmp_right_name_1 = par_q;
            tmp_args_element_name_3 = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_1 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 166;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_aa219536cbeb22391bdd58fcf59fe5f6->m_frame.f_lineno = 166;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_q );
            tmp_left_name_3 = par_q;
            CHECK_OBJECT( par_z );
            tmp_left_name_6 = par_z;
            tmp_right_name_4 = const_int_pos_2;
            tmp_left_name_5 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_4 );
            if ( tmp_left_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 166;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_z );
            tmp_left_name_7 = par_z;
            tmp_right_name_6 = const_int_pos_1;
            tmp_right_name_5 = BINARY_OPERATION_SUB( tmp_left_name_7, tmp_right_name_6 );
            if ( tmp_right_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );
                Py_DECREF( tmp_left_name_5 );

                exception_lineno = 166;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_left_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 166;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_7 = const_float_0_5;
            tmp_right_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 166;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 166;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_right_name_8;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_dircall_arg3_2;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_qp );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_q );
        tmp_tuple_element_1 = par_q;
        tmp_dircall_arg2_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_q );
        tmp_tuple_element_1 = par_q;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_None;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_left_name_9 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ctx );
        tmp_source_name_3 = par_ctx;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_qp );
        if ( tmp_dircall_arg1_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_q );
        tmp_left_name_10 = par_q;
        CHECK_OBJECT( par_z );
        tmp_right_name_9 = par_z;
        tmp_tuple_element_2 = POWER_OPERATION( tmp_left_name_10, tmp_right_name_9 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );
            Py_DECREF( tmp_dircall_arg1_2 );

            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_2 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_q );
        tmp_tuple_element_2 = par_q;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_2 );
        tmp_tuple_element_2 = Py_None;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 2, tmp_tuple_element_2 );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF( tmp_dircall_arg3_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_right_name_8 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_9 );

            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_8 = BINARY_OPERATION_DIV( tmp_left_name_9, tmp_right_name_8 );
        Py_DECREF( tmp_left_name_9 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_left_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_12 = const_int_pos_1;
        CHECK_OBJECT( par_q );
        tmp_right_name_11 = par_q;
        tmp_left_name_11 = BINARY_OPERATION_SUB( tmp_left_name_12, tmp_right_name_11 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_13 = const_int_pos_1;
        CHECK_OBJECT( par_z );
        tmp_right_name_13 = par_z;
        tmp_right_name_12 = BINARY_OPERATION_SUB( tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_10 = POWER_OPERATION( tmp_left_name_11, tmp_right_name_12 );
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_8 );

            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa219536cbeb22391bdd58fcf59fe5f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa219536cbeb22391bdd58fcf59fe5f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa219536cbeb22391bdd58fcf59fe5f6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aa219536cbeb22391bdd58fcf59fe5f6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aa219536cbeb22391bdd58fcf59fe5f6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aa219536cbeb22391bdd58fcf59fe5f6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aa219536cbeb22391bdd58fcf59fe5f6,
        type_description_1,
        par_ctx,
        par_z,
        par_q,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_aa219536cbeb22391bdd58fcf59fe5f6 == cache_frame_aa219536cbeb22391bdd58fcf59fe5f6 )
    {
        Py_DECREF( frame_aa219536cbeb22391bdd58fcf59fe5f6 );
    }
    cache_frame_aa219536cbeb22391bdd58fcf59fe5f6 = NULL;

    assertFrameObject( frame_aa219536cbeb22391bdd58fcf59fe5f6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_2_qgamma );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_2_qgamma );
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


static PyObject *impl_mpmath$functions$qfunctions$$$function_3_qfac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_z = python_pars[ 1 ];
    PyObject *par_q = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    PyObject *var_n = NULL;
    struct Nuitka_FrameObject *frame_8acca203d0440485be4c2c39f0588c80;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8acca203d0440485be4c2c39f0588c80 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8acca203d0440485be4c2c39f0588c80, codeobj_8acca203d0440485be4c2c39f0588c80, module_mpmath$functions$qfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8acca203d0440485be4c2c39f0588c80 = cache_frame_8acca203d0440485be4c2c39f0588c80;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8acca203d0440485be4c2c39f0588c80 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8acca203d0440485be4c2c39f0588c80 ) == 2 ); // Frame stack

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
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_1 = par_ctx;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_1 = par_z;
        frame_8acca203d0440485be4c2c39f0588c80->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_isint, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 199;
            type_description_1 = "ooooo";
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
        frame_8acca203d0440485be4c2c39f0588c80->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_compexpr_left_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__re, call_args );
        }

        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooooo";
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
            PyObject *tmp_int_arg_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_ctx );
            tmp_called_instance_3 = par_ctx;
            CHECK_OBJECT( par_z );
            tmp_args_element_name_3 = par_z;
            frame_8acca203d0440485be4c2c39f0588c80->m_frame.f_lineno = 200;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_int_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__re, call_args );
            }

            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert( var_n == NULL );
            var_n = tmp_assign_source_1;
        }
        {
            PyObject *tmp_left_name_1;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dircall_arg3_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_1 = par_ctx;
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_qp );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 201;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_q );
            tmp_tuple_element_1 = par_q;
            tmp_dircall_arg2_1 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_q );
            tmp_tuple_element_1 = par_q;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( var_n );
            tmp_tuple_element_1 = var_n;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_1 );
            CHECK_OBJECT( par_kwargs );
            tmp_dircall_arg3_1 = par_kwargs;
            Py_INCREF( tmp_dircall_arg3_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_left_name_1 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
            }
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 201;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_3 = const_int_pos_1;
            CHECK_OBJECT( par_q );
            tmp_right_name_2 = par_q;
            tmp_left_name_2 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_2 );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 201;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_n );
            tmp_right_name_3 = var_n;
            tmp_right_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 201;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_DIV( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 201;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_dircall_arg3_2;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_qgamma );
        if ( tmp_dircall_arg1_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_z );
        tmp_left_name_4 = par_z;
        tmp_right_name_4 = const_int_pos_1;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_2 );

            exception_lineno = 202;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_2 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_q );
        tmp_tuple_element_2 = par_q;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_2, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF( tmp_dircall_arg3_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8acca203d0440485be4c2c39f0588c80 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8acca203d0440485be4c2c39f0588c80 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8acca203d0440485be4c2c39f0588c80 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8acca203d0440485be4c2c39f0588c80, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8acca203d0440485be4c2c39f0588c80->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8acca203d0440485be4c2c39f0588c80, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8acca203d0440485be4c2c39f0588c80,
        type_description_1,
        par_ctx,
        par_z,
        par_q,
        par_kwargs,
        var_n
    );


    // Release cached frame.
    if ( frame_8acca203d0440485be4c2c39f0588c80 == cache_frame_8acca203d0440485be4c2c39f0588c80 )
    {
        Py_DECREF( frame_8acca203d0440485be4c2c39f0588c80 );
    }
    cache_frame_8acca203d0440485be4c2c39f0588c80 = NULL;

    assertFrameObject( frame_8acca203d0440485be4c2c39f0588c80 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_3_qfac );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_3_qfac );
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


static PyObject *impl_mpmath$functions$qfunctions$$$function_4_qhyper( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ctx = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_a_s = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_b_s = PyCell_NEW1( python_pars[ 2 ] );
    struct Nuitka_CellObject *par_q = PyCell_NEW1( python_pars[ 3 ] );
    struct Nuitka_CellObject *par_z = PyCell_NEW1( python_pars[ 4 ] );
    PyObject *par_kwargs = python_pars[ 5 ];
    PyObject *var_a = NULL;
    PyObject *var_r = NULL;
    struct Nuitka_CellObject *var_d = PyCell_EMPTY();
    struct Nuitka_CellObject *var_maxterms = PyCell_EMPTY();
    PyObject *var_s = NULL;
    PyObject *var_b = NULL;
    PyObject *var_terms = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_9554df76dead1f207b9bed07a8400e94;
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
    static struct Nuitka_FrameObject *cache_frame_9554df76dead1f207b9bed07a8400e94 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9554df76dead1f207b9bed07a8400e94, codeobj_9554df76dead1f207b9bed07a8400e94, module_mpmath$functions$qfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9554df76dead1f207b9bed07a8400e94 = cache_frame_9554df76dead1f207b9bed07a8400e94;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9554df76dead1f207b9bed07a8400e94 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9554df76dead1f207b9bed07a8400e94 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( PyCell_GET( par_a_s ) );
            tmp_iter_arg_1 = PyCell_GET( par_a_s );
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;
                type_description_1 = "cccccoooccooo";
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
                    type_description_1 = "cccccoooccooo";
                    exception_lineno = 249;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
            tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_called_instance_1 = PyCell_GET( par_ctx );
            CHECK_OBJECT( var_a );
            tmp_args_element_name_1 = var_a;
            frame_9554df76dead1f207b9bed07a8400e94->m_frame.f_lineno = 249;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_convert, call_args );
            }

            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;
                type_description_1 = "cccccoooccooo";
                goto try_except_handler_2;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;
                type_description_1 = "cccccoooccooo";
                goto try_except_handler_2;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "cccccoooccooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_assign_source_1 = tmp_list_contraction_1__contraction_result;
        Py_INCREF( tmp_assign_source_1 );
        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_4_qhyper );
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
        NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_4_qhyper );
        return NULL;
        outline_result_1:;
        {
            PyObject *old = PyCell_GET( par_a_s );
            PyCell_SET( par_a_s, tmp_assign_source_1 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_6;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( PyCell_GET( par_b_s ) );
            tmp_iter_arg_2 = PyCell_GET( par_b_s );
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "cccccoooccooo";
                goto try_except_handler_3;
            }
            assert( tmp_list_contraction_2__$0 == NULL );
            tmp_list_contraction_2__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = PyList_New( 0 );
            assert( tmp_list_contraction_2__contraction_result == NULL );
            tmp_list_contraction_2__contraction_result = tmp_assign_source_8;
        }
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_list_contraction_2__$0 );
            tmp_next_source_2 = tmp_list_contraction_2__$0;
            tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_9 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "cccccoooccooo";
                    exception_lineno = 250;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_list_contraction_2__iter_value_0;
                tmp_list_contraction_2__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_list_contraction_2__iter_value_0 );
            tmp_assign_source_10 = tmp_list_contraction_2__iter_value_0;
            {
                PyObject *old = var_b;
                var_b = tmp_assign_source_10;
                Py_INCREF( var_b );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( tmp_list_contraction_2__contraction_result );
            tmp_append_list_2 = tmp_list_contraction_2__contraction_result;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_called_instance_2 = PyCell_GET( par_ctx );
            CHECK_OBJECT( var_b );
            tmp_args_element_name_2 = var_b;
            frame_9554df76dead1f207b9bed07a8400e94->m_frame.f_lineno = 250;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_append_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_convert, call_args );
            }

            if ( tmp_append_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "cccccoooccooo";
                goto try_except_handler_3;
            }
            assert( PyList_Check( tmp_append_list_2 ) );
            tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
            Py_DECREF( tmp_append_value_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "cccccoooccooo";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "cccccoooccooo";
            goto try_except_handler_3;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_list_contraction_2__contraction_result );
        tmp_assign_source_6 = tmp_list_contraction_2__contraction_result;
        Py_INCREF( tmp_assign_source_6 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_4_qhyper );
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
        NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_4_qhyper );
        return NULL;
        outline_result_2:;
        {
            PyObject *old = PyCell_GET( par_b_s );
            PyCell_SET( par_b_s, tmp_assign_source_6 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_3 = PyCell_GET( par_ctx );
        CHECK_OBJECT( PyCell_GET( par_q ) );
        tmp_args_element_name_3 = PyCell_GET( par_q );
        frame_9554df76dead1f207b9bed07a8400e94->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_convert, call_args );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "cccccoooccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = PyCell_GET( par_q );
            PyCell_SET( par_q, tmp_assign_source_11 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_4 = PyCell_GET( par_ctx );
        CHECK_OBJECT( PyCell_GET( par_z ) );
        tmp_args_element_name_4 = PyCell_GET( par_z );
        frame_9554df76dead1f207b9bed07a8400e94->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_convert, call_args );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "cccccoooccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = PyCell_GET( par_z );
            PyCell_SET( par_z, tmp_assign_source_12 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( PyCell_GET( par_a_s ) );
        tmp_len_arg_1 = PyCell_GET( par_a_s );
        tmp_assign_source_13 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "cccccoooccooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( PyCell_GET( par_b_s ) );
        tmp_len_arg_2 = PyCell_GET( par_b_s );
        tmp_assign_source_14 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "cccccoooccooo";
            goto frame_exception_exit_1;
        }
        assert( var_s == NULL );
        var_s = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = const_int_pos_1;
        CHECK_OBJECT( var_s );
        tmp_right_name_1 = var_s;
        tmp_left_name_1 = BINARY_OPERATION_ADD_INT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        assert( !(tmp_left_name_1 == NULL) );
        CHECK_OBJECT( var_r );
        tmp_right_name_2 = var_r;
        tmp_assign_source_15 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "cccccoooccooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_d ) == NULL );
        PyCell_SET( var_d, tmp_assign_source_15 );

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_kwargs );
        tmp_source_name_1 = par_kwargs;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "cccccoooccooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = const_str_plain_maxterms;
        tmp_left_name_3 = const_int_pos_50;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_2 = PyCell_GET( par_ctx );
        tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_prec );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 256;
            type_description_1 = "cccccoooccooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_6 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 256;
            type_description_1 = "cccccoooccooo";
            goto frame_exception_exit_1;
        }
        frame_9554df76dead1f207b9bed07a8400e94->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "cccccoooccooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_maxterms ) == NULL );
        PyCell_SET( var_maxterms, tmp_assign_source_16 );

    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[0] = par_a_s;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[1] = par_b_s;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[2] = par_ctx;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[3] = var_d;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[3] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[4] = var_maxterms;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[4] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[5] = par_q;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[5] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[6] = par_z;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[6] );


        assert( var_terms == NULL );
        var_terms = tmp_assign_source_17;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_5 = PyCell_GET( par_ctx );
        CHECK_OBJECT( var_terms );
        tmp_args_element_name_7 = var_terms;
        frame_9554df76dead1f207b9bed07a8400e94->m_frame.f_lineno = 280;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_sum_accurately, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "cccccoooccooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9554df76dead1f207b9bed07a8400e94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9554df76dead1f207b9bed07a8400e94 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9554df76dead1f207b9bed07a8400e94 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9554df76dead1f207b9bed07a8400e94, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9554df76dead1f207b9bed07a8400e94->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9554df76dead1f207b9bed07a8400e94, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9554df76dead1f207b9bed07a8400e94,
        type_description_1,
        par_ctx,
        par_a_s,
        par_b_s,
        par_q,
        par_z,
        par_kwargs,
        var_a,
        var_r,
        var_d,
        var_maxterms,
        var_s,
        var_b,
        var_terms
    );


    // Release cached frame.
    if ( frame_9554df76dead1f207b9bed07a8400e94 == cache_frame_9554df76dead1f207b9bed07a8400e94 )
    {
        Py_DECREF( frame_9554df76dead1f207b9bed07a8400e94 );
    }
    cache_frame_9554df76dead1f207b9bed07a8400e94 = NULL;

    assertFrameObject( frame_9554df76dead1f207b9bed07a8400e94 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_4_qhyper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_a );
    var_a = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_a_s );
    Py_DECREF( par_a_s );
    par_a_s = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)var_maxterms );
    Py_DECREF( var_maxterms );
    var_maxterms = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_terms );
    Py_DECREF( var_terms );
    var_terms = NULL;

    CHECK_OBJECT( (PyObject *)par_b_s );
    Py_DECREF( par_b_s );
    par_b_s = NULL;

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

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_a_s );
    Py_DECREF( par_a_s );
    par_a_s = NULL;

    CHECK_OBJECT( (PyObject *)var_d );
    Py_DECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)var_maxterms );
    Py_DECREF( var_maxterms );
    var_maxterms = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_terms );
    var_terms = NULL;

    CHECK_OBJECT( (PyObject *)par_b_s );
    Py_DECREF( par_b_s );
    par_b_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_4_qhyper );
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


static PyObject *impl_mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms$$$genobj_1_terms_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = self->m_closure[0];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = self->m_closure[1];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] = self->m_closure[2];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[3] = self->m_closure[3];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[3] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[4] = self->m_closure[4];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[4] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[5] = self->m_closure[5];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[5] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[6] = self->m_closure[6];
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[6] );


    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms$$$genobj_1_terms_locals {
    PyObject *var_a;
    PyObject *var_b;
    PyObject *var_k;
    PyObject *var_p;
    PyObject *var_t;
    PyObject *var_x;
    PyObject *var_qk;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
};

static PyObject *mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms$$$genobj_1_terms_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms$$$genobj_1_terms_locals *generator_heap = (struct mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms$$$genobj_1_terms_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_a = NULL;
    generator_heap->var_b = NULL;
    generator_heap->var_k = NULL;
    generator_heap->var_p = NULL;
    generator_heap->var_t = NULL;
    generator_heap->var_x = NULL;
    generator_heap->var_qk = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_0ba63113a3dc91e0aaf30287bc32b538, module_mpmath$functions$qfunctions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        if ( PyCell_GET( generator->m_closure[2] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( generator->m_closure[2] );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_one );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->var_t == NULL );
        generator_heap->var_t = tmp_assign_source_1;
    }
    {
        PyObject *tmp_expression_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_t );
        tmp_expression_name_1 = generator_heap->var_t;
        Py_INCREF( tmp_expression_name_1 );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_int_pos_1;
        assert( generator_heap->var_qk == NULL );
        Py_INCREF( tmp_assign_source_2 );
        generator_heap->var_qk = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_0;
        assert( generator_heap->var_k == NULL );
        Py_INCREF( tmp_assign_source_3 );
        generator_heap->var_k = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_int_pos_1;
        assert( generator_heap->var_x == NULL );
        Py_INCREF( tmp_assign_source_4 );
        generator_heap->var_x = tmp_assign_source_4;
    }
    loop_start_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "a_s" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 264;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_1__for_iterator;
            generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "ooccocccoocooc";
                generator_heap->exception_lineno = 264;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( generator_heap->tmp_for_loop_1__iter_value );
        tmp_assign_source_7 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_a;
            generator_heap->var_a = tmp_assign_source_7;
            Py_INCREF( generator_heap->var_a );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_left_name_1 = const_int_pos_1;
        CHECK_OBJECT( generator_heap->var_a );
        tmp_left_name_2 = generator_heap->var_a;
        CHECK_OBJECT( generator_heap->var_qk );
        tmp_right_name_2 = generator_heap->var_qk;
        tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 265;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_p;
            generator_heap->var_p = tmp_assign_source_8;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( generator_heap->var_t );
        tmp_left_name_3 = generator_heap->var_t;
        CHECK_OBJECT( generator_heap->var_p );
        tmp_right_name_3 = generator_heap->var_p;
        generator_heap->tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 266;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_9 = tmp_left_name_3;
        generator_heap->var_t = tmp_assign_source_9;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 264;
        generator_heap->type_description_1 = "ooccocccoocooc";
        goto try_except_handler_2;
    }
    goto loop_start_2;
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

    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( generator_heap->tmp_for_loop_1__iter_value );
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_1__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_1__for_iterator );
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "b_s" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 267;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_2 = PyCell_GET( generator->m_closure[1] );
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 267;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
            generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( generator_heap->tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "ooccocccoocooc";
                generator_heap->exception_lineno = 267;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
            generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( generator_heap->tmp_for_loop_2__iter_value );
        tmp_assign_source_12 = generator_heap->tmp_for_loop_2__iter_value;
        {
            PyObject *old = generator_heap->var_b;
            generator_heap->var_b = tmp_assign_source_12;
            Py_INCREF( generator_heap->var_b );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        tmp_left_name_4 = const_int_pos_1;
        CHECK_OBJECT( generator_heap->var_b );
        tmp_left_name_5 = generator_heap->var_b;
        CHECK_OBJECT( generator_heap->var_qk );
        tmp_right_name_5 = generator_heap->var_qk;
        tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 268;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto try_except_handler_3;
        }
        tmp_assign_source_13 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 268;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->var_p;
            generator_heap->var_p = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( generator_heap->var_p );
        tmp_operand_name_1 = generator_heap->var_p;
        generator_heap->tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 269;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = ( generator_heap->tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_raise_type_1 = PyExc_ValueError;
            generator_heap->exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            generator_heap->exception_lineno = 270;
            RAISE_EXCEPTION_WITH_TYPE( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto try_except_handler_3;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( generator_heap->var_t );
        tmp_left_name_6 = generator_heap->var_t;
        CHECK_OBJECT( generator_heap->var_p );
        tmp_right_name_6 = generator_heap->var_p;
        generator_heap->tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceDivide, &tmp_left_name_6, tmp_right_name_6 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 271;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto try_except_handler_3;
        }
        tmp_assign_source_14 = tmp_left_name_6;
        generator_heap->var_t = tmp_assign_source_14;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 267;
        generator_heap->type_description_1 = "ooccocccoocooc";
        goto try_except_handler_3;
    }
    goto loop_start_3;
    loop_end_2:;
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

    Py_XDECREF( generator_heap->tmp_for_loop_2__iter_value );
    generator_heap->tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_2__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_2__for_iterator );
    generator_heap->tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_for_loop_2__iter_value );
    generator_heap->tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_for_loop_2__for_iterator );
    Py_DECREF( generator_heap->tmp_for_loop_2__for_iterator );
    generator_heap->tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        CHECK_OBJECT( generator_heap->var_t );
        tmp_left_name_7 = generator_heap->var_t;
        if ( PyCell_GET( generator->m_closure[6] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "z" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_7 = PyCell_GET( generator->m_closure[6] );
        generator_heap->tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 272;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = tmp_left_name_7;
        generator_heap->var_t = tmp_assign_source_15;

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        CHECK_OBJECT( generator_heap->var_x );
        tmp_left_name_8 = generator_heap->var_x;
        tmp_left_name_10 = const_int_neg_1;
        if ( PyCell_GET( generator->m_closure[3] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "d" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_9 = PyCell_GET( generator->m_closure[3] );
        tmp_left_name_9 = POWER_OPERATION( tmp_left_name_10, tmp_right_name_9 );
        if ( tmp_left_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( generator_heap->var_qk );
        tmp_left_name_11 = generator_heap->var_qk;
        if ( PyCell_GET( generator->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_left_name_9 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "d" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_11 = PyCell_GET( generator->m_closure[3] );
        tmp_right_name_10 = POWER_OPERATION( tmp_left_name_11, tmp_right_name_11 );
        if ( tmp_right_name_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_left_name_9 );

            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_8 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_10 );
        Py_DECREF( tmp_left_name_9 );
        Py_DECREF( tmp_right_name_10 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 273;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = tmp_left_name_8;
        generator_heap->var_x = tmp_assign_source_16;

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        CHECK_OBJECT( generator_heap->var_qk );
        tmp_left_name_12 = generator_heap->var_qk;
        if ( PyCell_GET( generator->m_closure[5] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "q" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 274;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_12 = PyCell_GET( generator->m_closure[5] );
        generator_heap->tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_12, tmp_right_name_12 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 274;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = tmp_left_name_12;
        generator_heap->var_qk = tmp_assign_source_17;

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT( generator_heap->var_t );
        tmp_left_name_13 = generator_heap->var_t;
        tmp_left_name_14 = const_int_pos_1;
        CHECK_OBJECT( generator_heap->var_qk );
        tmp_right_name_14 = generator_heap->var_qk;
        tmp_right_name_13 = BINARY_OPERATION_SUB( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 275;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceDivide, &tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 275;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = tmp_left_name_13;
        generator_heap->var_t = tmp_assign_source_18;

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        CHECK_OBJECT( generator_heap->var_k );
        tmp_left_name_15 = generator_heap->var_k;
        tmp_right_name_15 = const_int_pos_1;
        generator_heap->tmp_result = BINARY_OPERATION_ADD_OBJECT_INT_INPLACE( &tmp_left_name_15, tmp_right_name_15 );
        if ( generator_heap->tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 276;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = tmp_left_name_15;
        generator_heap->var_k = tmp_assign_source_19;

    }
    {
        PyObject *tmp_expression_name_2;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        CHECK_OBJECT( generator_heap->var_t );
        tmp_left_name_16 = generator_heap->var_t;
        CHECK_OBJECT( generator_heap->var_x );
        tmp_right_name_16 = generator_heap->var_x;
        tmp_expression_name_2 = BINARY_OPERATION_MUL( tmp_left_name_16, tmp_right_name_16 );
        if ( tmp_expression_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 277;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_left_name_16, sizeof(PyObject *), &tmp_right_name_16, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 2;
        return tmp_expression_name_2;
        yield_return_2:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_left_name_16, sizeof(PyObject *), &tmp_right_name_16, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 277;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_2 = yield_return_value;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( generator_heap->var_k );
        tmp_compexpr_left_1 = generator_heap->var_k;
        if ( PyCell_GET( generator->m_closure[4] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "maxterms" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 278;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = PyCell_GET( generator->m_closure[4] );
        generator_heap->tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 278;
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_source_name_2;
            if ( PyCell_GET( generator->m_closure[2] ) == NULL )
            {

                generator_heap->exception_type = PyExc_NameError;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
                generator_heap->exception_tb = NULL;

                generator_heap->exception_lineno = 279;
                generator_heap->type_description_1 = "ooccocccoocooc";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = PyCell_GET( generator->m_closure[2] );
            tmp_raise_type_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_NoConvergence );
            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 279;
                generator_heap->type_description_1 = "ooccocccoocooc";
                goto frame_exception_exit_1;
            }
            generator_heap->exception_type = tmp_raise_type_2;
            generator_heap->exception_lineno = 279;
            RAISE_EXCEPTION_WITH_TYPE( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            generator_heap->type_description_1 = "ooccocccoocooc";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 263;
        generator_heap->type_description_1 = "ooccocccoocooc";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

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
            generator_heap->var_a,
            generator_heap->var_b,
            generator->m_closure[0],
            generator->m_closure[3],
            generator_heap->var_k,
            generator->m_closure[6],
            generator->m_closure[2],
            generator->m_closure[5],
            generator_heap->var_p,
            generator_heap->var_t,
            generator->m_closure[4],
            generator_heap->var_x,
            generator_heap->var_qk,
            generator->m_closure[1]
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
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms$$$genobj_1_terms );
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_a );
    generator_heap->var_a = NULL;

    Py_XDECREF( generator_heap->var_b );
    generator_heap->var_b = NULL;

    Py_XDECREF( generator_heap->var_k );
    generator_heap->var_k = NULL;

    Py_XDECREF( generator_heap->var_p );
    generator_heap->var_p = NULL;

    Py_XDECREF( generator_heap->var_t );
    generator_heap->var_t = NULL;

    Py_XDECREF( generator_heap->var_x );
    generator_heap->var_x = NULL;

    Py_XDECREF( generator_heap->var_qk );
    generator_heap->var_qk = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:


    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms$$$genobj_1_terms_maker( void )
{
    return Nuitka_Generator_New(
        mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms$$$genobj_1_terms_context,
        module_mpmath$functions$qfunctions,
        const_str_plain_terms,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_0ba63113a3dc91e0aaf30287bc32b538,
        7,
        sizeof(struct mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms$$$genobj_1_terms_locals)
    );
}



static PyObject *MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_1_qp( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$qfunctions$$$function_1_qp,
        const_str_plain_qp,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e609adf2be2f1695b8de3d255f26087a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$qfunctions,
        const_str_digest_5403cd33f2b2c677660148a5373744aa,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$qfunctions$$$function_1_qp$$$function_1_terms,
        const_str_plain_terms,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0e007e1070ac1fb7c1b6a32c5dbcd46f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$qfunctions,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$qfunctions$$$function_1_qp$$$function_2_factors,
        const_str_plain_factors,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9b3a420c5cf79fda993787283016848b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$qfunctions,
        NULL,
        5
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_2_qgamma(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$qfunctions$$$function_2_qgamma,
        const_str_plain_qgamma,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_aa219536cbeb22391bdd58fcf59fe5f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$qfunctions,
        const_str_digest_ad252d6fc13ae434fbad3285c730713d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_3_qfac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$qfunctions$$$function_3_qfac,
        const_str_plain_qfac,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8acca203d0440485be4c2c39f0588c80,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$qfunctions,
        const_str_digest_c54b40d31e80bd60f4f38ccdf9206a8f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_4_qhyper(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$qfunctions$$$function_4_qhyper,
        const_str_plain_qhyper,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9554df76dead1f207b9bed07a8400e94,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$qfunctions,
        const_str_digest_391d9ee3907556f63bfb9e19d3262d42,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$functions$qfunctions$$$function_4_qhyper$$$function_1_terms,
        const_str_plain_terms,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0ba63113a3dc91e0aaf30287bc32b538,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$functions$qfunctions,
        NULL,
        7
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_mpmath$functions$qfunctions =
{
    PyModuleDef_HEAD_INIT,
    "mpmath.functions.qfunctions",
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

MOD_INIT_DECL( mpmath$functions$qfunctions )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_mpmath$functions$qfunctions );
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
    puts("mpmath.functions.qfunctions: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath.functions.qfunctions: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath.functions.qfunctions: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmpmath$functions$qfunctions" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_mpmath$functions$qfunctions = Py_InitModule4(
        "mpmath.functions.qfunctions",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_mpmath$functions$qfunctions = PyModule_Create( &mdef_mpmath$functions$qfunctions );
#endif

    moduledict_mpmath$functions$qfunctions = MODULE_DICT( module_mpmath$functions$qfunctions );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_mpmath$functions$qfunctions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath$functions$qfunctions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath$functions$qfunctions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_mpmath$functions$qfunctions );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_be653b715ce955ce3065680f2f6035de, module_mpmath$functions$qfunctions );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_b03b595b8541e06719e201ed1321586e;
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
        UPDATE_STRING_DICT0( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_90abad958a4ae0423eaa151c336d6a37;
        UPDATE_STRING_DICT0( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_b03b595b8541e06719e201ed1321586e = MAKE_MODULE_FRAME( codeobj_b03b595b8541e06719e201ed1321586e, module_mpmath$functions$qfunctions );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b03b595b8541e06719e201ed1321586e );
    assert( Py_REFCNT( frame_b03b595b8541e06719e201ed1321586e ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_functions;
        tmp_globals_name_1 = (PyObject *)moduledict_mpmath$functions$qfunctions;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_defun_str_plain_defun_wrapped_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_b03b595b8541e06719e201ed1321586e->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain_defun, tmp_assign_source_4 );
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
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain_defun_wrapped, tmp_assign_source_5 );
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
        PyObject *tmp_defaults_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain_defun );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun" );
            exception_tb = NULL;

            exception_lineno = 3;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_defaults_1 = const_tuple_none_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_args_element_name_1 = MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_1_qp( tmp_defaults_1 );



        frame_b03b595b8541e06719e201ed1321586e->m_frame.f_lineno = 3;
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
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain_qp, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

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

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_2 = MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_2_qgamma(  );



        frame_b03b595b8541e06719e201ed1321586e->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain_qgamma, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain_defun_wrapped );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun_wrapped );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun_wrapped" );
            exception_tb = NULL;

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_args_element_name_3 = MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_3_qfac(  );



        frame_b03b595b8541e06719e201ed1321586e->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain_qfac, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain_defun );

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

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        tmp_args_element_name_4 = MAKE_FUNCTION_mpmath$functions$qfunctions$$$function_4_qhyper(  );



        frame_b03b595b8541e06719e201ed1321586e->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain_qhyper, tmp_assign_source_9 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b03b595b8541e06719e201ed1321586e );
#endif
    popFrameStack();

    assertFrameObject( frame_b03b595b8541e06719e201ed1321586e );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b03b595b8541e06719e201ed1321586e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b03b595b8541e06719e201ed1321586e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b03b595b8541e06719e201ed1321586e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b03b595b8541e06719e201ed1321586e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_mpmath$functions$qfunctions, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_mpmath$functions$qfunctions );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
