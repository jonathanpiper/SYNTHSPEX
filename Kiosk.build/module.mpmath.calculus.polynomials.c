/* Generated code for Python module 'mpmath.calculus.polynomials'
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

/* The "_module_mpmath$calculus$polynomials" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mpmath$calculus$polynomials;
PyDictObject *moduledict_mpmath$calculus$polynomials;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_str_plain_xrange_tuple;
extern PyObject *const_str_plain_q;
extern PyObject *const_str_plain_ctx;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_mpc;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___doc__;
static PyObject *const_complex_0_4__0_9;
extern PyObject *const_str_plain_min;
static PyObject *const_str_digest_901482963c511fe57636b6ffbe538b22;
static PyObject *const_tuple_int_pos_50_true_int_pos_10_false_none_tuple;
extern PyObject *const_str_plain_prec;
extern PyObject *const_int_pos_10;
static PyObject *const_str_digest_e588db2240ff5f6840dd1df26585f68d;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_eps;
static PyObject *const_tuple_str_plain_x_str_plain_coeffs_str_plain_ctx_tuple;
extern PyObject *const_tuple_str_plain_defun_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain__im;
extern PyObject *const_int_pos_50;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_sort;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_digest_2ede97835081434196d0c826ef1e1b08;
static PyObject *const_str_digest_b5a31319a7465de976ccb63c413c6411;
extern PyObject *const_str_plain_zero;
extern PyObject *const_str_plain_key;
static PyObject *const_str_digest_030f09f450ae88b85cded26ddc7dd5dd;
static PyObject *const_tuple_895d98fe064744cad8e7d8bedf0fb9ee_tuple;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_convert;
extern PyObject *const_str_plain_defun;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_ldexp;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_complex_0_0__1_0;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_e5a59e446df596287cca52db6f7322bf;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_derivative;
extern PyObject *const_str_plain_calculus;
extern PyObject *const_list_none_list;
extern PyObject *const_str_plain_one;
extern PyObject *const_str_plain_polyval;
extern PyObject *const_str_plain_NoConvergence;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_imag;
extern PyObject *const_str_plain_polyroots;
extern PyObject *const_str_plain__re;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_int_0;
static PyObject *const_tuple_4bf966d69f4bd96520fadc7d13392c79_tuple;
static PyObject *const_str_digest_3639c2c2c03590196237d2894260f39c;
static PyObject *const_str_digest_5bc1cb20949dff02dcf2b76990473e52;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_extraprec;
extern PyObject *const_str_plain_xrange;
extern PyObject *const_str_plain_coeffs;
extern PyObject *const_str_plain_p;
extern PyObject *const_tuple_str_plain_x_str_plain_ctx_tuple;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_complex_0_4__0_9 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 163095 ], 17 );
    const_str_digest_901482963c511fe57636b6ffbe538b22 = UNSTREAM_STRING( &constant_bin[ 163112 ], 36, 0 );
    const_tuple_int_pos_50_true_int_pos_10_false_none_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_int_pos_10_false_none_tuple, 0, const_int_pos_50 ); Py_INCREF( const_int_pos_50 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_int_pos_10_false_none_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_int_pos_10_false_none_tuple, 2, const_int_pos_10 ); Py_INCREF( const_int_pos_10 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_int_pos_10_false_none_tuple, 3, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_int_pos_10_false_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    const_str_digest_e588db2240ff5f6840dd1df26585f68d = UNSTREAM_STRING( &constant_bin[ 163148 ], 50, 0 );
    const_tuple_str_plain_x_str_plain_coeffs_str_plain_ctx_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_coeffs_str_plain_ctx_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_coeffs_str_plain_ctx_tuple, 1, const_str_plain_coeffs ); Py_INCREF( const_str_plain_coeffs );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_coeffs_str_plain_ctx_tuple, 2, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    const_str_digest_b5a31319a7465de976ccb63c413c6411 = UNSTREAM_STRING( &constant_bin[ 163198 ], 37, 0 );
    const_str_digest_030f09f450ae88b85cded26ddc7dd5dd = UNSTREAM_STRING( &constant_bin[ 163120 ], 27, 0 );
    const_tuple_895d98fe064744cad8e7d8bedf0fb9ee_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 163235 ], 210 );
    const_str_digest_e5a59e446df596287cca52db6f7322bf = UNSTREAM_STRING( &constant_bin[ 163445 ], 658, 0 );
    const_tuple_4bf966d69f4bd96520fadc7d13392c79_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4bf966d69f4bd96520fadc7d13392c79_tuple, 0, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_4bf966d69f4bd96520fadc7d13392c79_tuple, 1, const_str_plain_coeffs ); Py_INCREF( const_str_plain_coeffs );
    PyTuple_SET_ITEM( const_tuple_4bf966d69f4bd96520fadc7d13392c79_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_4bf966d69f4bd96520fadc7d13392c79_tuple, 3, const_str_plain_derivative ); Py_INCREF( const_str_plain_derivative );
    PyTuple_SET_ITEM( const_tuple_4bf966d69f4bd96520fadc7d13392c79_tuple, 4, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_4bf966d69f4bd96520fadc7d13392c79_tuple, 5, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_4bf966d69f4bd96520fadc7d13392c79_tuple, 6, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_str_digest_3639c2c2c03590196237d2894260f39c = UNSTREAM_STRING( &constant_bin[ 164103 ], 4173, 0 );
    const_str_digest_5bc1cb20949dff02dcf2b76990473e52 = UNSTREAM_STRING( &constant_bin[ 168276 ], 69, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_mpmath$calculus$polynomials( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c0d0536c2e8a48cf543ffcbb261388df;
static PyCodeObject *codeobj_1251efd7debbfb0a10563e8a095bc717;
static PyCodeObject *codeobj_e7d92a9cd56be61397ff6d7f18b047e4;
static PyCodeObject *codeobj_ea2aa815f0f7c11f568be383e8186270;
static PyCodeObject *codeobj_99dab52e61947330c75f54ed64ed35da;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_5bc1cb20949dff02dcf2b76990473e52;
    codeobj_c0d0536c2e8a48cf543ffcbb261388df = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 169, const_tuple_str_plain_x_str_plain_coeffs_str_plain_ctx_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_1251efd7debbfb0a10563e8a095bc717 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 206, const_tuple_str_plain_x_str_plain_ctx_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_e7d92a9cd56be61397ff6d7f18b047e4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_901482963c511fe57636b6ffbe538b22, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_ea2aa815f0f7c11f568be383e8186270 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyroots, 46, const_tuple_895d98fe064744cad8e7d8bedf0fb9ee_tuple, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_99dab52e61947330c75f54ed64ed35da = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyval, 9, const_tuple_4bf966d69f4bd96520fadc7d13392c79_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_mpmath$calculus$polynomials$$$function_1_polyval( PyObject *defaults );


static PyObject *MAKE_FUNCTION_mpmath$calculus$polynomials$$$function_2_polyroots( PyObject *defaults );


static PyObject *MAKE_FUNCTION_mpmath$calculus$polynomials$$$function_2_polyroots$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_mpmath$calculus$polynomials$$$function_2_polyroots$$$function_2_lambda(  );


// The module function definitions.
static PyObject *impl_mpmath$calculus$polynomials$$$function_1_polyval( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[ 0 ];
    PyObject *par_coeffs = python_pars[ 1 ];
    PyObject *par_x = python_pars[ 2 ];
    PyObject *par_derivative = python_pars[ 3 ];
    PyObject *var_c = NULL;
    PyObject *var_q = NULL;
    PyObject *var_p = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_99dab52e61947330c75f54ed64ed35da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_99dab52e61947330c75f54ed64ed35da = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_99dab52e61947330c75f54ed64ed35da, codeobj_99dab52e61947330c75f54ed64ed35da, module_mpmath$calculus$polynomials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_99dab52e61947330c75f54ed64ed35da = cache_frame_99dab52e61947330c75f54ed64ed35da;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_99dab52e61947330c75f54ed64ed35da );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_99dab52e61947330c75f54ed64ed35da ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_coeffs );
        tmp_operand_name_1 = par_coeffs;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_ctx );
            tmp_source_name_1 = par_ctx;
            tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zero );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 34;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_2 = par_ctx;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_convert );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_coeffs );
        tmp_subscribed_name_1 = par_coeffs;
        tmp_subscript_name_1 = const_int_0;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_99dab52e61947330c75f54ed64ed35da->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p == NULL );
        var_p = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_ctx );
        tmp_source_name_3 = par_ctx;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zero );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_q == NULL );
        var_q = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        Py_ssize_t tmp_sliceslicedel_index_lower_1;
        Py_ssize_t tmp_slice_index_upper_1;
        PyObject *tmp_slice_source_1;
        tmp_sliceslicedel_index_lower_1 = 1;
        tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
        CHECK_OBJECT( par_coeffs );
        tmp_slice_source_1 = par_coeffs;
        tmp_iter_arg_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooooooo";
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
                type_description_1 = "ooooooo";
                exception_lineno = 37;
                goto try_except_handler_2;
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
            PyObject *old = var_c;
            var_c = tmp_assign_source_5;
            Py_INCREF( var_c );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_derivative );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_derivative );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( var_p );
            tmp_left_name_1 = var_p;
            CHECK_OBJECT( par_x );
            tmp_left_name_2 = par_x;
            if ( var_q == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "q" );
                exception_tb = NULL;

                exception_lineno = 39;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }

            tmp_right_name_2 = var_q;
            tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_q;
                var_q = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        CHECK_OBJECT( var_c );
        tmp_left_name_3 = var_c;
        CHECK_OBJECT( par_x );
        tmp_left_name_4 = par_x;
        CHECK_OBJECT( var_p );
        tmp_right_name_4 = var_p;
        tmp_right_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_p;
            assert( old != NULL );
            var_p = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooooooo";
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
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_derivative );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_derivative );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;
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
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( var_p );
            tmp_tuple_element_1 = var_p;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            if ( var_q == NULL )
            {
                Py_DECREF( tmp_return_value );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "q" );
                exception_tb = NULL;

                exception_lineno = 42;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = var_q;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        goto branch_end_3;
        branch_no_3:;
        CHECK_OBJECT( var_p );
        tmp_return_value = var_p;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99dab52e61947330c75f54ed64ed35da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_99dab52e61947330c75f54ed64ed35da );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99dab52e61947330c75f54ed64ed35da );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_99dab52e61947330c75f54ed64ed35da, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_99dab52e61947330c75f54ed64ed35da->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_99dab52e61947330c75f54ed64ed35da, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_99dab52e61947330c75f54ed64ed35da,
        type_description_1,
        par_ctx,
        par_coeffs,
        par_x,
        par_derivative,
        var_c,
        var_q,
        var_p
    );


    // Release cached frame.
    if ( frame_99dab52e61947330c75f54ed64ed35da == cache_frame_99dab52e61947330c75f54ed64ed35da )
    {
        Py_DECREF( frame_99dab52e61947330c75f54ed64ed35da );
    }
    cache_frame_99dab52e61947330c75f54ed64ed35da = NULL;

    assertFrameObject( frame_99dab52e61947330c75f54ed64ed35da );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_1_polyval );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    CHECK_OBJECT( (PyObject *)par_derivative );
    Py_DECREF( par_derivative );
    par_derivative = NULL;

    CHECK_OBJECT( (PyObject *)par_coeffs );
    Py_DECREF( par_coeffs );
    par_coeffs = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    CHECK_OBJECT( (PyObject *)par_derivative );
    Py_DECREF( par_derivative );
    par_derivative = NULL;

    CHECK_OBJECT( (PyObject *)par_coeffs );
    Py_DECREF( par_coeffs );
    par_coeffs = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_1_polyval );
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


static PyObject *impl_mpmath$calculus$polynomials$$$function_2_polyroots( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_ctx = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_coeffs = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_maxsteps = python_pars[ 2 ];
    PyObject *par_cleanup = python_pars[ 3 ];
    PyObject *par_extraprec = python_pars[ 4 ];
    PyObject *par_error = python_pars[ 5 ];
    PyObject *par_roots_init = python_pars[ 6 ];
    PyObject *var_roots = NULL;
    PyObject *var_orig = NULL;
    PyObject *var_lead = NULL;
    PyObject *var_tol = NULL;
    PyObject *var_deg_init = NULL;
    PyObject *var_step = NULL;
    PyObject *var_c = NULL;
    PyObject *var_err = NULL;
    PyObject *var_f = NULL;
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *var_n = NULL;
    PyObject *var_p = NULL;
    PyObject *var_r = NULL;
    PyObject *var_x = NULL;
    PyObject *var_deg = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
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
    PyObject *tmp_list_contraction_7__$0 = NULL;
    PyObject *tmp_list_contraction_7__contraction_result = NULL;
    PyObject *tmp_list_contraction_7__iter_value_0 = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_ea2aa815f0f7c11f568be383e8186270;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    bool tmp_result;
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
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    static struct Nuitka_FrameObject *cache_frame_ea2aa815f0f7c11f568be383e8186270 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ea2aa815f0f7c11f568be383e8186270, codeobj_ea2aa815f0f7c11f568be383e8186270, module_mpmath$calculus$polynomials, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ea2aa815f0f7c11f568be383e8186270 = cache_frame_ea2aa815f0f7c11f568be383e8186270;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ea2aa815f0f7c11f568be383e8186270 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ea2aa815f0f7c11f568be383e8186270 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( PyCell_GET( par_coeffs ) );
        tmp_len_arg_1 = PyCell_GET( par_coeffs );
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ccooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
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
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( PyCell_GET( par_coeffs ) );
            tmp_operand_name_1 = PyCell_GET( par_coeffs );
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "ccooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_left_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( PyCell_GET( par_coeffs ) );
            tmp_subscribed_name_1 = PyCell_GET( par_coeffs );
            tmp_subscript_name_1 = const_int_0;
            tmp_operand_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "ccooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "ccooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_e588db2240ff5f6840dd1df26585f68d;
                frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 155;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 155;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ccooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        tmp_return_value = PyList_New( 0 );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_1 = PyCell_GET( par_ctx );
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prec );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ccooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_orig == NULL );
        var_orig = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_2 = PyCell_GET( par_ctx );
        tmp_operand_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_eps );
        if ( tmp_operand_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ccooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = UNARY_OPERATION( PyNumber_Positive, tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ccooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_tol == NULL );
        var_tol = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_called_instance_1 = PyCell_GET( par_ctx );
        CHECK_OBJECT( par_extraprec );
        tmp_args_element_name_1 = par_extraprec;
        frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 161;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_extraprec, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_3 = tmp_with_1__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___exit__ );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_4 = tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___enter__ );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 161;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( PyCell_GET( par_coeffs ) );
        tmp_len_arg_2 = PyCell_GET( par_coeffs );
        tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_7 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( var_deg == NULL );
        var_deg = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( PyCell_GET( par_ctx ) );
        tmp_source_name_5 = PyCell_GET( par_ctx );
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_convert );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( PyCell_GET( par_coeffs ) );
        tmp_subscribed_name_2 = PyCell_GET( par_coeffs );
        tmp_subscript_name_2 = const_int_0;
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 164;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( var_lead == NULL );
        var_lead = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( var_lead );
        tmp_compexpr_left_2 = var_lead;
        tmp_compexpr_right_2 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
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
            PyObject *tmp_assign_source_9;
            // Tried code:
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_iter_arg_1;
                CHECK_OBJECT( PyCell_GET( par_coeffs ) );
                tmp_iter_arg_1 = PyCell_GET( par_coeffs );
                tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 166;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                assert( tmp_list_contraction_1__$0 == NULL );
                tmp_list_contraction_1__$0 = tmp_assign_source_10;
            }
            {
                PyObject *tmp_assign_source_11;
                tmp_assign_source_11 = PyList_New( 0 );
                assert( tmp_list_contraction_1__contraction_result == NULL );
                tmp_list_contraction_1__contraction_result = tmp_assign_source_11;
            }
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( tmp_list_contraction_1__$0 );
                tmp_next_source_1 = tmp_list_contraction_1__$0;
                tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_12 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_1;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ccooooooooooooooooooooo";
                        exception_lineno = 166;
                        goto try_except_handler_5;
                    }
                }

                {
                    PyObject *old = tmp_list_contraction_1__iter_value_0;
                    tmp_list_contraction_1__iter_value_0 = tmp_assign_source_12;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_13;
                CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
                tmp_assign_source_13 = tmp_list_contraction_1__iter_value_0;
                {
                    PyObject *old = var_c;
                    var_c = tmp_assign_source_13;
                    Py_INCREF( var_c );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
                tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
                CHECK_OBJECT( PyCell_GET( par_ctx ) );
                tmp_called_instance_2 = PyCell_GET( par_ctx );
                CHECK_OBJECT( var_c );
                tmp_args_element_name_3 = var_c;
                frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 166;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_convert, call_args );
                }

                if ( tmp_append_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 166;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 166;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
            tmp_assign_source_9 = tmp_list_contraction_1__contraction_result;
            Py_INCREF( tmp_assign_source_9 );
            goto try_return_handler_5;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
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

            goto try_except_handler_4;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
            return NULL;
            outline_result_1:;
            {
                PyObject *old = PyCell_GET( par_coeffs );
                PyCell_SET( par_coeffs, tmp_assign_source_9 );
                Py_XDECREF( old );
            }

        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_14;
            // Tried code:
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_iter_arg_2;
                CHECK_OBJECT( PyCell_GET( par_coeffs ) );
                tmp_iter_arg_2 = PyCell_GET( par_coeffs );
                tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 168;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                assert( tmp_list_contraction_2__$0 == NULL );
                tmp_list_contraction_2__$0 = tmp_assign_source_15;
            }
            {
                PyObject *tmp_assign_source_16;
                tmp_assign_source_16 = PyList_New( 0 );
                assert( tmp_list_contraction_2__contraction_result == NULL );
                tmp_list_contraction_2__contraction_result = tmp_assign_source_16;
            }
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_17;
                CHECK_OBJECT( tmp_list_contraction_2__$0 );
                tmp_next_source_2 = tmp_list_contraction_2__$0;
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
                        type_description_1 = "ccooooooooooooooooooooo";
                        exception_lineno = 168;
                        goto try_except_handler_6;
                    }
                }

                {
                    PyObject *old = tmp_list_contraction_2__iter_value_0;
                    tmp_list_contraction_2__iter_value_0 = tmp_assign_source_17;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_18;
                CHECK_OBJECT( tmp_list_contraction_2__iter_value_0 );
                tmp_assign_source_18 = tmp_list_contraction_2__iter_value_0;
                {
                    PyObject *old = var_c;
                    var_c = tmp_assign_source_18;
                    Py_INCREF( var_c );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                CHECK_OBJECT( tmp_list_contraction_2__contraction_result );
                tmp_append_list_2 = tmp_list_contraction_2__contraction_result;
                CHECK_OBJECT( var_c );
                tmp_left_name_2 = var_c;
                CHECK_OBJECT( var_lead );
                tmp_right_name_2 = var_lead;
                tmp_append_value_2 = BINARY_OPERATION_DIV( tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_append_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 168;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
                assert( PyList_Check( tmp_append_list_2 ) );
                tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
                Py_DECREF( tmp_append_value_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 168;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_6;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            goto loop_start_2;
            loop_end_2:;
            CHECK_OBJECT( tmp_list_contraction_2__contraction_result );
            tmp_assign_source_14 = tmp_list_contraction_2__contraction_result;
            Py_INCREF( tmp_assign_source_14 );
            goto try_return_handler_6;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
            return NULL;
            // Return handler code:
            try_return_handler_6:;
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
            try_except_handler_6:;
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

            goto try_except_handler_4;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
            return NULL;
            outline_result_2:;
            {
                PyObject *old = PyCell_GET( par_coeffs );
                PyCell_SET( par_coeffs, tmp_assign_source_14 );
                Py_XDECREF( old );
            }

        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_mpmath$calculus$polynomials$$$function_2_polyroots$$$function_1_lambda(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[0] = par_coeffs;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[1] = par_ctx;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_19)->m_closure[1] );


        assert( var_f == NULL );
        var_f = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_roots_init );
        tmp_compexpr_left_3 = par_roots_init;
        tmp_compexpr_right_3 = Py_None;
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
            PyObject *tmp_assign_source_20;
            // Tried code:
            {
                PyObject *tmp_assign_source_21;
                PyObject *tmp_iter_arg_3;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_4;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain_xrange );

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

                    exception_lineno = 171;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_7;
                }

                tmp_called_name_3 = tmp_mvar_value_1;
                CHECK_OBJECT( var_deg );
                tmp_args_element_name_4 = var_deg;
                frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 171;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                if ( tmp_iter_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 171;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_3 );
                Py_DECREF( tmp_iter_arg_3 );
                if ( tmp_assign_source_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 171;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                assert( tmp_list_contraction_3__$0 == NULL );
                tmp_list_contraction_3__$0 = tmp_assign_source_21;
            }
            {
                PyObject *tmp_assign_source_22;
                tmp_assign_source_22 = PyList_New( 0 );
                assert( tmp_list_contraction_3__contraction_result == NULL );
                tmp_list_contraction_3__contraction_result = tmp_assign_source_22;
            }
            loop_start_3:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_23;
                CHECK_OBJECT( tmp_list_contraction_3__$0 );
                tmp_next_source_3 = tmp_list_contraction_3__$0;
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
                        type_description_1 = "ccooooooooooooooooooooo";
                        exception_lineno = 171;
                        goto try_except_handler_7;
                    }
                }

                {
                    PyObject *old = tmp_list_contraction_3__iter_value_0;
                    tmp_list_contraction_3__iter_value_0 = tmp_assign_source_23;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_24;
                CHECK_OBJECT( tmp_list_contraction_3__iter_value_0 );
                tmp_assign_source_24 = tmp_list_contraction_3__iter_value_0;
                {
                    PyObject *old = var_n;
                    var_n = tmp_assign_source_24;
                    Py_INCREF( var_n );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_3;
                PyObject *tmp_append_value_3;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_6;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                CHECK_OBJECT( tmp_list_contraction_3__contraction_result );
                tmp_append_list_3 = tmp_list_contraction_3__contraction_result;
                CHECK_OBJECT( PyCell_GET( par_ctx ) );
                tmp_source_name_6 = PyCell_GET( par_ctx );
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_mpc );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 171;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                tmp_left_name_3 = const_complex_0_4__0_9;
                CHECK_OBJECT( var_n );
                tmp_right_name_3 = var_n;
                tmp_args_element_name_5 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
                if ( tmp_args_element_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 171;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 171;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_append_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_5 );
                if ( tmp_append_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 171;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
                assert( PyList_Check( tmp_append_list_3 ) );
                tmp_res = PyList_Append( tmp_append_list_3, tmp_append_value_3 );
                Py_DECREF( tmp_append_value_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 171;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_7;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            goto loop_start_3;
            loop_end_3:;
            CHECK_OBJECT( tmp_list_contraction_3__contraction_result );
            tmp_assign_source_20 = tmp_list_contraction_3__contraction_result;
            Py_INCREF( tmp_assign_source_20 );
            goto try_return_handler_7;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
            return NULL;
            // Return handler code:
            try_return_handler_7:;
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
            try_except_handler_7:;
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

            goto try_except_handler_4;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
            return NULL;
            outline_result_3:;
            assert( var_roots == NULL );
            var_roots = tmp_assign_source_20;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            tmp_left_name_4 = LIST_COPY( const_list_none_list );
            CHECK_OBJECT( var_deg );
            tmp_right_name_4 = var_deg;
            tmp_assign_source_25 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert( var_roots == NULL );
            var_roots = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_len_arg_3;
            tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_min );
            assert( tmp_called_name_5 != NULL );
            CHECK_OBJECT( var_deg );
            tmp_args_element_name_6 = var_deg;
            CHECK_OBJECT( par_roots_init );
            tmp_len_arg_3 = par_roots_init;
            tmp_args_element_name_7 = BUILTIN_LEN( tmp_len_arg_3 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 174;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 174;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert( var_deg_init == NULL );
            var_deg_init = tmp_assign_source_26;
        }
        {
            PyObject *tmp_sliceass_value_1;
            PyObject *tmp_list_arg_1;
            PyObject *tmp_slice_source_1;
            PyObject *tmp_slice_upper_1;
            PyObject *tmp_sliceass_target_1;
            PyObject *tmp_sliceass_upper_1;
            CHECK_OBJECT( par_roots_init );
            tmp_slice_source_1 = par_roots_init;
            CHECK_OBJECT( var_deg_init );
            tmp_slice_upper_1 = var_deg_init;
            tmp_list_arg_1 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
            if ( tmp_list_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_sliceass_value_1 = PySequence_List( tmp_list_arg_1 );
            Py_DECREF( tmp_list_arg_1 );
            if ( tmp_sliceass_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_roots );
            tmp_sliceass_target_1 = var_roots;
            CHECK_OBJECT( var_deg_init );
            tmp_sliceass_upper_1 = var_deg_init;
            tmp_result = SET_SLICE( tmp_sliceass_target_1, Py_None, tmp_sliceass_upper_1, tmp_sliceass_value_1 );
            Py_DECREF( tmp_sliceass_value_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_4;
            }
        }
        {
            PyObject *tmp_sliceass_value_2;
            PyObject *tmp_sliceass_target_2;
            PyObject *tmp_sliceass_lower_1;
            // Tried code:
            {
                PyObject *tmp_assign_source_27;
                PyObject *tmp_iter_arg_4;
                PyObject *tmp_called_name_6;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain_xrange );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "xrange" );
                    exception_tb = NULL;

                    exception_lineno = 177;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_8;
                }

                tmp_called_name_6 = tmp_mvar_value_2;
                CHECK_OBJECT( var_deg_init );
                tmp_args_element_name_8 = var_deg_init;
                CHECK_OBJECT( var_deg );
                tmp_args_element_name_9 = var_deg;
                frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 177;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
                    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
                }

                if ( tmp_iter_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 177;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_4 );
                Py_DECREF( tmp_iter_arg_4 );
                if ( tmp_assign_source_27 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 176;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                assert( tmp_list_contraction_4__$0 == NULL );
                tmp_list_contraction_4__$0 = tmp_assign_source_27;
            }
            {
                PyObject *tmp_assign_source_28;
                tmp_assign_source_28 = PyList_New( 0 );
                assert( tmp_list_contraction_4__contraction_result == NULL );
                tmp_list_contraction_4__contraction_result = tmp_assign_source_28;
            }
            loop_start_4:;
            {
                PyObject *tmp_next_source_4;
                PyObject *tmp_assign_source_29;
                CHECK_OBJECT( tmp_list_contraction_4__$0 );
                tmp_next_source_4 = tmp_list_contraction_4__$0;
                tmp_assign_source_29 = ITERATOR_NEXT( tmp_next_source_4 );
                if ( tmp_assign_source_29 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_4;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ccooooooooooooooooooooo";
                        exception_lineno = 176;
                        goto try_except_handler_8;
                    }
                }

                {
                    PyObject *old = tmp_list_contraction_4__iter_value_0;
                    tmp_list_contraction_4__iter_value_0 = tmp_assign_source_29;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_30;
                CHECK_OBJECT( tmp_list_contraction_4__iter_value_0 );
                tmp_assign_source_30 = tmp_list_contraction_4__iter_value_0;
                {
                    PyObject *old = var_n;
                    var_n = tmp_assign_source_30;
                    Py_INCREF( var_n );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_4;
                PyObject *tmp_append_value_4;
                PyObject *tmp_called_name_7;
                PyObject *tmp_source_name_7;
                PyObject *tmp_args_element_name_10;
                PyObject *tmp_left_name_5;
                PyObject *tmp_right_name_5;
                CHECK_OBJECT( tmp_list_contraction_4__contraction_result );
                tmp_append_list_4 = tmp_list_contraction_4__contraction_result;
                CHECK_OBJECT( PyCell_GET( par_ctx ) );
                tmp_source_name_7 = PyCell_GET( par_ctx );
                tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_mpc );
                if ( tmp_called_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 176;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                tmp_left_name_5 = const_complex_0_4__0_9;
                CHECK_OBJECT( var_n );
                tmp_right_name_5 = var_n;
                tmp_args_element_name_10 = POWER_OPERATION( tmp_left_name_5, tmp_right_name_5 );
                if ( tmp_args_element_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_7 );

                    exception_lineno = 176;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 176;
                {
                    PyObject *call_args[] = { tmp_args_element_name_10 };
                    tmp_append_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
                }

                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_10 );
                if ( tmp_append_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 176;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
                assert( PyList_Check( tmp_append_list_4 ) );
                tmp_res = PyList_Append( tmp_append_list_4, tmp_append_value_4 );
                Py_DECREF( tmp_append_value_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 176;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_8;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            goto loop_start_4;
            loop_end_4:;
            CHECK_OBJECT( tmp_list_contraction_4__contraction_result );
            tmp_sliceass_value_2 = tmp_list_contraction_4__contraction_result;
            Py_INCREF( tmp_sliceass_value_2 );
            goto try_return_handler_8;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
            return NULL;
            // Return handler code:
            try_return_handler_8:;
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
            try_except_handler_8:;
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

            goto try_except_handler_4;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
            return NULL;
            outline_result_4:;
            CHECK_OBJECT( var_roots );
            tmp_sliceass_target_2 = var_roots;
            CHECK_OBJECT( var_deg_init );
            tmp_sliceass_lower_1 = var_deg_init;
            tmp_result = SET_SLICE( tmp_sliceass_target_2, tmp_sliceass_lower_1, Py_None, tmp_sliceass_value_2 );
            Py_DECREF( tmp_sliceass_value_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_4;
            }
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_31;
        // Tried code:
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_11;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain_xrange );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "xrange" );
                exception_tb = NULL;

                exception_lineno = 178;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_9;
            }

            tmp_called_name_8 = tmp_mvar_value_3;
            CHECK_OBJECT( var_deg );
            tmp_args_element_name_11 = var_deg;
            frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 178;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
            }

            if ( tmp_iter_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            tmp_assign_source_32 = MAKE_ITERATOR( tmp_iter_arg_5 );
            Py_DECREF( tmp_iter_arg_5 );
            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            assert( tmp_list_contraction_5__$0 == NULL );
            tmp_list_contraction_5__$0 = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = PyList_New( 0 );
            assert( tmp_list_contraction_5__contraction_result == NULL );
            tmp_list_contraction_5__contraction_result = tmp_assign_source_33;
        }
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT( tmp_list_contraction_5__$0 );
            tmp_next_source_5 = tmp_list_contraction_5__$0;
            tmp_assign_source_34 = ITERATOR_NEXT( tmp_next_source_5 );
            if ( tmp_assign_source_34 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_5;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ccooooooooooooooooooooo";
                    exception_lineno = 178;
                    goto try_except_handler_9;
                }
            }

            {
                PyObject *old = tmp_list_contraction_5__iter_value_0;
                tmp_list_contraction_5__iter_value_0 = tmp_assign_source_34;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_35;
            CHECK_OBJECT( tmp_list_contraction_5__iter_value_0 );
            tmp_assign_source_35 = tmp_list_contraction_5__iter_value_0;
            {
                PyObject *old = var_n;
                var_n = tmp_assign_source_35;
                Py_INCREF( var_n );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            PyObject *tmp_source_name_8;
            CHECK_OBJECT( tmp_list_contraction_5__contraction_result );
            tmp_append_list_5 = tmp_list_contraction_5__contraction_result;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_source_name_8 = PyCell_GET( par_ctx );
            tmp_append_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_one );
            if ( tmp_append_value_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            assert( PyList_Check( tmp_append_list_5 ) );
            tmp_res = PyList_Append( tmp_append_list_5, tmp_append_value_5 );
            Py_DECREF( tmp_append_value_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_9;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT( tmp_list_contraction_5__contraction_result );
        tmp_assign_source_31 = tmp_list_contraction_5__contraction_result;
        Py_INCREF( tmp_assign_source_31 );
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
        return NULL;
        // Return handler code:
        try_return_handler_9:;
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
        try_except_handler_9:;
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

        goto try_except_handler_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
        return NULL;
        outline_result_5:;
        assert( var_err == NULL );
        var_err = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain_xrange );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "xrange" );
            exception_tb = NULL;

            exception_lineno = 180;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_9 = tmp_mvar_value_4;
        CHECK_OBJECT( par_maxsteps );
        tmp_args_element_name_12 = par_maxsteps;
        frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = { tmp_args_element_name_12 };
            tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_iter_arg_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_36 = MAKE_ITERATOR( tmp_iter_arg_6 );
        Py_DECREF( tmp_iter_arg_6 );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_36;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_6 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_37 = ITERATOR_NEXT( tmp_next_source_6 );
        if ( tmp_assign_source_37 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_6;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ccooooooooooooooooooooo";
                exception_lineno = 180;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_37;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_38 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_step;
            var_step = tmp_assign_source_38;
            Py_INCREF( var_step );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_14;
        tmp_called_name_10 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_10 != NULL );
        tmp_called_name_11 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_11 != NULL );
        CHECK_OBJECT( var_err );
        tmp_args_element_name_14 = var_err;
        frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = { tmp_args_element_name_14 };
            tmp_args_element_name_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
        }

        if ( tmp_args_element_name_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 181;
        {
            PyObject *call_args[] = { tmp_args_element_name_13 };
            tmp_compexpr_left_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
        }

        Py_DECREF( tmp_args_element_name_13 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT( var_tol );
        tmp_compexpr_right_4 = var_tol;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_10;
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
        goto loop_end_6;
        branch_no_5:;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_15;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain_xrange );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "xrange" );
            exception_tb = NULL;

            exception_lineno = 183;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_called_name_12 = tmp_mvar_value_5;
        CHECK_OBJECT( var_deg );
        tmp_args_element_name_15 = var_deg;
        frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 183;
        {
            PyObject *call_args[] = { tmp_args_element_name_15 };
            tmp_iter_arg_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
        }

        if ( tmp_iter_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_39 = MAKE_ITERATOR( tmp_iter_arg_7 );
        Py_DECREF( tmp_iter_arg_7 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_39;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_7 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_40 = ITERATOR_NEXT( tmp_next_source_7 );
        if ( tmp_assign_source_40 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_7;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ccooooooooooooooooooooo";
                exception_lineno = 183;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_40;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_41 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_41;
            Py_INCREF( var_i );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( var_roots );
        tmp_subscribed_name_3 = var_roots;
        CHECK_OBJECT( var_i );
        tmp_subscript_name_3 = var_i;
        tmp_assign_source_42 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_42;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_13;
        PyObject *tmp_args_element_name_16;
        CHECK_OBJECT( var_f );
        tmp_called_name_13 = var_f;
        CHECK_OBJECT( var_p );
        tmp_args_element_name_16 = var_p;
        frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = { tmp_args_element_name_16 };
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
        }

        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_43;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_range_arg_1;
        CHECK_OBJECT( var_deg );
        tmp_range_arg_1 = var_deg;
        tmp_iter_arg_8 = BUILTIN_RANGE( tmp_range_arg_1 );
        if ( tmp_iter_arg_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_44 = MAKE_ITERATOR( tmp_iter_arg_8 );
        Py_DECREF( tmp_iter_arg_8 );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_44;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT( tmp_for_loop_3__for_iterator );
        tmp_next_source_8 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_45 = ITERATOR_NEXT( tmp_next_source_8 );
        if ( tmp_assign_source_45 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_8;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ccooooooooooooooooooooo";
                exception_lineno = 186;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_45;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT( tmp_for_loop_3__iter_value );
        tmp_assign_source_46 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_46;
            Py_INCREF( var_j );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_i );
        tmp_compexpr_left_5 = var_i;
        CHECK_OBJECT( var_j );
        tmp_compexpr_right_5 = var_j;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_12;
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
        // Tried code:
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            if ( var_x == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "x" );
                exception_tb = NULL;

                exception_lineno = 189;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_13;
            }

            tmp_left_name_6 = var_x;
            CHECK_OBJECT( var_p );
            tmp_left_name_7 = var_p;
            CHECK_OBJECT( var_roots );
            tmp_subscribed_name_4 = var_roots;
            CHECK_OBJECT( var_j );
            tmp_subscript_name_4 = var_j;
            tmp_right_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_right_name_6 = BINARY_OPERATION_SUB( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_right_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceDivide, &tmp_left_name_6, tmp_right_name_6 );
            Py_DECREF( tmp_right_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_assign_source_47 = tmp_left_name_6;
            var_x = tmp_assign_source_47;

        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION( frame_ea2aa815f0f7c11f568be383e8186270 );
        if ( exception_keeper_tb_6 == NULL )
        {
            exception_keeper_tb_6 = MAKE_TRACEBACK( frame_ea2aa815f0f7c11f568be383e8186270, exception_keeper_lineno_6 );
        }
        else if ( exception_keeper_lineno_6 != 0 )
        {
            exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_ea2aa815f0f7c11f568be383e8186270, exception_keeper_lineno_6 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
        PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_6 = PyExc_ZeroDivisionError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 190;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_12;
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
            goto loop_start_8;
            goto branch_end_7;
            branch_no_7:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 188;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_ea2aa815f0f7c11f568be383e8186270->m_frame) frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_12;
            branch_end_7:;
        }
        // End of try:
        try_end_1:;
        branch_no_6:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "ccooooooooooooooooooooo";
        goto try_except_handler_12;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_11;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( var_p );
        tmp_left_name_8 = var_p;
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;

            exception_lineno = 192;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_right_name_8 = var_x;
        tmp_ass_subvalue_1 = BINARY_OPERATION_SUB( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT( var_roots );
        tmp_ass_subscribed_1 = var_roots;
        CHECK_OBJECT( var_i );
        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_11;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_name_14;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_called_name_14 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_14 != NULL );
        if ( var_x == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "x" );
            exception_tb = NULL;

            exception_lineno = 193;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_args_element_name_17 = var_x;
        frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = { tmp_args_element_name_17 };
            tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
        }

        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT( var_err );
        tmp_ass_subscribed_2 = var_err;
        CHECK_OBJECT( var_i );
        tmp_ass_subscript_2 = var_i;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_11;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "ccooooooooooooooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_11:;
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

    goto try_except_handler_10;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ccooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_4;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_called_name_15;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_called_name_16;
        PyObject *tmp_args_element_name_19;
        tmp_called_name_15 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_15 != NULL );
        tmp_called_name_16 = LOOKUP_BUILTIN( const_str_plain_max );
        assert( tmp_called_name_16 != NULL );
        CHECK_OBJECT( var_err );
        tmp_args_element_name_19 = var_err;
        frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = { tmp_args_element_name_19 };
            tmp_args_element_name_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
        }

        if ( tmp_args_element_name_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = { tmp_args_element_name_18 };
            tmp_compexpr_left_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
        }

        Py_DECREF( tmp_args_element_name_18 );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT( var_tol );
        tmp_compexpr_right_7 = var_tol;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_17;
            PyObject *tmp_source_name_9;
            PyObject *tmp_args_element_name_20;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_source_name_9 = PyCell_GET( par_ctx );
            tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_NoConvergence );
            if ( tmp_called_name_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_left_name_9 = const_str_digest_b5a31319a7465de976ccb63c413c6411;
            CHECK_OBJECT( par_maxsteps );
            tmp_right_name_9 = par_maxsteps;
            tmp_args_element_name_20 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
            if ( tmp_args_element_name_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_17 );

                exception_lineno = 195;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 195;
            {
                PyObject *call_args[] = { tmp_args_element_name_20 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
            }

            Py_DECREF( tmp_called_name_17 );
            Py_DECREF( tmp_args_element_name_20 );
            if ( tmp_raise_type_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 195;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 195;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_cleanup );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_cleanup );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_9 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_48;
            PyObject *tmp_iter_arg_9;
            PyObject *tmp_called_name_18;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_21;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain_xrange );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "xrange" );
                exception_tb = NULL;

                exception_lineno = 199;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_18 = tmp_mvar_value_6;
            CHECK_OBJECT( var_deg );
            tmp_args_element_name_21 = var_deg;
            frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 199;
            {
                PyObject *call_args[] = { tmp_args_element_name_21 };
                tmp_iter_arg_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
            }

            if ( tmp_iter_arg_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_assign_source_48 = MAKE_ITERATOR( tmp_iter_arg_9 );
            Py_DECREF( tmp_iter_arg_9 );
            if ( tmp_assign_source_48 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 199;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_for_loop_4__for_iterator == NULL );
            tmp_for_loop_4__for_iterator = tmp_assign_source_48;
        }
        // Tried code:
        loop_start_9:;
        {
            PyObject *tmp_next_source_9;
            PyObject *tmp_assign_source_49;
            CHECK_OBJECT( tmp_for_loop_4__for_iterator );
            tmp_next_source_9 = tmp_for_loop_4__for_iterator;
            tmp_assign_source_49 = ITERATOR_NEXT( tmp_next_source_9 );
            if ( tmp_assign_source_49 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_9;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ccooooooooooooooooooooo";
                    exception_lineno = 199;
                    goto try_except_handler_14;
                }
            }

            {
                PyObject *old = tmp_for_loop_4__iter_value;
                tmp_for_loop_4__iter_value = tmp_assign_source_49;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_50;
            CHECK_OBJECT( tmp_for_loop_4__iter_value );
            tmp_assign_source_50 = tmp_for_loop_4__iter_value;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_50;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_called_name_19;
            PyObject *tmp_args_element_name_22;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            tmp_called_name_19 = LOOKUP_BUILTIN( const_str_plain_abs );
            assert( tmp_called_name_19 != NULL );
            CHECK_OBJECT( var_roots );
            tmp_subscribed_name_5 = var_roots;
            CHECK_OBJECT( var_i );
            tmp_subscript_name_5 = var_i;
            tmp_args_element_name_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_args_element_name_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 200;
            {
                PyObject *call_args[] = { tmp_args_element_name_22 };
                tmp_compexpr_left_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
            }

            Py_DECREF( tmp_args_element_name_22 );
            if ( tmp_compexpr_left_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_14;
            }
            CHECK_OBJECT( var_tol );
            tmp_compexpr_right_8 = var_tol;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            Py_DECREF( tmp_compexpr_left_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_14;
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
                PyObject *tmp_ass_subvalue_3;
                PyObject *tmp_source_name_10;
                PyObject *tmp_ass_subscribed_3;
                PyObject *tmp_ass_subscript_3;
                CHECK_OBJECT( PyCell_GET( par_ctx ) );
                tmp_source_name_10 = PyCell_GET( par_ctx );
                tmp_ass_subvalue_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_zero );
                if ( tmp_ass_subvalue_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 201;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                CHECK_OBJECT( var_roots );
                tmp_ass_subscribed_3 = var_roots;
                CHECK_OBJECT( var_i );
                tmp_ass_subscript_3 = var_i;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
                Py_DECREF( tmp_ass_subvalue_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 201;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
            }
            goto branch_end_10;
            branch_no_10:;
            {
                nuitka_bool tmp_condition_result_11;
                PyObject *tmp_compexpr_left_9;
                PyObject *tmp_compexpr_right_9;
                PyObject *tmp_called_name_20;
                PyObject *tmp_args_element_name_23;
                PyObject *tmp_called_name_21;
                PyObject *tmp_source_name_11;
                PyObject *tmp_args_element_name_24;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscript_name_6;
                tmp_called_name_20 = LOOKUP_BUILTIN( const_str_plain_abs );
                assert( tmp_called_name_20 != NULL );
                CHECK_OBJECT( PyCell_GET( par_ctx ) );
                tmp_source_name_11 = PyCell_GET( par_ctx );
                tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__im );
                if ( tmp_called_name_21 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 202;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                CHECK_OBJECT( var_roots );
                tmp_subscribed_name_6 = var_roots;
                CHECK_OBJECT( var_i );
                tmp_subscript_name_6 = var_i;
                tmp_args_element_name_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                if ( tmp_args_element_name_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_21 );

                    exception_lineno = 202;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 202;
                {
                    PyObject *call_args[] = { tmp_args_element_name_24 };
                    tmp_args_element_name_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
                }

                Py_DECREF( tmp_called_name_21 );
                Py_DECREF( tmp_args_element_name_24 );
                if ( tmp_args_element_name_23 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 202;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 202;
                {
                    PyObject *call_args[] = { tmp_args_element_name_23 };
                    tmp_compexpr_left_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
                }

                Py_DECREF( tmp_args_element_name_23 );
                if ( tmp_compexpr_left_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 202;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_14;
                }
                CHECK_OBJECT( var_tol );
                tmp_compexpr_right_9 = var_tol;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                Py_DECREF( tmp_compexpr_left_9 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 202;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_14;
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
                    PyObject *tmp_ass_subvalue_4;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_subscribed_name_7;
                    PyObject *tmp_subscript_name_7;
                    PyObject *tmp_ass_subscribed_4;
                    PyObject *tmp_ass_subscript_4;
                    CHECK_OBJECT( var_roots );
                    tmp_subscribed_name_7 = var_roots;
                    CHECK_OBJECT( var_i );
                    tmp_subscript_name_7 = var_i;
                    tmp_source_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
                    if ( tmp_source_name_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 203;
                        type_description_1 = "ccooooooooooooooooooooo";
                        goto try_except_handler_14;
                    }
                    tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_real );
                    Py_DECREF( tmp_source_name_12 );
                    if ( tmp_ass_subvalue_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 203;
                        type_description_1 = "ccooooooooooooooooooooo";
                        goto try_except_handler_14;
                    }
                    CHECK_OBJECT( var_roots );
                    tmp_ass_subscribed_4 = var_roots;
                    CHECK_OBJECT( var_i );
                    tmp_ass_subscript_4 = var_i;
                    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
                    Py_DECREF( tmp_ass_subvalue_4 );
                    if ( tmp_result == false )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 203;
                        type_description_1 = "ccooooooooooooooooooooo";
                        goto try_except_handler_14;
                    }
                }
                goto branch_end_11;
                branch_no_11:;
                {
                    nuitka_bool tmp_condition_result_12;
                    PyObject *tmp_compexpr_left_10;
                    PyObject *tmp_compexpr_right_10;
                    PyObject *tmp_called_name_22;
                    PyObject *tmp_args_element_name_25;
                    PyObject *tmp_called_name_23;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_args_element_name_26;
                    PyObject *tmp_subscribed_name_8;
                    PyObject *tmp_subscript_name_8;
                    tmp_called_name_22 = LOOKUP_BUILTIN( const_str_plain_abs );
                    assert( tmp_called_name_22 != NULL );
                    CHECK_OBJECT( PyCell_GET( par_ctx ) );
                    tmp_source_name_13 = PyCell_GET( par_ctx );
                    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__re );
                    if ( tmp_called_name_23 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 204;
                        type_description_1 = "ccooooooooooooooooooooo";
                        goto try_except_handler_14;
                    }
                    CHECK_OBJECT( var_roots );
                    tmp_subscribed_name_8 = var_roots;
                    CHECK_OBJECT( var_i );
                    tmp_subscript_name_8 = var_i;
                    tmp_args_element_name_26 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
                    if ( tmp_args_element_name_26 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_23 );

                        exception_lineno = 204;
                        type_description_1 = "ccooooooooooooooooooooo";
                        goto try_except_handler_14;
                    }
                    frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 204;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_26 };
                        tmp_args_element_name_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
                    }

                    Py_DECREF( tmp_called_name_23 );
                    Py_DECREF( tmp_args_element_name_26 );
                    if ( tmp_args_element_name_25 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 204;
                        type_description_1 = "ccooooooooooooooooooooo";
                        goto try_except_handler_14;
                    }
                    frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 204;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_25 };
                        tmp_compexpr_left_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
                    }

                    Py_DECREF( tmp_args_element_name_25 );
                    if ( tmp_compexpr_left_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 204;
                        type_description_1 = "ccooooooooooooooooooooo";
                        goto try_except_handler_14;
                    }
                    CHECK_OBJECT( var_tol );
                    tmp_compexpr_right_10 = var_tol;
                    tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                    Py_DECREF( tmp_compexpr_left_10 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 204;
                        type_description_1 = "ccooooooooooooooooooooo";
                        goto try_except_handler_14;
                    }
                    tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_ass_subvalue_5;
                        PyObject *tmp_left_name_10;
                        PyObject *tmp_source_name_14;
                        PyObject *tmp_subscribed_name_9;
                        PyObject *tmp_subscript_name_9;
                        PyObject *tmp_right_name_10;
                        PyObject *tmp_ass_subscribed_5;
                        PyObject *tmp_ass_subscript_5;
                        CHECK_OBJECT( var_roots );
                        tmp_subscribed_name_9 = var_roots;
                        CHECK_OBJECT( var_i );
                        tmp_subscript_name_9 = var_i;
                        tmp_source_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
                        if ( tmp_source_name_14 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 205;
                            type_description_1 = "ccooooooooooooooooooooo";
                            goto try_except_handler_14;
                        }
                        tmp_left_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_imag );
                        Py_DECREF( tmp_source_name_14 );
                        if ( tmp_left_name_10 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 205;
                            type_description_1 = "ccooooooooooooooooooooo";
                            goto try_except_handler_14;
                        }
                        tmp_right_name_10 = const_complex_0_0__1_0;
                        tmp_ass_subvalue_5 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_10 );
                        Py_DECREF( tmp_left_name_10 );
                        if ( tmp_ass_subvalue_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 205;
                            type_description_1 = "ccooooooooooooooooooooo";
                            goto try_except_handler_14;
                        }
                        CHECK_OBJECT( var_roots );
                        tmp_ass_subscribed_5 = var_roots;
                        CHECK_OBJECT( var_i );
                        tmp_ass_subscript_5 = var_i;
                        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
                        Py_DECREF( tmp_ass_subvalue_5 );
                        if ( tmp_result == false )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 205;
                            type_description_1 = "ccooooooooooooooooooooo";
                            goto try_except_handler_14;
                        }
                    }
                    branch_no_12:;
                }
                branch_end_11:;
            }
            branch_end_10:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        goto loop_start_9;
        loop_end_9:;
        goto try_end_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
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
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_4;
        // End of try:
        try_end_5:;
        Py_XDECREF( tmp_for_loop_4__iter_value );
        tmp_for_loop_4__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
        Py_DECREF( tmp_for_loop_4__for_iterator );
        tmp_for_loop_4__for_iterator = NULL;

        branch_no_9:;
    }
    {
        PyObject *tmp_called_name_24;
        PyObject *tmp_source_name_15;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( var_roots );
        tmp_source_name_15 = var_roots;
        tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_sort );
        if ( tmp_called_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_dict_value_1 = MAKE_FUNCTION_mpmath$calculus$polynomials$$$function_2_polyroots$$$function_2_lambda(  );

        ((struct Nuitka_FunctionObject *)tmp_dict_value_1)->m_closure[0] = par_ctx;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_dict_value_1)->m_closure[0] );


        tmp_dict_key_1 = const_str_plain_key;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 206;
        tmp_call_result_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_24, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_24 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_ea2aa815f0f7c11f568be383e8186270 );
    if ( exception_keeper_tb_11 == NULL )
    {
        exception_keeper_tb_11 = MAKE_TRACEBACK( frame_ea2aa815f0f7c11f568be383e8186270, exception_keeper_lineno_11 );
    }
    else if ( exception_keeper_lineno_11 != 0 )
    {
        exception_keeper_tb_11 = ADD_TRACEBACK( exception_keeper_tb_11, frame_ea2aa815f0f7c11f568be383e8186270, exception_keeper_lineno_11 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11 );
    PUBLISH_EXCEPTION( &exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11 );
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        tmp_compexpr_left_11 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_11 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_3;
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
            nuitka_bool tmp_assign_source_51;
            tmp_assign_source_51 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_51;
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_called_name_25;
            PyObject *tmp_args_element_name_27;
            PyObject *tmp_args_element_name_28;
            PyObject *tmp_args_element_name_29;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_25 = tmp_with_1__exit;
            tmp_args_element_name_27 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_28 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_29 = EXC_TRACEBACK(PyThreadState_GET());
            frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 161;
            {
                PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29 };
                tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_25, call_args );
            }

            if ( tmp_operand_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            Py_DECREF( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_14 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_14;
            }
            else
            {
                goto branch_no_14;
            }
            branch_yes_14:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 161;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_ea2aa815f0f7c11f568be383e8186270->m_frame) frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_3;
            branch_no_14:;
        }
        goto branch_end_13;
        branch_no_13:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 161;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_ea2aa815f0f7c11f568be383e8186270->m_frame) frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ccooooooooooooooooooooo";
        goto try_except_handler_3;
        branch_end_13:;
    }
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
    return NULL;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_15;
        nuitka_bool tmp_compexpr_left_12;
        nuitka_bool tmp_compexpr_right_12;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_12 = tmp_with_1__indicator;
        tmp_compexpr_right_12 = NUITKA_BOOL_TRUE;
        tmp_condition_result_15 = ( tmp_compexpr_left_12 == tmp_compexpr_right_12 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_26;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_26 = tmp_with_1__exit;
            frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 161;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_26, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_12 );
                Py_XDECREF( exception_keeper_value_12 );
                Py_XDECREF( exception_keeper_tb_12 );

                exception_lineno = 161;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_15:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_2;
    // End of try:
    try_end_7:;
    {
        nuitka_bool tmp_condition_result_16;
        nuitka_bool tmp_compexpr_left_13;
        nuitka_bool tmp_compexpr_right_13;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_13 = tmp_with_1__indicator;
        tmp_compexpr_right_13 = NUITKA_BOOL_TRUE;
        tmp_condition_result_16 = ( tmp_compexpr_left_13 == tmp_compexpr_right_13 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_27;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_27 = tmp_with_1__exit;
            frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 161;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_27, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_16:;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
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
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_error );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_error );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "ccooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_52;
            PyObject *tmp_called_name_28;
            PyObject *tmp_args_element_name_30;
            tmp_called_name_28 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_28 != NULL );
            if ( var_err == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "err" );
                exception_tb = NULL;

                exception_lineno = 208;
                type_description_1 = "ccooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_30 = var_err;
            frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 208;
            {
                PyObject *call_args[] = { tmp_args_element_name_30 };
                tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
            }

            if ( tmp_assign_source_52 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ccooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_err;
                var_err = tmp_assign_source_52;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_name_29;
            PyObject *tmp_args_element_name_31;
            PyObject *tmp_args_element_name_32;
            PyObject *tmp_called_name_30;
            PyObject *tmp_source_name_16;
            PyObject *tmp_args_element_name_33;
            PyObject *tmp_args_element_name_34;
            PyObject *tmp_left_name_11;
            PyObject *tmp_operand_name_5;
            PyObject *tmp_right_name_11;
            tmp_called_name_29 = LOOKUP_BUILTIN( const_str_plain_max );
            assert( tmp_called_name_29 != NULL );
            CHECK_OBJECT( var_err );
            tmp_args_element_name_31 = var_err;
            CHECK_OBJECT( PyCell_GET( par_ctx ) );
            tmp_source_name_16 = PyCell_GET( par_ctx );
            tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_ldexp );
            if ( tmp_called_name_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "ccooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_33 = const_int_pos_1;
            CHECK_OBJECT( var_orig );
            tmp_operand_name_5 = var_orig;
            tmp_left_name_11 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_5 );
            if ( tmp_left_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_30 );

                exception_lineno = 209;
                type_description_1 = "ccooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_11 = const_int_pos_1;
            tmp_args_element_name_34 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_11, tmp_right_name_11 );
            Py_DECREF( tmp_left_name_11 );
            if ( tmp_args_element_name_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_30 );

                exception_lineno = 209;
                type_description_1 = "ccooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 209;
            {
                PyObject *call_args[] = { tmp_args_element_name_33, tmp_args_element_name_34 };
                tmp_args_element_name_32 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_30, call_args );
            }

            Py_DECREF( tmp_called_name_30 );
            Py_DECREF( tmp_args_element_name_34 );
            if ( tmp_args_element_name_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "ccooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_ea2aa815f0f7c11f568be383e8186270->m_frame.f_lineno = 209;
            {
                PyObject *call_args[] = { tmp_args_element_name_31, tmp_args_element_name_32 };
                tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_29, call_args );
            }

            Py_DECREF( tmp_args_element_name_32 );
            if ( tmp_assign_source_53 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "ccooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_err;
                assert( old != NULL );
                var_err = tmp_assign_source_53;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_operand_name_7;
            // Tried code:
            {
                PyObject *tmp_assign_source_54;
                PyObject *tmp_iter_arg_10;
                if ( var_roots == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "roots" );
                    exception_tb = NULL;

                    exception_lineno = 210;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_15;
                }

                tmp_iter_arg_10 = var_roots;
                tmp_assign_source_54 = MAKE_ITERATOR( tmp_iter_arg_10 );
                if ( tmp_assign_source_54 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 210;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_15;
                }
                assert( tmp_list_contraction_6__$0 == NULL );
                tmp_list_contraction_6__$0 = tmp_assign_source_54;
            }
            {
                PyObject *tmp_assign_source_55;
                tmp_assign_source_55 = PyList_New( 0 );
                assert( tmp_list_contraction_6__contraction_result == NULL );
                tmp_list_contraction_6__contraction_result = tmp_assign_source_55;
            }
            loop_start_10:;
            {
                PyObject *tmp_next_source_10;
                PyObject *tmp_assign_source_56;
                CHECK_OBJECT( tmp_list_contraction_6__$0 );
                tmp_next_source_10 = tmp_list_contraction_6__$0;
                tmp_assign_source_56 = ITERATOR_NEXT( tmp_next_source_10 );
                if ( tmp_assign_source_56 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_10;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ccooooooooooooooooooooo";
                        exception_lineno = 210;
                        goto try_except_handler_15;
                    }
                }

                {
                    PyObject *old = tmp_list_contraction_6__iter_value_0;
                    tmp_list_contraction_6__iter_value_0 = tmp_assign_source_56;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_57;
                CHECK_OBJECT( tmp_list_contraction_6__iter_value_0 );
                tmp_assign_source_57 = tmp_list_contraction_6__iter_value_0;
                {
                    PyObject *old = var_r;
                    var_r = tmp_assign_source_57;
                    Py_INCREF( var_r );
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_append_list_6;
                PyObject *tmp_append_value_6;
                PyObject *tmp_operand_name_6;
                CHECK_OBJECT( tmp_list_contraction_6__contraction_result );
                tmp_append_list_6 = tmp_list_contraction_6__contraction_result;
                CHECK_OBJECT( var_r );
                tmp_operand_name_6 = var_r;
                tmp_append_value_6 = UNARY_OPERATION( PyNumber_Positive, tmp_operand_name_6 );
                if ( tmp_append_value_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 210;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_15;
                }
                assert( PyList_Check( tmp_append_list_6 ) );
                tmp_res = PyList_Append( tmp_append_list_6, tmp_append_value_6 );
                Py_DECREF( tmp_append_value_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 210;
                    type_description_1 = "ccooooooooooooooooooooo";
                    goto try_except_handler_15;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 210;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_15;
            }
            goto loop_start_10;
            loop_end_10:;
            CHECK_OBJECT( tmp_list_contraction_6__contraction_result );
            tmp_tuple_element_1 = tmp_list_contraction_6__contraction_result;
            Py_INCREF( tmp_tuple_element_1 );
            goto try_return_handler_15;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
            return NULL;
            // Return handler code:
            try_return_handler_15:;
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
            try_except_handler_15:;
            exception_keeper_type_14 = exception_type;
            exception_keeper_value_14 = exception_value;
            exception_keeper_tb_14 = exception_tb;
            exception_keeper_lineno_14 = exception_lineno;
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
            exception_type = exception_keeper_type_14;
            exception_value = exception_keeper_value_14;
            exception_tb = exception_keeper_tb_14;
            exception_lineno = exception_keeper_lineno_14;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
            return NULL;
            outline_result_6:;
            tmp_return_value = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_err );
            tmp_operand_name_7 = var_err;
            tmp_tuple_element_1 = UNARY_OPERATION( PyNumber_Positive, tmp_operand_name_7 );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_return_value );

                exception_lineno = 210;
                type_description_1 = "ccooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        goto branch_end_17;
        branch_no_17:;
        // Tried code:
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_iter_arg_11;
            if ( var_roots == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "roots" );
                exception_tb = NULL;

                exception_lineno = 212;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_16;
            }

            tmp_iter_arg_11 = var_roots;
            tmp_assign_source_58 = MAKE_ITERATOR( tmp_iter_arg_11 );
            if ( tmp_assign_source_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            assert( tmp_list_contraction_7__$0 == NULL );
            tmp_list_contraction_7__$0 = tmp_assign_source_58;
        }
        {
            PyObject *tmp_assign_source_59;
            tmp_assign_source_59 = PyList_New( 0 );
            assert( tmp_list_contraction_7__contraction_result == NULL );
            tmp_list_contraction_7__contraction_result = tmp_assign_source_59;
        }
        loop_start_11:;
        {
            PyObject *tmp_next_source_11;
            PyObject *tmp_assign_source_60;
            CHECK_OBJECT( tmp_list_contraction_7__$0 );
            tmp_next_source_11 = tmp_list_contraction_7__$0;
            tmp_assign_source_60 = ITERATOR_NEXT( tmp_next_source_11 );
            if ( tmp_assign_source_60 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_11;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ccooooooooooooooooooooo";
                    exception_lineno = 212;
                    goto try_except_handler_16;
                }
            }

            {
                PyObject *old = tmp_list_contraction_7__iter_value_0;
                tmp_list_contraction_7__iter_value_0 = tmp_assign_source_60;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_61;
            CHECK_OBJECT( tmp_list_contraction_7__iter_value_0 );
            tmp_assign_source_61 = tmp_list_contraction_7__iter_value_0;
            {
                PyObject *old = var_r;
                var_r = tmp_assign_source_61;
                Py_INCREF( var_r );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_7;
            PyObject *tmp_append_value_7;
            PyObject *tmp_operand_name_8;
            CHECK_OBJECT( tmp_list_contraction_7__contraction_result );
            tmp_append_list_7 = tmp_list_contraction_7__contraction_result;
            CHECK_OBJECT( var_r );
            tmp_operand_name_8 = var_r;
            tmp_append_value_7 = UNARY_OPERATION( PyNumber_Positive, tmp_operand_name_8 );
            if ( tmp_append_value_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_16;
            }
            assert( PyList_Check( tmp_append_list_7 ) );
            tmp_res = PyList_Append( tmp_append_list_7, tmp_append_value_7 );
            Py_DECREF( tmp_append_value_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 212;
                type_description_1 = "ccooooooooooooooooooooo";
                goto try_except_handler_16;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_1 = "ccooooooooooooooooooooo";
            goto try_except_handler_16;
        }
        goto loop_start_11;
        loop_end_11:;
        CHECK_OBJECT( tmp_list_contraction_7__contraction_result );
        tmp_return_value = tmp_list_contraction_7__contraction_result;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_16;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT( (PyObject *)tmp_list_contraction_7__$0 );
        Py_DECREF( tmp_list_contraction_7__$0 );
        tmp_list_contraction_7__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_list_contraction_7__contraction_result );
        Py_DECREF( tmp_list_contraction_7__contraction_result );
        tmp_list_contraction_7__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_7__iter_value_0 );
        tmp_list_contraction_7__iter_value_0 = NULL;

        goto outline_result_7;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_list_contraction_7__$0 );
        tmp_list_contraction_7__$0 = NULL;

        Py_XDECREF( tmp_list_contraction_7__contraction_result );
        tmp_list_contraction_7__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_7__iter_value_0 );
        tmp_list_contraction_7__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
        return NULL;
        outline_result_7:;
        goto frame_return_exit_1;
        branch_end_17:;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ea2aa815f0f7c11f568be383e8186270 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_ea2aa815f0f7c11f568be383e8186270 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_ea2aa815f0f7c11f568be383e8186270 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ea2aa815f0f7c11f568be383e8186270, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ea2aa815f0f7c11f568be383e8186270->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ea2aa815f0f7c11f568be383e8186270, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ea2aa815f0f7c11f568be383e8186270,
        type_description_1,
        par_ctx,
        par_coeffs,
        par_maxsteps,
        par_cleanup,
        par_extraprec,
        par_error,
        par_roots_init,
        var_roots,
        var_orig,
        var_lead,
        var_tol,
        var_deg_init,
        var_step,
        var_c,
        var_err,
        var_f,
        var_i,
        var_j,
        var_n,
        var_p,
        var_r,
        var_x,
        var_deg
    );


    // Release cached frame.
    if ( frame_ea2aa815f0f7c11f568be383e8186270 == cache_frame_ea2aa815f0f7c11f568be383e8186270 )
    {
        Py_DECREF( frame_ea2aa815f0f7c11f568be383e8186270 );
    }
    cache_frame_ea2aa815f0f7c11f568be383e8186270 = NULL;

    assertFrameObject( frame_ea2aa815f0f7c11f568be383e8186270 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_roots );
    var_roots = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

    Py_XDECREF( var_lead );
    var_lead = NULL;

    CHECK_OBJECT( (PyObject *)par_cleanup );
    Py_DECREF( par_cleanup );
    par_cleanup = NULL;

    Py_XDECREF( var_tol );
    var_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxsteps );
    Py_DECREF( par_maxsteps );
    par_maxsteps = NULL;

    Py_XDECREF( var_deg_init );
    var_deg_init = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    CHECK_OBJECT( (PyObject *)par_extraprec );
    Py_DECREF( par_extraprec );
    par_extraprec = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_roots_init );
    Py_DECREF( par_roots_init );
    par_roots_init = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_error );
    Py_DECREF( par_error );
    par_error = NULL;

    CHECK_OBJECT( (PyObject *)par_coeffs );
    Py_DECREF( par_coeffs );
    par_coeffs = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_deg );
    var_deg = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_roots );
    var_roots = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

    Py_XDECREF( var_lead );
    var_lead = NULL;

    CHECK_OBJECT( (PyObject *)par_cleanup );
    Py_DECREF( par_cleanup );
    par_cleanup = NULL;

    Py_XDECREF( var_tol );
    var_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxsteps );
    Py_DECREF( par_maxsteps );
    par_maxsteps = NULL;

    Py_XDECREF( var_deg_init );
    var_deg_init = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    CHECK_OBJECT( (PyObject *)par_extraprec );
    Py_DECREF( par_extraprec );
    par_extraprec = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_roots_init );
    Py_DECREF( par_roots_init );
    par_roots_init = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    CHECK_OBJECT( (PyObject *)par_ctx );
    Py_DECREF( par_ctx );
    par_ctx = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_error );
    Py_DECREF( par_error );
    par_error = NULL;

    CHECK_OBJECT( (PyObject *)par_coeffs );
    Py_DECREF( par_coeffs );
    par_coeffs = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_deg );
    var_deg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots );
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


static PyObject *impl_mpmath$calculus$polynomials$$$function_2_polyroots$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c0d0536c2e8a48cf543ffcbb261388df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c0d0536c2e8a48cf543ffcbb261388df = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c0d0536c2e8a48cf543ffcbb261388df, codeobj_c0d0536c2e8a48cf543ffcbb261388df, module_mpmath$calculus$polynomials, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c0d0536c2e8a48cf543ffcbb261388df = cache_frame_c0d0536c2e8a48cf543ffcbb261388df;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c0d0536c2e8a48cf543ffcbb261388df );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c0d0536c2e8a48cf543ffcbb261388df ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 169;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[1] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_polyval );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "coeffs" );
            exception_tb = NULL;

            exception_lineno = 169;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_c0d0536c2e8a48cf543ffcbb261388df->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0d0536c2e8a48cf543ffcbb261388df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0d0536c2e8a48cf543ffcbb261388df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0d0536c2e8a48cf543ffcbb261388df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c0d0536c2e8a48cf543ffcbb261388df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c0d0536c2e8a48cf543ffcbb261388df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c0d0536c2e8a48cf543ffcbb261388df, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c0d0536c2e8a48cf543ffcbb261388df,
        type_description_1,
        par_x,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame.
    if ( frame_c0d0536c2e8a48cf543ffcbb261388df == cache_frame_c0d0536c2e8a48cf543ffcbb261388df )
    {
        Py_DECREF( frame_c0d0536c2e8a48cf543ffcbb261388df );
    }
    cache_frame_c0d0536c2e8a48cf543ffcbb261388df = NULL;

    assertFrameObject( frame_c0d0536c2e8a48cf543ffcbb261388df );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots$$$function_1_lambda );
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


static PyObject *impl_mpmath$calculus$polynomials$$$function_2_polyroots$$$function_2_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_1251efd7debbfb0a10563e8a095bc717;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1251efd7debbfb0a10563e8a095bc717 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1251efd7debbfb0a10563e8a095bc717, codeobj_1251efd7debbfb0a10563e8a095bc717, module_mpmath$calculus$polynomials, sizeof(void *)+sizeof(void *) );
    frame_1251efd7debbfb0a10563e8a095bc717 = cache_frame_1251efd7debbfb0a10563e8a095bc717;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1251efd7debbfb0a10563e8a095bc717 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1251efd7debbfb0a10563e8a095bc717 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
        assert( tmp_called_name_1 != NULL );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 206;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_2 = par_x;
        frame_1251efd7debbfb0a10563e8a095bc717->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__im, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_1251efd7debbfb0a10563e8a095bc717->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ctx" );
            exception_tb = NULL;

            exception_lineno = 206;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_x );
        tmp_args_element_name_3 = par_x;
        frame_1251efd7debbfb0a10563e8a095bc717->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__re, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 206;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1251efd7debbfb0a10563e8a095bc717 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1251efd7debbfb0a10563e8a095bc717 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1251efd7debbfb0a10563e8a095bc717 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1251efd7debbfb0a10563e8a095bc717, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1251efd7debbfb0a10563e8a095bc717->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1251efd7debbfb0a10563e8a095bc717, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1251efd7debbfb0a10563e8a095bc717,
        type_description_1,
        par_x,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_1251efd7debbfb0a10563e8a095bc717 == cache_frame_1251efd7debbfb0a10563e8a095bc717 )
    {
        Py_DECREF( frame_1251efd7debbfb0a10563e8a095bc717 );
    }
    cache_frame_1251efd7debbfb0a10563e8a095bc717 = NULL;

    assertFrameObject( frame_1251efd7debbfb0a10563e8a095bc717 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
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
    NUITKA_CANNOT_GET_HERE( mpmath$calculus$polynomials$$$function_2_polyroots$$$function_2_lambda );
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



static PyObject *MAKE_FUNCTION_mpmath$calculus$polynomials$$$function_1_polyval( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$calculus$polynomials$$$function_1_polyval,
        const_str_plain_polyval,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_99dab52e61947330c75f54ed64ed35da,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$calculus$polynomials,
        const_str_digest_e5a59e446df596287cca52db6f7322bf,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$calculus$polynomials$$$function_2_polyroots( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$calculus$polynomials$$$function_2_polyroots,
        const_str_plain_polyroots,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ea2aa815f0f7c11f568be383e8186270,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$calculus$polynomials,
        const_str_digest_3639c2c2c03590196237d2894260f39c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$calculus$polynomials$$$function_2_polyroots$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$calculus$polynomials$$$function_2_polyroots$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c0d0536c2e8a48cf543ffcbb261388df,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$calculus$polynomials,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpmath$calculus$polynomials$$$function_2_polyroots$$$function_2_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpmath$calculus$polynomials$$$function_2_polyroots$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1251efd7debbfb0a10563e8a095bc717,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_mpmath$calculus$polynomials,
        NULL,
        1
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_mpmath$calculus$polynomials =
{
    PyModuleDef_HEAD_INIT,
    "mpmath.calculus.polynomials",
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

MOD_INIT_DECL( mpmath$calculus$polynomials )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_mpmath$calculus$polynomials );
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
    puts("mpmath.calculus.polynomials: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath.calculus.polynomials: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath.calculus.polynomials: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmpmath$calculus$polynomials" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_mpmath$calculus$polynomials = Py_InitModule4(
        "mpmath.calculus.polynomials",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_mpmath$calculus$polynomials = PyModule_Create( &mdef_mpmath$calculus$polynomials );
#endif

    moduledict_mpmath$calculus$polynomials = MODULE_DICT( module_mpmath$calculus$polynomials );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_mpmath$calculus$polynomials,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath$calculus$polynomials,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath$calculus$polynomials,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_mpmath$calculus$polynomials );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_030f09f450ae88b85cded26ddc7dd5dd, module_mpmath$calculus$polynomials );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_e7d92a9cd56be61397ff6d7f18b047e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_5bc1cb20949dff02dcf2b76990473e52;
        UPDATE_STRING_DICT0( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_e7d92a9cd56be61397ff6d7f18b047e4 = MAKE_MODULE_FRAME( codeobj_e7d92a9cd56be61397ff6d7f18b047e4, module_mpmath$calculus$polynomials );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e7d92a9cd56be61397ff6d7f18b047e4 );
    assert( Py_REFCNT( frame_e7d92a9cd56be61397ff6d7f18b047e4 ) == 2 );

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
        tmp_globals_name_1 = (PyObject *)moduledict_mpmath$calculus$polynomials;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_xrange_tuple;
        tmp_level_name_1 = const_int_pos_2;
        frame_e7d92a9cd56be61397ff6d7f18b047e4->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_calculus;
        tmp_globals_name_2 = (PyObject *)moduledict_mpmath$calculus$polynomials;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_defun_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_e7d92a9cd56be61397ff6d7f18b047e4->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_defun );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain_defun, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_defaults_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain_defun );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_defaults_1 = const_tuple_false_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_args_element_name_1 = MAKE_FUNCTION_mpmath$calculus$polynomials$$$function_1_polyval( tmp_defaults_1 );



        frame_e7d92a9cd56be61397ff6d7f18b047e4->m_frame.f_lineno = 9;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain_polyval, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain_defun );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_defun );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "defun" );
            exception_tb = NULL;

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_defaults_2 = const_tuple_int_pos_50_true_int_pos_10_false_none_tuple;
        Py_INCREF( tmp_defaults_2 );
        tmp_args_element_name_2 = MAKE_FUNCTION_mpmath$calculus$polynomials$$$function_2_polyroots( tmp_defaults_2 );



        frame_e7d92a9cd56be61397ff6d7f18b047e4->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain_polyroots, tmp_assign_source_6 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e7d92a9cd56be61397ff6d7f18b047e4 );
#endif
    popFrameStack();

    assertFrameObject( frame_e7d92a9cd56be61397ff6d7f18b047e4 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e7d92a9cd56be61397ff6d7f18b047e4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e7d92a9cd56be61397ff6d7f18b047e4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e7d92a9cd56be61397ff6d7f18b047e4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e7d92a9cd56be61397ff6d7f18b047e4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_mpmath$calculus$polynomials, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_mpmath$calculus$polynomials );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
