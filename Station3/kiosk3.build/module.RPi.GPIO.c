/* Generated code for Python module 'RPi.GPIO'
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

/* The "_module_RPi$GPIO" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_RPi$GPIO;
PyDictObject *moduledict_RPi$GPIO;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_49797bf29503761b116e94d134df9c96;
static PyObject *const_str_digest_b495e680057d9d3ce9908f7d4b185ea6;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_VERSION;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_chr_42;
static PyObject *const_str_digest_b99a75e03c24f81de4db613bcf73fc11;
extern PyObject *const_str_plain___doc__;
static PyObject *const_list_str_digest_39049127fddb0dd3169ea1fd19ecb44f_list;
static PyObject *const_str_digest_189efe50577e66dbbaad842f2962fafa;
static PyObject *const_str_digest_39049127fddb0dd3169ea1fd19ecb44f;
static PyObject *const_str_digest_a8c40e17135f47001ab2f4d1200724d9;
static PyObject *const_str_digest_92a4b8a14e5ef9df69b30aeb6e0feb2c;
extern PyObject *const_str_plain___path__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_b495e680057d9d3ce9908f7d4b185ea6 = UNSTREAM_STRING( &constant_bin[ 96 ], 1061, 0 );
    const_str_plain_VERSION = UNSTREAM_STRING( &constant_bin[ 1157 ], 7, 1 );
    const_str_digest_b99a75e03c24f81de4db613bcf73fc11 = UNSTREAM_STRING( &constant_bin[ 1164 ], 59, 0 );
    const_list_str_digest_39049127fddb0dd3169ea1fd19ecb44f_list = PyList_New( 1 );
    const_str_digest_39049127fddb0dd3169ea1fd19ecb44f = UNSTREAM_STRING( &constant_bin[ 1164 ], 47, 0 );
    PyList_SET_ITEM( const_list_str_digest_39049127fddb0dd3169ea1fd19ecb44f_list, 0, const_str_digest_39049127fddb0dd3169ea1fd19ecb44f ); Py_INCREF( const_str_digest_39049127fddb0dd3169ea1fd19ecb44f );
    const_str_digest_189efe50577e66dbbaad842f2962fafa = UNSTREAM_STRING( &constant_bin[ 1223 ], 17, 0 );
    const_str_digest_a8c40e17135f47001ab2f4d1200724d9 = UNSTREAM_STRING( &constant_bin[ 1240 ], 9, 0 );
    const_str_digest_92a4b8a14e5ef9df69b30aeb6e0feb2c = UNSTREAM_STRING( &constant_bin[ 1249 ], 7, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_RPi$GPIO( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f69c616363c544f6a029c1eb9f50aefa;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_b99a75e03c24f81de4db613bcf73fc11;
    codeobj_f69c616363c544f6a029c1eb9f50aefa = MAKE_CODEOBJ( module_filename_obj, const_str_digest_189efe50577e66dbbaad842f2962fafa, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_RPi$GPIO =
{
    PyModuleDef_HEAD_INIT,
    "RPi.GPIO",
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

MOD_INIT_DECL( RPi$GPIO )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_RPi$GPIO );
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
    puts("RPi.GPIO: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("RPi.GPIO: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("RPi.GPIO: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initRPi$GPIO" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_RPi$GPIO = Py_InitModule4(
        "RPi.GPIO",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_RPi$GPIO = PyModule_Create( &mdef_RPi$GPIO );
#endif

    moduledict_RPi$GPIO = MODULE_DICT( module_RPi$GPIO );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_RPi$GPIO, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_RPi$GPIO,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_RPi$GPIO, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_RPi$GPIO,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_RPi$GPIO, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_RPi$GPIO,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_RPi$GPIO );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_49797bf29503761b116e94d134df9c96, module_RPi$GPIO );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_RPi$GPIO, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_RPi$GPIO, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_RPi$GPIO, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_RPi$GPIO, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_RPi$GPIO, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_RPi$GPIO, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_f69c616363c544f6a029c1eb9f50aefa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_b495e680057d9d3ce9908f7d4b185ea6;
        UPDATE_STRING_DICT0( moduledict_RPi$GPIO, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_b99a75e03c24f81de4db613bcf73fc11;
        UPDATE_STRING_DICT0( moduledict_RPi$GPIO, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY( const_list_str_digest_39049127fddb0dd3169ea1fd19ecb44f_list );
        UPDATE_STRING_DICT1( moduledict_RPi$GPIO, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    // Frame without reuse.
    frame_f69c616363c544f6a029c1eb9f50aefa = MAKE_MODULE_FRAME( codeobj_f69c616363c544f6a029c1eb9f50aefa, module_RPi$GPIO );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f69c616363c544f6a029c1eb9f50aefa );
    assert( Py_REFCNT( frame_f69c616363c544f6a029c1eb9f50aefa ) == 2 );

    // Framed code:
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_digest_a8c40e17135f47001ab2f4d1200724d9;
        tmp_globals_name_1 = (PyObject *)moduledict_RPi$GPIO;
        tmp_locals_name_1 = (PyObject *)moduledict_RPi$GPIO;
        tmp_fromlist_name_1 = const_tuple_str_chr_42_tuple;
        frame_f69c616363c544f6a029c1eb9f50aefa->m_frame.f_lineno = 23;
        tmp_star_imported_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_star_imported_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR( module_RPi$GPIO, true, tmp_star_imported_1 );
        Py_DECREF( tmp_star_imported_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f69c616363c544f6a029c1eb9f50aefa );
#endif
    popFrameStack();

    assertFrameObject( frame_f69c616363c544f6a029c1eb9f50aefa );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f69c616363c544f6a029c1eb9f50aefa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f69c616363c544f6a029c1eb9f50aefa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f69c616363c544f6a029c1eb9f50aefa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f69c616363c544f6a029c1eb9f50aefa, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_str_digest_92a4b8a14e5ef9df69b30aeb6e0feb2c;
        UPDATE_STRING_DICT0( moduledict_RPi$GPIO, (Nuitka_StringObject *)const_str_plain_VERSION, tmp_assign_source_4 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_RPi$GPIO, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_RPi$GPIO );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
