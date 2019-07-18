/* Generated code for Python module '__main__'
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

/* The "_module___main__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_CardWriter;
static PyObject *const_tuple_str_plain_freq_tuple;
static PyObject *const_str_plain_button;
static PyObject *const_str_plain_bouncetime;
extern PyObject *const_str_plain___main__;
static PyObject *const_str_plain_pyin_play_note;
extern PyObject *const_str_plain_libpd_bang;
static PyObject *const_str_plain_GPIObuttonpins;
extern PyObject *const_str_plain_libpd_subscribe;
static PyObject *const_int_pos_15;
static PyObject *const_int_pos_100;
static PyObject *const_str_plain_is_active;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_SIGINT;
static PyObject *const_str_plain_synthlibrary;
static PyObject *const_str_plain_pull_up_down;
static PyObject *const_int_pos_300;
static PyObject *const_str_plain_inputLFODepth;
static PyObject *const_str_plain_time;
static PyObject *const_str_plain_freq;
static PyObject *const_str_digest_38534da3e62889a57855f278b3bf3472;
static PyObject *const_str_plain_True;
static PyObject *const_str_plain_setwarnings;
extern PyObject *const_str_plain_site;
extern PyObject *const_str_plain_libpd_open_patch;
static PyObject *const_int_pos_37;
static PyObject *const_int_pos_35;
static PyObject *const_str_plain_inputLFOSpeed;
static PyObject *const_str_plain_path;
static PyObject *const_tuple_str_plain_pyin_play_note_tuple;
extern PyObject *const_str_digest_49797bf29503761b116e94d134df9c96;
static PyObject *const_str_plain_types;
static PyObject *const_str_plain_threading;
static PyObject *const_str_plain_stream;
static PyObject *const_str_plain_os;
extern PyObject *const_str_plain_pylibpd;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_pyin_lfo_depth;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_setup;
static PyObject *const_str_plain_IN;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_sleep;
static PyObject *const_str_plain_Feedback;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_85f23b7f6293912f7c320f653dcb6c85;
static PyObject *const_str_plain_PUD_UP;
static PyObject *const_str_plain_button_push;
static PyObject *const_str_plain_PATCH;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_08911454de37cbda560b915d944c303a;
static PyObject *const_tuple_int_pos_7_str_plain_pyin_lfo_depth_int_pos_100_tuple;
static PyObject *const_tuple_str_plain_button_tuple;
static PyObject *const_str_angle_module;
extern PyObject *const_str_chr_42;
static PyObject *const_str_plain_GetAnalogInput;
static PyObject *const_str_digest_5906d35ae160750e1212eece34baf5bd;
static PyObject *const_tuple_str_digest_85f23b7f6293912f7c320f653dcb6c85_tuple;
static PyObject *const_str_plain_pyin_lfo_speed;
static PyObject *const_str_plain_end_read;
static PyObject *const_str_plain_GPIO;
static PyObject *const_str_plain_append;
static PyObject *const_str_plain_StationBrain;
static PyObject *const_list_int_pos_37_int_pos_35_list;
extern PyObject *const_str_plain_False;
extern PyObject *const_int_pos_7;
extern PyObject *const_str_plain_callback;
static PyObject *const_str_plain_Station;
static PyObject *const_str_plain_ALIVE;
static PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_tuple_int_pos_6_str_plain_pyin_lfo_speed_int_pos_15_tuple;
static PyObject *const_str_plain_StationFeedback;
static PyObject *const_str_plain_add_event_detect;
static PyObject *const_str_plain_StationCardWriter;
extern PyObject *const_str_dot;
static PyObject *const_str_plain_abspath;
static PyObject *const_str_plain_FALLING;
static PyObject *const_str_plain_signal;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_CardWriter = UNSTREAM_STRING( &constant_bin[ 1256 ], 10, 1 );
    const_tuple_str_plain_freq_tuple = PyTuple_New( 1 );
    const_str_plain_freq = UNSTREAM_STRING( &constant_bin[ 1266 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_freq_tuple, 0, const_str_plain_freq ); Py_INCREF( const_str_plain_freq );
    const_str_plain_button = UNSTREAM_STRING( &constant_bin[ 1270 ], 6, 1 );
    const_str_plain_bouncetime = UNSTREAM_STRING( &constant_bin[ 1276 ], 10, 1 );
    const_str_plain_pyin_play_note = UNSTREAM_STRING( &constant_bin[ 1286 ], 14, 1 );
    const_str_plain_GPIObuttonpins = UNSTREAM_STRING( &constant_bin[ 1300 ], 14, 1 );
    const_int_pos_15 = PyInt_FromLong( 15l );
    const_int_pos_100 = PyInt_FromLong( 100l );
    const_str_plain_is_active = UNSTREAM_STRING( &constant_bin[ 1314 ], 9, 1 );
    const_str_plain_SIGINT = UNSTREAM_STRING( &constant_bin[ 1323 ], 6, 1 );
    const_str_plain_synthlibrary = UNSTREAM_STRING( &constant_bin[ 1329 ], 12, 1 );
    const_str_plain_pull_up_down = UNSTREAM_STRING( &constant_bin[ 1341 ], 12, 1 );
    const_int_pos_300 = PyInt_FromLong( 300l );
    const_str_plain_inputLFODepth = UNSTREAM_STRING( &constant_bin[ 1353 ], 13, 1 );
    const_str_plain_time = UNSTREAM_STRING( &constant_bin[ 1282 ], 4, 1 );
    const_str_digest_38534da3e62889a57855f278b3bf3472 = UNSTREAM_STRING( &constant_bin[ 1366 ], 21, 0 );
    const_str_plain_True = UNSTREAM_STRING( &constant_bin[ 1387 ], 4, 1 );
    const_str_plain_setwarnings = UNSTREAM_STRING( &constant_bin[ 1391 ], 11, 1 );
    const_int_pos_37 = PyInt_FromLong( 37l );
    const_int_pos_35 = PyInt_FromLong( 35l );
    const_str_plain_inputLFOSpeed = UNSTREAM_STRING( &constant_bin[ 1402 ], 13, 1 );
    const_str_plain_path = UNSTREAM_STRING( &constant_bin[ 1415 ], 4, 1 );
    const_tuple_str_plain_pyin_play_note_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_pyin_play_note_tuple, 0, const_str_plain_pyin_play_note ); Py_INCREF( const_str_plain_pyin_play_note );
    const_str_plain_types = UNSTREAM_STRING( &constant_bin[ 1419 ], 5, 1 );
    const_str_plain_threading = UNSTREAM_STRING( &constant_bin[ 1424 ], 9, 1 );
    const_str_plain_stream = UNSTREAM_STRING( &constant_bin[ 1433 ], 6, 1 );
    const_str_plain_os = UNSTREAM_STRING( &constant_bin[ 127 ], 2, 1 );
    const_str_plain_pyin_lfo_depth = UNSTREAM_STRING( &constant_bin[ 1439 ], 14, 1 );
    const_str_plain_setup = UNSTREAM_STRING( &constant_bin[ 1453 ], 5, 1 );
    const_str_plain_IN = UNSTREAM_STRING( &constant_bin[ 755 ], 2, 1 );
    const_str_plain_sleep = UNSTREAM_STRING( &constant_bin[ 1458 ], 5, 1 );
    const_str_plain_Feedback = UNSTREAM_STRING( &constant_bin[ 1463 ], 8, 1 );
    const_str_digest_85f23b7f6293912f7c320f653dcb6c85 = UNSTREAM_STRING( &constant_bin[ 1471 ], 18, 0 );
    const_str_plain_PUD_UP = UNSTREAM_STRING( &constant_bin[ 1489 ], 6, 1 );
    const_str_plain_button_push = UNSTREAM_STRING( &constant_bin[ 1495 ], 11, 1 );
    const_str_plain_PATCH = UNSTREAM_STRING( &constant_bin[ 1506 ], 5, 1 );
    const_str_digest_08911454de37cbda560b915d944c303a = UNSTREAM_STRING( &constant_bin[ 1511 ], 21, 0 );
    const_tuple_int_pos_7_str_plain_pyin_lfo_depth_int_pos_100_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_7_str_plain_pyin_lfo_depth_int_pos_100_tuple, 0, const_int_pos_7 ); Py_INCREF( const_int_pos_7 );
    PyTuple_SET_ITEM( const_tuple_int_pos_7_str_plain_pyin_lfo_depth_int_pos_100_tuple, 1, const_str_plain_pyin_lfo_depth ); Py_INCREF( const_str_plain_pyin_lfo_depth );
    PyTuple_SET_ITEM( const_tuple_int_pos_7_str_plain_pyin_lfo_depth_int_pos_100_tuple, 2, const_int_pos_100 ); Py_INCREF( const_int_pos_100 );
    const_tuple_str_plain_button_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_button_tuple, 0, const_str_plain_button ); Py_INCREF( const_str_plain_button );
    const_str_angle_module = UNSTREAM_STRING( &constant_bin[ 1532 ], 8, 0 );
    const_str_plain_GetAnalogInput = UNSTREAM_STRING( &constant_bin[ 1540 ], 14, 1 );
    const_str_digest_5906d35ae160750e1212eece34baf5bd = UNSTREAM_STRING( &constant_bin[ 1554 ], 37, 0 );
    const_tuple_str_digest_85f23b7f6293912f7c320f653dcb6c85_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_85f23b7f6293912f7c320f653dcb6c85_tuple, 0, const_str_digest_85f23b7f6293912f7c320f653dcb6c85 ); Py_INCREF( const_str_digest_85f23b7f6293912f7c320f653dcb6c85 );
    const_str_plain_pyin_lfo_speed = UNSTREAM_STRING( &constant_bin[ 1591 ], 14, 1 );
    const_str_plain_end_read = UNSTREAM_STRING( &constant_bin[ 1605 ], 8, 1 );
    const_str_plain_GPIO = UNSTREAM_STRING( &constant_bin[ 1207 ], 4, 1 );
    const_str_plain_append = UNSTREAM_STRING( &constant_bin[ 1613 ], 6, 1 );
    const_str_plain_StationBrain = UNSTREAM_STRING( &constant_bin[ 1619 ], 12, 1 );
    const_list_int_pos_37_int_pos_35_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_int_pos_37_int_pos_35_list, 0, const_int_pos_37 ); Py_INCREF( const_int_pos_37 );
    PyList_SET_ITEM( const_list_int_pos_37_int_pos_35_list, 1, const_int_pos_35 ); Py_INCREF( const_int_pos_35 );
    const_str_plain_Station = UNSTREAM_STRING( &constant_bin[ 1573 ], 7, 1 );
    const_str_plain_ALIVE = UNSTREAM_STRING( &constant_bin[ 1631 ], 5, 1 );
    const_tuple_int_pos_2_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_tuple, 0, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_tuple_int_pos_6_str_plain_pyin_lfo_speed_int_pos_15_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_6_str_plain_pyin_lfo_speed_int_pos_15_tuple, 0, const_int_pos_6 ); Py_INCREF( const_int_pos_6 );
    PyTuple_SET_ITEM( const_tuple_int_pos_6_str_plain_pyin_lfo_speed_int_pos_15_tuple, 1, const_str_plain_pyin_lfo_speed ); Py_INCREF( const_str_plain_pyin_lfo_speed );
    PyTuple_SET_ITEM( const_tuple_int_pos_6_str_plain_pyin_lfo_speed_int_pos_15_tuple, 2, const_int_pos_15 ); Py_INCREF( const_int_pos_15 );
    const_str_plain_StationFeedback = UNSTREAM_STRING( &constant_bin[ 1636 ], 15, 1 );
    const_str_plain_add_event_detect = UNSTREAM_STRING( &constant_bin[ 1651 ], 16, 1 );
    const_str_plain_StationCardWriter = UNSTREAM_STRING( &constant_bin[ 1667 ], 17, 1 );
    const_str_plain_abspath = UNSTREAM_STRING( &constant_bin[ 1684 ], 7, 1 );
    const_str_plain_FALLING = UNSTREAM_STRING( &constant_bin[ 1691 ], 7, 1 );
    const_str_plain_signal = UNSTREAM_STRING( &constant_bin[ 1698 ], 6, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e360778a2c65ac952d6374fca5b7e6d2;
static PyCodeObject *codeobj_d29b59a077ad8b893307435c3c00cec1;
/* For use in "MainProgram.c". */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_5906d35ae160750e1212eece34baf5bd;
    codeobj_e360778a2c65ac952d6374fca5b7e6d2 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_module, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_main = codeobj_e360778a2c65ac952d6374fca5b7e6d2;
    codeobj_d29b59a077ad8b893307435c3c00cec1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_button_push, 22, const_tuple_str_plain_button_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION___main__$$$function_1_button_push(  );


// The module function definitions.
static PyObject *impl___main__$$$function_1_button_push( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_button = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d29b59a077ad8b893307435c3c00cec1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_print_value;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d29b59a077ad8b893307435c3c00cec1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d29b59a077ad8b893307435c3c00cec1, codeobj_d29b59a077ad8b893307435c3c00cec1, module___main__, sizeof(void *) );
    frame_d29b59a077ad8b893307435c3c00cec1 = cache_frame_d29b59a077ad8b893307435c3c00cec1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d29b59a077ad8b893307435c3c00cec1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d29b59a077ad8b893307435c3c00cec1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_button );
        tmp_compexpr_left_1 = par_button;
        tmp_compexpr_right_1 = const_int_pos_37;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "o";
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
        tmp_print_value = const_str_digest_08911454de37cbda560b915d944c303a;
        tmp_result = PRINT_ITEM( tmp_print_value );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if ( PRINT_NEW_LINE() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_libpd_bang );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libpd_bang );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "libpd_bang" );
                exception_tb = NULL;

                exception_lineno = 25;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_d29b59a077ad8b893307435c3c00cec1->m_frame.f_lineno = 25;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_pyin_play_note_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d29b59a077ad8b893307435c3c00cec1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d29b59a077ad8b893307435c3c00cec1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d29b59a077ad8b893307435c3c00cec1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d29b59a077ad8b893307435c3c00cec1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d29b59a077ad8b893307435c3c00cec1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d29b59a077ad8b893307435c3c00cec1,
        type_description_1,
        par_button
    );


    // Release cached frame.
    if ( frame_d29b59a077ad8b893307435c3c00cec1 == cache_frame_d29b59a077ad8b893307435c3c00cec1 )
    {
        Py_DECREF( frame_d29b59a077ad8b893307435c3c00cec1 );
    }
    cache_frame_d29b59a077ad8b893307435c3c00cec1 = NULL;

    assertFrameObject( frame_d29b59a077ad8b893307435c3c00cec1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( __main__$$$function_1_button_push );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_button );
    Py_DECREF( par_button );
    par_button = NULL;

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

    CHECK_OBJECT( (PyObject *)par_button );
    Py_DECREF( par_button );
    par_button = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( __main__$$$function_1_button_push );
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



static PyObject *MAKE_FUNCTION___main__$$$function_1_button_push(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_1_button_push,
        const_str_plain_button_push,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d29b59a077ad8b893307435c3c00cec1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef___main__ =
{
    PyModuleDef_HEAD_INIT,
    "__main__",
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

MOD_INIT_DECL( __main__ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module___main__ );
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
    puts("__main__: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("__main__: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("__main__: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in init__main__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module___main__ = Py_InitModule4(
        "__main__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module___main__ = PyModule_Create( &mdef___main__ );
#endif

    moduledict___main__ = MODULE_DICT( module___main__ );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module___main__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain___main__, module___main__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !1
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 1
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e360778a2c65ac952d6374fca5b7e6d2;
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

    // Module code.
    // Frame without reuse.
    frame_e360778a2c65ac952d6374fca5b7e6d2 = MAKE_MODULE_FRAME( codeobj_e360778a2c65ac952d6374fca5b7e6d2, module___main__ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e360778a2c65ac952d6374fca5b7e6d2 );
    assert( Py_REFCNT( frame_e360778a2c65ac952d6374fca5b7e6d2 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_name_name_1;
        PyObject *tmp_level_name_1;
        PyObject *tmp_imported_value_1;
        tmp_name_name_1 = const_str_plain_os;
        tmp_level_name_1 = const_int_0;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 1;
        tmp_imported_value_1 = IMPORT_MODULE_KW( tmp_name_name_1, NULL, NULL, NULL, tmp_level_name_1 );
        if ( tmp_imported_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_imported_value_1 );
    }
    {
        PyObject *tmp_name_name_2;
        PyObject *tmp_level_name_2;
        PyObject *tmp_imported_value_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_level_name_2 = const_int_0;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 1;
        tmp_imported_value_2 = IMPORT_MODULE_KW( tmp_name_name_2, NULL, NULL, NULL, tmp_level_name_2 );
        assert( !(tmp_imported_value_2 == NULL) );
        Py_DECREF( tmp_imported_value_2 );
    }
    {
        PyObject *tmp_name_name_3;
        PyObject *tmp_level_name_3;
        PyObject *tmp_imported_value_3;
        tmp_name_name_3 = const_str_plain_types;
        tmp_level_name_3 = const_int_0;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 1;
        tmp_imported_value_3 = IMPORT_MODULE_KW( tmp_name_name_3, NULL, NULL, NULL, tmp_level_name_3 );
        if ( tmp_imported_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_imported_value_3 );
    }
    {
        PyObject *tmp_name_name_4;
        PyObject *tmp_level_name_4;
        PyObject *tmp_imported_value_4;
        tmp_name_name_4 = const_str_plain_site;
        tmp_level_name_4 = const_int_0;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 1;
        tmp_imported_value_4 = IMPORT_MODULE_KW( tmp_name_name_4, NULL, NULL, NULL, tmp_level_name_4 );
        if ( tmp_imported_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_imported_value_4 );
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_5906d35ae160750e1212eece34baf5bd;
        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_5 = const_str_plain_pylibpd;
        tmp_globals_name_1 = (PyObject *)moduledict___main__;
        tmp_locals_name_1 = (PyObject *)moduledict___main__;
        tmp_fromlist_name_1 = const_tuple_str_chr_42_tuple;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 1;
        tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_star_imported_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module___main__, true, tmp_star_imported_1 );
        Py_DECREF( tmp_star_imported_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_6 = const_str_plain_time;
        tmp_globals_name_2 = (PyObject *)moduledict___main__;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 2;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_6, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        assert( !(tmp_assign_source_3 == NULL) );
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_7 = const_str_digest_49797bf29503761b116e94d134df9c96;
        tmp_globals_name_3 = (PyObject *)moduledict___main__;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_7, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_GPIO );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_GPIO, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        tmp_name_name_8 = const_str_plain_signal;
        tmp_globals_name_4 = (PyObject *)moduledict___main__;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_8, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_signal, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        tmp_name_name_9 = const_str_plain_threading;
        tmp_globals_name_5 = (PyObject *)moduledict___main__;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 5;
        tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_9, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        tmp_name_name_10 = const_str_plain_os;
        tmp_globals_name_6 = (PyObject *)moduledict___main__;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 6;
        tmp_assign_source_7 = IMPORT_MODULE4( tmp_name_name_10, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        tmp_name_name_11 = const_str_plain_sys;
        tmp_globals_name_7 = (PyObject *)moduledict___main__;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = Py_None;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 7;
        tmp_assign_source_8 = IMPORT_MODULE4( tmp_name_name_11, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7 );
        assert( !(tmp_assign_source_8 == NULL) );
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;

            exception_lineno = 8;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 8;
        tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abspath, &PyTuple_GET_ITEM( const_tuple_str_digest_85f23b7f6293912f7c320f653dcb6c85_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 8;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_star_imported_2;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        tmp_name_name_12 = const_str_plain_synthlibrary;
        tmp_globals_name_8 = (PyObject *)moduledict___main__;
        tmp_locals_name_8 = (PyObject *)moduledict___main__;
        tmp_fromlist_name_8 = const_tuple_str_chr_42_tuple;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 9;
        tmp_star_imported_2 = IMPORT_MODULE4( tmp_name_name_12, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8 );
        if ( tmp_star_imported_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module___main__, true, tmp_star_imported_2 );
        Py_DECREF( tmp_star_imported_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_True );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_True );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "True" );
            exception_tb = NULL;

            exception_lineno = 12;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_9 = tmp_mvar_value_3;
        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_ALIVE, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_str_digest_38534da3e62889a57855f278b3bf3472;
        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_PATCH, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_signal );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_signal );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "signal" );
            exception_tb = NULL;

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_signal );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_signal );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_signal );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "signal" );
            exception_tb = NULL;

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_SIGINT );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_end_read );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_end_read );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "end_read" );
            exception_tb = NULL;

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_6;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_GPIO );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "GPIO" );
            exception_tb = NULL;

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_7;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_setwarnings );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_False );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_False );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "False" );
            exception_tb = NULL;

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_8;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = LIST_COPY( const_list_int_pos_37_int_pos_35_list );
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_GPIObuttonpins, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION___main__$$$function_1_button_push(  );



        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_button_push, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_GPIObuttonpins );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIObuttonpins );
        }

        CHECK_OBJECT( tmp_mvar_value_9 );
        tmp_iter_arg_1 = tmp_mvar_value_9;
        tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_13;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_14 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                exception_lineno = 28;
                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_15 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_button, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_GPIO );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "GPIO" );
            exception_tb = NULL;

            exception_lineno = 29;

            goto try_except_handler_1;
        }

        tmp_source_name_7 = tmp_mvar_value_10;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_setup );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_button );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_button );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "button" );
            exception_tb = NULL;

            exception_lineno = 29;

            goto try_except_handler_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_11;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_GPIO );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "GPIO" );
            exception_tb = NULL;

            exception_lineno = 29;

            goto try_except_handler_1;
        }

        tmp_source_name_8 = tmp_mvar_value_12;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_IN );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 29;

            goto try_except_handler_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_GPIO );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO );
        }

        if ( tmp_mvar_value_13 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "GPIO" );
            exception_tb = NULL;

            exception_lineno = 29;

            goto try_except_handler_1;
        }

        tmp_source_name_9 = tmp_mvar_value_13;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_PUD_UP );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 29;

            goto try_except_handler_1;
        }
        tmp_dict_key_1 = const_str_plain_pull_up_down;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 29;
        tmp_call_result_4 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_10;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_GPIO );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "GPIO" );
            exception_tb = NULL;

            exception_lineno = 30;

            goto try_except_handler_1;
        }

        tmp_source_name_10 = tmp_mvar_value_14;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_add_event_detect );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_button );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_button );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "button" );
            exception_tb = NULL;

            exception_lineno = 30;

            goto try_except_handler_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_15;
        tmp_args_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_GPIO );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GPIO );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "GPIO" );
            exception_tb = NULL;

            exception_lineno = 30;

            goto try_except_handler_1;
        }

        tmp_source_name_11 = tmp_mvar_value_16;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_FALLING );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_2 );

            exception_lineno = 30;

            goto try_except_handler_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_button_push );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_button_push );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "button_push" );
            exception_tb = NULL;

            exception_lineno = 30;

            goto try_except_handler_1;
        }

        tmp_dict_value_2 = tmp_mvar_value_17;
        tmp_dict_key_2 = const_str_plain_callback;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_3 = const_int_pos_300;
        tmp_dict_key_3 = const_str_plain_bouncetime;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 30;
        tmp_call_result_5 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        Py_DECREF( tmp_call_result_5 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
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
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_libpd_open_patch );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libpd_open_patch );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "libpd_open_patch" );
            exception_tb = NULL;

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_18;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_PATCH );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PATCH );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "PATCH" );
            exception_tb = NULL;

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = tmp_mvar_value_19;
        tmp_args_element_name_6 = const_str_dot;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
        }

        if ( tmp_call_result_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_6 );
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_call_result_7;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_libpd_subscribe );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libpd_subscribe );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "libpd_subscribe" );
            exception_tb = NULL;

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_20;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 35;
        tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_str_plain_freq_tuple, 0 ) );

        if ( tmp_call_result_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_7 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_21;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_StationFeedback );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_StationFeedback );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "StationFeedback" );
            exception_tb = NULL;

            exception_lineno = 47;

            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_21;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 47;
        tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_Feedback, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_22;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_StationCardWriter );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_StationCardWriter );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "StationCardWriter" );
            exception_tb = NULL;

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }

        tmp_called_name_9 = tmp_mvar_value_22;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 48;
        tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_CardWriter, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_mvar_value_25;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_StationBrain );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_StationBrain );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "StationBrain" );
            exception_tb = NULL;

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }

        tmp_called_name_10 = tmp_mvar_value_23;
        tmp_args_element_name_7 = const_int_pos_6;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_Feedback );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Feedback );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "Feedback" );
            exception_tb = NULL;

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_8 = tmp_mvar_value_24;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_CardWriter );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CardWriter );
        }

        CHECK_OBJECT( tmp_mvar_value_25 );
        tmp_args_element_name_9 = tmp_mvar_value_25;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_Station, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_11;
        PyObject *tmp_mvar_value_26;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_GetAnalogInput );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetAnalogInput );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "GetAnalogInput" );
            exception_tb = NULL;

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }

        tmp_called_name_11 = tmp_mvar_value_26;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 54;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_int_pos_6_str_plain_pyin_lfo_speed_int_pos_15_tuple, 0 ) );

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_inputLFOSpeed, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_12;
        PyObject *tmp_mvar_value_27;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_GetAnalogInput );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetAnalogInput );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "GetAnalogInput" );
            exception_tb = NULL;

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }

        tmp_called_name_12 = tmp_mvar_value_27;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 55;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_int_pos_7_str_plain_pyin_lfo_depth_int_pos_100_tuple, 0 ) );

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_inputLFODepth, tmp_assign_source_20 );
    }
    loop_start_2:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_mvar_value_29;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_stream );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stream );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "stream" );
            exception_tb = NULL;

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_28;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 57;
        tmp_and_left_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_is_active );
        if ( tmp_and_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF( tmp_and_left_value_1 );
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_ALIVE );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ALIVE );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ALIVE" );
            exception_tb = NULL;

            exception_lineno = 57;

            goto frame_exception_exit_1;
        }

        tmp_and_right_value_1 = tmp_mvar_value_29;
        Py_INCREF( tmp_and_right_value_1 );
        tmp_operand_name_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_operand_name_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

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
        goto loop_end_2;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_call_result_8;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "time" );
            exception_tb = NULL;

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_30;
        frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame.f_lineno = 58;
        tmp_call_result_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_sleep, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

        if ( tmp_call_result_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_8 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e360778a2c65ac952d6374fca5b7e6d2 );
#endif
    popFrameStack();

    assertFrameObject( frame_e360778a2c65ac952d6374fca5b7e6d2 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e360778a2c65ac952d6374fca5b7e6d2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e360778a2c65ac952d6374fca5b7e6d2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e360778a2c65ac952d6374fca5b7e6d2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e360778a2c65ac952d6374fca5b7e6d2, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 1
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module___main__ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
