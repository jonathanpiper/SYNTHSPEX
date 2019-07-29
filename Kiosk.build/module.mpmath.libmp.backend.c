/* Generated code for Python module 'mpmath.libmp.backend'
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

/* The "_module_mpmath$libmp$backend" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mpmath$libmp$backend;
PyDictObject *moduledict_mpmath$libmp$backend;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_modulus;
extern PyObject *const_str_plain_sage;
extern PyObject *const_str_plain_gmpy;
extern PyObject *const_str_plain_hash_info;
extern PyObject *const_str_plain_Integer;
static PyObject *const_str_plain_mpz;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_plain_MPZ_ZERO;
static PyObject *const_str_plain_gmpy2;
extern PyObject *const_str_plain_libs;
static PyObject *const_str_digest_f3c7154e1e01e049159d54c26162fa29;
extern PyObject *const_str_plain_BACKEND;
static PyObject *const_str_plain_python3;
static PyObject *const_str_digest_e1f3a590518608890170a963b83bfe3a;
extern PyObject *const_str_plain_MPZ_TWO;
extern PyObject *const_str_digest_265e85c8da89b8b011f55af2b0633174;
static PyObject *const_str_digest_c694feda7703064421a40f0027e40419;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain__sage_utils;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_MPZ;
extern PyObject *const_str_plain_utils;
extern PyObject *const_int_pos_32;
extern PyObject *const_str_plain_STRICT;
extern PyObject *const_int_pos_31;
extern PyObject *const_tuple_type_int_type_long_tuple;
extern PyObject *const_str_plain_version;
extern PyObject *const_tuple_int_pos_5_tuple;
extern PyObject *const_str_plain_MPZ_THREE;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_MPZ_FIVE;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_print_;
extern PyObject *const_str_plain_MPMATH_STRICT;
extern PyObject *const_int_0;
extern PyObject *const_tuple_type_int_tuple;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_python;
extern PyObject *const_str_plain_HASH_MODULUS;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_aeffe4491c0a000db0a2baa51998cf67;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_mpmath;
static PyObject *const_tuple_str_plain_exec__str_plain_print__tuple;
extern PyObject *const_str_plain_width;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_MPZ_ONE;
static PyObject *const_str_plain_MPMATH_NOSAGE;
extern PyObject *const_str_plain_exec_;
static PyObject *const_str_digest_731eb0fce344c60e98a43a86caa428a3;
extern PyObject *const_str_plain_int_types;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_tuple_int_pos_2_tuple;
extern PyObject *const_str_plain_basestring;
extern PyObject *const_str_plain_long;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_MPZ_TYPE;
extern PyObject *const_str_plain_sage_utils;
extern PyObject *const_str_plain_MPMATH_NOGMPY;
extern PyObject *const_str_plain_HASH_BITS;
extern PyObject *const_str_plain_xrange;
extern PyObject *const_str_plain_range;
static PyObject *const_int_pos_61;
static PyObject *const_str_digest_a4b556df8fda6758748afe95d48bbbca;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_modulus = UNSTREAM_STRING( &constant_bin[ 349597 ], 7, 1 );
    const_str_plain_mpz = UNSTREAM_STRING( &constant_bin[ 625064 ], 3, 1 );
    const_str_plain_gmpy2 = UNSTREAM_STRING( &constant_bin[ 625067 ], 5, 1 );
    const_str_digest_f3c7154e1e01e049159d54c26162fa29 = UNSTREAM_STRING( &constant_bin[ 625072 ], 29, 0 );
    const_str_plain_python3 = UNSTREAM_STRING( &constant_bin[ 625101 ], 7, 1 );
    const_str_digest_e1f3a590518608890170a963b83bfe3a = UNSTREAM_STRING( &constant_bin[ 625108 ], 22, 0 );
    const_str_digest_c694feda7703064421a40f0027e40419 = UNSTREAM_STRING( &constant_bin[ 625130 ], 8, 0 );
    const_str_plain__sage_utils = UNSTREAM_STRING( &constant_bin[ 625138 ], 11, 1 );
    const_str_digest_aeffe4491c0a000db0a2baa51998cf67 = UNSTREAM_STRING( &constant_bin[ 244307 ], 4, 0 );
    const_tuple_str_plain_exec__str_plain_print__tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_exec__str_plain_print__tuple, 0, const_str_plain_exec_ ); Py_INCREF( const_str_plain_exec_ );
    PyTuple_SET_ITEM( const_tuple_str_plain_exec__str_plain_print__tuple, 1, const_str_plain_print_ ); Py_INCREF( const_str_plain_print_ );
    const_str_plain_MPMATH_NOSAGE = UNSTREAM_STRING( &constant_bin[ 625149 ], 13, 1 );
    const_str_digest_731eb0fce344c60e98a43a86caa428a3 = UNSTREAM_STRING( &constant_bin[ 625162 ], 62, 0 );
    const_int_pos_61 = PyInt_FromLong( 61l );
    const_str_digest_a4b556df8fda6758748afe95d48bbbca = UNSTREAM_STRING( &constant_bin[ 625080 ], 20, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_mpmath$libmp$backend( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a9f0734fb4bc7895aa07a0592e49fe3b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_731eb0fce344c60e98a43a86caa428a3;
    codeobj_a9f0734fb4bc7895aa07a0592e49fe3b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f3c7154e1e01e049159d54c26162fa29, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_mpmath$libmp$backend =
{
    PyModuleDef_HEAD_INIT,
    "mpmath.libmp.backend",
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

MOD_INIT_DECL( mpmath$libmp$backend )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_mpmath$libmp$backend );
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
    puts("mpmath.libmp.backend: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath.libmp.backend: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("mpmath.libmp.backend: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initmpmath$libmp$backend" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_mpmath$libmp$backend = Py_InitModule4(
        "mpmath.libmp.backend",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_mpmath$libmp$backend = PyModule_Create( &mdef_mpmath$libmp$backend );
#endif

    moduledict_mpmath$libmp$backend = MODULE_DICT( module_mpmath$libmp$backend );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_mpmath$libmp$backend,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath$libmp$backend,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_mpmath$libmp$backend,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_mpmath$libmp$backend );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_a4b556df8fda6758748afe95d48bbbca, module_mpmath$libmp$backend );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_a9f0734fb4bc7895aa07a0592e49fe3b;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_731eb0fce344c60e98a43a86caa428a3;
        UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_a9f0734fb4bc7895aa07a0592e49fe3b = MAKE_MODULE_FRAME( codeobj_a9f0734fb4bc7895aa07a0592e49fe3b, module_mpmath$libmp$backend );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a9f0734fb4bc7895aa07a0592e49fe3b );
    assert( Py_REFCNT( frame_a9f0734fb4bc7895aa07a0592e49fe3b ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_os;
        tmp_globals_name_1 = (PyObject *)moduledict_mpmath$libmp$backend;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = 1;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_mpmath$libmp$backend;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_None;
        UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_gmpy, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_sage, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_sage_utils, tmp_assign_source_7 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

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
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = Py_False;
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_python3, tmp_assign_source_8 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = Py_True;
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_python3, tmp_assign_source_9 );
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_str_plain_python;
        UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_BACKEND, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_1;
        tmp_name_name_3 = const_str_plain_six;
        tmp_globals_name_3 = (PyObject *)moduledict_mpmath$libmp$backend;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_exec__str_plain_print__tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = 32;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_exec_ );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_exec_, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_print_ );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_print_, tmp_assign_source_13 );
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_python3 );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_python3 );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "python3" );
            exception_tb = NULL;

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }

        tmp_operand_name_1 = tmp_mvar_value_2;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

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
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = (PyObject *)&PyLong_Type;
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ, tmp_assign_source_14 );
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_xrange );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "xrange" );
                exception_tb = NULL;

                exception_lineno = 36;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_15 = tmp_mvar_value_3;
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_15 );
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_basestring );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "basestring" );
                exception_tb = NULL;

                exception_lineno = 37;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_16 = tmp_mvar_value_4;
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_16 );
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = (PyObject *)&PyInt_Type;
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ, tmp_assign_source_17 );
        }
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = LOOKUP_BUILTIN( const_str_plain_range );
            assert( tmp_assign_source_18 != NULL );
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_18 );
        }
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = (PyObject *)&PyString_Type;
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_19 );
        }
        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_5;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_version );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_str_digest_265e85c8da89b8b011f55af2b0633174;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

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
            PyObject *tmp_assign_source_20;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;

                exception_lineno = 45;

                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_6;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hash_info );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_modulus );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_HASH_MODULUS, tmp_assign_source_20 );
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;

                exception_lineno = 46;

                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_7;
            tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_hash_info );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;

                goto frame_exception_exit_1;
            }
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_width );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;

                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_pos_32;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;

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
                PyObject *tmp_assign_source_21;
                tmp_assign_source_21 = const_int_pos_31;
                UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_HASH_BITS, tmp_assign_source_21 );
            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_assign_source_22;
                tmp_assign_source_22 = const_int_pos_61;
                UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_HASH_BITS, tmp_assign_source_22 );
            }
            branch_end_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = Py_None;
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_HASH_MODULUS, tmp_assign_source_23 );
        }
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = Py_None;
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_HASH_BITS, tmp_assign_source_24 );
        }
        branch_end_3:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_8;
        tmp_compexpr_left_4 = const_str_plain_MPMATH_NOGMPY;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_8;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_environ );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_name_name_4;
            PyObject *tmp_globals_name_4;
            PyObject *tmp_locals_name_4;
            PyObject *tmp_fromlist_name_4;
            tmp_name_name_4 = const_str_plain_gmpy2;
            tmp_globals_name_4 = (PyObject *)moduledict_mpmath$libmp$backend;
            tmp_locals_name_4 = Py_None;
            tmp_fromlist_name_4 = Py_None;
            frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = 57;
            tmp_assign_source_25 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_gmpy, tmp_assign_source_25 );
        }
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

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION( frame_a9f0734fb4bc7895aa07a0592e49fe3b );
        if ( exception_keeper_tb_2 == NULL )
        {
            exception_keeper_tb_2 = MAKE_TRACEBACK( frame_a9f0734fb4bc7895aa07a0592e49fe3b, exception_keeper_lineno_2 );
        }
        else if ( exception_keeper_lineno_2 != 0 )
        {
            exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_a9f0734fb4bc7895aa07a0592e49fe3b, exception_keeper_lineno_2 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
        PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_5 = PyExc_ImportError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_2;
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
                PyObject *tmp_assign_source_26;
                PyObject *tmp_name_name_5;
                PyObject *tmp_globals_name_5;
                PyObject *tmp_locals_name_5;
                PyObject *tmp_fromlist_name_5;
                tmp_name_name_5 = const_str_plain_gmpy;
                tmp_globals_name_5 = (PyObject *)moduledict_mpmath$libmp$backend;
                tmp_locals_name_5 = Py_None;
                tmp_fromlist_name_5 = Py_None;
                frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = 60;
                tmp_assign_source_26 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
                if ( tmp_assign_source_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 60;

                    goto try_except_handler_4;
                }
                UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_gmpy, tmp_assign_source_26 );
            }
            goto try_end_3;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_3 = exception_type;
            exception_keeper_value_3 = exception_value;
            exception_keeper_tb_3 = exception_tb;
            exception_keeper_lineno_3 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            // Preserve existing published exception.
            PRESERVE_FRAME_EXCEPTION( frame_a9f0734fb4bc7895aa07a0592e49fe3b );
            if ( exception_keeper_tb_3 == NULL )
            {
                exception_keeper_tb_3 = MAKE_TRACEBACK( frame_a9f0734fb4bc7895aa07a0592e49fe3b, exception_keeper_lineno_3 );
            }
            else if ( exception_keeper_lineno_3 != 0 )
            {
                exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_a9f0734fb4bc7895aa07a0592e49fe3b, exception_keeper_lineno_3 );
            }

            NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
            PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_6 = PyExc_ImportError;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 61;

                    goto try_except_handler_2;
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
                    PyObject *tmp_raise_type_1;
                    tmp_raise_type_1 = PyExc_ImportError;
                    exception_type = tmp_raise_type_1;
                    Py_INCREF( tmp_raise_type_1 );
                    exception_lineno = 62;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

                    goto try_except_handler_2;
                }
                goto branch_end_7;
                branch_no_7:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 59;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame) frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = exception_tb->tb_lineno;

                goto try_except_handler_2;
                branch_end_7:;
            }
            // End of try:
            try_end_3:;
            goto branch_end_6;
            branch_no_6:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 56;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame) frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = exception_tb->tb_lineno;

            goto try_except_handler_2;
            branch_end_6:;
        }
        goto try_end_2;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$libmp$backend );
        return MOD_RETURN_VALUE( NULL );
        // End of try:
        try_end_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_gmpy );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gmpy );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "gmpy" );
                exception_tb = NULL;

                exception_lineno = 63;

                goto try_except_handler_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_9;
            frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = 63;
            tmp_compexpr_left_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_version );
            if ( tmp_compexpr_left_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 63;

                goto try_except_handler_2;
            }
            tmp_compexpr_right_7 = const_str_digest_aeffe4491c0a000db0a2baa51998cf67;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            Py_DECREF( tmp_compexpr_left_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 63;

                goto try_except_handler_2;
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
                PyObject *tmp_assign_source_27;
                tmp_assign_source_27 = const_str_plain_gmpy;
                UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_BACKEND, tmp_assign_source_27 );
            }
            {
                PyObject *tmp_assign_source_28;
                PyObject *tmp_source_name_8;
                PyObject *tmp_mvar_value_10;
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_gmpy );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gmpy );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "gmpy" );
                    exception_tb = NULL;

                    exception_lineno = 65;

                    goto try_except_handler_2;
                }

                tmp_source_name_8 = tmp_mvar_value_10;
                tmp_assign_source_28 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_mpz );
                if ( tmp_assign_source_28 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 65;

                    goto try_except_handler_2;
                }
                UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ, tmp_assign_source_28 );
            }
            branch_no_8:;
        }
        goto try_end_4;
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
        PRESERVE_FRAME_EXCEPTION( frame_a9f0734fb4bc7895aa07a0592e49fe3b );
        if ( exception_keeper_tb_4 == NULL )
        {
            exception_keeper_tb_4 = MAKE_TRACEBACK( frame_a9f0734fb4bc7895aa07a0592e49fe3b, exception_keeper_lineno_4 );
        }
        else if ( exception_keeper_lineno_4 != 0 )
        {
            exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_a9f0734fb4bc7895aa07a0592e49fe3b, exception_keeper_lineno_4 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
        PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
        goto try_end_4;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$libmp$backend );
        return MOD_RETURN_VALUE( NULL );
        // End of try:
        try_end_4:;
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_11;
        tmp_compexpr_left_8 = const_str_plain_MPMATH_NOSAGE;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_11;
        tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_environ );
        if ( tmp_compexpr_right_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_8, tmp_compexpr_left_8 );
        Py_DECREF( tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        // Tried code:
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_name_name_6;
            PyObject *tmp_globals_name_6;
            PyObject *tmp_locals_name_6;
            PyObject *tmp_fromlist_name_6;
            tmp_name_name_6 = const_str_digest_c694feda7703064421a40f0027e40419;
            tmp_globals_name_6 = (PyObject *)moduledict_mpmath$libmp$backend;
            tmp_locals_name_6 = Py_None;
            tmp_fromlist_name_6 = Py_None;
            frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = 71;
            tmp_assign_source_29 = IMPORT_MODULE4( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;

                goto try_except_handler_5;
            }
            UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_sage, tmp_assign_source_29 );
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_import_name_from_3;
            PyObject *tmp_import_name_from_4;
            PyObject *tmp_import_name_from_5;
            PyObject *tmp_name_name_7;
            PyObject *tmp_globals_name_7;
            PyObject *tmp_locals_name_7;
            PyObject *tmp_fromlist_name_7;
            tmp_name_name_7 = const_str_digest_e1f3a590518608890170a963b83bfe3a;
            tmp_globals_name_7 = (PyObject *)moduledict_mpmath$libmp$backend;
            tmp_locals_name_7 = Py_None;
            tmp_fromlist_name_7 = Py_None;
            frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = 72;
            tmp_import_name_from_5 = IMPORT_MODULE4( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7 );
            if ( tmp_import_name_from_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_5;
            }
            tmp_import_name_from_4 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_libs );
            Py_DECREF( tmp_import_name_from_5 );
            if ( tmp_import_name_from_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_5;
            }
            tmp_import_name_from_3 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_mpmath );
            Py_DECREF( tmp_import_name_from_4 );
            if ( tmp_import_name_from_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_5;
            }
            tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_utils );
            Py_DECREF( tmp_import_name_from_3 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto try_except_handler_5;
            }
            UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain__sage_utils, tmp_assign_source_30 );
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_source_name_10;
            PyObject *tmp_mvar_value_12;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_sage );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sage );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "sage" );
                exception_tb = NULL;

                exception_lineno = 73;

                goto try_except_handler_5;
            }

            tmp_source_name_10 = tmp_mvar_value_12;
            tmp_assign_source_31 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_all );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 73;

                goto try_except_handler_5;
            }
            UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_sage, tmp_assign_source_31 );
        }
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_mvar_value_13;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain__sage_utils );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__sage_utils );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_sage_utils" );
                exception_tb = NULL;

                exception_lineno = 74;

                goto try_except_handler_5;
            }

            tmp_assign_source_32 = tmp_mvar_value_13;
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_sage_utils, tmp_assign_source_32 );
        }
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = const_str_plain_sage;
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_BACKEND, tmp_assign_source_33 );
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_source_name_11;
            PyObject *tmp_mvar_value_14;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_sage );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sage );
            }

            CHECK_OBJECT( tmp_mvar_value_14 );
            tmp_source_name_11 = tmp_mvar_value_14;
            tmp_assign_source_34 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_Integer );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 76;

                goto try_except_handler_5;
            }
            UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ, tmp_assign_source_34 );
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

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION( frame_a9f0734fb4bc7895aa07a0592e49fe3b );
        if ( exception_keeper_tb_5 == NULL )
        {
            exception_keeper_tb_5 = MAKE_TRACEBACK( frame_a9f0734fb4bc7895aa07a0592e49fe3b, exception_keeper_lineno_5 );
        }
        else if ( exception_keeper_lineno_5 != 0 )
        {
            exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_a9f0734fb4bc7895aa07a0592e49fe3b, exception_keeper_lineno_5 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
        PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
        goto try_end_5;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( mpmath$libmp$backend );
        return MOD_RETURN_VALUE( NULL );
        // End of try:
        try_end_5:;
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_source_name_12;
        PyObject *tmp_mvar_value_15;
        tmp_compexpr_left_9 = const_str_plain_MPMATH_STRICT;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
            exception_tb = NULL;

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_source_name_12 = tmp_mvar_value_15;
        tmp_compexpr_right_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_environ );
        if ( tmp_compexpr_right_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_9, tmp_compexpr_left_9 );
        Py_DECREF( tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = Py_True;
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_STRICT, tmp_assign_source_35 );
        }
        goto branch_end_10;
        branch_no_10:;
        {
            PyObject *tmp_assign_source_36;
            tmp_assign_source_36 = Py_False;
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_STRICT, tmp_assign_source_36 );
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_16;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MPZ );
        }

        if ( tmp_mvar_value_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "MPZ" );
            exception_tb = NULL;

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_16;
        frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = 85;
        tmp_type_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_type_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_37 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ_TYPE, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_17;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MPZ );
        }

        if ( tmp_mvar_value_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "MPZ" );
            exception_tb = NULL;

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_17;
        frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = 86;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ_ZERO, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MPZ );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "MPZ" );
            exception_tb = NULL;

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_18;
        frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = 87;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ_ONE, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MPZ );
        }

        if ( tmp_mvar_value_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "MPZ" );
            exception_tb = NULL;

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_19;
        frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = 88;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ_TWO, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_20;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MPZ );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "MPZ" );
            exception_tb = NULL;

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_20;
        frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = 89;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ_THREE, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_21;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MPZ );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "MPZ" );
            exception_tb = NULL;

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_21;
        frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = 90;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_int_pos_5_tuple, 0 ) );

        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ_FIVE, tmp_assign_source_42 );
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_mvar_value_22;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_BACKEND );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BACKEND );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BACKEND" );
            exception_tb = NULL;

            exception_lineno = 93;

            goto try_except_handler_6;
        }

        tmp_compexpr_left_10 = tmp_mvar_value_22;
        tmp_compexpr_right_10 = const_str_plain_python;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;

            goto try_except_handler_6;
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
            PyObject *tmp_assign_source_43;
            tmp_assign_source_43 = const_tuple_type_int_type_long_tuple;
            UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_int_types, tmp_assign_source_43 );
        }
        goto branch_end_11;
        branch_no_11:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_23;
            tmp_tuple_element_1 = (PyObject *)&PyInt_Type;
            tmp_assign_source_44 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_44, 0, tmp_tuple_element_1 );
            tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_44, 1, tmp_tuple_element_1 );
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ_TYPE );

            if (unlikely( tmp_mvar_value_23 == NULL ))
            {
                tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MPZ_TYPE );
            }

            if ( tmp_mvar_value_23 == NULL )
            {
                Py_DECREF( tmp_assign_source_44 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "MPZ_TYPE" );
                exception_tb = NULL;

                exception_lineno = 96;

                goto try_except_handler_6;
            }

            tmp_tuple_element_1 = tmp_mvar_value_23;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_44, 2, tmp_tuple_element_1 );
            UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_int_types, tmp_assign_source_44 );
        }
        branch_end_11:;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_a9f0734fb4bc7895aa07a0592e49fe3b );
    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_a9f0734fb4bc7895aa07a0592e49fe3b, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_a9f0734fb4bc7895aa07a0592e49fe3b, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        tmp_compexpr_left_11 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_11 = PyExc_NameError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto frame_exception_exit_1;
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
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_compexpr_left_12;
            PyObject *tmp_compexpr_right_12;
            PyObject *tmp_mvar_value_24;
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_BACKEND );

            if (unlikely( tmp_mvar_value_24 == NULL ))
            {
                tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BACKEND );
            }

            if ( tmp_mvar_value_24 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "BACKEND" );
                exception_tb = NULL;

                exception_lineno = 98;

                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_12 = tmp_mvar_value_24;
            tmp_compexpr_right_12 = const_str_plain_python;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_12, tmp_compexpr_right_12 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;

                goto frame_exception_exit_1;
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
                PyObject *tmp_assign_source_45;
                tmp_assign_source_45 = const_tuple_type_int_tuple;
                UPDATE_STRING_DICT0( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_int_types, tmp_assign_source_45 );
            }
            goto branch_end_13;
            branch_no_13:;
            {
                PyObject *tmp_assign_source_46;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_mvar_value_25;
                tmp_tuple_element_2 = (PyObject *)&PyInt_Type;
                tmp_assign_source_46 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_assign_source_46, 0, tmp_tuple_element_2 );
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_MPZ_TYPE );

                if (unlikely( tmp_mvar_value_25 == NULL ))
                {
                    tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MPZ_TYPE );
                }

                if ( tmp_mvar_value_25 == NULL )
                {
                    Py_DECREF( tmp_assign_source_46 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "MPZ_TYPE" );
                    exception_tb = NULL;

                    exception_lineno = 101;

                    goto frame_exception_exit_1;
                }

                tmp_tuple_element_2 = tmp_mvar_value_25;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_assign_source_46, 1, tmp_tuple_element_2 );
                UPDATE_STRING_DICT1( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain_int_types, tmp_assign_source_46 );
            }
            branch_end_13:;
        }
        goto branch_end_12;
        branch_no_12:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 92;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame) frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_12:;
    }
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( mpmath$libmp$backend );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_6:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_a9f0734fb4bc7895aa07a0592e49fe3b );
#endif
    popFrameStack();

    assertFrameObject( frame_a9f0734fb4bc7895aa07a0592e49fe3b );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_a9f0734fb4bc7895aa07a0592e49fe3b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a9f0734fb4bc7895aa07a0592e49fe3b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a9f0734fb4bc7895aa07a0592e49fe3b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a9f0734fb4bc7895aa07a0592e49fe3b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_mpmath$libmp$backend, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_mpmath$libmp$backend );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
