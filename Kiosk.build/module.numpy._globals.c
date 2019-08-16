/* Generated code for Python module 'numpy._globals'
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

/* The "_module_numpy$_globals" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$_globals;
PyDictObject *moduledict_numpy$_globals;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_object;
static PyObject *const_str_digest_7d3ac79eee0cc4ba46570128a07072e5;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_8d9f2266e4a2b8328c89b572ff9cc038;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain___ALL__;
static PyObject *const_str_plain__NoValueType__instance;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain___new__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain__is_loaded;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_UserWarning;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
static PyObject *const_str_digest_1fa3ef7ab6cb10e6941391f74b0ec935;
extern PyObject *const_str_plain___reduce__;
extern PyObject *const_tuple_str_plain_cls_tuple;
extern PyObject *const_str_plain___repr__;
static PyObject *const_list_b909a47de8e0dfa362d4dddbb85a1fe1_list;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_c4818f4c7678929ac2143c2744f099bc;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_VisibleDeprecationWarning;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain__NoValue;
static PyObject *const_str_digest_e06677149df4fe03e39f914eac1ae3c4;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_c2d88d18445b3f61fbca5629f0126eeb;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain__NoValueType;
static PyObject *const_str_digest_36f025c2ae62ec81f44eab7a5d4fb586;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_str_digest_9e9eca8947418183630fd19f8c915a83;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_8fbb954f5be04dbb218360cedc4cf18a;
extern PyObject *const_str_plain_ModuleDeprecationWarning;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_7d3ac79eee0cc4ba46570128a07072e5 = UNSTREAM_STRING( &constant_bin[ 761935 ], 50, 0 );
    const_str_digest_8d9f2266e4a2b8328c89b572ff9cc038 = UNSTREAM_STRING( &constant_bin[ 761985 ], 39, 0 );
    const_str_plain___ALL__ = UNSTREAM_STRING( &constant_bin[ 762024 ], 7, 1 );
    const_str_plain__NoValueType__instance = UNSTREAM_STRING( &constant_bin[ 762031 ], 22, 1 );
    const_str_plain__is_loaded = UNSTREAM_STRING( &constant_bin[ 762053 ], 10, 1 );
    const_str_digest_1fa3ef7ab6cb10e6941391f74b0ec935 = UNSTREAM_STRING( &constant_bin[ 762063 ], 310, 0 );
    const_list_b909a47de8e0dfa362d4dddbb85a1fe1_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_b909a47de8e0dfa362d4dddbb85a1fe1_list, 0, const_str_plain_ModuleDeprecationWarning ); Py_INCREF( const_str_plain_ModuleDeprecationWarning );
    PyList_SET_ITEM( const_list_b909a47de8e0dfa362d4dddbb85a1fe1_list, 1, const_str_plain_VisibleDeprecationWarning ); Py_INCREF( const_str_plain_VisibleDeprecationWarning );
    PyList_SET_ITEM( const_list_b909a47de8e0dfa362d4dddbb85a1fe1_list, 2, const_str_plain__NoValue ); Py_INCREF( const_str_plain__NoValue );
    const_str_digest_c4818f4c7678929ac2143c2744f099bc = UNSTREAM_STRING( &constant_bin[ 762373 ], 585, 0 );
    const_str_digest_e06677149df4fe03e39f914eac1ae3c4 = UNSTREAM_STRING( &constant_bin[ 762958 ], 23, 0 );
    const_str_digest_c2d88d18445b3f61fbca5629f0126eeb = UNSTREAM_STRING( &constant_bin[ 762981 ], 194, 0 );
    const_str_plain__NoValueType = UNSTREAM_STRING( &constant_bin[ 762031 ], 12, 1 );
    const_str_digest_36f025c2ae62ec81f44eab7a5d4fb586 = UNSTREAM_STRING( &constant_bin[ 763175 ], 225, 0 );
    const_str_digest_8fbb954f5be04dbb218360cedc4cf18a = UNSTREAM_STRING( &constant_bin[ 763400 ], 10, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$_globals( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2a52a0e01516810c39df70d47a24daaf;
static PyCodeObject *codeobj_8bf8c5ec66a896183c7a725bfff2aa2a;
static PyCodeObject *codeobj_16b327c6476b3b2bd93a9ae3139eb16d;
static PyCodeObject *codeobj_a41ca0ce172743f9da2c728d31b0232c;
static PyCodeObject *codeobj_a97a0afc52c58d1cacdbc82bc570a72b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_7d3ac79eee0cc4ba46570128a07072e5;
    codeobj_2a52a0e01516810c39df70d47a24daaf = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e06677149df4fe03e39f914eac1ae3c4, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8bf8c5ec66a896183c7a725bfff2aa2a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__NoValueType, 59, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_16b327c6476b3b2bd93a9ae3139eb16d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___new__, 67, const_tuple_str_plain_cls_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a41ca0ce172743f9da2c728d31b0232c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___reduce__, 74, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a97a0afc52c58d1cacdbc82bc570a72b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 77, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$_globals$$$function_1___new__(  );


static PyObject *MAKE_FUNCTION_numpy$_globals$$$function_2___reduce__(  );


static PyObject *MAKE_FUNCTION_numpy$_globals$$$function_3___repr__(  );


// The module function definitions.
static PyObject *impl_numpy$_globals$$$function_1___new__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_16b327c6476b3b2bd93a9ae3139eb16d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_16b327c6476b3b2bd93a9ae3139eb16d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_16b327c6476b3b2bd93a9ae3139eb16d, codeobj_16b327c6476b3b2bd93a9ae3139eb16d, module_numpy$_globals, sizeof(void *) );
    frame_16b327c6476b3b2bd93a9ae3139eb16d = cache_frame_16b327c6476b3b2bd93a9ae3139eb16d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_16b327c6476b3b2bd93a9ae3139eb16d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_16b327c6476b3b2bd93a9ae3139eb16d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_cls );
        tmp_source_name_1 = par_cls;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__NoValueType__instance );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_type_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_object_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain__NoValueType );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__NoValueType );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_NoValueType" );
                exception_tb = NULL;

                exception_lineno = 70;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_type_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_cls );
            tmp_object_name_1 = par_cls;
            tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_cls );
            tmp_args_element_name_1 = par_cls;
            frame_16b327c6476b3b2bd93a9ae3139eb16d->m_frame.f_lineno = 70;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___new__, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_cls );
            tmp_assattr_target_1 = par_cls;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__NoValueType__instance, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_cls );
        tmp_source_name_2 = par_cls;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__NoValueType__instance );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_16b327c6476b3b2bd93a9ae3139eb16d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_16b327c6476b3b2bd93a9ae3139eb16d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_16b327c6476b3b2bd93a9ae3139eb16d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_16b327c6476b3b2bd93a9ae3139eb16d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_16b327c6476b3b2bd93a9ae3139eb16d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_16b327c6476b3b2bd93a9ae3139eb16d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_16b327c6476b3b2bd93a9ae3139eb16d,
        type_description_1,
        par_cls
    );


    // Release cached frame.
    if ( frame_16b327c6476b3b2bd93a9ae3139eb16d == cache_frame_16b327c6476b3b2bd93a9ae3139eb16d )
    {
        Py_DECREF( frame_16b327c6476b3b2bd93a9ae3139eb16d );
    }
    cache_frame_16b327c6476b3b2bd93a9ae3139eb16d = NULL;

    assertFrameObject( frame_16b327c6476b3b2bd93a9ae3139eb16d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$_globals$$$function_1___new__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$_globals$$$function_1___new__ );
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


static PyObject *impl_numpy$_globals$$$function_2___reduce__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a41ca0ce172743f9da2c728d31b0232c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a41ca0ce172743f9da2c728d31b0232c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a41ca0ce172743f9da2c728d31b0232c, codeobj_a41ca0ce172743f9da2c728d31b0232c, module_numpy$_globals, sizeof(void *) );
    frame_a41ca0ce172743f9da2c728d31b0232c = cache_frame_a41ca0ce172743f9da2c728d31b0232c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a41ca0ce172743f9da2c728d31b0232c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a41ca0ce172743f9da2c728d31b0232c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_tuple_empty;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a41ca0ce172743f9da2c728d31b0232c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a41ca0ce172743f9da2c728d31b0232c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a41ca0ce172743f9da2c728d31b0232c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a41ca0ce172743f9da2c728d31b0232c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a41ca0ce172743f9da2c728d31b0232c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a41ca0ce172743f9da2c728d31b0232c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a41ca0ce172743f9da2c728d31b0232c,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a41ca0ce172743f9da2c728d31b0232c == cache_frame_a41ca0ce172743f9da2c728d31b0232c )
    {
        Py_DECREF( frame_a41ca0ce172743f9da2c728d31b0232c );
    }
    cache_frame_a41ca0ce172743f9da2c728d31b0232c = NULL;

    assertFrameObject( frame_a41ca0ce172743f9da2c728d31b0232c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$_globals$$$function_2___reduce__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$_globals$$$function_2___reduce__ );
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


static PyObject *impl_numpy$_globals$$$function_3___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = const_str_digest_8fbb954f5be04dbb218360cedc4cf18a;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$_globals$$$function_3___repr__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$_globals$$$function_3___repr__ );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$_globals$$$function_1___new__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_globals$$$function_1___new__,
        const_str_plain___new__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_16b327c6476b3b2bd93a9ae3139eb16d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$_globals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_globals$$$function_2___reduce__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_globals$$$function_2___reduce__,
        const_str_plain___reduce__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a41ca0ce172743f9da2c728d31b0232c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$_globals,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_globals$$$function_3___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_globals$$$function_3___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a97a0afc52c58d1cacdbc82bc570a72b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$_globals,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$_globals =
{
    PyModuleDef_HEAD_INIT,
    "numpy._globals",
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

MOD_INIT_DECL( numpy$_globals )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$_globals );
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
    puts("numpy._globals: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy._globals: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy._globals: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$_globals" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$_globals = Py_InitModule4(
        "numpy._globals",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$_globals = PyModule_Create( &mdef_numpy$_globals );
#endif

    moduledict_numpy$_globals = MODULE_DICT( module_numpy$_globals );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$_globals,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_globals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_globals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$_globals );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_9e9eca8947418183630fd19f8c915a83, module_numpy$_globals );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    struct Nuitka_FrameObject *frame_2a52a0e01516810c39df70d47a24daaf;
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
    PyObject *locals_numpy$_globals_32 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    bool tmp_result;
    PyObject *locals_numpy$_globals_46 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_numpy$_globals_59 = NULL;
    struct Nuitka_FrameObject *frame_8bf8c5ec66a896183c7a725bfff2aa2a_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8bf8c5ec66a896183c7a725bfff2aa2a_2 = NULL;
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
        tmp_assign_source_1 = const_str_digest_c4818f4c7678929ac2143c2744f099bc;
        UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_7d3ac79eee0cc4ba46570128a07072e5;
        UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
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
    frame_2a52a0e01516810c39df70d47a24daaf = MAKE_MODULE_FRAME( codeobj_2a52a0e01516810c39df70d47a24daaf, module_numpy$_globals );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_2a52a0e01516810c39df70d47a24daaf );
    assert( Py_REFCNT( frame_2a52a0e01516810c39df70d47a24daaf ) == 2 );

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


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
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


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
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


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        tmp_assign_source_7 = LIST_COPY( const_list_b909a47de8e0dfa362d4dddbb85a1fe1_list );
        UPDATE_STRING_DICT1( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___ALL__, tmp_assign_source_7 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_str_plain__is_loaded;
        tmp_compexpr_right_1 = (PyObject *)moduledict_numpy$_globals;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

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
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_8d9f2266e4a2b8328c89b572ff9cc038;
            frame_2a52a0e01516810c39df70d47a24daaf->m_frame.f_lineno = 28;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 28;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_True;
        UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain__is_loaded, tmp_assign_source_8 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
            exception_tb = NULL;

            exception_lineno = 32;

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
            locals_numpy$_globals_32 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_9e9eca8947418183630fd19f8c915a83;
        tmp_res = PyDict_SetItem( locals_numpy$_globals_32, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_1fa3ef7ab6cb10e6941391f74b0ec935;
        tmp_res = PyDict_SetItem( locals_numpy$_globals_32, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_10 = locals_numpy$_globals_32;
        Py_INCREF( tmp_assign_source_10 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$_globals );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF( locals_numpy$_globals_32 );
        locals_numpy$_globals_32 = NULL;
        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$_globals );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        nuitka_bool tmp_condition_result_2;
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


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
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


            exception_lineno = 32;

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


                exception_lineno = 32;

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


                exception_lineno = 32;

                goto try_except_handler_5;
            }
            goto try_return_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$_globals );
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
        NUITKA_CANNOT_GET_HERE( numpy$_globals );
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
        NUITKA_CANNOT_GET_HERE( numpy$_globals );
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
        tmp_args_element_name_1 = const_str_plain_ModuleDeprecationWarning;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_args_element_name_2 = tmp_class_creation_1__bases;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_2a52a0e01516810c39df70d47a24daaf->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

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
        UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_ModuleDeprecationWarning, tmp_assign_source_14 );
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
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_1 = const_str_plain_numpy;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_ModuleDeprecationWarning );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModuleDeprecationWarning );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ModuleDeprecationWarning" );
            exception_tb = NULL;

            exception_lineno = 43;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___module__, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_UserWarning );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "UserWarning" );
            exception_tb = NULL;

            exception_lineno = 46;

            goto try_except_handler_6;
        }

        tmp_tuple_element_2 = tmp_mvar_value_3;
        tmp_assign_source_15 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_15, 0, tmp_tuple_element_2 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_numpy$_globals_46 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_9e9eca8947418183630fd19f8c915a83;
        tmp_res = PyDict_SetItem( locals_numpy$_globals_46, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_36f025c2ae62ec81f44eab7a5d4fb586;
        tmp_res = PyDict_SetItem( locals_numpy$_globals_46, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_16 = locals_numpy$_globals_46;
        Py_INCREF( tmp_assign_source_16 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$_globals );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_numpy$_globals_46 );
        locals_numpy$_globals_46 = NULL;
        goto outline_result_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$_globals );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        nuitka_bool tmp_condition_result_3;
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


            exception_lineno = 46;

            goto try_except_handler_6;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_17 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_subscribed_name_2 = tmp_class_creation_2__bases;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_18 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;

                goto try_except_handler_6;
            }
            assert( tmp_select_metaclass_2__base == NULL );
            tmp_select_metaclass_2__base = tmp_assign_source_18;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_source_name_2 = tmp_select_metaclass_2__base;
            tmp_assign_source_17 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;

                goto try_except_handler_9;
            }
            goto try_return_handler_8;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$_globals );
        return MOD_RETURN_VALUE( NULL );
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

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF( exception_keeper_type_4 );
            Py_XDECREF( exception_keeper_value_4 );
            Py_XDECREF( exception_keeper_tb_4 );
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_type_arg_2 = tmp_select_metaclass_2__base;
            tmp_assign_source_17 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_assign_source_17 == NULL) );
            goto try_return_handler_8;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$_globals );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        goto outline_result_4;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$_globals );
        return MOD_RETURN_VALUE( NULL );
        outline_result_4:;
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_VisibleDeprecationWarning;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_args_element_name_5 = tmp_class_creation_2__bases;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_2a52a0e01516810c39df70d47a24daaf->m_frame.f_lineno = 46;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_19;
    }
    goto try_end_3;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_20 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_VisibleDeprecationWarning, tmp_assign_source_20 );
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
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_4;
        tmp_assattr_name_2 = const_str_plain_numpy;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain_VisibleDeprecationWarning );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VisibleDeprecationWarning );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "VisibleDeprecationWarning" );
            exception_tb = NULL;

            exception_lineno = 56;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = tmp_mvar_value_4;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain___module__, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_numpy$_globals_59 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_digest_9e9eca8947418183630fd19f8c915a83;
        tmp_res = PyDict_SetItem( locals_numpy$_globals_59, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_c2d88d18445b3f61fbca5629f0126eeb;
        tmp_res = PyDict_SetItem( locals_numpy$_globals_59, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem( locals_numpy$_globals_59, const_str_plain__NoValueType__instance, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_8bf8c5ec66a896183c7a725bfff2aa2a_2, codeobj_8bf8c5ec66a896183c7a725bfff2aa2a, module_numpy$_globals, 0 );
        frame_8bf8c5ec66a896183c7a725bfff2aa2a_2 = cache_frame_8bf8c5ec66a896183c7a725bfff2aa2a_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_8bf8c5ec66a896183c7a725bfff2aa2a_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_8bf8c5ec66a896183c7a725bfff2aa2a_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_staticmethod_arg_1;
            tmp_staticmethod_arg_1 = MAKE_FUNCTION_numpy$_globals$$$function_1___new__(  );



            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
            Py_DECREF( tmp_staticmethod_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_numpy$_globals_59, const_str_plain___new__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 67;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8bf8c5ec66a896183c7a725bfff2aa2a_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8bf8c5ec66a896183c7a725bfff2aa2a_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_8bf8c5ec66a896183c7a725bfff2aa2a_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_8bf8c5ec66a896183c7a725bfff2aa2a_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_8bf8c5ec66a896183c7a725bfff2aa2a_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_8bf8c5ec66a896183c7a725bfff2aa2a_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_8bf8c5ec66a896183c7a725bfff2aa2a_2 == cache_frame_8bf8c5ec66a896183c7a725bfff2aa2a_2 )
        {
            Py_DECREF( frame_8bf8c5ec66a896183c7a725bfff2aa2a_2 );
        }
        cache_frame_8bf8c5ec66a896183c7a725bfff2aa2a_2 = NULL;

        assertFrameObject( frame_8bf8c5ec66a896183c7a725bfff2aa2a_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_11;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_numpy$_globals$$$function_2___reduce__(  );



        tmp_res = PyDict_SetItem( locals_numpy$_globals_59, const_str_plain___reduce__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$_globals$$$function_3___repr__(  );



        tmp_res = PyDict_SetItem( locals_numpy$_globals_59, const_str_plain___repr__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_21 = locals_numpy$_globals_59;
        Py_INCREF( tmp_assign_source_21 );
        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$_globals );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF( locals_numpy$_globals_59 );
        locals_numpy$_globals_59 = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_numpy$_globals_59 );
        locals_numpy$_globals_59 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$_globals );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 59;
        goto try_except_handler_10;
        outline_result_5:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        nuitka_bool tmp_condition_result_4;
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


            exception_lineno = 59;

            goto try_except_handler_10;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_22 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_22 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_22 );
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_3 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_7 = const_str_plain__NoValueType;
        tmp_args_element_name_8 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_9 = tmp_class_creation_3__class_dict;
        frame_2a52a0e01516810c39df70d47a24daaf->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_23;
    }
    goto try_end_4;
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

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_24 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain__NoValueType, tmp_assign_source_24 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain__NoValueType );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__NoValueType );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_NoValueType" );
            exception_tb = NULL;

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        frame_2a52a0e01516810c39df70d47a24daaf->m_frame.f_lineno = 81;
        tmp_assign_source_25 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain__NoValue, tmp_assign_source_25 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a52a0e01516810c39df70d47a24daaf );
#endif
    popFrameStack();

    assertFrameObject( frame_2a52a0e01516810c39df70d47a24daaf );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a52a0e01516810c39df70d47a24daaf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2a52a0e01516810c39df70d47a24daaf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2a52a0e01516810c39df70d47a24daaf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2a52a0e01516810c39df70d47a24daaf, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$_globals, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$_globals );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
