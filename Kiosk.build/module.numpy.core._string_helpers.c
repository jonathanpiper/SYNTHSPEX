/* Generated code for Python module 'numpy.core._string_helpers'
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

/* The "_module_numpy$core$_string_helpers" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$_string_helpers;
PyDictObject *moduledict_numpy$core$_string_helpers;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_52187ffa47cd8e85a18a8fb9e08813ca;
extern PyObject *const_str_plain_LOWER_TABLE;
static PyObject *const_str_plain__ascii_upper;
extern PyObject *const_int_pos_256;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_translate;
extern PyObject *const_str_plain_UPPER_TABLE;
static PyObject *const_str_plain__all_chars;
static PyObject *const_str_digest_1ed316d75ff80ea70bd320ad9547dae6;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_english_lower;
static PyObject *const_str_digest_920154f5362f6d3d9199431bbcdd7b5f;
extern PyObject *const_str_plain_english_capitalize;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain__m;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_english_upper;
static PyObject *const_str_digest_1b192dcc39717bcb118b56d3f7761efe;
static PyObject *const_tuple_str_plain_s_str_plain_uppered_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_dac84e5c3df17b4cb31280dee51fb494;
static PyObject *const_str_plain_lowered;
static PyObject *const_str_digest_1d483db6dd134039ee6b8b8d5fa738b9;
static PyObject *const_str_plain_uppered;
static PyObject *const_tuple_str_plain_s_str_plain_lowered_tuple;
extern PyObject *const_tuple_str_plain_s_tuple;
extern PyObject *const_str_digest_f75d7a0affbf4e65726da003974d5eff;
static PyObject *const_str_plain__ascii_lower;
extern PyObject *const_str_plain_s;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_52187ffa47cd8e85a18a8fb9e08813ca = UNSTREAM_STRING( &constant_bin[ 946005 ], 751, 0 );
    const_str_plain__ascii_upper = UNSTREAM_STRING( &constant_bin[ 946756 ], 12, 1 );
    const_str_plain__all_chars = UNSTREAM_STRING( &constant_bin[ 946768 ], 10, 1 );
    const_str_digest_1ed316d75ff80ea70bd320ad9547dae6 = UNSTREAM_STRING( &constant_bin[ 946778 ], 62, 0 );
    const_str_digest_920154f5362f6d3d9199431bbcdd7b5f = UNSTREAM_STRING( &constant_bin[ 946840 ], 102, 0 );
    const_str_digest_1b192dcc39717bcb118b56d3f7761efe = UNSTREAM_STRING( &constant_bin[ 946942 ], 556, 0 );
    const_tuple_str_plain_s_str_plain_uppered_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_uppered_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_plain_uppered = UNSTREAM_STRING( &constant_bin[ 946461 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_uppered_tuple, 1, const_str_plain_uppered ); Py_INCREF( const_str_plain_uppered );
    const_str_digest_dac84e5c3df17b4cb31280dee51fb494 = UNSTREAM_STRING( &constant_bin[ 947498 ], 751, 0 );
    const_str_plain_lowered = UNSTREAM_STRING( &constant_bin[ 947954 ], 7, 1 );
    const_str_digest_1d483db6dd134039ee6b8b8d5fa738b9 = UNSTREAM_STRING( &constant_bin[ 948249 ], 35, 0 );
    const_tuple_str_plain_s_str_plain_lowered_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_lowered_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_lowered_tuple, 1, const_str_plain_lowered ); Py_INCREF( const_str_plain_lowered );
    const_str_plain__ascii_lower = UNSTREAM_STRING( &constant_bin[ 948284 ], 12, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$_string_helpers( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e6fc0ab12a681e654dee0d32069404ef;
static PyCodeObject *codeobj_7cca35b8677477047e2cd3f417c8e75a;
static PyCodeObject *codeobj_c42f94e87301a4a2d76443487550dfe9;
static PyCodeObject *codeobj_ae7f7c58272cc2d8ca875409b1d1387f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_1ed316d75ff80ea70bd320ad9547dae6;
    codeobj_e6fc0ab12a681e654dee0d32069404ef = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1d483db6dd134039ee6b8b8d5fa738b9, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_7cca35b8677477047e2cd3f417c8e75a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_english_capitalize, 72, const_tuple_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c42f94e87301a4a2d76443487550dfe9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_english_lower, 16, const_tuple_str_plain_s_str_plain_lowered_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ae7f7c58272cc2d8ca875409b1d1387f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_english_upper, 44, const_tuple_str_plain_s_str_plain_uppered_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$core$_string_helpers$$$function_1_english_lower(  );


static PyObject *MAKE_FUNCTION_numpy$core$_string_helpers$$$function_2_english_upper(  );


static PyObject *MAKE_FUNCTION_numpy$core$_string_helpers$$$function_3_english_capitalize(  );


// The module function definitions.
static PyObject *impl_numpy$core$_string_helpers$$$function_1_english_lower( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *var_lowered = NULL;
    struct Nuitka_FrameObject *frame_c42f94e87301a4a2d76443487550dfe9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c42f94e87301a4a2d76443487550dfe9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c42f94e87301a4a2d76443487550dfe9, codeobj_c42f94e87301a4a2d76443487550dfe9, module_numpy$core$_string_helpers, sizeof(void *)+sizeof(void *) );
    frame_c42f94e87301a4a2d76443487550dfe9 = cache_frame_c42f94e87301a4a2d76443487550dfe9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c42f94e87301a4a2d76443487550dfe9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c42f94e87301a4a2d76443487550dfe9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_source_name_1 = par_s;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_translate );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain_LOWER_TABLE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LOWER_TABLE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "LOWER_TABLE" );
            exception_tb = NULL;

            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_1;
        frame_c42f94e87301a4a2d76443487550dfe9->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_lowered == NULL );
        var_lowered = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c42f94e87301a4a2d76443487550dfe9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c42f94e87301a4a2d76443487550dfe9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c42f94e87301a4a2d76443487550dfe9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c42f94e87301a4a2d76443487550dfe9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c42f94e87301a4a2d76443487550dfe9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c42f94e87301a4a2d76443487550dfe9,
        type_description_1,
        par_s,
        var_lowered
    );


    // Release cached frame.
    if ( frame_c42f94e87301a4a2d76443487550dfe9 == cache_frame_c42f94e87301a4a2d76443487550dfe9 )
    {
        Py_DECREF( frame_c42f94e87301a4a2d76443487550dfe9 );
    }
    cache_frame_c42f94e87301a4a2d76443487550dfe9 = NULL;

    assertFrameObject( frame_c42f94e87301a4a2d76443487550dfe9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_lowered );
    tmp_return_value = var_lowered;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_string_helpers$$$function_1_english_lower );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)var_lowered );
    Py_DECREF( var_lowered );
    var_lowered = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_string_helpers$$$function_1_english_lower );
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


static PyObject *impl_numpy$core$_string_helpers$$$function_2_english_upper( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *var_uppered = NULL;
    struct Nuitka_FrameObject *frame_ae7f7c58272cc2d8ca875409b1d1387f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae7f7c58272cc2d8ca875409b1d1387f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ae7f7c58272cc2d8ca875409b1d1387f, codeobj_ae7f7c58272cc2d8ca875409b1d1387f, module_numpy$core$_string_helpers, sizeof(void *)+sizeof(void *) );
    frame_ae7f7c58272cc2d8ca875409b1d1387f = cache_frame_ae7f7c58272cc2d8ca875409b1d1387f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ae7f7c58272cc2d8ca875409b1d1387f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ae7f7c58272cc2d8ca875409b1d1387f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_source_name_1 = par_s;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_translate );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain_UPPER_TABLE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UPPER_TABLE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "UPPER_TABLE" );
            exception_tb = NULL;

            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_1;
        frame_ae7f7c58272cc2d8ca875409b1d1387f->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_uppered == NULL );
        var_uppered = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae7f7c58272cc2d8ca875409b1d1387f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae7f7c58272cc2d8ca875409b1d1387f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ae7f7c58272cc2d8ca875409b1d1387f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ae7f7c58272cc2d8ca875409b1d1387f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ae7f7c58272cc2d8ca875409b1d1387f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ae7f7c58272cc2d8ca875409b1d1387f,
        type_description_1,
        par_s,
        var_uppered
    );


    // Release cached frame.
    if ( frame_ae7f7c58272cc2d8ca875409b1d1387f == cache_frame_ae7f7c58272cc2d8ca875409b1d1387f )
    {
        Py_DECREF( frame_ae7f7c58272cc2d8ca875409b1d1387f );
    }
    cache_frame_ae7f7c58272cc2d8ca875409b1d1387f = NULL;

    assertFrameObject( frame_ae7f7c58272cc2d8ca875409b1d1387f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_uppered );
    tmp_return_value = var_uppered;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_string_helpers$$$function_2_english_upper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_uppered );
    Py_DECREF( var_uppered );
    var_uppered = NULL;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_string_helpers$$$function_2_english_upper );
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


static PyObject *impl_numpy$core$_string_helpers$$$function_3_english_capitalize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7cca35b8677477047e2cd3f417c8e75a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7cca35b8677477047e2cd3f417c8e75a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7cca35b8677477047e2cd3f417c8e75a, codeobj_7cca35b8677477047e2cd3f417c8e75a, module_numpy$core$_string_helpers, sizeof(void *) );
    frame_7cca35b8677477047e2cd3f417c8e75a = cache_frame_7cca35b8677477047e2cd3f417c8e75a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7cca35b8677477047e2cd3f417c8e75a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7cca35b8677477047e2cd3f417c8e75a ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_s );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_s );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "o";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain_english_upper );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_english_upper );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "english_upper" );
                exception_tb = NULL;

                exception_lineno = 98;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_s );
            tmp_subscribed_name_1 = par_s;
            tmp_subscript_name_1 = const_int_0;
            tmp_args_element_name_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_7cca35b8677477047e2cd3f417c8e75a->m_frame.f_lineno = 98;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_sliceslicedel_index_lower_1 = 1;
            tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
            CHECK_OBJECT( par_s );
            tmp_slice_source_1 = par_s;
            tmp_right_name_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 98;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        CHECK_OBJECT( par_s );
        tmp_return_value = par_s;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cca35b8677477047e2cd3f417c8e75a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cca35b8677477047e2cd3f417c8e75a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7cca35b8677477047e2cd3f417c8e75a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7cca35b8677477047e2cd3f417c8e75a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7cca35b8677477047e2cd3f417c8e75a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7cca35b8677477047e2cd3f417c8e75a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7cca35b8677477047e2cd3f417c8e75a,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_7cca35b8677477047e2cd3f417c8e75a == cache_frame_7cca35b8677477047e2cd3f417c8e75a )
    {
        Py_DECREF( frame_7cca35b8677477047e2cd3f417c8e75a );
    }
    cache_frame_7cca35b8677477047e2cd3f417c8e75a = NULL;

    assertFrameObject( frame_7cca35b8677477047e2cd3f417c8e75a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$_string_helpers$$$function_3_english_capitalize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_string_helpers$$$function_3_english_capitalize );
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



static PyObject *MAKE_FUNCTION_numpy$core$_string_helpers$$$function_1_english_lower(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_string_helpers$$$function_1_english_lower,
        const_str_plain_english_lower,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c42f94e87301a4a2d76443487550dfe9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_string_helpers,
        const_str_digest_dac84e5c3df17b4cb31280dee51fb494,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_string_helpers$$$function_2_english_upper(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_string_helpers$$$function_2_english_upper,
        const_str_plain_english_upper,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ae7f7c58272cc2d8ca875409b1d1387f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_string_helpers,
        const_str_digest_52187ffa47cd8e85a18a8fb9e08813ca,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_string_helpers$$$function_3_english_capitalize(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$_string_helpers$$$function_3_english_capitalize,
        const_str_plain_english_capitalize,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7cca35b8677477047e2cd3f417c8e75a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$_string_helpers,
        const_str_digest_1b192dcc39717bcb118b56d3f7761efe,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$_string_helpers =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core._string_helpers",
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

MOD_INIT_DECL( numpy$core$_string_helpers )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$_string_helpers );
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
    puts("numpy.core._string_helpers: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core._string_helpers: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core._string_helpers: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$core$_string_helpers" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$_string_helpers = Py_InitModule4(
        "numpy.core._string_helpers",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$core$_string_helpers = PyModule_Create( &mdef_numpy$core$_string_helpers );
#endif

    moduledict_numpy$core$_string_helpers = MODULE_DICT( module_numpy$core$_string_helpers );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$core$_string_helpers,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$_string_helpers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$_string_helpers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$core$_string_helpers );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_f75d7a0affbf4e65726da003974d5eff, module_numpy$core$_string_helpers );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_e6fc0ab12a681e654dee0d32069404ef;
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
        tmp_assign_source_1 = const_str_digest_920154f5362f6d3d9199431bbcdd7b5f;
        UPDATE_STRING_DICT0( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_1ed316d75ff80ea70bd320ad9547dae6;
        UPDATE_STRING_DICT0( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_e6fc0ab12a681e654dee0d32069404ef = MAKE_MODULE_FRAME( codeobj_e6fc0ab12a681e654dee0d32069404ef, module_numpy$core$_string_helpers );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e6fc0ab12a681e654dee0d32069404ef );
    assert( Py_REFCNT( frame_e6fc0ab12a681e654dee0d32069404ef ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_range_arg_1;
            tmp_range_arg_1 = const_int_pos_256;
            tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
            assert( !(tmp_iter_arg_1 == NULL) );
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            assert( !(tmp_assign_source_4 == NULL) );
            assert( tmp_list_contraction_1__$0 == NULL );
            tmp_list_contraction_1__$0 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = PyList_New( 0 );
            assert( tmp_list_contraction_1__contraction_result == NULL );
            tmp_list_contraction_1__contraction_result = tmp_assign_source_5;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( tmp_list_contraction_1__$0 );
            tmp_next_source_1 = tmp_list_contraction_1__$0;
            tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    exception_lineno = 9;
                    goto try_except_handler_1;
                }
            }

            {
                PyObject *old = tmp_list_contraction_1__iter_value_0;
                tmp_list_contraction_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
            tmp_assign_source_7 = tmp_list_contraction_1__iter_value_0;
            UPDATE_STRING_DICT0( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain__m, tmp_assign_source_7 );
        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_chr_arg_1;
            PyObject *tmp_mvar_value_1;
            CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
            tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain__m );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__m );
            }

            CHECK_OBJECT( tmp_mvar_value_1 );
            tmp_chr_arg_1 = tmp_mvar_value_1;
            tmp_append_value_1 = BUILTIN_CHR( tmp_chr_arg_1 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;

                goto try_except_handler_1;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;

                goto try_except_handler_1;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_assign_source_3 = tmp_list_contraction_1__contraction_result;
        Py_INCREF( tmp_assign_source_3 );
        goto try_return_handler_1;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$_string_helpers );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_1:;
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
        try_except_handler_1:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
        Py_DECREF( tmp_list_contraction_1__$0 );
        tmp_list_contraction_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
        Py_DECREF( tmp_list_contraction_1__contraction_result );
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
        NUITKA_CANNOT_GET_HERE( numpy$core$_string_helpers );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain__all_chars, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_8;
        Py_ssize_t tmp_sliceslicedel_index_lower_1;
        Py_ssize_t tmp_slice_index_upper_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_mvar_value_2;
        tmp_sliceslicedel_index_lower_1 = 65;
        tmp_slice_index_upper_1 = 91;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain__all_chars );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__all_chars );
        }

        CHECK_OBJECT( tmp_mvar_value_2 );
        tmp_slice_source_1 = tmp_mvar_value_2;
        tmp_assign_source_8 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain__ascii_upper, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        Py_ssize_t tmp_sliceslicedel_index_lower_2;
        Py_ssize_t tmp_slice_index_upper_2;
        PyObject *tmp_slice_source_2;
        PyObject *tmp_mvar_value_3;
        tmp_sliceslicedel_index_lower_2 = 97;
        tmp_slice_index_upper_2 = 123;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain__all_chars );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__all_chars );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_slice_source_2 = tmp_mvar_value_3;
        tmp_assign_source_9 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain__ascii_lower, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        Py_ssize_t tmp_sliceslicedel_index_lower_3;
        Py_ssize_t tmp_slice_index_upper_3;
        PyObject *tmp_slice_source_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_right_name_2;
        Py_ssize_t tmp_sliceslicedel_index_lower_4;
        Py_ssize_t tmp_slice_index_upper_4;
        PyObject *tmp_slice_source_4;
        PyObject *tmp_mvar_value_6;
        tmp_source_name_1 = const_str_empty;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
        assert( !(tmp_called_name_1 == NULL) );
        tmp_sliceslicedel_index_lower_3 = 0;
        tmp_slice_index_upper_3 = 65;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain__all_chars );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__all_chars );
        }

        CHECK_OBJECT( tmp_mvar_value_4 );
        tmp_slice_source_3 = tmp_mvar_value_4;
        tmp_left_name_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain__ascii_lower );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ascii_lower );
        }

        CHECK_OBJECT( tmp_mvar_value_5 );
        tmp_right_name_1 = tmp_mvar_value_5;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_sliceslicedel_index_lower_4 = 91;
        tmp_slice_index_upper_4 = PY_SSIZE_T_MAX;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain__all_chars );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__all_chars );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_all_chars" );
            exception_tb = NULL;

            exception_lineno = 12;

            goto frame_exception_exit_1;
        }

        tmp_slice_source_4 = tmp_mvar_value_6;
        tmp_right_name_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        frame_e6fc0ab12a681e654dee0d32069404ef->m_frame.f_lineno = 12;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain_LOWER_TABLE, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        Py_ssize_t tmp_sliceslicedel_index_lower_5;
        Py_ssize_t tmp_slice_index_upper_5;
        PyObject *tmp_slice_source_5;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_right_name_3;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_right_name_4;
        Py_ssize_t tmp_sliceslicedel_index_lower_6;
        Py_ssize_t tmp_slice_index_upper_6;
        PyObject *tmp_slice_source_6;
        PyObject *tmp_mvar_value_9;
        tmp_source_name_2 = const_str_empty;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
        assert( !(tmp_called_name_2 == NULL) );
        tmp_sliceslicedel_index_lower_5 = 0;
        tmp_slice_index_upper_5 = 97;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain__all_chars );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__all_chars );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_all_chars" );
            exception_tb = NULL;

            exception_lineno = 13;

            goto frame_exception_exit_1;
        }

        tmp_slice_source_5 = tmp_mvar_value_7;
        tmp_left_name_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_5, tmp_sliceslicedel_index_lower_5, tmp_slice_index_upper_5 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain__ascii_upper );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ascii_upper );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_ascii_upper" );
            exception_tb = NULL;

            exception_lineno = 13;

            goto frame_exception_exit_1;
        }

        tmp_right_name_3 = tmp_mvar_value_8;
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_sliceslicedel_index_lower_6 = 123;
        tmp_slice_index_upper_6 = PY_SSIZE_T_MAX;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain__all_chars );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__all_chars );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_all_chars" );
            exception_tb = NULL;

            exception_lineno = 13;

            goto frame_exception_exit_1;
        }

        tmp_slice_source_6 = tmp_mvar_value_9;
        tmp_right_name_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_6, tmp_sliceslicedel_index_lower_6, tmp_slice_index_upper_6 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        frame_e6fc0ab12a681e654dee0d32069404ef->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain_UPPER_TABLE, tmp_assign_source_11 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6fc0ab12a681e654dee0d32069404ef );
#endif
    popFrameStack();

    assertFrameObject( frame_e6fc0ab12a681e654dee0d32069404ef );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6fc0ab12a681e654dee0d32069404ef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e6fc0ab12a681e654dee0d32069404ef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e6fc0ab12a681e654dee0d32069404ef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e6fc0ab12a681e654dee0d32069404ef, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_numpy$core$_string_helpers$$$function_1_english_lower(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain_english_lower, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_numpy$core$_string_helpers$$$function_2_english_upper(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain_english_upper, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_numpy$core$_string_helpers$$$function_3_english_capitalize(  );



        UPDATE_STRING_DICT1( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain_english_capitalize, tmp_assign_source_14 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$core$_string_helpers, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$core$_string_helpers );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
