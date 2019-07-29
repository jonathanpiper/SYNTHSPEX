/* Generated code for Python module 'py._error'
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

/* The "_module_py$_error" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_py$_error;
PyDictObject *moduledict_py$_error;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain_EXDEV;
extern PyObject *const_str_plain_tb;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_1696c9244f2937cd3731d79d3745a9b7;
static PyObject *const_str_plain_errorcode;
static PyObject *const_str_digest_5ada9629bedca297ab916c768e727cf2;
static PyObject *const_str_plain_strerror;
extern PyObject *const_str_plain___getattr__;
static PyObject *const_str_plain__geterrnoclass;
static PyObject *const_tuple_d20030c414262853d3a100e76eea6053_tuple;
extern PyObject *const_str_plain___repr__;
static PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_cls_str_plain_eno_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_type_EnvironmentError_tuple;
static PyObject *const_str_digest_1566457e585cc96a28e7580c5ec9d073;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_digest_206d267a2fcca09c23811cc06241d7c3;
static PyObject *const_str_plain_ENOTDIR;
extern PyObject *const_str_plain_value;
static PyObject *const_tuple_type_OSError_type_EnvironmentError_tuple;
extern PyObject *const_str_plain___str__;
static PyObject *const_str_plain_WindowsError;
extern PyObject *const_int_pos_13;
static PyObject *const_str_plain_EEXIST;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_os;
static PyObject *const_str_digest_2899342f83791397d803da9a2806e764;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_cls;
static PyObject *const_str_plain_checked_call;
extern PyObject *const_str_plain_args;
static PyObject *const_str_plain___tracebackhide__;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_str_plain_self_str_plain_s_tuple;
extern PyObject *const_str_plain_modules;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_errno;
static PyObject *const_str_plain__errno2class;
static PyObject *const_str_plain_errorcls;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_name;
static PyObject *const_tuple_str_digest_206d267a2fcca09c23811cc06241d7c3_tuple;
static PyObject *const_tuple_0e48d1af8086085f27e383c529305321_tuple;
static PyObject *const_str_plain_ErrorMaker;
extern PyObject *const_str_plain__;
static PyObject *const_str_digest_8f8b83a015a2842bd3a6b27d7b60d1ca;
static PyObject *const_str_digest_81473554a5bcfc3005933c8b3d0c88a4;
static PyObject *const_str_digest_60344cf28c4e2008984a1156af78993d;
static PyObject *const_str_plain__winerrnomap;
extern PyObject *const_str_plain_ModuleType;
static PyObject *const_str_plain_ENOENT;
extern PyObject *const_int_pos_17;
extern PyObject *const_int_pos_20;
extern PyObject *const_int_pos_22;
static PyObject *const_str_plain_EACCES;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_space;
extern PyObject *const_str_plain_Error;
extern PyObject *const_str_plain_types;
static PyObject *const_str_digest_101c4dec31db6881133b0a481938ebd4;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_int_0;
static PyObject *const_str_plain_clsname;
extern PyObject *const_int_pos_18;
extern PyObject *const_str_digest_0aa788fdd491eb9f5a4b7bdf9e6bf391;
static PyObject *const_int_pos_267;
static PyObject *const_str_plain_EBUSY;
static PyObject *const_str_digest_374015da376c98b241ca7496fa67c3f5;
extern PyObject *const_str_plain_exc_info;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_str_plain_ModuleType_tuple;
static PyObject *const_str_plain_eno;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_EXDEV = UNSTREAM_STRING( &constant_bin[ 2401299 ], 5, 1 );
    const_str_digest_1696c9244f2937cd3731d79d3745a9b7 = UNSTREAM_STRING( &constant_bin[ 2401304 ], 51, 0 );
    const_str_plain_errorcode = UNSTREAM_STRING( &constant_bin[ 2401355 ], 9, 1 );
    const_str_digest_5ada9629bedca297ab916c768e727cf2 = UNSTREAM_STRING( &constant_bin[ 2401364 ], 13, 0 );
    const_str_plain_strerror = UNSTREAM_STRING( &constant_bin[ 2401377 ], 8, 1 );
    const_str_plain__geterrnoclass = UNSTREAM_STRING( &constant_bin[ 2401385 ], 14, 1 );
    const_tuple_d20030c414262853d3a100e76eea6053_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d20030c414262853d3a100e76eea6053_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_eno = UNSTREAM_STRING( &constant_bin[ 32152 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_d20030c414262853d3a100e76eea6053_tuple, 1, const_str_plain_eno ); Py_INCREF( const_str_plain_eno );
    const_str_plain_errorcls = UNSTREAM_STRING( &constant_bin[ 2401399 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_d20030c414262853d3a100e76eea6053_tuple, 2, const_str_plain_errorcls ); Py_INCREF( const_str_plain_errorcls );
    const_str_plain_clsname = UNSTREAM_STRING( &constant_bin[ 2401407 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_d20030c414262853d3a100e76eea6053_tuple, 3, const_str_plain_clsname ); Py_INCREF( const_str_plain_clsname );
    const_tuple_str_plain_self_str_plain_name_str_plain_cls_str_plain_eno_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_name_str_plain_cls_str_plain_eno_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_name_str_plain_cls_str_plain_eno_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_name_str_plain_cls_str_plain_eno_tuple, 2, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_name_str_plain_cls_str_plain_eno_tuple, 3, const_str_plain_eno ); Py_INCREF( const_str_plain_eno );
    const_tuple_type_EnvironmentError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_type_EnvironmentError_tuple, 0, (PyObject *)PyExc_EnvironmentError ); Py_INCREF( (PyObject *)PyExc_EnvironmentError );
    const_str_digest_1566457e585cc96a28e7580c5ec9d073 = UNSTREAM_STRING( &constant_bin[ 2401414 ], 4, 0 );
    const_str_digest_206d267a2fcca09c23811cc06241d7c3 = UNSTREAM_STRING( &constant_bin[ 2401418 ], 8, 0 );
    const_str_plain_ENOTDIR = UNSTREAM_STRING( &constant_bin[ 2401426 ], 7, 1 );
    const_tuple_type_OSError_type_EnvironmentError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_type_OSError_type_EnvironmentError_tuple, 0, (PyObject *)PyExc_OSError ); Py_INCREF( (PyObject *)PyExc_OSError );
    PyTuple_SET_ITEM( const_tuple_type_OSError_type_EnvironmentError_tuple, 1, (PyObject *)PyExc_EnvironmentError ); Py_INCREF( (PyObject *)PyExc_EnvironmentError );
    const_str_plain_WindowsError = UNSTREAM_STRING( &constant_bin[ 2401433 ], 12, 1 );
    const_str_plain_EEXIST = UNSTREAM_STRING( &constant_bin[ 2401445 ], 6, 1 );
    const_str_digest_2899342f83791397d803da9a2806e764 = UNSTREAM_STRING( &constant_bin[ 2401451 ], 14, 0 );
    const_str_plain_checked_call = UNSTREAM_STRING( &constant_bin[ 2401465 ], 12, 1 );
    const_str_plain___tracebackhide__ = UNSTREAM_STRING( &constant_bin[ 2401477 ], 17, 1 );
    const_str_plain_errno = UNSTREAM_STRING( &constant_bin[ 2401389 ], 5, 1 );
    const_str_plain__errno2class = UNSTREAM_STRING( &constant_bin[ 2401494 ], 12, 1 );
    const_tuple_str_digest_206d267a2fcca09c23811cc06241d7c3_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_206d267a2fcca09c23811cc06241d7c3_tuple, 0, const_str_digest_206d267a2fcca09c23811cc06241d7c3 ); Py_INCREF( const_str_digest_206d267a2fcca09c23811cc06241d7c3 );
    const_tuple_0e48d1af8086085f27e383c529305321_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_0e48d1af8086085f27e383c529305321_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0e48d1af8086085f27e383c529305321_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_0e48d1af8086085f27e383c529305321_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_0e48d1af8086085f27e383c529305321_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_0e48d1af8086085f27e383c529305321_tuple, 4, const_str_plain_errno ); Py_INCREF( const_str_plain_errno );
    PyTuple_SET_ITEM( const_tuple_0e48d1af8086085f27e383c529305321_tuple, 5, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_0e48d1af8086085f27e383c529305321_tuple, 6, const_str_plain___tracebackhide__ ); Py_INCREF( const_str_plain___tracebackhide__ );
    PyTuple_SET_ITEM( const_tuple_0e48d1af8086085f27e383c529305321_tuple, 7, const_str_plain_tb ); Py_INCREF( const_str_plain_tb );
    PyTuple_SET_ITEM( const_tuple_0e48d1af8086085f27e383c529305321_tuple, 8, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    const_str_plain_ErrorMaker = UNSTREAM_STRING( &constant_bin[ 2401506 ], 10, 1 );
    const_str_digest_8f8b83a015a2842bd3a6b27d7b60d1ca = UNSTREAM_STRING( &constant_bin[ 2401516 ], 8, 0 );
    const_str_digest_81473554a5bcfc3005933c8b3d0c88a4 = UNSTREAM_STRING( &constant_bin[ 2401524 ], 169, 0 );
    const_str_digest_60344cf28c4e2008984a1156af78993d = UNSTREAM_STRING( &constant_bin[ 2401693 ], 52, 0 );
    const_str_plain__winerrnomap = UNSTREAM_STRING( &constant_bin[ 2401745 ], 12, 1 );
    const_str_plain_ENOENT = UNSTREAM_STRING( &constant_bin[ 2401757 ], 6, 1 );
    const_str_plain_EACCES = UNSTREAM_STRING( &constant_bin[ 2401763 ], 6, 1 );
    const_str_digest_101c4dec31db6881133b0a481938ebd4 = UNSTREAM_STRING( &constant_bin[ 2401769 ], 18, 0 );
    const_int_pos_267 = PyInt_FromLong( 267l );
    const_str_plain_EBUSY = UNSTREAM_STRING( &constant_bin[ 2401787 ], 5, 1 );
    const_str_digest_374015da376c98b241ca7496fa67c3f5 = UNSTREAM_STRING( &constant_bin[ 2401792 ], 61, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_py$_error( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9d9d4479ad5dd19d83901cb103bf8793;
static PyCodeObject *codeobj_32cffd979603fcb1f7040974b8a7c44c;
static PyCodeObject *codeobj_c7059b0691f390b151175e922954a676;
static PyCodeObject *codeobj_1ff9b4d1c4414241eaddc94265e52df4;
static PyCodeObject *codeobj_b01573b14f14e347b692ce58184f6b22;
static PyCodeObject *codeobj_c09dc20caf4e729808fa8508f09ae3c6;
static PyCodeObject *codeobj_9e8dfa8b166d0053a69be5871ee23add;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_1696c9244f2937cd3731d79d3745a9b7;
    codeobj_9d9d4479ad5dd19d83901cb103bf8793 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_101c4dec31db6881133b0a481938ebd4, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_32cffd979603fcb1f7040974b8a7c44c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ErrorMaker, 35, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_c7059b0691f390b151175e922954a676 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getattr__, 43, const_tuple_str_plain_self_str_plain_name_str_plain_cls_str_plain_eno_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1ff9b4d1c4414241eaddc94265e52df4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 9, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b01573b14f14e347b692ce58184f6b22 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 17, const_tuple_str_plain_self_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c09dc20caf4e729808fa8508f09ae3c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__geterrnoclass, 51, const_tuple_d20030c414262853d3a100e76eea6053_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9e8dfa8b166d0053a69be5871ee23add = MAKE_CODEOBJ( module_filename_obj, const_str_plain_checked_call, 62, const_tuple_0e48d1af8086085f27e383c529305321_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_py$_error$$$function_1___repr__(  );


static PyObject *MAKE_FUNCTION_py$_error$$$function_2___str__(  );


static PyObject *MAKE_FUNCTION_py$_error$$$function_3___getattr__(  );


static PyObject *MAKE_FUNCTION_py$_error$$$function_4__geterrnoclass(  );


static PyObject *MAKE_FUNCTION_py$_error$$$function_5_checked_call(  );


// The module function definitions.
static PyObject *impl_py$_error$$$function_1___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_1ff9b4d1c4414241eaddc94265e52df4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1ff9b4d1c4414241eaddc94265e52df4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1ff9b4d1c4414241eaddc94265e52df4, codeobj_1ff9b4d1c4414241eaddc94265e52df4, module_py$_error, sizeof(void *) );
    frame_1ff9b4d1c4414241eaddc94265e52df4 = cache_frame_1ff9b4d1c4414241eaddc94265e52df4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1ff9b4d1c4414241eaddc94265e52df4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1ff9b4d1c4414241eaddc94265e52df4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_8;
        tmp_left_name_1 = const_str_digest_5ada9629bedca297ab916c768e727cf2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___module__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyTuple_New( 4 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 11;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___name__ );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 11;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_6 );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___doc__ );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
        tmp_source_name_7 = const_str_space;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
        assert( !(tmp_called_name_1 == NULL) );
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_map );
        assert( tmp_called_name_2 != NULL );
        tmp_args_element_name_2 = (PyObject *)&PyString_Type;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_args );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1ff9b4d1c4414241eaddc94265e52df4->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1ff9b4d1c4414241eaddc94265e52df4->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 13;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_1, 3, tmp_tuple_element_1 );
        tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ff9b4d1c4414241eaddc94265e52df4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ff9b4d1c4414241eaddc94265e52df4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ff9b4d1c4414241eaddc94265e52df4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1ff9b4d1c4414241eaddc94265e52df4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1ff9b4d1c4414241eaddc94265e52df4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1ff9b4d1c4414241eaddc94265e52df4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1ff9b4d1c4414241eaddc94265e52df4,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_1ff9b4d1c4414241eaddc94265e52df4 == cache_frame_1ff9b4d1c4414241eaddc94265e52df4 )
    {
        Py_DECREF( frame_1ff9b4d1c4414241eaddc94265e52df4 );
    }
    cache_frame_1ff9b4d1c4414241eaddc94265e52df4 = NULL;

    assertFrameObject( frame_1ff9b4d1c4414241eaddc94265e52df4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( py$_error$$$function_1___repr__ );
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
    NUITKA_CANNOT_GET_HERE( py$_error$$$function_1___repr__ );
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


static PyObject *impl_py$_error$$$function_2___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_s = NULL;
    struct Nuitka_FrameObject *frame_b01573b14f14e347b692ce58184f6b22;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b01573b14f14e347b692ce58184f6b22 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b01573b14f14e347b692ce58184f6b22, codeobj_b01573b14f14e347b692ce58184f6b22, module_py$_error, sizeof(void *)+sizeof(void *) );
    frame_b01573b14f14e347b692ce58184f6b22 = cache_frame_b01573b14f14e347b692ce58184f6b22;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b01573b14f14e347b692ce58184f6b22 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b01573b14f14e347b692ce58184f6b22 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_4;
        tmp_left_name_1 = const_str_digest_8f8b83a015a2842bd3a6b27d7b60d1ca;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___doc__ );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        tmp_source_name_3 = const_str_space;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
        assert( !(tmp_called_name_1 == NULL) );
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_map );
        assert( tmp_called_name_2 != NULL );
        tmp_args_element_name_2 = (PyObject *)&PyString_Type;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_args );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b01573b14f14e347b692ce58184f6b22->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b01573b14f14e347b692ce58184f6b22->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_1 );

            exception_lineno = 19;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_s == NULL );
        var_s = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b01573b14f14e347b692ce58184f6b22 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b01573b14f14e347b692ce58184f6b22 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b01573b14f14e347b692ce58184f6b22, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b01573b14f14e347b692ce58184f6b22->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b01573b14f14e347b692ce58184f6b22, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b01573b14f14e347b692ce58184f6b22,
        type_description_1,
        par_self,
        var_s
    );


    // Release cached frame.
    if ( frame_b01573b14f14e347b692ce58184f6b22 == cache_frame_b01573b14f14e347b692ce58184f6b22 )
    {
        Py_DECREF( frame_b01573b14f14e347b692ce58184f6b22 );
    }
    cache_frame_b01573b14f14e347b692ce58184f6b22 = NULL;

    assertFrameObject( frame_b01573b14f14e347b692ce58184f6b22 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_s );
    tmp_return_value = var_s;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( py$_error$$$function_2___str__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

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
    NUITKA_CANNOT_GET_HERE( py$_error$$$function_2___str__ );
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


static PyObject *impl_py$_error$$$function_3___getattr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *var_cls = NULL;
    PyObject *var_eno = NULL;
    struct Nuitka_FrameObject *frame_c7059b0691f390b151175e922954a676;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c7059b0691f390b151175e922954a676 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c7059b0691f390b151175e922954a676, codeobj_c7059b0691f390b151175e922954a676, module_py$_error, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c7059b0691f390b151175e922954a676 = cache_frame_c7059b0691f390b151175e922954a676;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c7059b0691f390b151175e922954a676 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c7059b0691f390b151175e922954a676 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_name );
        tmp_subscribed_name_1 = par_name;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_str_plain__;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            CHECK_OBJECT( par_name );
            tmp_make_exception_arg_1 = par_name;
            frame_c7059b0691f390b151175e922954a676->m_frame.f_lineno = 45;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_AttributeError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 45;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_getattr_attr_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_errno );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "errno" );
            exception_tb = NULL;

            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_getattr_target_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_name );
        tmp_getattr_attr_1 = par_name;
        tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_eno == NULL );
        var_eno = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( var_eno );
        tmp_args_element_name_1 = var_eno;
        frame_c7059b0691f390b151175e922954a676->m_frame.f_lineno = 47;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__geterrnoclass, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_cls == NULL );
        var_cls = tmp_assign_source_2;
    }
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT( par_self );
        tmp_setattr_target_1 = par_self;
        CHECK_OBJECT( par_name );
        tmp_setattr_attr_1 = par_name;
        CHECK_OBJECT( var_cls );
        tmp_setattr_value_1 = var_cls;
        tmp_capi_result_1 = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
        if ( tmp_capi_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7059b0691f390b151175e922954a676 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7059b0691f390b151175e922954a676 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c7059b0691f390b151175e922954a676, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c7059b0691f390b151175e922954a676->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c7059b0691f390b151175e922954a676, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c7059b0691f390b151175e922954a676,
        type_description_1,
        par_self,
        par_name,
        var_cls,
        var_eno
    );


    // Release cached frame.
    if ( frame_c7059b0691f390b151175e922954a676 == cache_frame_c7059b0691f390b151175e922954a676 )
    {
        Py_DECREF( frame_c7059b0691f390b151175e922954a676 );
    }
    cache_frame_c7059b0691f390b151175e922954a676 = NULL;

    assertFrameObject( frame_c7059b0691f390b151175e922954a676 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_cls );
    tmp_return_value = var_cls;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( py$_error$$$function_3___getattr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_cls );
    Py_DECREF( var_cls );
    var_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_eno );
    Py_DECREF( var_eno );
    var_eno = NULL;

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

    Py_XDECREF( var_cls );
    var_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_eno );
    var_eno = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( py$_error$$$function_3___getattr__ );
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


static PyObject *impl_py$_error$$$function_4__geterrnoclass( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_eno = python_pars[ 1 ];
    PyObject *var_errorcls = NULL;
    PyObject *var_clsname = NULL;
    struct Nuitka_FrameObject *frame_c09dc20caf4e729808fa8508f09ae3c6;
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
    static struct Nuitka_FrameObject *cache_frame_c09dc20caf4e729808fa8508f09ae3c6 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c09dc20caf4e729808fa8508f09ae3c6, codeobj_c09dc20caf4e729808fa8508f09ae3c6, module_py$_error, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c09dc20caf4e729808fa8508f09ae3c6 = cache_frame_c09dc20caf4e729808fa8508f09ae3c6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c09dc20caf4e729808fa8508f09ae3c6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c09dc20caf4e729808fa8508f09ae3c6 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__errno2class );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_eno );
        tmp_subscript_name_1 = par_eno;
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( py$_error$$$function_4__geterrnoclass );
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
    PRESERVE_FRAME_EXCEPTION( frame_c09dc20caf4e729808fa8508f09ae3c6 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_c09dc20caf4e729808fa8508f09ae3c6, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_c09dc20caf4e729808fa8508f09ae3c6, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_errno );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "errno" );
                exception_tb = NULL;

                exception_lineno = 55;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_1;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_errorcode );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_eno );
            tmp_args_element_name_1 = par_eno;
            tmp_left_name_1 = const_str_digest_2899342f83791397d803da9a2806e764;
            CHECK_OBJECT( par_eno );
            tmp_tuple_element_1 = par_eno;
            tmp_right_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
            tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 55;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_c09dc20caf4e729808fa8508f09ae3c6->m_frame.f_lineno = 55;
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


                exception_lineno = 55;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_clsname == NULL );
            var_clsname = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_6;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_Error );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Error );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "Error" );
                exception_tb = NULL;

                exception_lineno = 56;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_type_arg_1 = tmp_mvar_value_2;
            tmp_called_name_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_clsname );
            tmp_args_element_name_3 = var_clsname;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_Error );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Error );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "Error" );
                exception_tb = NULL;

                exception_lineno = 56;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_2 = tmp_mvar_value_3;
            tmp_args_element_name_4 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_element_name_4, 0, tmp_tuple_element_2 );
            tmp_dict_value_1 = const_str_digest_206d267a2fcca09c23811cc06241d7c3;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_args_element_name_5 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_args_element_name_5, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_4 );
                Py_DECREF( tmp_args_element_name_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
                exception_tb = NULL;

                exception_lineno = 58;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_4;
            CHECK_OBJECT( par_eno );
            tmp_args_element_name_6 = par_eno;
            frame_c09dc20caf4e729808fa8508f09ae3c6->m_frame.f_lineno = 58;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_dict_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_strerror, call_args );
            }

            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_4 );
                Py_DECREF( tmp_args_element_name_5 );

                exception_lineno = 58;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_args_element_name_5, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_c09dc20caf4e729808fa8508f09ae3c6->m_frame.f_lineno = 56;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_errorcls == NULL );
            var_errorcls = tmp_assign_source_2;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( var_errorcls );
            tmp_ass_subvalue_1 = var_errorcls;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__errno2class );
            if ( tmp_ass_subscribed_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_eno );
            tmp_ass_subscript_1 = par_eno;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscribed_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        CHECK_OBJECT( var_errorcls );
        tmp_return_value = var_errorcls;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 52;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c09dc20caf4e729808fa8508f09ae3c6->m_frame) frame_c09dc20caf4e729808fa8508f09ae3c6->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_c09dc20caf4e729808fa8508f09ae3c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_c09dc20caf4e729808fa8508f09ae3c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_c09dc20caf4e729808fa8508f09ae3c6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c09dc20caf4e729808fa8508f09ae3c6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c09dc20caf4e729808fa8508f09ae3c6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c09dc20caf4e729808fa8508f09ae3c6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c09dc20caf4e729808fa8508f09ae3c6,
        type_description_1,
        par_self,
        par_eno,
        var_errorcls,
        var_clsname
    );


    // Release cached frame.
    if ( frame_c09dc20caf4e729808fa8508f09ae3c6 == cache_frame_c09dc20caf4e729808fa8508f09ae3c6 )
    {
        Py_DECREF( frame_c09dc20caf4e729808fa8508f09ae3c6 );
    }
    cache_frame_c09dc20caf4e729808fa8508f09ae3c6 = NULL;

    assertFrameObject( frame_c09dc20caf4e729808fa8508f09ae3c6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( py$_error$$$function_4__geterrnoclass );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_errorcls );
    var_errorcls = NULL;

    Py_XDECREF( var_clsname );
    var_clsname = NULL;

    CHECK_OBJECT( (PyObject *)par_eno );
    Py_DECREF( par_eno );
    par_eno = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_errorcls );
    var_errorcls = NULL;

    Py_XDECREF( var_clsname );
    var_clsname = NULL;

    CHECK_OBJECT( (PyObject *)par_eno );
    Py_DECREF( par_eno );
    par_eno = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( py$_error$$$function_4__geterrnoclass );
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


static PyObject *impl_py$_error$$$function_5_checked_call( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_func = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    PyObject *var_errno = NULL;
    PyObject *var_value = NULL;
    PyObject *var_tb = NULL;
    PyObject *var_cls = NULL;
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9e8dfa8b166d0053a69be5871ee23add;
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
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_9e8dfa8b166d0053a69be5871ee23add = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e8dfa8b166d0053a69be5871ee23add, codeobj_9e8dfa8b166d0053a69be5871ee23add, module_py$_error, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9e8dfa8b166d0053a69be5871ee23add = cache_frame_9e8dfa8b166d0053a69be5871ee23add;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e8dfa8b166d0053a69be5871ee23add );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e8dfa8b166d0053a69be5871ee23add ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_func );
        tmp_dircall_arg1_1 = par_func;
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_6_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooooooNoo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( py$_error$$$function_5_checked_call );
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
    PRESERVE_FRAME_EXCEPTION( frame_9e8dfa8b166d0053a69be5871ee23add );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_9e8dfa8b166d0053a69be5871ee23add, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_9e8dfa8b166d0053a69be5871ee23add, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Error );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ooooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "ooooooNoo";
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
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 68;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_9e8dfa8b166d0053a69be5871ee23add->m_frame) frame_9e8dfa8b166d0053a69be5871ee23add->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooNoo";
        goto frame_exception_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = const_tuple_type_OSError_type_EnvironmentError_tuple;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "ooooooNoo";
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
            // Tried code:
            {
                PyObject *tmp_assign_source_1;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_mvar_value_1;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_sys );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
                    exception_tb = NULL;

                    exception_lineno = 70;
                    type_description_1 = "ooooooNoo";
                    goto try_except_handler_3;
                }

                tmp_called_instance_1 = tmp_mvar_value_1;
                frame_9e8dfa8b166d0053a69be5871ee23add->m_frame.f_lineno = 70;
                tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_exc_info );
                if ( tmp_iter_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;
                    type_description_1 = "ooooooNoo";
                    goto try_except_handler_3;
                }
                tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
                Py_DECREF( tmp_iter_arg_1 );
                if ( tmp_assign_source_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 70;
                    type_description_1 = "ooooooNoo";
                    goto try_except_handler_3;
                }
                assert( tmp_tuple_unpack_1__source_iter == NULL );
                tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_unpack_1;
                CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
                if ( tmp_assign_source_2 == NULL )
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


                    type_description_1 = "ooooooNoo";
                    exception_lineno = 70;
                    goto try_except_handler_4;
                }
                assert( tmp_tuple_unpack_1__element_1 == NULL );
                tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
            }
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_unpack_2;
                CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


                    type_description_1 = "ooooooNoo";
                    exception_lineno = 70;
                    goto try_except_handler_4;
                }
                assert( tmp_tuple_unpack_1__element_2 == NULL );
                tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
            }
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_unpack_3;
                CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


                    type_description_1 = "ooooooNoo";
                    exception_lineno = 70;
                    goto try_except_handler_4;
                }
                assert( tmp_tuple_unpack_1__element_3 == NULL );
                tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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

                            type_description_1 = "ooooooNoo";
                            exception_lineno = 70;
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

                    type_description_1 = "ooooooNoo";
                    exception_lineno = 70;
                    goto try_except_handler_4;
                }
            }
            goto try_end_1;
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
            try_end_1:;
            goto try_end_2;
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

            Py_XDECREF( tmp_tuple_unpack_1__element_3 );
            tmp_tuple_unpack_1__element_3 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_1;
            // End of try:
            try_end_2:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
            Py_DECREF( tmp_tuple_unpack_1__source_iter );
            tmp_tuple_unpack_1__source_iter = NULL;

            {
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
                tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
                assert( var_cls == NULL );
                Py_INCREF( tmp_assign_source_5 );
                var_cls = tmp_assign_source_5;
            }
            Py_XDECREF( tmp_tuple_unpack_1__element_1 );
            tmp_tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_6;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
                tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
                assert( var_value == NULL );
                Py_INCREF( tmp_assign_source_6 );
                var_value = tmp_assign_source_6;
            }
            Py_XDECREF( tmp_tuple_unpack_1__element_2 );
            tmp_tuple_unpack_1__element_2 = NULL;

            {
                PyObject *tmp_assign_source_7;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
                tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
                assert( var_tb == NULL );
                Py_INCREF( tmp_assign_source_7 );
                var_tb = tmp_assign_source_7;
            }
            Py_XDECREF( tmp_tuple_unpack_1__element_3 );
            tmp_tuple_unpack_1__element_3 = NULL;

            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_source_name_2;
                PyObject *tmp_attribute_name_1;
                CHECK_OBJECT( var_value );
                tmp_source_name_2 = var_value;
                tmp_attribute_name_1 = const_str_plain_errno;
                tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_2, tmp_attribute_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 71;
                    type_description_1 = "ooooooNoo";
                    goto frame_exception_exit_1;
                }
                tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 71;
                    type_description_1 = "ooooooNoo";
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
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 72;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_9e8dfa8b166d0053a69be5871ee23add->m_frame) frame_9e8dfa8b166d0053a69be5871ee23add->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooooNoo";
                goto frame_exception_exit_1;
                branch_no_3:;
            }
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT( var_value );
                tmp_source_name_3 = var_value;
                tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_errno );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 74;
                    type_description_1 = "ooooooNoo";
                    goto frame_exception_exit_1;
                }
                assert( var_errno == NULL );
                var_errno = tmp_assign_source_8;
            }
            {
                nuitka_bool tmp_assign_source_9;
                tmp_assign_source_9 = NUITKA_BOOL_TRUE;
                tmp_try_except_1__unhandled_indicator = tmp_assign_source_9;
            }
            // Tried code:
            // Tried code:
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_isinstance_inst_1;
                PyObject *tmp_isinstance_cls_1;
                PyObject *tmp_mvar_value_2;
                CHECK_OBJECT( var_value );
                tmp_isinstance_inst_1 = var_value;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_WindowsError );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WindowsError );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "WindowsError" );
                    exception_tb = NULL;

                    exception_lineno = 76;
                    type_description_1 = "ooooooNoo";
                    goto try_except_handler_6;
                }

                tmp_isinstance_cls_1 = tmp_mvar_value_2;
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 76;
                    type_description_1 = "ooooooNoo";
                    goto try_except_handler_6;
                }
                tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 76;
                    type_description_1 = "ooooooNoo";
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
                {
                    PyObject *tmp_raise_type_1;
                    tmp_raise_type_1 = PyExc_NameError;
                    exception_type = tmp_raise_type_1;
                    Py_INCREF( tmp_raise_type_1 );
                    exception_lineno = 77;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooNoo";
                    goto try_except_handler_6;
                }
                branch_no_4:;
            }
            goto try_end_3;
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

            {
                nuitka_bool tmp_assign_source_10;
                tmp_assign_source_10 = NUITKA_BOOL_FALSE;
                tmp_try_except_1__unhandled_indicator = tmp_assign_source_10;
            }
            // Preserve existing published exception.
            PRESERVE_FRAME_EXCEPTION( frame_9e8dfa8b166d0053a69be5871ee23add );
            if ( exception_keeper_tb_4 == NULL )
            {
                exception_keeper_tb_4 = MAKE_TRACEBACK( frame_9e8dfa8b166d0053a69be5871ee23add, exception_keeper_lineno_4 );
            }
            else if ( exception_keeper_lineno_4 != 0 )
            {
                exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_9e8dfa8b166d0053a69be5871ee23add, exception_keeper_lineno_4 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
            PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_3 = PyExc_NameError;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 78;
                    type_description_1 = "ooooooNoo";
                    goto try_except_handler_5;
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
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_args_element_name_1;
                    CHECK_OBJECT( par_self );
                    tmp_called_instance_2 = par_self;
                    CHECK_OBJECT( var_errno );
                    tmp_args_element_name_1 = var_errno;
                    frame_9e8dfa8b166d0053a69be5871ee23add->m_frame.f_lineno = 80;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_1 };
                        tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__geterrnoclass, call_args );
                    }

                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 80;
                        type_description_1 = "ooooooNoo";
                        goto try_except_handler_5;
                    }
                    {
                        PyObject *old = var_cls;
                        assert( old != NULL );
                        var_cls = tmp_assign_source_11;
                        Py_DECREF( old );
                    }

                }
                goto branch_end_5;
                branch_no_5:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 75;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_9e8dfa8b166d0053a69be5871ee23add->m_frame) frame_9e8dfa8b166d0053a69be5871ee23add->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooooNoo";
                goto try_except_handler_5;
                branch_end_5:;
            }
            goto try_end_3;
            // exception handler codes exits in all cases
            NUITKA_CANNOT_GET_HERE( py$_error$$$function_5_checked_call );
            return NULL;
            // End of try:
            try_end_3:;
            {
                nuitka_bool tmp_condition_result_6;
                nuitka_bool tmp_compexpr_left_4;
                nuitka_bool tmp_compexpr_right_4;
                assert( tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
                tmp_compexpr_left_4 = tmp_try_except_1__unhandled_indicator;
                tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
                tmp_condition_result_6 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_12;
                    PyObject *tmp_called_name_1;
                    PyObject *tmp_source_name_4;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_subscribed_name_1;
                    PyObject *tmp_mvar_value_3;
                    PyObject *tmp_subscript_name_1;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_4 = par_self;
                    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__geterrnoclass );
                    if ( tmp_called_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 83;
                        type_description_1 = "ooooooNoo";
                        goto try_except_handler_7;
                    }
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain__winerrnomap );

                    if (unlikely( tmp_mvar_value_3 == NULL ))
                    {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__winerrnomap );
                    }

                    if ( tmp_mvar_value_3 == NULL )
                    {
                        Py_DECREF( tmp_called_name_1 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_winerrnomap" );
                        exception_tb = NULL;

                        exception_lineno = 83;
                        type_description_1 = "ooooooNoo";
                        goto try_except_handler_7;
                    }

                    tmp_subscribed_name_1 = tmp_mvar_value_3;
                    CHECK_OBJECT( var_errno );
                    tmp_subscript_name_1 = var_errno;
                    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
                    if ( tmp_args_element_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_1 );

                        exception_lineno = 83;
                        type_description_1 = "ooooooNoo";
                        goto try_except_handler_7;
                    }
                    frame_9e8dfa8b166d0053a69be5871ee23add->m_frame.f_lineno = 83;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2 };
                        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                    }

                    Py_DECREF( tmp_called_name_1 );
                    Py_DECREF( tmp_args_element_name_2 );
                    if ( tmp_assign_source_12 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 83;
                        type_description_1 = "ooooooNoo";
                        goto try_except_handler_7;
                    }
                    {
                        PyObject *old = var_cls;
                        var_cls = tmp_assign_source_12;
                        Py_XDECREF( old );
                    }

                }
                goto try_end_4;
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

                // Preserve existing published exception.
                PRESERVE_FRAME_EXCEPTION( frame_9e8dfa8b166d0053a69be5871ee23add );
                if ( exception_keeper_tb_5 == NULL )
                {
                    exception_keeper_tb_5 = MAKE_TRACEBACK( frame_9e8dfa8b166d0053a69be5871ee23add, exception_keeper_lineno_5 );
                }
                else if ( exception_keeper_lineno_5 != 0 )
                {
                    exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_9e8dfa8b166d0053a69be5871ee23add, exception_keeper_lineno_5 );
                }

                NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
                PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
                {
                    nuitka_bool tmp_condition_result_7;
                    PyObject *tmp_compexpr_left_5;
                    PyObject *tmp_compexpr_right_5;
                    tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
                    tmp_compexpr_right_5 = PyExc_KeyError;
                    tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 84;
                        type_description_1 = "ooooooNoo";
                        goto try_except_handler_5;
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
                        PyObject *tmp_raise_type_2;
                        CHECK_OBJECT( var_value );
                        tmp_raise_type_2 = var_value;
                        exception_type = tmp_raise_type_2;
                        Py_INCREF( tmp_raise_type_2 );
                        exception_lineno = 85;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooNoo";
                        goto try_except_handler_5;
                    }
                    goto branch_end_7;
                    branch_no_7:;
                    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    if (unlikely( tmp_result == false ))
                    {
                        exception_lineno = 82;
                    }

                    if (exception_tb && exception_tb->tb_frame == &frame_9e8dfa8b166d0053a69be5871ee23add->m_frame) frame_9e8dfa8b166d0053a69be5871ee23add->m_frame.f_lineno = exception_tb->tb_lineno;
                    type_description_1 = "ooooooNoo";
                    goto try_except_handler_5;
                    branch_end_7:;
                }
                // End of try:
                try_end_4:;
                branch_no_6:;
            }
            goto try_end_5;
            // Exception handler code:
            try_except_handler_5:;
            exception_keeper_type_6 = exception_type;
            exception_keeper_value_6 = exception_value;
            exception_keeper_tb_6 = exception_tb;
            exception_keeper_lineno_6 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Re-raise.
            exception_type = exception_keeper_type_6;
            exception_value = exception_keeper_value_6;
            exception_tb = exception_keeper_tb_6;
            exception_lineno = exception_keeper_lineno_6;

            goto frame_exception_exit_1;
            // End of try:
            try_end_5:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_called_name_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_source_name_5;
                if ( var_cls == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "cls" );
                    exception_tb = NULL;

                    exception_lineno = 86;
                    type_description_1 = "ooooooNoo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = var_cls;
                tmp_left_name_1 = const_str_digest_1566457e585cc96a28e7580c5ec9d073;
                CHECK_OBJECT( par_func );
                tmp_source_name_5 = par_func;
                tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___name__ );
                if ( tmp_tuple_element_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 86;
                    type_description_1 = "ooooooNoo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( par_args );
                tmp_tuple_element_1 = par_args;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_args_element_name_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_args_element_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 86;
                    type_description_1 = "ooooooNoo";
                    goto frame_exception_exit_1;
                }
                frame_9e8dfa8b166d0053a69be5871ee23add->m_frame.f_lineno = 86;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_args_element_name_3 );
                if ( tmp_raise_type_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 86;
                    type_description_1 = "ooooooNoo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_3;
                exception_lineno = 86;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooNoo";
                goto frame_exception_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 65;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_9e8dfa8b166d0053a69be5871ee23add->m_frame) frame_9e8dfa8b166d0053a69be5871ee23add->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooNoo";
            goto frame_exception_exit_1;
            branch_end_2:;
        }
        branch_end_1:;
    }
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_9e8dfa8b166d0053a69be5871ee23add );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_9e8dfa8b166d0053a69be5871ee23add );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_9e8dfa8b166d0053a69be5871ee23add );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e8dfa8b166d0053a69be5871ee23add, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e8dfa8b166d0053a69be5871ee23add->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e8dfa8b166d0053a69be5871ee23add, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e8dfa8b166d0053a69be5871ee23add,
        type_description_1,
        par_self,
        par_func,
        par_args,
        par_kwargs,
        var_errno,
        var_value,
        NULL,
        var_tb,
        var_cls
    );


    // Release cached frame.
    if ( frame_9e8dfa8b166d0053a69be5871ee23add == cache_frame_9e8dfa8b166d0053a69be5871ee23add )
    {
        Py_DECREF( frame_9e8dfa8b166d0053a69be5871ee23add );
    }
    cache_frame_9e8dfa8b166d0053a69be5871ee23add = NULL;

    assertFrameObject( frame_9e8dfa8b166d0053a69be5871ee23add );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( py$_error$$$function_5_checked_call );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    Py_XDECREF( var_errno );
    var_errno = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_tb );
    var_tb = NULL;

    Py_XDECREF( var_cls );
    var_cls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( py$_error$$$function_5_checked_call );
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



static PyObject *MAKE_FUNCTION_py$_error$$$function_1___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_py$_error$$$function_1___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1ff9b4d1c4414241eaddc94265e52df4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_py$_error,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_py$_error$$$function_2___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_py$_error$$$function_2___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b01573b14f14e347b692ce58184f6b22,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_py$_error,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_py$_error$$$function_3___getattr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_py$_error$$$function_3___getattr__,
        const_str_plain___getattr__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c7059b0691f390b151175e922954a676,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_py$_error,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_py$_error$$$function_4__geterrnoclass(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_py$_error$$$function_4__geterrnoclass,
        const_str_plain__geterrnoclass,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c09dc20caf4e729808fa8508f09ae3c6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_py$_error,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_py$_error$$$function_5_checked_call(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_py$_error$$$function_5_checked_call,
        const_str_plain_checked_call,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9e8dfa8b166d0053a69be5871ee23add,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_py$_error,
        const_str_digest_374015da376c98b241ca7496fa67c3f5,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_py$_error =
{
    PyModuleDef_HEAD_INIT,
    "py._error",
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

MOD_INIT_DECL( py$_error )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_py$_error );
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
    puts("py._error: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("py._error: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("py._error: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpy$_error" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_py$_error = Py_InitModule4(
        "py._error",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_py$_error = PyModule_Create( &mdef_py$_error );
#endif

    moduledict_py$_error = MODULE_DICT( module_py$_error );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_py$_error,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_py$_error,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_py$_error,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_py$_error );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_0aa788fdd491eb9f5a4b7bdf9e6bf391, module_py$_error );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_locals_py$_error_8_key___repr__ = NULL;
    PyObject *tmp_locals_py$_error_8_key___str__ = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    struct Nuitka_FrameObject *frame_9d9d4479ad5dd19d83901cb103bf8793;
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
    PyObject *locals_py$_error_35 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_32cffd979603fcb1f7040974b8a7c44c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_32cffd979603fcb1f7040974b8a7c44c_2 = NULL;
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
    bool tmp_result;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_60344cf28c4e2008984a1156af78993d;
        UPDATE_STRING_DICT0( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_1696c9244f2937cd3731d79d3745a9b7;
        UPDATE_STRING_DICT0( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_9d9d4479ad5dd19d83901cb103bf8793 = MAKE_MODULE_FRAME( codeobj_9d9d4479ad5dd19d83901cb103bf8793, module_py$_error );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_9d9d4479ad5dd19d83901cb103bf8793 );
    assert( Py_REFCNT( frame_9d9d4479ad5dd19d83901cb103bf8793 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_types;
        tmp_globals_name_1 = (PyObject *)moduledict_py$_error;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_ModuleType_tuple;
        frame_9d9d4479ad5dd19d83901cb103bf8793->m_frame.f_lineno = 5;
        tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ModuleType );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_ModuleType, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_py$_error;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_9d9d4479ad5dd19d83901cb103bf8793->m_frame.f_lineno = 6;
        tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_plain_os;
        tmp_globals_name_3 = (PyObject *)moduledict_py$_error;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        frame_9d9d4479ad5dd19d83901cb103bf8793->m_frame.f_lineno = 6;
        tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        tmp_name_name_4 = const_str_plain_errno;
        tmp_globals_name_4 = (PyObject *)moduledict_py$_error;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        frame_9d9d4479ad5dd19d83901cb103bf8793->m_frame.f_lineno = 6;
        tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
        assert( !(tmp_assign_source_6 == NULL) );
        UPDATE_STRING_DICT1( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_errno, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = MAKE_FUNCTION_py$_error$$$function_1___repr__(  );



            assert( tmp_locals_py$_error_8_key___repr__ == NULL );
            tmp_locals_py$_error_8_key___repr__ = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_FUNCTION_py$_error$$$function_2___str__(  );



            assert( tmp_locals_py$_error_8_key___str__ == NULL );
            tmp_locals_py$_error_8_key___str__ = tmp_assign_source_9;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_value_1 = const_str_digest_0aa788fdd491eb9f5a4b7bdf9e6bf391;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_7 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_assign_source_7, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_py$_error_8_key___repr__ );
            tmp_dict_value_2 = tmp_locals_py$_error_8_key___repr__;
            tmp_dict_key_2 = const_str_plain___repr__;
            tmp_res = PyDict_SetItem( tmp_assign_source_7, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_py$_error_8_key___str__ );
            tmp_dict_value_3 = tmp_locals_py$_error_8_key___str__;
            tmp_dict_key_3 = const_str_plain___str__;
            tmp_res = PyDict_SetItem( tmp_assign_source_7, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( py$_error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT( (PyObject *)tmp_locals_py$_error_8_key___repr__ );
        Py_DECREF( tmp_locals_py$_error_8_key___repr__ );
        tmp_locals_py$_error_8_key___repr__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_py$_error_8_key___str__ );
        Py_DECREF( tmp_locals_py$_error_8_key___str__ );
        tmp_locals_py$_error_8_key___str__ = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( py$_error );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
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


            exception_lineno = 8;

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
        tmp_assign_source_10 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_10 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_10 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_Error;
        tmp_args_element_name_2 = const_tuple_type_EnvironmentError_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_9d9d4479ad5dd19d83901cb103bf8793->m_frame.f_lineno = 8;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_11;
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
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_12 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_Error, tmp_assign_source_12 );
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_source_name_8;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_errno );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "errno" );
            exception_tb = NULL;

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ENOENT );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = const_int_pos_2;
        tmp_assign_source_13 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem( tmp_assign_source_13, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_errno );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_assign_source_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "errno" );
            exception_tb = NULL;

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ENOENT );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_13 );

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = const_int_pos_3;
        tmp_res = PyDict_SetItem( tmp_assign_source_13, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_errno );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_assign_source_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "errno" );
            exception_tb = NULL;

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_EEXIST );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_13 );

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_6 = const_int_pos_17;
        tmp_res = PyDict_SetItem( tmp_assign_source_13, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_errno );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assign_source_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "errno" );
            exception_tb = NULL;

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_EXDEV );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_13 );

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_7 = const_int_pos_18;
        tmp_res = PyDict_SetItem( tmp_assign_source_13, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_errno );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assign_source_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "errno" );
            exception_tb = NULL;

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_5;
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_EBUSY );
        if ( tmp_dict_value_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_13 );

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_8 = const_int_pos_13;
        tmp_res = PyDict_SetItem( tmp_assign_source_13, tmp_dict_key_8, tmp_dict_value_8 );
        Py_DECREF( tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_errno );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_assign_source_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "errno" );
            exception_tb = NULL;

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_6;
        tmp_dict_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ENOTDIR );
        if ( tmp_dict_value_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_13 );

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_9 = const_int_pos_22;
        tmp_res = PyDict_SetItem( tmp_assign_source_13, tmp_dict_key_9, tmp_dict_value_9 );
        Py_DECREF( tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_errno );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_assign_source_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "errno" );
            exception_tb = NULL;

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_7;
        tmp_dict_value_10 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ENOTDIR );
        if ( tmp_dict_value_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_13 );

            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_10 = const_int_pos_20;
        tmp_res = PyDict_SetItem( tmp_assign_source_13, tmp_dict_key_10, tmp_dict_value_10 );
        Py_DECREF( tmp_dict_value_10 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_errno );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_assign_source_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "errno" );
            exception_tb = NULL;

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }

        tmp_source_name_8 = tmp_mvar_value_8;
        tmp_dict_value_11 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ENOTDIR );
        if ( tmp_dict_value_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_13 );

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_11 = const_int_pos_267;
        tmp_res = PyDict_SetItem( tmp_assign_source_13, tmp_dict_key_11, tmp_dict_value_11 );
        Py_DECREF( tmp_dict_value_11 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_errno );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_errno );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_assign_source_13 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "errno" );
            exception_tb = NULL;

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_9;
        tmp_dict_value_12 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_EACCES );
        if ( tmp_dict_value_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_13 );

            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_12 = const_int_pos_5;
        tmp_res = PyDict_SetItem( tmp_assign_source_13, tmp_dict_key_12, tmp_dict_value_12 );
        Py_DECREF( tmp_dict_value_12 );
        assert( !(tmp_res != 0) );
        UPDATE_STRING_DICT1( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain__winerrnomap, tmp_assign_source_13 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_ModuleType );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ModuleType );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ModuleType" );
            exception_tb = NULL;

            exception_lineno = 35;

            goto try_except_handler_3;
        }

        tmp_tuple_element_1 = tmp_mvar_value_10;
        tmp_assign_source_14 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_14, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_py$_error_35 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_0aa788fdd491eb9f5a4b7bdf9e6bf391;
        tmp_res = PyDict_SetItem( locals_py$_error_35, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_81473554a5bcfc3005933c8b3d0c88a4;
        tmp_res = PyDict_SetItem( locals_py$_error_35, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_32cffd979603fcb1f7040974b8a7c44c_2, codeobj_32cffd979603fcb1f7040974b8a7c44c, module_py$_error, 0 );
        frame_32cffd979603fcb1f7040974b8a7c44c_2 = cache_frame_32cffd979603fcb1f7040974b8a7c44c_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_32cffd979603fcb1f7040974b8a7c44c_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_32cffd979603fcb1f7040974b8a7c44c_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_mvar_value_11;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_Error );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Error );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "Error" );
                exception_tb = NULL;

                exception_lineno = 40;

                goto frame_exception_exit_2;
            }

            tmp_dictset_value = tmp_mvar_value_11;
            tmp_res = PyDict_SetItem( locals_py$_error_35, const_str_plain_Error, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_32cffd979603fcb1f7040974b8a7c44c_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_32cffd979603fcb1f7040974b8a7c44c_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_32cffd979603fcb1f7040974b8a7c44c_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_32cffd979603fcb1f7040974b8a7c44c_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_32cffd979603fcb1f7040974b8a7c44c_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_32cffd979603fcb1f7040974b8a7c44c_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_32cffd979603fcb1f7040974b8a7c44c_2 == cache_frame_32cffd979603fcb1f7040974b8a7c44c_2 )
        {
            Py_DECREF( frame_32cffd979603fcb1f7040974b8a7c44c_2 );
        }
        cache_frame_32cffd979603fcb1f7040974b8a7c44c_2 = NULL;

        assertFrameObject( frame_32cffd979603fcb1f7040974b8a7c44c_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        tmp_dictset_value = PyDict_New();
        tmp_res = PyDict_SetItem( locals_py$_error_35, const_str_plain__errno2class, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_py$_error$$$function_3___getattr__(  );



        tmp_res = PyDict_SetItem( locals_py$_error_35, const_str_plain___getattr__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_py$_error$$$function_4__geterrnoclass(  );



        tmp_res = PyDict_SetItem( locals_py$_error_35, const_str_plain__geterrnoclass, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_py$_error$$$function_5_checked_call(  );



        tmp_res = PyDict_SetItem( locals_py$_error_35, const_str_plain_checked_call, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_15 = locals_py$_error_35;
        Py_INCREF( tmp_assign_source_15 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( py$_error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_py$_error_35 );
        locals_py$_error_35 = NULL;
        goto outline_result_2;
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

        Py_DECREF( locals_py$_error_35 );
        locals_py$_error_35 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( py$_error );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 35;
        goto try_except_handler_3;
        outline_result_2:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        nuitka_bool tmp_condition_result_2;
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


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_16 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_subscribed_name_1 = tmp_class_creation_2__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;

                goto try_except_handler_3;
            }
            assert( tmp_select_metaclass_2__base == NULL );
            tmp_select_metaclass_2__base = tmp_assign_source_17;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_10;
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_source_name_10 = tmp_select_metaclass_2__base;
            tmp_assign_source_16 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_10 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;

                goto try_except_handler_6;
            }
            goto try_return_handler_5;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( py$_error );
        return MOD_RETURN_VALUE( NULL );
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

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_3 );
            Py_XDECREF( exception_keeper_value_3 );
            Py_XDECREF( exception_keeper_tb_3 );
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_type_arg_1 = tmp_select_metaclass_2__base;
            tmp_assign_source_16 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_16 == NULL) );
            goto try_return_handler_5;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( py$_error );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        goto outline_result_3;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( py$_error );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_ErrorMaker;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_args_element_name_5 = tmp_class_creation_2__bases;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_9d9d4479ad5dd19d83901cb103bf8793->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 35;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_18;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_19 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_ErrorMaker, tmp_assign_source_19 );
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
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_ErrorMaker );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ErrorMaker );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ErrorMaker" );
            exception_tb = NULL;

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_12;
        frame_9d9d4479ad5dd19d83901cb103bf8793->m_frame.f_lineno = 90;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_206d267a2fcca09c23811cc06241d7c3_tuple, 0 ) );

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_error, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_15;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_error );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
        }

        CHECK_OBJECT( tmp_mvar_value_13 );
        tmp_ass_subvalue_1 = tmp_mvar_value_13;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }

        tmp_source_name_11 = tmp_mvar_value_14;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_modules );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain_error );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_error );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_ass_subscribed_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "error" );
            exception_tb = NULL;

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_15;
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___name__ );
        if ( tmp_ass_subscript_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subscribed_1 );

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        Py_DECREF( tmp_ass_subscript_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d9d4479ad5dd19d83901cb103bf8793 );
#endif
    popFrameStack();

    assertFrameObject( frame_9d9d4479ad5dd19d83901cb103bf8793 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9d9d4479ad5dd19d83901cb103bf8793 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9d9d4479ad5dd19d83901cb103bf8793, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9d9d4479ad5dd19d83901cb103bf8793->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9d9d4479ad5dd19d83901cb103bf8793, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_py$_error, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_py$_error );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
