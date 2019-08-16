/* Generated code for Python module 'mpmath.calculus.odes'
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

/* The "_module_mpmath$calculus$odes" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mpmath$calculus$odes;
PyDictObject *moduledict_mpmath$calculus$odes;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_verbose;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_6507e4a02ea14c7506980bb06f8a3ec6_tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_ctx;
extern PyObject *const_str_plain_bisect;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_one;
static PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_F__tuple;
extern PyObject *const_tuple_str_plain_bisect_tuple;
extern PyObject *const_list_int_0_list;
extern PyObject *const_str_plain_ODEMethods;
static PyObject *const_str_plain_interpolant;
static PyObject *const_str_plain_tol_prec;
static PyObject *const_str_plain_series_data;
extern PyObject *const_str_plain_method;
static PyObject *const_str_plain_mpolyval;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_prec;
static PyObject *const_str_plain_F_;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_digest_2d5ff0dfe4098e02407961bcc2642558;
extern PyObject *const_int_pos_10;
static PyObject *const_str_plain_ser;
extern PyObject *const_str_plain_orig;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_ldexp;
extern PyObject *const_float_2_0;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___module__;
extern PyObject *const_slice_none_none_int_neg_1;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_workprec;
static PyObject *const_str_digest_7edf4f81979c68ffb1ea33708db85830;
static PyObject *const_str_digest_6d3ae168a49a59417853caa388645deb;
static PyObject *const_tuple_none_none_str_plain_taylor_false_tuple;
extern PyObject *const_str_plain_xrange;
extern PyObject *const_tuple_str_plain_xrange_tuple;
extern PyObject *const_str_plain_log;
static PyObject *const_str_plain_y0;
static PyObject *const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple;
extern PyObject *const_str_plain_xa;
extern PyObject *const_str_plain_xb;
extern PyObject *const_str_plain_odefun;
extern PyObject *const_str_plain_dps;
static PyObject *const_str_plain_get_series;
extern PyObject *const_str_digest_2ede97835081434196d0c826ef1e1b08;
extern PyObject *const_str_plain_degree;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_convert;
extern PyObject *const_str_plain_F;
extern PyObject *const_str_plain_x0;
static PyObject *const_str_plain_yk;
static PyObject *const_dict_1abf55193e08d71628d4297c95cb49bb;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_polyval;
extern PyObject *const_str_plain_nthroot;
extern PyObject *const_str_plain_a;
static PyObject *const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_taylor;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_fac;
static PyObject *const_str_plain_series_boundaries;
static PyObject *const_str_plain_return_vector;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_ode_taylor;
static PyObject *const_tuple_str_plain_ser_str_plain_a_str_plain_s_str_plain_ctx_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
static PyObject *const_str_digest_42aedbd2446d8a0c543c41ac810b83b4;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_5261af708f5a0a234e946574dd45662d;
extern PyObject *const_int_pos_40;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple = PyTuple_New( 19 );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 1, const_str_plain_F ); Py_INCREF( const_str_plain_F );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 2, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    const_str_plain_y0 = UNSTREAM_STRING( &constant_bin[ 139902 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 3, const_str_plain_y0 ); Py_INCREF( const_str_plain_y0 );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 4, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 5, const_str_plain_degree ); Py_INCREF( const_str_plain_degree );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 6, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 7, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    const_str_plain_ser = UNSTREAM_STRING( &constant_bin[ 5518 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 8, const_str_plain_ser ); Py_INCREF( const_str_plain_ser );
    const_str_plain_tol_prec = UNSTREAM_STRING( &constant_bin[ 139904 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 9, const_str_plain_tol_prec ); Py_INCREF( const_str_plain_tol_prec );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 10, const_str_plain_xb ); Py_INCREF( const_str_plain_xb );
    const_str_plain_series_boundaries = UNSTREAM_STRING( &constant_bin[ 139912 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 11, const_str_plain_series_boundaries ); Py_INCREF( const_str_plain_series_boundaries );
    const_str_plain_F_ = UNSTREAM_STRING( &constant_bin[ 9168 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 12, const_str_plain_F_ ); Py_INCREF( const_str_plain_F_ );
    const_str_plain_interpolant = UNSTREAM_STRING( &constant_bin[ 139929 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 13, const_str_plain_interpolant ); Py_INCREF( const_str_plain_interpolant );
    const_str_plain_get_series = UNSTREAM_STRING( &constant_bin[ 139940 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 14, const_str_plain_get_series ); Py_INCREF( const_str_plain_get_series );
    const_str_plain_mpolyval = UNSTREAM_STRING( &constant_bin[ 139950 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 15, const_str_plain_mpolyval ); Py_INCREF( const_str_plain_mpolyval );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 16, const_str_plain_workprec ); Py_INCREF( const_str_plain_workprec );
    const_str_plain_series_data = UNSTREAM_STRING( &constant_bin[ 139958 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 17, const_str_plain_series_data ); Py_INCREF( const_str_plain_series_data );
    const_str_plain_return_vector = UNSTREAM_STRING( &constant_bin[ 139969 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 18, const_str_plain_return_vector ); Py_INCREF( const_str_plain_return_vector );
    const_tuple_6507e4a02ea14c7506980bb06f8a3ec6_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 139982 ], 194 );
    const_tuple_str_plain_x_str_plain_y_str_plain_F__tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_y_str_plain_F__tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_y_str_plain_F__tuple, 1, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_y_str_plain_F__tuple, 2, const_str_plain_F_ ); Py_INCREF( const_str_plain_F_ );
    const_str_digest_2d5ff0dfe4098e02407961bcc2642558 = UNSTREAM_STRING( &constant_bin[ 140176 ], 20, 0 );
    const_str_digest_7edf4f81979c68ffb1ea33708db85830 = UNSTREAM_STRING( &constant_bin[ 140196 ], 29, 0 );
    const_str_digest_6d3ae168a49a59417853caa388645deb = UNSTREAM_STRING( &constant_bin[ 140225 ], 36, 0 );
    const_tuple_none_none_str_plain_taylor_false_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_none_none_str_plain_taylor_false_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_str_plain_taylor_false_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_str_plain_taylor_false_tuple, 2, const_str_plain_taylor ); Py_INCREF( const_str_plain_taylor );
    PyTuple_SET_ITEM( const_tuple_none_none_str_plain_taylor_false_tuple, 3, Py_False ); Py_INCREF( Py_False );
    const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 1, const_str_plain_tol_prec ); Py_INCREF( const_str_plain_tol_prec );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 2, const_str_plain_ser ); Py_INCREF( const_str_plain_ser );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 3, const_str_plain_degree ); Py_INCREF( const_str_plain_degree );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 4, const_str_plain_F ); Py_INCREF( const_str_plain_F );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 5, const_str_plain_xb ); Py_INCREF( const_str_plain_xb );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 6, const_str_plain_series_boundaries ); Py_INCREF( const_str_plain_series_boundaries );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 7, const_str_plain_xa ); Py_INCREF( const_str_plain_xa );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 8, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 9, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 10, const_str_plain_mpolyval ); Py_INCREF( const_str_plain_mpolyval );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 11, const_str_plain_series_data ); Py_INCREF( const_str_plain_series_data );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 12, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 13, const_str_plain_x0 ); Py_INCREF( const_str_plain_x0 );
    PyTuple_SET_ITEM( const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 14, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    const_str_plain_yk = UNSTREAM_STRING( &constant_bin[ 140261 ], 2, 1 );
    const_dict_1abf55193e08d71628d4297c95cb49bb = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_1abf55193e08d71628d4297c95cb49bb, const_str_plain___module__, const_str_digest_2d5ff0dfe4098e02407961bcc2642558 );
    assert( PyDict_Size( const_dict_1abf55193e08d71628d4297c95cb49bb ) == 1 );
    const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple, 1, const_str_plain_yk ); Py_INCREF( const_str_plain_yk );
    PyTuple_SET_ITEM( const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple, 2, const_str_plain_ser ); Py_INCREF( const_str_plain_ser );
    PyTuple_SET_ITEM( const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple, 3, const_str_plain_xb ); Py_INCREF( const_str_plain_xb );
    PyTuple_SET_ITEM( const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple, 4, const_str_plain_xa ); Py_INCREF( const_str_plain_xa );
    PyTuple_SET_ITEM( const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple, 5, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple, 6, const_str_plain_return_vector ); Py_INCREF( const_str_plain_return_vector );
    PyTuple_SET_ITEM( const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple, 7, const_str_plain_mpolyval ); Py_INCREF( const_str_plain_mpolyval );
    PyTuple_SET_ITEM( const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple, 8, const_str_plain_workprec ); Py_INCREF( const_str_plain_workprec );
    PyTuple_SET_ITEM( const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple, 9, const_str_plain_get_series ); Py_INCREF( const_str_plain_get_series );
    PyTuple_SET_ITEM( const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple, 10, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple, 11, const_str_plain_orig ); Py_INCREF( const_str_plain_orig );
    const_str_plain_ode_taylor = UNSTREAM_STRING( &constant_bin[ 140263 ], 10, 1 );
    const_tuple_str_plain_ser_str_plain_a_str_plain_s_str_plain_ctx_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ser_str_plain_a_str_plain_s_str_plain_ctx_tuple, 0, const_str_plain_ser ); Py_INCREF( const_str_plain_ser );
    PyTuple_SET_ITEM( const_tuple_str_plain_ser_str_plain_a_str_plain_s_str_plain_ctx_tuple, 1, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_ser_str_plain_a_str_plain_s_str_plain_ctx_tuple, 2, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_ser_str_plain_a_str_plain_s_str_plain_ctx_tuple, 3, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    const_str_digest_42aedbd2446d8a0c543c41ac810b83b4 = UNSTREAM_STRING( &constant_bin[ 140273 ], 6651, 0 );
    const_str_digest_5261af708f5a0a234e946574dd45662d = UNSTREAM_STRING( &constant_bin[ 146924 ], 62, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_mpmath$calculus$odes( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c01592eb8960b725f1da443078fdc307;
static PyCodeObject *codeobj_89bbcba8a6a29b36c4914d002ce0e407;
static PyCodeObject *codeobj_eef9639ec59814148802c9080fe1d176;
static PyCodeObject *codeobj_9bb4b1f691bad3e318c41ccc9060c7b7;
static PyCodeObject *codeobj_8fa47271ab500f4a05f856f6f9521360;
static PyCodeObject *codeobj_4df93261ba6a7ba198f0efd96ee0c19d;
static PyCodeObject *codeobj_71ee14f22074e941ffd774d42cb5e481;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_5261af708f5a0a234e946574dd45662d;
    codeobj_c01592eb8960b725f1da443078fdc307 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 241, const_tuple_str_plain_x_str_plain_y_str_plain_F__tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_89bbcba8a6a29b36c4914d002ce0e407 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_7edf4f81979c68ffb1ea33708db85830, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_eef9639ec59814148802c9080fe1d176 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_series, 251, const_tuple_033f1c68a996857e0c342f7cc4e6980f_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_9bb4b1f691bad3e318c41ccc9060c7b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_interpolant, 269, const_tuple_3c5a83a1bbbf0a87e9a00cd5dbc59d8f_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_8fa47271ab500f4a05f856f6f9521360 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mpolyval, 248, const_tuple_str_plain_ser_str_plain_a_str_plain_s_str_plain_ctx_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_4df93261ba6a7ba198f0efd96ee0c19d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ode_taylor, 7, const_tuple_6507e4a02ea14c7506980bb06f8a3ec6_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_71ee14f22074e941ffd774d42cb5e481 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_odefun, 51, const_tuple_33ac55ea954dbdd1c07f48134ef3d6e9_tuple, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_mpmath$calculus$odes$$$function_1_ode_taylor(  );


static PyObject *MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun( PyObject *defaults );


static PyObject *MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun$$$function_2_mpolyval(  );


static PyObject *MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun$$$function_3_get_series(  );


static PyObject *MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun$$$function_4_interpolant(  );


// The module function definitions.
static PyObject *impl_mpmath$calculus$odes$$$function_1_ode_taylor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_derivs = python_pars[ 1 ];
    PyObject *par_x0 = python_pars[ 2 ];
    PyObject *par_y0 = python_pars[ 3 ];
    PyObject *par_tol_prec = python_pars[ 4 ];
    PyObject *par_n = python_pars[ 5 ];
    PyObject *var_ser = NULL;
    PyObject *var_radius = NULL;
    PyObject *var_xs = NULL;
    PyObject *var_ys = NULL;
    PyObject *var_orig = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_fxy = NULL;
    PyObject *var_ts = NULL;
    PyObject *var_tol = NULL;
    PyObject *var_dim = NULL;
    PyObject *var_b = NULL;
    PyObject *var_d = NULL;
    PyObject *var_i = NULL;
    PyObject *var_h = NULL;
    PyObject *var_k = NULL;
    PyObject *var_j = NULL;
    PyObject *var_s = NULL;
    PyObject *var_y = NULL;
    PyObject *var_x = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4df93261ba6a7ba198f0efd96ee0c19d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4df93261ba6a7ba198f0efd96ee0c19d = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4df93261ba6a7ba198f0efd96ee0c19d, codeobj_4df93261ba6a7ba198f0efd96ee0c19d, module_mpmath$calculus$odes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4df93261ba6a7ba198f0efd96ee0c19d = cache_frame_4df93261ba6a7ba198f0efd96ee0c19d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4df93261ba6a7ba198f0efd96ee0c19d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4df93261ba6a7ba198f0efd96ee0c19d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_1 = par_ctx;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ldexp );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_int_pos_1;
        CHECK_OBJECT( par_tol_prec );
        tmp_operand_name_1 = par_tol_prec;
        tmp_args_element_name_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 8;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4df93261ba6a7ba198f0efd96ee0c19d->m_frame.f_lineno = 8;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_assign_unpack_1__assign_source == NULL );
        tmp_assign_unpack_1__assign_source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_2 = tmp_assign_unpack_1__assign_source;
        assert( var_h == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_h = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_3 = tmp_assign_unpack_1__assign_source;
        assert( var_tol == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_tol = tmp_assign_source_3;
    }
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_y0 );
        tmp_len_arg_1 = par_y0;
        tmp_assign_source_4 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_dim == NULL );
        var_dim = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT( par_x0 );
        tmp_list_element_1 = par_x0;
        tmp_assign_source_5 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_assign_source_5, 0, tmp_list_element_1 );
        assert( var_xs == NULL );
        var_xs = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_list_element_2;
        CHECK_OBJECT( par_y0 );
        tmp_list_element_2 = par_y0;
        tmp_assign_source_6 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_assign_source_6, 0, tmp_list_element_2 );
        assert( var_ys == NULL );
        var_ys = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( par_x0 );
        tmp_assign_source_7 = par_x0;
        assert( var_x == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_x = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( par_y0 );
        tmp_assign_source_8 = par_y0;
        assert( var_y == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_y = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_prec );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_orig == NULL );
        var_orig = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( var_orig );
        tmp_left_name_1 = var_orig;
        tmp_left_name_2 = const_int_pos_1;
        CHECK_OBJECT( par_n );
        tmp_right_name_2 = par_n;
        tmp_right_name_1 = BINARY_OPERATION_ADD_INT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assattr_name_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_1 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_prec, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_range_arg_1;
        CHECK_OBJECT( par_n );
        tmp_range_arg_1 = par_n;
        tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
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
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 19;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_12 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_12;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_derivs );
        tmp_called_name_2 = par_derivs;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_3 = var_x;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_4 = var_y;
        frame_4df93261ba6a7ba198f0efd96ee0c19d->m_frame.f_lineno = 20;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_fxy;
            var_fxy = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_14;
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_len_arg_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain_xrange );

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

                exception_lineno = 21;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_3 = tmp_mvar_value_1;
            CHECK_OBJECT( var_y );
            tmp_len_arg_2 = var_y;
            tmp_args_element_name_5 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            frame_4df93261ba6a7ba198f0efd96ee0c19d->m_frame.f_lineno = 21;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_list_contraction_1__$0;
                tmp_list_contraction_1__$0 = tmp_assign_source_15;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = PyList_New( 0 );
            {
                PyObject *old = tmp_list_contraction_1__contraction_result;
                tmp_list_contraction_1__contraction_result = tmp_assign_source_16;
                Py_XDECREF( old );
            }

        }
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_list_contraction_1__$0 );
            tmp_next_source_2 = tmp_list_contraction_1__$0;
            tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_17 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 21;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_list_contraction_1__iter_value_0;
                tmp_list_contraction_1__iter_value_0 = tmp_assign_source_17;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
            tmp_assign_source_18 = tmp_list_contraction_1__iter_value_0;
            {
                PyObject *old = var_i;
                assert( old != NULL );
                var_i = tmp_assign_source_18;
                Py_INCREF( var_i );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
            tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
            CHECK_OBJECT( var_y );
            tmp_subscribed_name_1 = var_y;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_1 = var_i;
            tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_h );
            tmp_left_name_4 = var_h;
            CHECK_OBJECT( var_fxy );
            tmp_subscribed_name_2 = var_fxy;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_2 = var_i;
            tmp_right_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 21;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_right_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_3 );

                exception_lineno = 21;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_append_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 21;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_assign_source_14 = tmp_list_contraction_1__contraction_result;
        Py_INCREF( tmp_assign_source_14 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_1_ode_taylor );
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

        goto try_except_handler_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_1_ode_taylor );
        return NULL;
        outline_result_1:;
        {
            PyObject *old = var_y;
            assert( old != NULL );
            var_y = tmp_assign_source_14;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( var_x );
        tmp_left_name_5 = var_x;
        CHECK_OBJECT( var_h );
        tmp_right_name_5 = var_h;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_19 = tmp_left_name_5;
        var_x = tmp_assign_source_19;

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( var_xs );
        tmp_called_instance_1 = var_xs;
        CHECK_OBJECT( var_x );
        tmp_args_element_name_6 = var_x;
        frame_4df93261ba6a7ba198f0efd96ee0c19d->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_ys );
        tmp_called_instance_2 = var_ys;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_7 = var_y;
        frame_4df93261ba6a7ba198f0efd96ee0c19d->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_20;
        // Tried code:
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_range_arg_2;
            CHECK_OBJECT( var_dim );
            tmp_range_arg_2 = var_dim;
            tmp_iter_arg_3 = BUILTIN_RANGE( tmp_range_arg_2 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            assert( tmp_list_contraction_2__$0 == NULL );
            tmp_list_contraction_2__$0 = tmp_assign_source_21;
        }
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = PyList_New( 0 );
            assert( tmp_list_contraction_2__contraction_result == NULL );
            tmp_list_contraction_2__contraction_result = tmp_assign_source_22;
        }
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT( tmp_list_contraction_2__$0 );
            tmp_next_source_3 = tmp_list_contraction_2__$0;
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
                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 26;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_list_contraction_2__iter_value_0;
                tmp_list_contraction_2__iter_value_0 = tmp_assign_source_23;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT( tmp_list_contraction_2__iter_value_0 );
            tmp_assign_source_24 = tmp_list_contraction_2__iter_value_0;
            {
                PyObject *old = var_d;
                var_d = tmp_assign_source_24;
                Py_INCREF( var_d );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            CHECK_OBJECT( tmp_list_contraction_2__contraction_result );
            tmp_append_list_2 = tmp_list_contraction_2__contraction_result;
            tmp_append_value_2 = PyList_New( 0 );
            assert( PyList_Check( tmp_append_list_2 ) );
            tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
            Py_DECREF( tmp_append_value_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT( tmp_list_contraction_2__contraction_result );
        tmp_assign_source_20 = tmp_list_contraction_2__contraction_result;
        Py_INCREF( tmp_assign_source_20 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_1_ode_taylor );
        return NULL;
        // Return handler code:
        try_return_handler_5:;
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
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
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
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_1_ode_taylor );
        return NULL;
        outline_result_2:;
        assert( var_ser == NULL );
        var_ser = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_range_arg_3;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( par_n );
        tmp_left_name_6 = par_n;
        tmp_right_name_6 = const_int_pos_1;
        tmp_range_arg_3 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_range_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_4 = BUILTIN_RANGE( tmp_range_arg_3 );
        Py_DECREF( tmp_range_arg_3 );
        if ( tmp_iter_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_4 );
        Py_DECREF( tmp_iter_arg_4 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_25;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_4 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT( tmp_next_source_4 );
        if ( tmp_assign_source_26 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_4;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 27;
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
            PyObject *old = var_j;
            var_j = tmp_assign_source_27;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        tmp_left_name_7 = LIST_COPY( const_list_int_0_list );
        CHECK_OBJECT( var_dim );
        tmp_right_name_7 = var_dim;
        tmp_assign_source_28 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_left_name_7 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_s;
            var_s = tmp_assign_source_28;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        tmp_left_name_8 = const_int_neg_1;
        CHECK_OBJECT( var_j );
        tmp_left_name_9 = var_j;
        tmp_right_name_9 = const_int_pos_1;
        tmp_right_name_8 = BINARY_OPERATION( PyNumber_And, tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_29 = POWER_OPERATION( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_b;
            var_b = tmp_assign_source_29;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = const_int_pos_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_30;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_range_arg_4;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( var_j );
        tmp_left_name_10 = var_j;
        tmp_right_name_10 = const_int_pos_1;
        tmp_range_arg_4 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_range_arg_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_iter_arg_5 = BUILTIN_RANGE( tmp_range_arg_4 );
        Py_DECREF( tmp_range_arg_4 );
        if ( tmp_iter_arg_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_31 = MAKE_ITERATOR( tmp_iter_arg_5 );
        Py_DECREF( tmp_iter_arg_5 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_31;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT( tmp_for_loop_3__for_iterator );
        tmp_next_source_5 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_32 = ITERATOR_NEXT( tmp_next_source_5 );
        if ( tmp_assign_source_32 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_5;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 31;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_32;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT( tmp_for_loop_3__iter_value );
        tmp_assign_source_33 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_33;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_range_arg_5;
        CHECK_OBJECT( var_dim );
        tmp_range_arg_5 = var_dim;
        tmp_iter_arg_6 = BUILTIN_RANGE( tmp_range_arg_5 );
        if ( tmp_iter_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_34 = MAKE_ITERATOR( tmp_iter_arg_6 );
        Py_DECREF( tmp_iter_arg_6 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_34;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT( tmp_for_loop_4__for_iterator );
        tmp_next_source_6 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_35 = ITERATOR_NEXT( tmp_next_source_6 );
        if ( tmp_assign_source_35 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_6;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 32;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_35;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT( tmp_for_loop_4__iter_value );
        tmp_assign_source_36 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_36;
            Py_INCREF( var_d );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT( var_s );
        tmp_assign_source_37 = var_s;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__target;
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_37;
            Py_INCREF( tmp_inplace_assign_subscr_1__target );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT( var_d );
        tmp_assign_source_38 = var_d;
        {
            PyObject *old = tmp_inplace_assign_subscr_1__subscript;
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_38;
            Py_INCREF( tmp_inplace_assign_subscr_1__subscript );
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_11;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_right_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_3 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_subscript_name_3 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_left_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( var_b );
        tmp_left_name_12 = var_b;
        CHECK_OBJECT( var_ys );
        tmp_subscribed_name_5 = var_ys;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_4 = var_i;
        tmp_subscribed_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_4 );
        if ( tmp_subscribed_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( var_d );
        tmp_subscript_name_5 = var_d;
        tmp_right_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscribed_name_4 );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_right_name_11 = BINARY_OPERATION_MUL( tmp_left_name_12, tmp_right_name_12 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_11 );

            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_ass_subscript_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_8;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_left_name_13;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_13;
        PyObject *tmp_left_name_15;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_14;
        PyObject *tmp_right_name_15;
        PyObject *tmp_right_name_16;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_b );
        tmp_left_name_14 = var_b;
        CHECK_OBJECT( var_j );
        tmp_left_name_16 = var_j;
        CHECK_OBJECT( var_k );
        tmp_right_name_14 = var_k;
        tmp_left_name_15 = BINARY_OPERATION_SUB( tmp_left_name_16, tmp_right_name_14 );
        if ( tmp_left_name_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_right_name_15 = const_int_pos_1;
        tmp_right_name_13 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_15, tmp_right_name_15 );
        Py_DECREF( tmp_left_name_15 );
        if ( tmp_right_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_left_name_13 = BINARY_OPERATION_MUL( tmp_left_name_14, tmp_right_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_left_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT( var_k );
        tmp_operand_name_2 = var_k;
        tmp_right_name_16 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
        if ( tmp_right_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_13 );

            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_39 = BINARY_OPERATION_FLOORDIV( tmp_left_name_13, tmp_right_name_16 );
        Py_DECREF( tmp_left_name_13 );
        Py_DECREF( tmp_right_name_16 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_b;
            assert( old != NULL );
            var_b = tmp_assign_source_39;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_40;
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


            exception_lineno = 35;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_40 = tmp_left_name_17;
        var_k = tmp_assign_source_40;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_5;
    loop_end_5:;
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

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_left_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_18;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_right_name_19;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( var_h );
        tmp_left_name_19 = var_h;
        CHECK_OBJECT( var_j );
        tmp_operand_name_3 = var_j;
        tmp_right_name_18 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
        if ( tmp_right_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_left_name_18 = POWER_OPERATION( tmp_left_name_19, tmp_right_name_18 );
        Py_DECREF( tmp_right_name_18 );
        if ( tmp_left_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT( par_ctx );
        tmp_called_instance_3 = par_ctx;
        CHECK_OBJECT( var_j );
        tmp_args_element_name_8 = var_j;
        frame_4df93261ba6a7ba198f0efd96ee0c19d->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_right_name_19 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_fac, call_args );
        }

        if ( tmp_right_name_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_18 );

            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_41 = BINARY_OPERATION_DIV( tmp_left_name_18, tmp_right_name_19 );
        Py_DECREF( tmp_left_name_18 );
        Py_DECREF( tmp_right_name_19 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_scale;
            var_scale = tmp_assign_source_41;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_range_arg_6;
        CHECK_OBJECT( var_dim );
        tmp_range_arg_6 = var_dim;
        tmp_iter_arg_7 = BUILTIN_RANGE( tmp_range_arg_6 );
        if ( tmp_iter_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_42 = MAKE_ITERATOR( tmp_iter_arg_7 );
        Py_DECREF( tmp_iter_arg_7 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_5__for_iterator;
            tmp_for_loop_5__for_iterator = tmp_assign_source_42;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT( tmp_for_loop_5__for_iterator );
        tmp_next_source_7 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_43 = ITERATOR_NEXT( tmp_next_source_7 );
        if ( tmp_assign_source_43 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_7;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 37;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_43;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT( tmp_for_loop_5__iter_value );
        tmp_assign_source_44 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_d;
            var_d = tmp_assign_source_44;
            Py_INCREF( var_d );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_left_name_20;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_20;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( var_s );
        tmp_subscribed_name_6 = var_s;
        CHECK_OBJECT( var_d );
        tmp_subscript_name_6 = var_d;
        tmp_left_name_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_left_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT( var_scale );
        tmp_right_name_20 = var_scale;
        tmp_ass_subvalue_2 = BINARY_OPERATION_MUL( tmp_left_name_20, tmp_right_name_20 );
        Py_DECREF( tmp_left_name_20 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT( var_s );
        tmp_ass_subscribed_2 = var_s;
        CHECK_OBJECT( var_d );
        tmp_ass_subscript_2 = var_d;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT( var_ser );
        tmp_subscribed_name_7 = var_ser;
        CHECK_OBJECT( var_d );
        tmp_subscript_name_7 = var_d;
        tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT( var_s );
        tmp_subscribed_name_8 = var_s;
        CHECK_OBJECT( var_d );
        tmp_subscript_name_8 = var_d;
        tmp_args_element_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 39;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_4df93261ba6a7ba198f0efd96ee0c19d->m_frame.f_lineno = 39;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_2;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( var_orig );
        tmp_assattr_name_2 = var_orig;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_2 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_prec, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_9 );
            Py_XDECREF( exception_keeper_value_9 );
            Py_XDECREF( exception_keeper_tb_9 );

            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( var_orig );
        tmp_assattr_name_3 = var_orig;
        CHECK_OBJECT( par_ctx );
        tmp_assattr_target_3 = par_ctx;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_prec, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_4 = par_ctx;
        tmp_assign_source_45 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_one );
        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_radius == NULL );
        var_radius = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_iter_arg_8;
        CHECK_OBJECT( var_ser );
        tmp_iter_arg_8 = var_ser;
        tmp_assign_source_46 = MAKE_ITERATOR( tmp_iter_arg_8 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_6__for_iterator == NULL );
        tmp_for_loop_6__for_iterator = tmp_assign_source_46;
    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT( tmp_for_loop_6__for_iterator );
        tmp_next_source_8 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_47 = ITERATOR_NEXT( tmp_next_source_8 );
        if ( tmp_assign_source_47 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_8;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 45;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_47;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_48;
        CHECK_OBJECT( tmp_for_loop_6__iter_value );
        tmp_assign_source_48 = tmp_for_loop_6__iter_value;
        {
            PyObject *old = var_ts;
            var_ts = tmp_assign_source_48;
            Py_INCREF( var_ts );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_ts );
        tmp_subscribed_name_9 = var_ts;
        tmp_subscript_name_9 = const_int_neg_1;
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_9, tmp_subscript_name_9, -1 );
        if ( tmp_subscript_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_subscript_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_result_1 );

            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_subscript_result_1 );
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
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_left_name_21;
            PyObject *tmp_right_name_21;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_subscribed_name_10;
            PyObject *tmp_subscript_name_10;
            PyObject *tmp_args_element_name_14;
            tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_5 != NULL );
            if ( var_radius == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "radius" );
                exception_tb = NULL;

                exception_lineno = 47;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }

            tmp_args_element_name_10 = var_radius;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_5 = par_ctx;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_nthroot );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            CHECK_OBJECT( var_tol );
            tmp_left_name_21 = var_tol;
            tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_7 != NULL );
            CHECK_OBJECT( var_ts );
            tmp_subscribed_name_10 = var_ts;
            tmp_subscript_name_10 = const_int_neg_1;
            tmp_args_element_name_13 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_10, tmp_subscript_name_10, -1 );
            if ( tmp_args_element_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 47;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            frame_4df93261ba6a7ba198f0efd96ee0c19d->m_frame.f_lineno = 47;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_right_name_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_args_element_name_13 );
            if ( tmp_right_name_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 47;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            tmp_args_element_name_12 = BINARY_OPERATION_DIV( tmp_left_name_21, tmp_right_name_21 );
            Py_DECREF( tmp_right_name_21 );
            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 47;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            CHECK_OBJECT( par_n );
            tmp_args_element_name_14 = par_n;
            frame_4df93261ba6a7ba198f0efd96ee0c19d->m_frame.f_lineno = 47;
            {
                PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_14 };
                tmp_args_element_name_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_args_element_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            frame_4df93261ba6a7ba198f0efd96ee0c19d->m_frame.f_lineno = 47;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_assign_source_49 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            {
                PyObject *old = var_radius;
                var_radius = tmp_assign_source_49;
                Py_XDECREF( old );
            }

        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_left_name_22;
        PyObject *tmp_right_name_22;
        if ( var_radius == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "radius" );
            exception_tb = NULL;

            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_22 = var_radius;
        tmp_right_name_22 = const_int_pos_2;
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceDivide, &tmp_left_name_22, tmp_right_name_22 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_50 = tmp_left_name_22;
        var_radius = tmp_assign_source_50;

    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_23;
        CHECK_OBJECT( var_ser );
        tmp_tuple_element_1 = var_ser;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_x0 );
        tmp_left_name_23 = par_x0;
        CHECK_OBJECT( var_radius );
        tmp_right_name_23 = var_radius;
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_23, tmp_right_name_23 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4df93261ba6a7ba198f0efd96ee0c19d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4df93261ba6a7ba198f0efd96ee0c19d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4df93261ba6a7ba198f0efd96ee0c19d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4df93261ba6a7ba198f0efd96ee0c19d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4df93261ba6a7ba198f0efd96ee0c19d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4df93261ba6a7ba198f0efd96ee0c19d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4df93261ba6a7ba198f0efd96ee0c19d,
        type_description_1,
        par_ctx,
        par_derivs,
        par_x0,
        par_y0,
        par_tol_prec,
        par_n,
        var_ser,
        var_radius,
        var_xs,
        var_ys,
        var_orig,
        var_scale,
        var_fxy,
        var_ts,
        var_tol,
        var_dim,
        var_b,
        var_d,
        var_i,
        var_h,
        var_k,
        var_j,
        var_s,
        var_y,
        var_x
    );


    // Release cached frame.
    if ( frame_4df93261ba6a7ba198f0efd96ee0c19d == cache_frame_4df93261ba6a7ba198f0efd96ee0c19d )
    {
        Py_DECREF( frame_4df93261ba6a7ba198f0efd96ee0c19d );
    }
    cache_frame_4df93261ba6a7ba198f0efd96ee0c19d = NULL;

    assertFrameObject( frame_4df93261ba6a7ba198f0efd96ee0c19d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_1_ode_taylor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_ser );
    Py_DECREF( var_ser );
    var_ser = NULL;

    CHECK_OBJECT( (PyObject *)var_radius );
    Py_DECREF( var_radius );
    var_radius = NULL;

    CHECK_OBJECT( (PyObject *)par_y0 );
    Py_DECREF( par_y0 );
    par_y0 = NULL;

    CHECK_OBJECT( (PyObject *)var_xs );
    Py_DECREF( var_xs );
    var_xs = NULL;

    CHECK_OBJECT( (PyObject *)var_ys );
    Py_DECREF( var_ys );
    var_ys = NULL;

    CHECK_OBJECT( (PyObject *)var_orig );
    Py_DECREF( var_orig );
    var_orig = NULL;

    CHECK_OBJECT( (PyObject *)par_tol_prec );
    Py_DECREF( par_tol_prec );
    par_tol_prec = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_fxy );
    var_fxy = NULL;

    Py_XDECREF( var_ts );
    var_ts = NULL;

    CHECK_OBJECT( (PyObject *)par_derivs );
    Py_DECREF( par_derivs );
    par_derivs = NULL;

    CHECK_OBJECT( (PyObject *)var_tol );
    Py_DECREF( var_tol );
    var_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)var_dim );
    Py_DECREF( var_dim );
    var_dim = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)var_h );
    Py_DECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_ser );
    var_ser = NULL;

    Py_XDECREF( var_radius );
    var_radius = NULL;

    CHECK_OBJECT( (PyObject *)par_y0 );
    Py_DECREF( par_y0 );
    par_y0 = NULL;

    Py_XDECREF( var_xs );
    var_xs = NULL;

    Py_XDECREF( var_ys );
    var_ys = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

    CHECK_OBJECT( (PyObject *)par_tol_prec );
    Py_DECREF( par_tol_prec );
    par_tol_prec = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_fxy );
    var_fxy = NULL;

    Py_XDECREF( var_ts );
    var_ts = NULL;

    CHECK_OBJECT( (PyObject *)par_derivs );
    Py_DECREF( par_derivs );
    par_derivs = NULL;

    Py_XDECREF( var_tol );
    var_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    Py_XDECREF( var_dim );
    var_dim = NULL;

    Py_XDECREF( var_b );
    var_b = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_h );
    var_h = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_1_ode_taylor );
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


static PyObject *impl_mpmath$calculus$odes$$$function_2_odefun( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ctx = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_F = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_x0 = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *par_y0 = python_pars[ 3 ];
    PyObject *par_tol = python_pars[ 4 ];
    struct Nuitka_CellObject *par_degree = PyCell_NEW1( python_pars[ 5 ] );
    PyObject *par_method = python_pars[ 6 ];
    struct Nuitka_CellObject *par_verbose = PyCell_NEW1( python_pars[ 7 ] );
    PyObject *var_ser = NULL;
    struct Nuitka_CellObject *var_tol_prec = PyCell_EMPTY();
    PyObject *var_xb = NULL;
    struct Nuitka_CellObject *var_series_boundaries = PyCell_EMPTY();
    struct Nuitka_CellObject *var_F_ = PyCell_EMPTY();
    PyObject *var_interpolant = NULL;
    struct Nuitka_CellObject *var_get_series = PyCell_EMPTY();
    struct Nuitka_CellObject *var_mpolyval = PyCell_EMPTY();
    struct Nuitka_CellObject *var_workprec = PyCell_EMPTY();
    struct Nuitka_CellObject *var_series_data = PyCell_EMPTY();
    struct Nuitka_CellObject *var_return_vector = PyCell_EMPTY();
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_71ee14f22074e941ffd774d42cb5e481;
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
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_71ee14f22074e941ffd774d42cb5e481 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_71ee14f22074e941ffd774d42cb5e481, codeobj_71ee14f22074e941ffd774d42cb5e481, module_mpmath$calculus$odes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_71ee14f22074e941ffd774d42cb5e481 = cache_frame_71ee14f22074e941ffd774d42cb5e481;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_71ee14f22074e941ffd774d42cb5e481 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_71ee14f22074e941ffd774d42cb5e481 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_tol );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_tol );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "cccoococococcoccccc";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_called_instance_1 = PyCell_GET( par_ctx );
            CHECK_OBJECT( par_tol );
            tmp_args_element_name_1 = par_tol;
            tmp_args_element_name_2 = const_int_pos_2;
            frame_71ee14f22074e941ffd774d42cb5e481->m_frame.f_lineno = 231;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_operand_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_log, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "cccoococococcoccccc";
                goto frame_exception_exit_1;
            }
            tmp_int_arg_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "cccoococococcoccccc";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "cccoococococcoccccc";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_int_pos_10;
            tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "cccoococococcoccccc";
                goto frame_exception_exit_1;
            }
            assert( PyCell_GET( var_tol_prec ) == NULL );
            PyCell_SET( var_tol_prec, tmp_assign_source_1 );

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_source_name_1 = PyCell_GET( par_ctx );
            tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prec );
            if ( tmp_left_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;
                type_description_1 = "cccoococococcoccccc";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_int_pos_10;
            tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 233;
                type_description_1 = "cccoococococcoccccc";
                goto frame_exception_exit_1;
            }
            assert( PyCell_GET( var_tol_prec ) == NULL );
            PyCell_SET( var_tol_prec, tmp_assign_source_2 );

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT( PyCell_GET( par_degree ) );
        tmp_or_left_value_1 = PyCell_GET( par_degree );
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "cccoococococcoccccc";
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
        tmp_left_name_3 = const_int_pos_3;
        tmp_left_name_5 = const_int_pos_3;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_2 = PyCell_GET( par_ctx );
        tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dps );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "cccoococococcoccccc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "cccoococococcoccccc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = const_float_2_0;
        tmp_int_arg_2 = BINARY_OPERATION_DIV( tmp_left_name_4, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_int_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "cccoococococcoccccc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = PyNumber_Int( tmp_int_arg_2 );
        Py_DECREF( tmp_int_arg_2 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "cccoococococcoccccc";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = BINARY_OPERATION_ADD_INT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_or_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "cccoococococcoccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF( tmp_or_left_value_1 );
        tmp_assign_source_3 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = PyCell_GET( par_degree );
            PyCell_SET( par_degree, tmp_assign_source_3 );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_3 = PyCell_GET( par_ctx );
        tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_prec );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "cccoococococcoccccc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = const_int_pos_40;
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_6 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "cccoococococcoccccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_workprec ) == NULL );
        PyCell_SET( var_workprec, tmp_assign_source_4 );

    }
    // Tried code:
    {
        PyObject *tmp_len_arg_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT( par_y0 );
        tmp_len_arg_1 = par_y0;
        tmp_capi_result_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_capi_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "cccoococococcoccccc";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_capi_result_1 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_True;
        assert( PyCell_GET( var_return_vector ) == NULL );
        Py_INCREF( tmp_assign_source_5 );
        PyCell_SET( var_return_vector, tmp_assign_source_5 );

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
    PRESERVE_FRAME_EXCEPTION( frame_71ee14f22074e941ffd774d42cb5e481 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_71ee14f22074e941ffd774d42cb5e481, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_71ee14f22074e941ffd774d42cb5e481, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "cccoococococcoccccc";
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
            CHECK_OBJECT( PyCell_GET( par_F ) );
            tmp_assign_source_6 = PyCell_GET( par_F );
            assert( PyCell_GET( var_F_ ) == NULL );
            Py_INCREF( tmp_assign_source_6 );
            PyCell_SET( var_F_, tmp_assign_source_6 );

        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun$$$function_1_lambda(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] = var_F_;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_7)->m_closure[0] );


            {
                PyObject *old = PyCell_GET( par_F );
                PyCell_SET( par_F, tmp_assign_source_7 );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_list_element_1;
            CHECK_OBJECT( par_y0 );
            tmp_list_element_1 = par_y0;
            tmp_assign_source_8 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_8, 0, tmp_list_element_1 );
            {
                PyObject *old = par_y0;
                assert( old != NULL );
                par_y0 = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = Py_False;
            assert( PyCell_GET( var_return_vector ) == NULL );
            Py_INCREF( tmp_assign_source_9 );
            PyCell_SET( var_return_vector, tmp_assign_source_9 );

        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 236;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_71ee14f22074e941ffd774d42cb5e481->m_frame) frame_71ee14f22074e941ffd774d42cb5e481->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "cccoococococcoccccc";
        goto frame_exception_exit_1;
        branch_end_2:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun );
    return NULL;
    // End of try:
    try_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain_ode_taylor );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ode_taylor );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ode_taylor" );
            exception_tb = NULL;

            exception_lineno = 244;
            type_description_1 = "cccoococococcoccccc";
            goto try_except_handler_3;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_args_element_name_3 = PyCell_GET( par_ctx );
        if ( PyCell_GET( par_F ) == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "F" );
            exception_tb = NULL;

            exception_lineno = 244;
            type_description_1 = "cccoococococcoccccc";
            goto try_except_handler_3;
        }

        tmp_args_element_name_4 = PyCell_GET( par_F );
        CHECK_OBJECT( PyCell_GET( par_x0 ) );
        tmp_args_element_name_5 = PyCell_GET( par_x0 );
        if ( par_y0 == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y0" );
            exception_tb = NULL;

            exception_lineno = 244;
            type_description_1 = "cccoococococcoccccc";
            goto try_except_handler_3;
        }

        tmp_args_element_name_6 = par_y0;
        CHECK_OBJECT( PyCell_GET( var_tol_prec ) );
        tmp_args_element_name_7 = PyCell_GET( var_tol_prec );
        CHECK_OBJECT( PyCell_GET( par_degree ) );
        tmp_args_element_name_8 = PyCell_GET( par_degree );
        frame_71ee14f22074e941ffd774d42cb5e481->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "cccoococococcoccccc";
            goto try_except_handler_3;
        }
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "cccoococococcoccccc";
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


            type_description_1 = "cccoococococcoccccc";
            exception_lineno = 244;
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_2, 1 );
        if ( tmp_assign_source_12 == NULL )
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


            type_description_1 = "cccoococococcoccccc";
            exception_lineno = 244;
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
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

                    type_description_1 = "cccoococococcoccccc";
                    exception_lineno = 244;
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

            type_description_1 = "cccoococococcoccccc";
            exception_lineno = 244;
            goto try_except_handler_4;
        }
    }
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_71ee14f22074e941ffd774d42cb5e481 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_71ee14f22074e941ffd774d42cb5e481 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_71ee14f22074e941ffd774d42cb5e481, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_71ee14f22074e941ffd774d42cb5e481->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_71ee14f22074e941ffd774d42cb5e481, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_71ee14f22074e941ffd774d42cb5e481,
        type_description_1,
        par_ctx,
        par_F,
        par_x0,
        par_y0,
        par_tol,
        par_degree,
        par_method,
        par_verbose,
        var_ser,
        var_tol_prec,
        var_xb,
        var_series_boundaries,
        var_F_,
        var_interpolant,
        var_get_series,
        var_mpolyval,
        var_workprec,
        var_series_data,
        var_return_vector
    );


    // Release cached frame.
    if ( frame_71ee14f22074e941ffd774d42cb5e481 == cache_frame_71ee14f22074e941ffd774d42cb5e481 )
    {
        Py_DECREF( frame_71ee14f22074e941ffd774d42cb5e481 );
    }
    cache_frame_71ee14f22074e941ffd774d42cb5e481 = NULL;

    assertFrameObject( frame_71ee14f22074e941ffd774d42cb5e481 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        assert( var_ser == NULL );
        Py_INCREF( tmp_assign_source_13 );
        var_ser = tmp_assign_source_13;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        assert( var_xb == NULL );
        Py_INCREF( tmp_assign_source_14 );
        var_xb = tmp_assign_source_14;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_list_element_2;
        CHECK_OBJECT( PyCell_GET( par_x0 ) );
        tmp_list_element_2 = PyCell_GET( par_x0 );
        tmp_assign_source_15 = PyList_New( 2 );
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_assign_source_15, 0, tmp_list_element_2 );
        CHECK_OBJECT( var_xb );
        tmp_list_element_2 = var_xb;
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_assign_source_15, 1, tmp_list_element_2 );
        assert( PyCell_GET( var_series_boundaries ) == NULL );
        PyCell_SET( var_series_boundaries, tmp_assign_source_15 );

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_list_element_3;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_ser );
        tmp_tuple_element_1 = var_ser;
        tmp_list_element_3 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_list_element_3, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( PyCell_GET( par_x0 ) );
        tmp_tuple_element_1 = PyCell_GET( par_x0 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_list_element_3, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_xb );
        tmp_tuple_element_1 = var_xb;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_list_element_3, 2, tmp_tuple_element_1 );
        tmp_assign_source_16 = PyList_New( 1 );
        PyList_SET_ITEM( tmp_assign_source_16, 0, tmp_list_element_3 );
        assert( PyCell_GET( var_series_data ) == NULL );
        PyCell_SET( var_series_data, tmp_assign_source_16 );

    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun$$$function_2_mpolyval(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[0] = par_ctx;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[0] );


        assert( PyCell_GET( var_mpolyval ) == NULL );
        PyCell_SET( var_mpolyval, tmp_assign_source_17 );

    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun$$$function_3_get_series(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[0] = par_F;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[1] = par_ctx;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[2] = par_degree;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[3] = var_mpolyval;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[3] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[4] = var_series_boundaries;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[4] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[5] = var_series_data;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[5] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[6] = var_tol_prec;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[6] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[7] = par_verbose;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[7] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[8] = par_x0;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_18)->m_closure[8] );


        assert( PyCell_GET( var_get_series ) == NULL );
        PyCell_SET( var_get_series, tmp_assign_source_18 );

    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun$$$function_4_interpolant(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[0] = par_ctx;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[1] = var_get_series;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[2] = var_mpolyval;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[3] = var_return_vector;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[3] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[4] = var_workprec;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[4] );


        assert( var_interpolant == NULL );
        var_interpolant = tmp_assign_source_19;
    }
    CHECK_OBJECT( var_interpolant );
    tmp_return_value = var_interpolant;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_ser );
    Py_DECREF( var_ser );
    var_ser = NULL;

    CHECK_OBJECT( (PyObject *)var_tol_prec );
    Py_DECREF( var_tol_prec );
    var_tol_prec = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    CHECK_OBJECT( (PyObject *)par_degree );
    Py_DECREF( par_degree );
    par_degree = NULL;

    CHECK_OBJECT( (PyObject *)par_F );
    Py_DECREF( par_F );
    par_F = NULL;

    CHECK_OBJECT( (PyObject *)var_xb );
    Py_DECREF( var_xb );
    var_xb = NULL;

    CHECK_OBJECT( (PyObject *)var_series_boundaries );
    Py_DECREF( var_series_boundaries );
    var_series_boundaries = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_F_ );
    Py_DECREF( var_F_ );
    var_F_ = NULL;

    CHECK_OBJECT( (PyObject *)var_interpolant );
    Py_DECREF( var_interpolant );
    var_interpolant = NULL;

    CHECK_OBJECT( (PyObject *)var_get_series );
    Py_DECREF( var_get_series );
    var_get_series = NULL;

    CHECK_OBJECT( (PyObject *)var_mpolyval );
    Py_DECREF( var_mpolyval );
    var_mpolyval = NULL;

    CHECK_OBJECT( (PyObject *)var_workprec );
    Py_DECREF( var_workprec );
    var_workprec = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_series_data );
    Py_DECREF( var_series_data );
    var_series_data = NULL;

    Py_XDECREF( par_y0 );
    par_y0 = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)var_return_vector );
    Py_DECREF( var_return_vector );
    var_return_vector = NULL;

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

    CHECK_OBJECT( (PyObject *)var_tol_prec );
    Py_DECREF( var_tol_prec );
    var_tol_prec = NULL;

    CHECK_OBJECT( (PyObject *)par_verbose );
    Py_DECREF( par_verbose );
    par_verbose = NULL;

    CHECK_OBJECT( (PyObject *)par_degree );
    Py_DECREF( par_degree );
    par_degree = NULL;

    CHECK_OBJECT( (PyObject *)par_F );
    Py_DECREF( par_F );
    par_F = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    CHECK_OBJECT( (PyObject *)var_F_ );
    Py_DECREF( var_F_ );
    var_F_ = NULL;

    CHECK_OBJECT( (PyObject *)var_workprec );
    Py_DECREF( var_workprec );
    var_workprec = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( par_y0 );
    par_y0 = NULL;

    CHECK_OBJECT( (PyObject *)par_x0 );
    Py_DECREF( par_x0 );
    par_x0 = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)var_return_vector );
    Py_DECREF( var_return_vector );
    var_return_vector = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun );
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


static PyObject *impl_mpmath$calculus$odes$$$function_2_odefun$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c01592eb8960b725f1da443078fdc307;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c01592eb8960b725f1da443078fdc307 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c01592eb8960b725f1da443078fdc307, codeobj_c01592eb8960b725f1da443078fdc307, module_mpmath$calculus$odes, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c01592eb8960b725f1da443078fdc307 = cache_frame_c01592eb8960b725f1da443078fdc307;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c01592eb8960b725f1da443078fdc307 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c01592eb8960b725f1da443078fdc307 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "F_" );
            exception_tb = NULL;

            exception_lineno = 241;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        CHECK_OBJECT( par_y );
        tmp_subscribed_name_1 = par_y;
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_c01592eb8960b725f1da443078fdc307->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyList_New( 1 );
        PyList_SET_ITEM( tmp_return_value, 0, tmp_list_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c01592eb8960b725f1da443078fdc307 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c01592eb8960b725f1da443078fdc307 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c01592eb8960b725f1da443078fdc307 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c01592eb8960b725f1da443078fdc307, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c01592eb8960b725f1da443078fdc307->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c01592eb8960b725f1da443078fdc307, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c01592eb8960b725f1da443078fdc307,
        type_description_1,
        par_x,
        par_y,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_c01592eb8960b725f1da443078fdc307 == cache_frame_c01592eb8960b725f1da443078fdc307 )
    {
        Py_DECREF( frame_c01592eb8960b725f1da443078fdc307 );
    }
    cache_frame_c01592eb8960b725f1da443078fdc307 = NULL;

    assertFrameObject( frame_c01592eb8960b725f1da443078fdc307 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun$$$function_1_lambda );
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


static PyObject *impl_mpmath$calculus$odes$$$function_2_odefun$$$function_2_mpolyval( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ser = python_pars[ 0 ];
    PyObject *par_a = python_pars[ 1 ];
    PyObject *var_s = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_8fa47271ab500f4a05f856f6f9521360;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_8fa47271ab500f4a05f856f6f9521360 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8fa47271ab500f4a05f856f6f9521360, codeobj_8fa47271ab500f4a05f856f6f9521360, module_mpmath$calculus$odes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8fa47271ab500f4a05f856f6f9521360 = cache_frame_8fa47271ab500f4a05f856f6f9521360;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8fa47271ab500f4a05f856f6f9521360 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8fa47271ab500f4a05f856f6f9521360 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_ser );
        tmp_iter_arg_1 = par_ser;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "oooc";
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
                type_description_1 = "oooc";
                exception_lineno = 249;
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
            PyObject *old = var_s;
            var_s = tmp_assign_source_4;
            Py_INCREF( var_s );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 249;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_polyval );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_s );
        tmp_subscribed_name_1 = var_s;
        tmp_subscript_name_1 = const_slice_none_none_int_neg_1;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 249;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_a );
        tmp_args_element_name_2 = par_a;
        frame_8fa47271ab500f4a05f856f6f9521360->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_append_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "oooc";
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
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        type_description_1 = "oooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
    tmp_return_value = tmp_list_contraction_1__contraction_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun$$$function_2_mpolyval );
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
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun$$$function_2_mpolyval );
    return NULL;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fa47271ab500f4a05f856f6f9521360 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fa47271ab500f4a05f856f6f9521360 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8fa47271ab500f4a05f856f6f9521360 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8fa47271ab500f4a05f856f6f9521360, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8fa47271ab500f4a05f856f6f9521360->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8fa47271ab500f4a05f856f6f9521360, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8fa47271ab500f4a05f856f6f9521360,
        type_description_1,
        par_ser,
        par_a,
        var_s,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_8fa47271ab500f4a05f856f6f9521360 == cache_frame_8fa47271ab500f4a05f856f6f9521360 )
    {
        Py_DECREF( frame_8fa47271ab500f4a05f856f6f9521360 );
    }
    cache_frame_8fa47271ab500f4a05f856f6f9521360 = NULL;

    assertFrameObject( frame_8fa47271ab500f4a05f856f6f9521360 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun$$$function_2_mpolyval );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)par_ser );
    Py_DECREF( par_ser );
    par_ser = NULL;

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

    Py_XDECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)par_ser );
    Py_DECREF( par_ser );
    par_ser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun$$$function_2_mpolyval );
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


static PyObject *impl_mpmath$calculus$odes$$$function_2_odefun$$$function_3_get_series( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_ser = NULL;
    PyObject *var_xb = NULL;
    PyObject *var_xa = NULL;
    PyObject *var_n = NULL;
    PyObject *var_y = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_eef9639ec59814148802c9080fe1d176;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    PyObject *tmp_print_value;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_eef9639ec59814148802c9080fe1d176 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eef9639ec59814148802c9080fe1d176, codeobj_eef9639ec59814148802c9080fe1d176, module_mpmath$calculus$odes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eef9639ec59814148802c9080fe1d176 = cache_frame_eef9639ec59814148802c9080fe1d176;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eef9639ec59814148802c9080fe1d176 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eef9639ec59814148802c9080fe1d176 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_1 = par_x;
        if ( PyCell_GET( self->m_closure[8] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "x0" );
            exception_tb = NULL;

            exception_lineno = 252;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = PyCell_GET( self->m_closure[8] );
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "ococcocococcocc";
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
            tmp_raise_type_1 = PyExc_ValueError;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 253;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain_bisect );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bisect );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "bisect" );
            exception_tb = NULL;

            exception_lineno = 254;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[4] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "series_boundaries" );
            exception_tb = NULL;

            exception_lineno = 254;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( self->m_closure[4] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_eef9639ec59814148802c9080fe1d176->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }
        assert( var_n == NULL );
        var_n = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_n );
        tmp_compexpr_left_2 = var_n;
        if ( PyCell_GET( self->m_closure[4] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "series_boundaries" );
            exception_tb = NULL;

            exception_lineno = 255;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = PyCell_GET( self->m_closure[4] );
        tmp_compexpr_right_2 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ococcocococcocc";
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            if ( PyCell_GET( self->m_closure[5] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "series_data" );
                exception_tb = NULL;

                exception_lineno = 256;
                type_description_1 = "ococcocococcocc";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_1 = PyCell_GET( self->m_closure[5] );
            CHECK_OBJECT( var_n );
            tmp_left_name_1 = var_n;
            tmp_right_name_1 = const_int_pos_1;
            tmp_subscript_name_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_subscript_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "ococcocococcocc";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "ococcocococcocc";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        if ( PyCell_GET( self->m_closure[5] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "series_data" );
            exception_tb = NULL;

            exception_lineno = 258;
            type_description_1 = "ococcocococcocc";
            goto try_except_handler_2;
        }

        tmp_subscribed_name_2 = PyCell_GET( self->m_closure[5] );
        tmp_subscript_name_2 = const_int_neg_1;
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "ococcocococcocc";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "ococcocococcocc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF( old );
        }

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


            type_description_1 = "ococcocococcocc";
            exception_lineno = 258;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

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


            type_description_1 = "ococcocococcocc";
            exception_lineno = 258;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


            type_description_1 = "ococcocococcocc";
            exception_lineno = 258;
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
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

                    type_description_1 = "ococcocococcocc";
                    exception_lineno = 258;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ococcocococcocc";
            exception_lineno = 258;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

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
        {
            PyObject *old = var_ser;
            var_ser = tmp_assign_source_6;
            Py_INCREF( var_ser );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_xa;
            var_xa = tmp_assign_source_7;
            Py_INCREF( var_xa );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_xb;
            var_xb = tmp_assign_source_8;
            Py_INCREF( var_xb );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        if ( PyCell_GET( self->m_closure[7] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "verbose" );
            exception_tb = NULL;

            exception_lineno = 259;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( PyCell_GET( self->m_closure[7] ) );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
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
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_tuple_element_1;
            tmp_left_name_2 = const_str_digest_6d3ae168a49a59417853caa388645deb;
            CHECK_OBJECT( var_xa );
            tmp_tuple_element_1 = var_xa;
            tmp_right_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_xb );
            tmp_tuple_element_1 = var_xb;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_1 );
            tmp_print_value = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_print_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 260;
                type_description_1 = "ococcocococcocc";
                goto frame_exception_exit_1;
            }
            tmp_result = PRINT_ITEM( tmp_print_value );
            Py_DECREF( tmp_print_value );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 260;
                type_description_1 = "ococcocococcocc";
                goto frame_exception_exit_1;
            }
        }
        if ( PRINT_NEW_LINE() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 260;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "mpolyval" );
            exception_tb = NULL;

            exception_lineno = 261;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = PyCell_GET( self->m_closure[3] );
        CHECK_OBJECT( var_ser );
        tmp_args_element_name_3 = var_ser;
        CHECK_OBJECT( var_xb );
        tmp_left_name_3 = var_xb;
        CHECK_OBJECT( var_xa );
        tmp_right_name_3 = var_xa;
        tmp_args_element_name_4 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }
        frame_eef9639ec59814148802c9080fe1d176->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_y;
            var_y = tmp_assign_source_9;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( var_xb );
        tmp_assign_source_10 = var_xb;
        {
            PyObject *old = var_xa;
            assert( old != NULL );
            var_xa = tmp_assign_source_10;
            Py_INCREF( var_xa );
            Py_DECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain_ode_taylor );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ode_taylor );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ode_taylor" );
            exception_tb = NULL;

            exception_lineno = 263;
            type_description_1 = "ococcocococcocc";
            goto try_except_handler_4;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 263;
            type_description_1 = "ococcocococcocc";
            goto try_except_handler_4;
        }

        tmp_args_element_name_5 = PyCell_GET( self->m_closure[1] );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "F" );
            exception_tb = NULL;

            exception_lineno = 263;
            type_description_1 = "ococcocococcocc";
            goto try_except_handler_4;
        }

        tmp_args_element_name_6 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( var_xb );
        tmp_args_element_name_7 = var_xb;
        CHECK_OBJECT( var_y );
        tmp_args_element_name_8 = var_y;
        if ( PyCell_GET( self->m_closure[6] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "tol_prec" );
            exception_tb = NULL;

            exception_lineno = 263;
            type_description_1 = "ococcocococcocc";
            goto try_except_handler_4;
        }

        tmp_args_element_name_9 = PyCell_GET( self->m_closure[6] );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "degree" );
            exception_tb = NULL;

            exception_lineno = 263;
            type_description_1 = "ococcocococcocc";
            goto try_except_handler_4;
        }

        tmp_args_element_name_10 = PyCell_GET( self->m_closure[2] );
        frame_eef9639ec59814148802c9080fe1d176->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_3, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "ococcocococcocc";
            goto try_except_handler_4;
        }
        tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "ococcocococcocc";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_4, 0 );
        if ( tmp_assign_source_12 == NULL )
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


            type_description_1 = "ococcocococcocc";
            exception_lineno = 263;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_5, 1 );
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


            type_description_1 = "ococcocococcocc";
            exception_lineno = 263;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
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

                    type_description_1 = "ococcocococcocc";
                    exception_lineno = 263;
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

            type_description_1 = "ococcocococcocc";
            exception_lineno = 263;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

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
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_ser;
            assert( old != NULL );
            var_ser = tmp_assign_source_14;
            Py_INCREF( var_ser );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_xb;
            assert( old != NULL );
            var_xb = tmp_assign_source_15;
            Py_INCREF( var_xb );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_11;
        if ( PyCell_GET( self->m_closure[4] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "series_boundaries" );
            exception_tb = NULL;

            exception_lineno = 264;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[4] );
        CHECK_OBJECT( var_xb );
        tmp_args_element_name_11 = var_xb;
        frame_eef9639ec59814148802c9080fe1d176->m_frame.f_lineno = 264;
        {
            PyObject *call_args[] = { tmp_args_element_name_11 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_tuple_element_2;
        if ( PyCell_GET( self->m_closure[5] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "series_data" );
            exception_tb = NULL;

            exception_lineno = 265;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = PyCell_GET( self->m_closure[5] );
        CHECK_OBJECT( var_ser );
        tmp_tuple_element_2 = var_ser;
        tmp_args_element_name_12 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_12, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_xa );
        tmp_tuple_element_2 = var_xa;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_12, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( var_xb );
        tmp_tuple_element_2 = var_xb;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_12, 2, tmp_tuple_element_2 );
        frame_eef9639ec59814148802c9080fe1d176->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
        }

        Py_DECREF( tmp_args_element_name_12 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;
            type_description_1 = "ococcocococcocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_3 = par_x;
        CHECK_OBJECT( var_xb );
        tmp_compexpr_right_3 = var_xb;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "ococcocococcocc";
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
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            if ( PyCell_GET( self->m_closure[5] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "series_data" );
                exception_tb = NULL;

                exception_lineno = 267;
                type_description_1 = "ococcocococcocc";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_3 = PyCell_GET( self->m_closure[5] );
            tmp_subscript_name_3 = const_int_neg_1;
            tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, -1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "ococcocococcocc";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_4:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        type_description_1 = "ococcocococcocc";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eef9639ec59814148802c9080fe1d176 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eef9639ec59814148802c9080fe1d176 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eef9639ec59814148802c9080fe1d176 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eef9639ec59814148802c9080fe1d176, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eef9639ec59814148802c9080fe1d176->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eef9639ec59814148802c9080fe1d176, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eef9639ec59814148802c9080fe1d176,
        type_description_1,
        par_x,
        self->m_closure[6],
        var_ser,
        self->m_closure[2],
        self->m_closure[0],
        var_xb,
        self->m_closure[4],
        var_xa,
        self->m_closure[1],
        var_n,
        self->m_closure[3],
        self->m_closure[5],
        var_y,
        self->m_closure[8],
        self->m_closure[7]
    );


    // Release cached frame.
    if ( frame_eef9639ec59814148802c9080fe1d176 == cache_frame_eef9639ec59814148802c9080fe1d176 )
    {
        Py_DECREF( frame_eef9639ec59814148802c9080fe1d176 );
    }
    cache_frame_eef9639ec59814148802c9080fe1d176 = NULL;

    assertFrameObject( frame_eef9639ec59814148802c9080fe1d176 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun$$$function_3_get_series );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_ser );
    var_ser = NULL;

    Py_XDECREF( var_xb );
    var_xb = NULL;

    Py_XDECREF( var_xa );
    var_xa = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( var_ser );
    var_ser = NULL;

    Py_XDECREF( var_xb );
    var_xb = NULL;

    Py_XDECREF( var_xa );
    var_xa = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun$$$function_3_get_series );
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


static PyObject *impl_mpmath$calculus$odes$$$function_2_odefun$$$function_4_interpolant( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *var_yk = NULL;
    PyObject *var_ser = NULL;
    PyObject *var_xb = NULL;
    PyObject *var_xa = NULL;
    PyObject *var_y = NULL;
    PyObject *var_orig = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9bb4b1f691bad3e318c41ccc9060c7b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_9bb4b1f691bad3e318c41ccc9060c7b7 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9bb4b1f691bad3e318c41ccc9060c7b7, codeobj_9bb4b1f691bad3e318c41ccc9060c7b7, module_mpmath$calculus$odes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9bb4b1f691bad3e318c41ccc9060c7b7 = cache_frame_9bb4b1f691bad3e318c41ccc9060c7b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9bb4b1f691bad3e318c41ccc9060c7b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9bb4b1f691bad3e318c41ccc9060c7b7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 270;
            type_description_1 = "ooooocccccoo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_9bb4b1f691bad3e318c41ccc9060c7b7->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_convert, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "ooooocccccoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert( old != NULL );
            par_x = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 271;
            type_description_1 = "ooooocccccoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prec );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;
            type_description_1 = "ooooocccccoo";
            goto frame_exception_exit_1;
        }
        assert( var_orig == NULL );
        var_orig = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        if ( PyCell_GET( self->m_closure[4] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "workprec" );
            exception_tb = NULL;

            exception_lineno = 273;
            type_description_1 = "ooooocccccoo";
            goto try_except_handler_2;
        }

        tmp_assattr_name_1 = PyCell_GET( self->m_closure[4] );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 273;
            type_description_1 = "ooooocccccoo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_1 = PyCell_GET( self->m_closure[0] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_prec, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooooocccccoo";
            goto try_except_handler_2;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_2;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "get_series" );
            exception_tb = NULL;

            exception_lineno = 274;
            type_description_1 = "ooooocccccoo";
            goto try_except_handler_3;
        }

        tmp_called_name_1 = PyCell_GET( self->m_closure[1] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_9bb4b1f691bad3e318c41ccc9060c7b7->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ooooocccccoo";
            goto try_except_handler_3;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ooooocccccoo";
            goto try_except_handler_3;
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


            type_description_1 = "ooooocccccoo";
            exception_lineno = 274;
            goto try_except_handler_4;
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


            type_description_1 = "ooooocccccoo";
            exception_lineno = 274;
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


            type_description_1 = "ooooocccccoo";
            exception_lineno = 274;
            goto try_except_handler_4;
        }
        assert( tmp_tuple_unpack_1__element_3 == NULL );
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
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

                    type_description_1 = "ooooocccccoo";
                    exception_lineno = 274;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooocccccoo";
            exception_lineno = 274;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert( var_ser == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_ser = tmp_assign_source_7;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert( var_xa == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_xa = tmp_assign_source_8;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert( var_xb == NULL );
        Py_INCREF( tmp_assign_source_9 );
        var_xb = tmp_assign_source_9;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "mpolyval" );
            exception_tb = NULL;

            exception_lineno = 275;
            type_description_1 = "ooooocccccoo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = PyCell_GET( self->m_closure[2] );
        CHECK_OBJECT( var_ser );
        tmp_args_element_name_3 = var_ser;
        CHECK_OBJECT( par_x );
        tmp_left_name_1 = par_x;
        CHECK_OBJECT( var_xa );
        tmp_right_name_1 = var_xa;
        tmp_args_element_name_4 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "ooooocccccoo";
            goto try_except_handler_2;
        }
        frame_9bb4b1f691bad3e318c41ccc9060c7b7->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "ooooocccccoo";
            goto try_except_handler_2;
        }
        assert( var_y == NULL );
        var_y = tmp_assign_source_10;
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
        CHECK_OBJECT( var_orig );
        tmp_assattr_name_2 = var_orig;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            Py_DECREF( exception_keeper_type_3 );
            Py_XDECREF( exception_keeper_value_3 );
            Py_XDECREF( exception_keeper_tb_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 277;
            type_description_1 = "ooooocccccoo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = PyCell_GET( self->m_closure[0] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_prec, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_3 );
            Py_XDECREF( exception_keeper_value_3 );
            Py_XDECREF( exception_keeper_tb_3 );

            exception_lineno = 277;
            type_description_1 = "ooooocccccoo";
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
        CHECK_OBJECT( var_orig );
        tmp_assattr_name_3 = var_orig;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 277;
            type_description_1 = "ooooocccccoo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = PyCell_GET( self->m_closure[0] );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_prec, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 277;
            type_description_1 = "ooooocccccoo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "return_vector" );
            exception_tb = NULL;

            exception_lineno = 278;
            type_description_1 = "ooooocccccoo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( PyCell_GET( self->m_closure[3] ) );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "ooooocccccoo";
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
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( var_y );
            tmp_iter_arg_2 = var_y;
            tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "ooooocccccoo";
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
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT( tmp_list_contraction_1__$0 );
            tmp_next_source_1 = tmp_list_contraction_1__$0;
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
                    type_description_1 = "ooooocccccoo";
                    exception_lineno = 279;
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
                PyObject *old = var_yk;
                var_yk = tmp_assign_source_14;
                Py_INCREF( var_yk );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
            tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
            CHECK_OBJECT( var_yk );
            tmp_operand_name_1 = var_yk;
            tmp_append_value_1 = UNARY_OPERATION( PyNumber_Positive, tmp_operand_name_1 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "ooooocccccoo";
                goto try_except_handler_5;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "ooooocccccoo";
                goto try_except_handler_5;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 279;
            type_description_1 = "ooooocccccoo";
            goto try_except_handler_5;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_return_value = tmp_list_contraction_1__contraction_result;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun$$$function_4_interpolant );
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

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun$$$function_4_interpolant );
        return NULL;
        outline_result_1:;
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_operand_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_y );
            tmp_subscribed_name_1 = var_y;
            tmp_subscript_name_1 = const_int_0;
            tmp_operand_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 281;
                type_description_1 = "ooooocccccoo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = UNARY_OPERATION( PyNumber_Positive, tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 281;
                type_description_1 = "ooooocccccoo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bb4b1f691bad3e318c41ccc9060c7b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bb4b1f691bad3e318c41ccc9060c7b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bb4b1f691bad3e318c41ccc9060c7b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9bb4b1f691bad3e318c41ccc9060c7b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9bb4b1f691bad3e318c41ccc9060c7b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9bb4b1f691bad3e318c41ccc9060c7b7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9bb4b1f691bad3e318c41ccc9060c7b7,
        type_description_1,
        par_x,
        var_yk,
        var_ser,
        var_xb,
        var_xa,
        self->m_closure[0],
        self->m_closure[3],
        self->m_closure[2],
        self->m_closure[4],
        self->m_closure[1],
        var_y,
        var_orig
    );


    // Release cached frame.
    if ( frame_9bb4b1f691bad3e318c41ccc9060c7b7 == cache_frame_9bb4b1f691bad3e318c41ccc9060c7b7 )
    {
        Py_DECREF( frame_9bb4b1f691bad3e318c41ccc9060c7b7 );
    }
    cache_frame_9bb4b1f691bad3e318c41ccc9060c7b7 = NULL;

    assertFrameObject( frame_9bb4b1f691bad3e318c41ccc9060c7b7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun$$$function_4_interpolant );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_yk );
    var_yk = NULL;

    CHECK_OBJECT( (PyObject *)var_ser );
    Py_DECREF( var_ser );
    var_ser = NULL;

    CHECK_OBJECT( (PyObject *)var_xb );
    Py_DECREF( var_xb );
    var_xb = NULL;

    CHECK_OBJECT( (PyObject *)var_xa );
    Py_DECREF( var_xa );
    var_xa = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)var_orig );
    Py_DECREF( var_orig );
    var_orig = NULL;

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

    Py_XDECREF( var_yk );
    var_yk = NULL;

    Py_XDECREF( var_ser );
    var_ser = NULL;

    Py_XDECREF( var_xb );
    var_xb = NULL;

    Py_XDECREF( var_xa );
    var_xa = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$odes$$$function_2_odefun$$$function_4_interpolant );
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



static PyObject *MAKE_FUNCTION_mpmath$calculus$odes$$$function_1_ode_taylor(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$calculus$odes$$$function_1_ode_taylor,
        const_str_plain_ode_taylor,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4df93261ba6a7ba198f0efd96ee0c19d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$calculus$odes,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$calculus$odes$$$function_2_odefun,
        const_str_plain_odefun,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_71ee14f22074e941ffd774d42cb5e481,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$calculus$odes,
        const_str_digest_42aedbd2446d8a0c543c41ac810b83b4,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$calculus$odes$$$function_2_odefun$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c01592eb8960b725f1da443078fdc307,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$calculus$odes,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun$$$function_2_mpolyval(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$calculus$odes$$$function_2_odefun$$$function_2_mpolyval,
        const_str_plain_mpolyval,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8fa47271ab500f4a05f856f6f9521360,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$calculus$odes,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun$$$function_3_get_series(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$calculus$odes$$$function_2_odefun$$$function_3_get_series,
        const_str_plain_get_series,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eef9639ec59814148802c9080fe1d176,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$calculus$odes,
        NULL,
        9
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun$$$function_4_interpolant(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$calculus$odes$$$function_2_odefun$$$function_4_interpolant,
        const_str_plain_interpolant,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9bb4b1f691bad3e318c41ccc9060c7b7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$calculus$odes,
        NULL,
        5
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_mpmath$calculus$odes =
{
    PyModuleDef_HEAD_INIT,
    "mpmath.calculus.odes",
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

MOD_INIT_DECL( mpmath$calculus$odes )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_mpmath$calculus$odes );
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
    puts("mpmath.calculus.odes: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath.calculus.odes: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath.calculus.odes: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmpmath$calculus$odes" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_mpmath$calculus$odes = Py_InitModule4(
        "mpmath.calculus.odes",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_mpmath$calculus$odes = PyModule_Create( &mdef_mpmath$calculus$odes );
#endif

    moduledict_mpmath$calculus$odes = MODULE_DICT( module_mpmath$calculus$odes );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_mpmath$calculus$odes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath$calculus$odes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath$calculus$odes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_mpmath$calculus$odes );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_2d5ff0dfe4098e02407961bcc2642558, module_mpmath$calculus$odes );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    struct Nuitka_FrameObject *frame_89bbcba8a6a29b36c4914d002ce0e407;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_5261af708f5a0a234e946574dd45662d;
        UPDATE_STRING_DICT0( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_89bbcba8a6a29b36c4914d002ce0e407 = MAKE_MODULE_FRAME( codeobj_89bbcba8a6a29b36c4914d002ce0e407, module_mpmath$calculus$odes );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_89bbcba8a6a29b36c4914d002ce0e407 );
    assert( Py_REFCNT( frame_89bbcba8a6a29b36c4914d002ce0e407 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_bisect;
        tmp_globals_name_1 = (PyObject *)moduledict_mpmath$calculus$odes;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_bisect_tuple;
        frame_89bbcba8a6a29b36c4914d002ce0e407->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_bisect );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain_bisect, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_1;
        tmp_name_name_2 = const_str_digest_2ede97835081434196d0c826ef1e1b08;
        tmp_globals_name_2 = (PyObject *)moduledict_mpmath$calculus$odes;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_xrange_tuple;
        tmp_level_name_1 = const_int_pos_2;
        frame_89bbcba8a6a29b36c4914d002ce0e407->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_1 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_xrange );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyDict_Copy( const_dict_1abf55193e08d71628d4297c95cb49bb );
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
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


            exception_lineno = 4;

            goto try_except_handler_1;
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
        tmp_assign_source_6 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_6 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_6 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_ODEMethods;
        tmp_args_element_name_2 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_89bbcba8a6a29b36c4914d002ce0e407->m_frame.f_lineno = 4;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_7;
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
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_8 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain_ODEMethods, tmp_assign_source_8 );
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
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_mpmath$calculus$odes$$$function_1_ode_taylor(  );



        UPDATE_STRING_DICT1( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain_ode_taylor, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_none_str_plain_taylor_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_10 = MAKE_FUNCTION_mpmath$calculus$odes$$$function_2_odefun( tmp_defaults_1 );



        UPDATE_STRING_DICT1( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain_odefun, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain_odefun );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_odefun );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_assattr_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain_ODEMethods );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ODEMethods );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ODEMethods" );
            exception_tb = NULL;

            exception_lineno = 284;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_odefun, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_89bbcba8a6a29b36c4914d002ce0e407 );
#endif
    popFrameStack();

    assertFrameObject( frame_89bbcba8a6a29b36c4914d002ce0e407 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_89bbcba8a6a29b36c4914d002ce0e407 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_89bbcba8a6a29b36c4914d002ce0e407, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_89bbcba8a6a29b36c4914d002ce0e407->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_89bbcba8a6a29b36c4914d002ce0e407, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$odes, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_mpmath$calculus$odes );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
