/* Generated code for Python module 'numpy.core.memmap'
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

/* The "_module_numpy$core$memmap" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$memmap;
PyDictObject *moduledict_numpy$core$memmap;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_uint8;
static PyObject *const_float__minus_100_0;
static PyObject *const_str_plain_dtypedescr;
static PyObject *const_tuple_str_plain_uint8_str_plain_ndarray_str_plain_dtype_tuple;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_memmap;
extern PyObject *const_str_plain_offset;
extern PyObject *const_str_plain_dtype;
static PyObject *const_str_plain_mmap;
extern PyObject *const_str_plain___array_priority__;
static PyObject *const_str_plain_mode_equivalents;
extern PyObject *const_str_plain_view;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain___array_wrap__;
extern PyObject *const_str_digest_e399ba4554180f37de594a6743234f17;
static PyObject *const_tuple_85e26879479b396ea077adb0f6f2c4d9_tuple;
extern PyObject *const_str_plain_read;
static PyObject *const_str_digest_2f4f5646863524c747d8c05efba9c9a1;
static PyObject *const_tuple_str_plain_self_str_plain_arr_str_plain_context_tuple;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_plain_writeable_filemodes;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_resolve;
extern PyObject *const_str_plain_readwrite;
extern PyObject *const_str_plain_abspath;
extern PyObject *const_str_plain_itemsize;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain___array_finalize__;
extern PyObject *const_str_plain_may_share_memory;
extern PyObject *const_str_plain_write;
static PyObject *const_str_plain_valid_filemodes;
extern PyObject *const_str_plain_is_pathlib_path;
extern PyObject *const_str_chr_0;
static PyObject *const_tuple_615c7cabf48dac9b02b66815407e10d8_tuple;
static PyObject *const_str_digest_de57873ae6ddbbaab789eb2bad792a4b;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_plain_readonly;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_263887fd84384d5e2143287b88ff6e41;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_tell;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_ac4e4595c9916a96d232c691fe937482;
static PyObject *const_str_digest_68e2e7140aa0ce647c2cb37f738c5a3f;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_arr;
extern PyObject *const_tuple_str_chr_0_tuple;
static PyObject *const_list_str_plain_memmap_list;
static PyObject *const_tuple_int_0_int_pos_2_tuple;
extern PyObject *const_str_digest_3ebbb82d9800d0665e0803be07081408;
static PyObject *const_str_digest_d0c63399b80e5b5a98a024e0877c9693;
extern PyObject *const_str_plain_os_fspath;
extern PyObject *const_tuple_str_plain_self_str_plain_obj_tuple;
static PyObject *const_list_0be409bc3e85d5239a38ebc1056a8c4a_list;
static PyObject *const_str_plain_ACCESS_READ;
extern PyObject *const_str_plain___new__;
extern PyObject *const_str_digest_dd7618bbb3c1cb615487560bff75714c;
extern PyObject *const_tuple_str_plain_set_module_tuple;
extern PyObject *const_str_plain_contextlib_nullcontext;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain_long;
extern PyObject *const_str_plain_name;
static PyObject *const_dict_5a6585184ef887d5c8da5415908fefdf;
static PyObject *const_str_digest_7ee7cd1c46f17a906c1f678924c89959;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_C;
extern PyObject *const_str_plain_order;
static PyObject *const_tuple_str_plain_self_str_plain_index_str_plain_res_tuple;
static PyObject *const_str_plain_ACCESS_COPY;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b;
extern PyObject *const_str_plain_basestring;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_buffer;
extern PyObject *const_str_plain_filename;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_flush;
extern PyObject *const_tuple_str_plain_numpy_tuple;
extern PyObject *const_str_plain_seek;
static PyObject *const_str_plain__mmap;
extern PyObject *const_str_plain_set_module;
extern PyObject *const_str_digest_0829d31c23484bf44f4928c84123543c;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_ALLOCATIONGRANULARITY;
static PyObject *const_str_plain_access;
extern PyObject *const_str_plain_index;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_intp;
extern PyObject *const_str_plain_path;
static PyObject *const_list_64b4e14366094971fa8910a55e360e41_list;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_copyonwrite;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_fileno;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_21ba7c9ff06c1265965193673b6cd46f;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain_ACCESS_WRITE;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_float__minus_100_0 = UNSTREAM_FLOAT( &constant_bin[ 1174052 ] );
    const_str_plain_dtypedescr = UNSTREAM_STRING( &constant_bin[ 1174060 ], 10, 1 );
    const_tuple_str_plain_uint8_str_plain_ndarray_str_plain_dtype_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_uint8_str_plain_ndarray_str_plain_dtype_tuple, 0, const_str_plain_uint8 ); Py_INCREF( const_str_plain_uint8 );
    PyTuple_SET_ITEM( const_tuple_str_plain_uint8_str_plain_ndarray_str_plain_dtype_tuple, 1, const_str_plain_ndarray ); Py_INCREF( const_str_plain_ndarray );
    PyTuple_SET_ITEM( const_tuple_str_plain_uint8_str_plain_ndarray_str_plain_dtype_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    const_str_plain_mmap = UNSTREAM_STRING( &constant_bin[ 317110 ], 4, 1 );
    const_str_plain_mode_equivalents = UNSTREAM_STRING( &constant_bin[ 1174070 ], 16, 1 );
    const_tuple_85e26879479b396ea077adb0f6f2c4d9_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1174086 ], 221 );
    const_str_digest_2f4f5646863524c747d8c05efba9c9a1 = UNSTREAM_STRING( &constant_bin[ 1174307 ], 26, 0 );
    const_tuple_str_plain_self_str_plain_arr_str_plain_context_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arr_str_plain_context_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arr_str_plain_context_tuple, 1, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arr_str_plain_context_tuple, 2, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    const_str_plain_writeable_filemodes = UNSTREAM_STRING( &constant_bin[ 1174333 ], 19, 1 );
    const_str_plain_resolve = UNSTREAM_STRING( &constant_bin[ 16723 ], 7, 1 );
    const_str_plain_valid_filemodes = UNSTREAM_STRING( &constant_bin[ 1174352 ], 15, 1 );
    const_tuple_615c7cabf48dac9b02b66815407e10d8_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_615c7cabf48dac9b02b66815407e10d8_tuple, 0, const_str_plain_long ); Py_INCREF( const_str_plain_long );
    PyTuple_SET_ITEM( const_tuple_615c7cabf48dac9b02b66815407e10d8_tuple, 1, const_str_plain_basestring ); Py_INCREF( const_str_plain_basestring );
    PyTuple_SET_ITEM( const_tuple_615c7cabf48dac9b02b66815407e10d8_tuple, 2, const_str_plain_os_fspath ); Py_INCREF( const_str_plain_os_fspath );
    PyTuple_SET_ITEM( const_tuple_615c7cabf48dac9b02b66815407e10d8_tuple, 3, const_str_plain_contextlib_nullcontext ); Py_INCREF( const_str_plain_contextlib_nullcontext );
    PyTuple_SET_ITEM( const_tuple_615c7cabf48dac9b02b66815407e10d8_tuple, 4, const_str_plain_is_pathlib_path ); Py_INCREF( const_str_plain_is_pathlib_path );
    const_str_digest_de57873ae6ddbbaab789eb2bad792a4b = UNSTREAM_STRING( &constant_bin[ 1174367 ], 63, 0 );
    const_str_digest_263887fd84384d5e2143287b88ff6e41 = UNSTREAM_STRING( &constant_bin[ 1174315 ], 17, 0 );
    const_str_digest_ac4e4595c9916a96d232c691fe937482 = UNSTREAM_STRING( &constant_bin[ 1174430 ], 220, 0 );
    const_str_digest_68e2e7140aa0ce647c2cb37f738c5a3f = UNSTREAM_STRING( &constant_bin[ 1174650 ], 6574, 0 );
    const_list_str_plain_memmap_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_memmap_list, 0, const_str_plain_memmap ); Py_INCREF( const_str_plain_memmap );
    const_tuple_int_0_int_pos_2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_2_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_2_tuple, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_str_digest_d0c63399b80e5b5a98a024e0877c9693 = UNSTREAM_STRING( &constant_bin[ 1181224 ], 22, 0 );
    const_list_0be409bc3e85d5239a38ebc1056a8c4a_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_0be409bc3e85d5239a38ebc1056a8c4a_list, 0, const_str_digest_dd7618bbb3c1cb615487560bff75714c ); Py_INCREF( const_str_digest_dd7618bbb3c1cb615487560bff75714c );
    PyList_SET_ITEM( const_list_0be409bc3e85d5239a38ebc1056a8c4a_list, 1, const_str_digest_0829d31c23484bf44f4928c84123543c ); Py_INCREF( const_str_digest_0829d31c23484bf44f4928c84123543c );
    const_str_plain_ACCESS_READ = UNSTREAM_STRING( &constant_bin[ 1181246 ], 11, 1 );
    const_dict_5a6585184ef887d5c8da5415908fefdf = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_5a6585184ef887d5c8da5415908fefdf, const_str_plain_readwrite, const_str_digest_dd7618bbb3c1cb615487560bff75714c );
    PyDict_SetItem( const_dict_5a6585184ef887d5c8da5415908fefdf, const_str_plain_write, const_str_digest_0829d31c23484bf44f4928c84123543c );
    PyDict_SetItem( const_dict_5a6585184ef887d5c8da5415908fefdf, const_str_plain_readonly, const_str_plain_r );
    const_str_plain_copyonwrite = UNSTREAM_STRING( &constant_bin[ 1181257 ], 11, 1 );
    PyDict_SetItem( const_dict_5a6585184ef887d5c8da5415908fefdf, const_str_plain_copyonwrite, const_str_plain_c );
    assert( PyDict_Size( const_dict_5a6585184ef887d5c8da5415908fefdf ) == 4 );
    const_str_digest_7ee7cd1c46f17a906c1f678924c89959 = UNSTREAM_STRING( &constant_bin[ 1181268 ], 19, 0 );
    const_tuple_str_plain_self_str_plain_index_str_plain_res_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_index_str_plain_res_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_index_str_plain_res_tuple, 1, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_index_str_plain_res_tuple, 2, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_plain_ACCESS_COPY = UNSTREAM_STRING( &constant_bin[ 1181287 ], 11, 1 );
    const_str_plain__mmap = UNSTREAM_STRING( &constant_bin[ 1181298 ], 5, 1 );
    const_str_plain_ALLOCATIONGRANULARITY = UNSTREAM_STRING( &constant_bin[ 1181303 ], 21, 1 );
    const_str_plain_access = UNSTREAM_STRING( &constant_bin[ 44592 ], 6, 1 );
    const_list_64b4e14366094971fa8910a55e360e41_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_64b4e14366094971fa8910a55e360e41_list, 0, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyList_SET_ITEM( const_list_64b4e14366094971fa8910a55e360e41_list, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyList_SET_ITEM( const_list_64b4e14366094971fa8910a55e360e41_list, 2, const_str_digest_dd7618bbb3c1cb615487560bff75714c ); Py_INCREF( const_str_digest_dd7618bbb3c1cb615487560bff75714c );
    PyList_SET_ITEM( const_list_64b4e14366094971fa8910a55e360e41_list, 3, const_str_digest_0829d31c23484bf44f4928c84123543c ); Py_INCREF( const_str_digest_0829d31c23484bf44f4928c84123543c );
    const_str_digest_21ba7c9ff06c1265965193673b6cd46f = UNSTREAM_STRING( &constant_bin[ 1181324 ], 53, 0 );
    const_str_plain_ACCESS_WRITE = UNSTREAM_STRING( &constant_bin[ 1181377 ], 12, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$memmap( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_28f72911a4ee8f99369dea46616420d3;
static PyCodeObject *codeobj_3e35b0a70ee3f40d1ba9de5e96adc924;
static PyCodeObject *codeobj_ca23535c35c0bb60ffd82bdb9c61d2df;
static PyCodeObject *codeobj_da82f996c272febd99c17404260b7625;
static PyCodeObject *codeobj_03cef841b2cd91c72dee2065cfd3bcef;
static PyCodeObject *codeobj_3f659dd1bb40745bb70eae542b82bdf5;
static PyCodeObject *codeobj_df64ed1cdbe3bacda0831f58069101df;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_21ba7c9ff06c1265965193673b6cd46f;
    codeobj_28f72911a4ee8f99369dea46616420d3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_2f4f5646863524c747d8c05efba9c9a1, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3e35b0a70ee3f40d1ba9de5e96adc924 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___array_finalize__, 285, const_tuple_str_plain_self_str_plain_obj_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ca23535c35c0bb60ffd82bdb9c61d2df = MAKE_CODEOBJ( module_filename_obj, const_str_plain___array_wrap__, 315, const_tuple_str_plain_self_str_plain_arr_str_plain_context_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_da82f996c272febd99c17404260b7625 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 330, const_tuple_str_plain_self_str_plain_index_str_plain_res_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_03cef841b2cd91c72dee2065cfd3bcef = MAKE_CODEOBJ( module_filename_obj, const_str_plain___new__, 207, const_tuple_85e26879479b396ea077adb0f6f2c4d9_tuple, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3f659dd1bb40745bb70eae542b82bdf5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_flush, 297, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_df64ed1cdbe3bacda0831f58069101df = MAKE_CODEOBJ( module_filename_obj, const_str_plain_memmap, 25, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_1___new__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_2___array_finalize__(  );


static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_3_flush(  );


static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_4___array_wrap__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_5___getitem__(  );


// The module function definitions.
static PyObject *impl_numpy$core$memmap$$$function_1___new__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_subtype = python_pars[ 0 ];
    PyObject *par_filename = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_mode = python_pars[ 3 ];
    PyObject *par_offset = python_pars[ 4 ];
    PyObject *par_shape = python_pars[ 5 ];
    PyObject *par_order = python_pars[ 6 ];
    PyObject *var_size = NULL;
    PyObject *var_descr = NULL;
    PyObject *var_mmap = NULL;
    PyObject *var_self = NULL;
    PyObject *var_start = NULL;
    PyObject *var_fid = NULL;
    PyObject *var_array_offset = NULL;
    PyObject *var_f_ctx = NULL;
    PyObject *var__dbytes = NULL;
    PyObject *var_flen = NULL;
    PyObject *var_acc = NULL;
    PyObject *var_mm = NULL;
    PyObject *var_k = NULL;
    PyObject *var_bytes = NULL;
    PyObject *var_os = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_03cef841b2cd91c72dee2065cfd3bcef;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_03cef841b2cd91c72dee2065cfd3bcef = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_03cef841b2cd91c72dee2065cfd3bcef, codeobj_03cef841b2cd91c72dee2065cfd3bcef, module_numpy$core$memmap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_03cef841b2cd91c72dee2065cfd3bcef = cache_frame_03cef841b2cd91c72dee2065cfd3bcef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_03cef841b2cd91c72dee2065cfd3bcef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_03cef841b2cd91c72dee2065cfd3bcef ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_mmap;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$memmap;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 210;
        tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_mmap == NULL );
        var_mmap = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_e399ba4554180f37de594a6743234f17;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$core$memmap;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 211;
        tmp_assign_source_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_os == NULL );
        var_os = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_mode_equivalents );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mode_equivalents );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "mode_equivalents" );
            exception_tb = NULL;

            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_mode );
        tmp_subscript_name_1 = par_mode;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_mode;
            assert( old != NULL );
            par_mode = tmp_assign_source_3;
            Py_DECREF( old );
        }

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
    PRESERVE_FRAME_EXCEPTION( frame_03cef841b2cd91c72dee2065cfd3bcef );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_03cef841b2cd91c72dee2065cfd3bcef, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_03cef841b2cd91c72dee2065cfd3bcef, exception_keeper_lineno_1 );
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


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooo";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_mvar_value_2;
            CHECK_OBJECT( par_mode );
            tmp_compexpr_left_2 = par_mode;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_valid_filemodes );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_valid_filemodes );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "valid_filemodes" );
                exception_tb = NULL;

                exception_lineno = 215;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_2 = tmp_mvar_value_2;
            tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_1 = "oooooooooooooooooooooo";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_right_name_2;
                PyObject *tmp_list_arg_1;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_mvar_value_4;
                tmp_left_name_1 = const_str_digest_d0c63399b80e5b5a98a024e0877c9693;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_valid_filemodes );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_valid_filemodes );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "valid_filemodes" );
                    exception_tb = NULL;

                    exception_lineno = 217;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_left_name_2 = tmp_mvar_value_3;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_mode_equivalents );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mode_equivalents );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "mode_equivalents" );
                    exception_tb = NULL;

                    exception_lineno = 217;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_1 = tmp_mvar_value_4;
                frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 217;
                tmp_list_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_keys );
                if ( tmp_list_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 217;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_2 = PySequence_List( tmp_list_arg_1 );
                Py_DECREF( tmp_list_arg_1 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 217;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_right_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_right_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 217;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_make_exception_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 216;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 216;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_1 );
                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 216;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 212;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame) frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_1___new__ );
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_3 = par_mode;
        tmp_compexpr_right_3 = const_str_digest_0829d31c23484bf44f4928c84123543c;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 219;
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_shape );
        tmp_compexpr_left_4 = par_shape;
        tmp_compexpr_right_4 = Py_None;
        tmp_and_right_value_1 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_7ee7cd1c46f17a906c1f678924c89959;
            frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 220;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 220;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT( par_filename );
        tmp_source_name_1 = par_filename;
        tmp_attribute_name_1 = const_str_plain_read;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooooooooo";
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_contextlib_nullcontext );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_contextlib_nullcontext );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "contextlib_nullcontext" );
                exception_tb = NULL;

                exception_lineno = 223;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_5;
            CHECK_OBJECT( par_filename );
            tmp_args_element_name_1 = par_filename;
            frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 223;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_f_ctx == NULL );
            var_f_ctx = tmp_assign_source_4;
        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_open_filename_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_open_mode_1;
            PyObject *tmp_left_name_3;
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_right_name_3;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_os_fspath );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os_fspath );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "os_fspath" );
                exception_tb = NULL;

                exception_lineno = 225;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_6;
            CHECK_OBJECT( par_filename );
            tmp_args_element_name_2 = par_filename;
            frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 225;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_open_filename_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_open_filename_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 225;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_mode );
            tmp_compexpr_left_5 = par_mode;
            tmp_compexpr_right_5 = const_str_plain_c;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_open_filename_1 );

                exception_lineno = 225;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_1;
            }
            else
            {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            tmp_left_name_3 = const_str_plain_r;
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT( par_mode );
            tmp_left_name_3 = par_mode;
            condexpr_end_1:;
            tmp_right_name_3 = const_str_plain_b;
            tmp_open_mode_1 = BINARY_OPERATION_ADD_OBJECT_STR( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_open_mode_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_open_filename_1 );

                exception_lineno = 225;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
            Py_DECREF( tmp_open_filename_1 );
            Py_DECREF( tmp_open_mode_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 225;
                type_description_1 = "oooooooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_f_ctx == NULL );
            var_f_ctx = tmp_assign_source_5;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( var_f_ctx );
        tmp_assign_source_6 = var_f_ctx;
        assert( tmp_with_1__source == NULL );
        Py_INCREF( tmp_assign_source_6 );
        tmp_with_1__source = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_assign_source_7 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___exit__ );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_3 = tmp_with_1__source;
        tmp_called_name_3 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___enter__ );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 227;
        tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_with_1__enter );
        tmp_assign_source_10 = tmp_with_1__enter;
        assert( var_fid == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_fid = tmp_assign_source_10;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( var_fid );
        tmp_called_instance_2 = var_fid;
        frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 228;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_seek, &PyTuple_GET_ITEM( const_tuple_int_0_int_pos_2_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_fid );
        tmp_called_instance_3 = var_fid;
        frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 229;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_tell );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert( var_flen == NULL );
        var_flen = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_dtypedescr );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtypedescr );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "dtypedescr" );
            exception_tb = NULL;

            exception_lineno = 230;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_name_4 = tmp_mvar_value_7;
        CHECK_OBJECT( par_dtype );
        tmp_args_element_name_3 = par_dtype;
        frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 230;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert( var_descr == NULL );
        var_descr = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( var_descr );
        tmp_source_name_4 = var_descr;
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_itemsize );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert( var__dbytes == NULL );
        var__dbytes = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT( par_shape );
        tmp_compexpr_left_6 = par_shape;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            CHECK_OBJECT( var_flen );
            tmp_left_name_4 = var_flen;
            CHECK_OBJECT( par_offset );
            tmp_right_name_4 = par_offset;
            tmp_assign_source_14 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 234;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            assert( var_bytes == NULL );
            var_bytes = tmp_assign_source_14;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_op_mod_res_1;
            int tmp_truth_name_1;
            CHECK_OBJECT( var_bytes );
            tmp_left_name_5 = var_bytes;
            CHECK_OBJECT( var__dbytes );
            tmp_right_name_5 = var__dbytes;
            tmp_op_mod_res_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_op_mod_res_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 235;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_op_mod_res_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_op_mod_res_1 );

                exception_lineno = 235;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_condition_result_7 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_op_mod_res_1 );
            if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_de57873ae6ddbbaab789eb2bad792a4b;
                frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 236;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 236;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            branch_no_6:;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_left_name_6;
            PyObject *tmp_right_name_6;
            CHECK_OBJECT( var_bytes );
            tmp_left_name_6 = var_bytes;
            CHECK_OBJECT( var__dbytes );
            tmp_right_name_6 = var__dbytes;
            tmp_assign_source_15 = BINARY_OPERATION_FLOORDIV( tmp_left_name_6, tmp_right_name_6 );
            if ( tmp_assign_source_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 238;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            assert( var_size == NULL );
            var_size = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( var_size );
            tmp_tuple_element_1 = var_size;
            tmp_assign_source_16 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_assign_source_16, 0, tmp_tuple_element_1 );
            {
                PyObject *old = par_shape;
                assert( old != NULL );
                par_shape = tmp_assign_source_16;
                Py_DECREF( old );
            }

        }
        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            CHECK_OBJECT( par_shape );
            tmp_isinstance_inst_1 = par_shape;
            tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_7;
            }
            else
            {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_assign_source_17;
                PyObject *tmp_tuple_element_2;
                CHECK_OBJECT( par_shape );
                tmp_tuple_element_2 = par_shape;
                tmp_assign_source_17 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_assign_source_17, 0, tmp_tuple_element_2 );
                {
                    PyObject *old = par_shape;
                    assert( old != NULL );
                    par_shape = tmp_assign_source_17;
                    Py_DECREF( old );
                }

            }
            branch_no_7:;
        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_8;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_np );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
                exception_tb = NULL;

                exception_lineno = 243;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }

            tmp_called_instance_4 = tmp_mvar_value_8;
            frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 243;
            tmp_assign_source_18 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_intp, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            assert( var_size == NULL );
            var_size = tmp_assign_source_18;
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_shape );
            tmp_iter_arg_1 = par_shape;
            tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_19;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_20 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooooooooooooooo";
                    exception_lineno = 244;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_20;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_21 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_k;
                var_k = tmp_assign_source_21;
                Py_INCREF( var_k );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            CHECK_OBJECT( var_size );
            tmp_left_name_7 = var_size;
            CHECK_OBJECT( var_k );
            tmp_right_name_7 = var_k;
            tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_22 = tmp_left_name_7;
            var_size = tmp_assign_source_22;

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        goto loop_start_1;
        loop_end_1:;
        goto try_end_2;
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

        goto try_except_handler_5;
        // End of try:
        try_end_2:;
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_long );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_long );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "long" );
            exception_tb = NULL;

            exception_lineno = 247;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_name_5 = tmp_mvar_value_9;
        CHECK_OBJECT( par_offset );
        tmp_left_name_8 = par_offset;
        if ( var_size == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "size" );
            exception_tb = NULL;

            exception_lineno = 247;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_left_name_9 = var_size;
        CHECK_OBJECT( var__dbytes );
        tmp_right_name_9 = var__dbytes;
        tmp_right_name_8 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_9 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_bytes;
            var_bytes = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_7 = par_mode;
        tmp_compexpr_right_7 = const_str_digest_0829d31c23484bf44f4928c84123543c;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
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
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_8 = par_mode;
        tmp_compexpr_right_8 = const_str_digest_dd7618bbb3c1cb615487560bff75714c;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_and_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var_flen );
        tmp_compexpr_left_9 = var_flen;
        CHECK_OBJECT( var_bytes );
        tmp_compexpr_right_9 = var_bytes;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_or_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_9 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_9 = tmp_or_left_value_1;
        or_end_1:;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_5;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( var_fid );
            tmp_source_name_5 = var_fid;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_seek );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( var_bytes );
            tmp_left_name_10 = var_bytes;
            tmp_right_name_10 = const_int_pos_1;
            tmp_args_element_name_5 = BINARY_OPERATION_SUB( tmp_left_name_10, tmp_right_name_10 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 250;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_args_element_name_6 = const_int_0;
            frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 250;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( var_fid );
            tmp_called_instance_5 = var_fid;
            frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 251;
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_write, &PyTuple_GET_ITEM( const_tuple_str_chr_0_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( var_fid );
            tmp_called_instance_6 = var_fid;
            frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 252;
            tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_flush );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 252;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_10 = par_mode;
        tmp_compexpr_right_10 = const_str_plain_c;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( var_mmap );
            tmp_source_name_6 = var_mmap;
            tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ACCESS_COPY );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            assert( var_acc == NULL );
            var_acc = tmp_assign_source_24;
        }
        goto branch_end_9;
        branch_no_9:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            CHECK_OBJECT( par_mode );
            tmp_compexpr_left_11 = par_mode;
            tmp_compexpr_right_11 = const_str_plain_r;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_condition_result_11 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_10;
            }
            else
            {
                goto branch_no_10;
            }
            branch_yes_10:;
            {
                PyObject *tmp_assign_source_25;
                PyObject *tmp_source_name_7;
                CHECK_OBJECT( var_mmap );
                tmp_source_name_7 = var_mmap;
                tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ACCESS_READ );
                if ( tmp_assign_source_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 257;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                assert( var_acc == NULL );
                var_acc = tmp_assign_source_25;
            }
            goto branch_end_10;
            branch_no_10:;
            {
                PyObject *tmp_assign_source_26;
                PyObject *tmp_source_name_8;
                CHECK_OBJECT( var_mmap );
                tmp_source_name_8 = var_mmap;
                tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ACCESS_WRITE );
                if ( tmp_assign_source_26 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 259;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                assert( var_acc == NULL );
                var_acc = tmp_assign_source_26;
            }
            branch_end_10:;
        }
        branch_end_9:;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_offset );
        tmp_left_name_11 = par_offset;
        CHECK_OBJECT( par_offset );
        tmp_left_name_12 = par_offset;
        CHECK_OBJECT( var_mmap );
        tmp_source_name_9 = var_mmap;
        tmp_right_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ALLOCATIONGRANULARITY );
        if ( tmp_right_name_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_name_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_12, tmp_right_name_12 );
        Py_DECREF( tmp_right_name_12 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_27 = BINARY_OPERATION_SUB( tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert( var_start == NULL );
        var_start = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT( var_bytes );
        tmp_left_name_13 = var_bytes;
        CHECK_OBJECT( var_start );
        tmp_right_name_13 = var_start;
        tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_13, tmp_right_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_28 = tmp_left_name_13;
        var_bytes = tmp_assign_source_28;

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        CHECK_OBJECT( par_offset );
        tmp_left_name_14 = par_offset;
        CHECK_OBJECT( var_start );
        tmp_right_name_14 = var_start;
        tmp_assign_source_29 = BINARY_OPERATION_SUB( tmp_left_name_14, tmp_right_name_14 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert( var_array_offset == NULL );
        var_array_offset = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_10;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT( var_mmap );
        tmp_source_name_10 = var_mmap;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_mmap );
        if ( tmp_called_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( var_fid );
        tmp_called_instance_7 = var_fid;
        frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 264;
        tmp_tuple_element_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_fileno );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_7 );

            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_bytes );
        tmp_tuple_element_3 = var_bytes;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_3 );
        if ( var_acc == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "acc" );
            exception_tb = NULL;

            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_dict_value_1 = var_acc;
        tmp_dict_key_1 = const_str_plain_access;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_start );
        tmp_dict_value_2 = var_start;
        tmp_dict_key_2 = const_str_plain_offset;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 264;
        tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert( var_mm == NULL );
        var_mm = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_11;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_ndarray );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ndarray );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ndarray" );
            exception_tb = NULL;

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_source_name_11 = tmp_mvar_value_10;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___new__ );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT( par_subtype );
        tmp_tuple_element_4 = par_subtype;
        tmp_args_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
        if ( par_shape == NULL )
        {
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_args_name_2 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "shape" );
            exception_tb = NULL;

            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_tuple_element_4 = par_shape;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
        CHECK_OBJECT( var_descr );
        tmp_dict_value_3 = var_descr;
        tmp_dict_key_3 = const_str_plain_dtype;
        tmp_kw_name_2 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_mm );
        tmp_dict_value_4 = var_mm;
        tmp_dict_key_4 = const_str_plain_buffer;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_array_offset );
        tmp_dict_value_5 = var_array_offset;
        tmp_dict_key_5 = const_str_plain_offset;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_order );
        tmp_dict_value_6 = par_order;
        tmp_dict_key_6 = const_str_plain_order;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 266;
        tmp_assign_source_31 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert( var_self == NULL );
        var_self = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( var_mm );
        tmp_assattr_name_1 = var_mm;
        CHECK_OBJECT( var_self );
        tmp_assattr_target_1 = var_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__mmap, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_offset );
        tmp_assattr_name_2 = par_offset;
        CHECK_OBJECT( var_self );
        tmp_assattr_target_2 = var_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_offset, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_mode );
        tmp_assattr_name_3 = par_mode;
        CHECK_OBJECT( var_self );
        tmp_assattr_target_3 = var_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_mode, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_called_name_9;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_7;
        int tmp_truth_name_2;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_is_pathlib_path );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_pathlib_path );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "is_pathlib_path" );
            exception_tb = NULL;

            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_called_name_9 = tmp_mvar_value_11;
        CHECK_OBJECT( par_filename );
        tmp_args_element_name_7 = par_filename;
        frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
        }

        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_5 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_5 );

            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_12 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_5 );
        if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_assattr_target_4;
            CHECK_OBJECT( par_filename );
            tmp_called_instance_8 = par_filename;
            frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 275;
            tmp_assattr_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_resolve );
            if ( tmp_assattr_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( var_self );
            tmp_assattr_target_4 = var_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_filename, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
        }
        goto branch_end_11;
        branch_no_11:;
        {
            nuitka_bool tmp_condition_result_13;
            int tmp_and_left_truth_3;
            nuitka_bool tmp_and_left_value_3;
            nuitka_bool tmp_and_right_value_3;
            PyObject *tmp_source_name_12;
            PyObject *tmp_attribute_name_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            PyObject *tmp_source_name_13;
            PyObject *tmp_mvar_value_12;
            CHECK_OBJECT( var_fid );
            tmp_source_name_12 = var_fid;
            tmp_attribute_name_2 = const_str_plain_name;
            tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_12, tmp_attribute_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_and_left_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_3 == 1 )
            {
                goto and_right_3;
            }
            else
            {
                goto and_left_3;
            }
            and_right_3:;
            CHECK_OBJECT( var_fid );
            tmp_source_name_13 = var_fid;
            tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_name );
            if ( tmp_isinstance_inst_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_basestring );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
            }

            if ( tmp_mvar_value_12 == NULL )
            {
                Py_DECREF( tmp_isinstance_inst_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "basestring" );
                exception_tb = NULL;

                exception_lineno = 276;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }

            tmp_isinstance_cls_2 = tmp_mvar_value_12;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            Py_DECREF( tmp_isinstance_inst_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            tmp_and_right_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_13 = tmp_and_right_value_3;
            goto and_end_3;
            and_left_3:;
            tmp_condition_result_13 = tmp_and_left_value_3;
            and_end_3:;
            if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_12;
            }
            else
            {
                goto branch_no_12;
            }
            branch_yes_12:;
            {
                PyObject *tmp_assattr_name_5;
                PyObject *tmp_called_name_10;
                PyObject *tmp_source_name_14;
                PyObject *tmp_source_name_15;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_source_name_16;
                PyObject *tmp_assattr_target_5;
                CHECK_OBJECT( var_os );
                tmp_source_name_15 = var_os;
                tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_path );
                if ( tmp_source_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 278;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_abspath );
                Py_DECREF( tmp_source_name_14 );
                if ( tmp_called_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 278;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( var_fid );
                tmp_source_name_16 = var_fid;
                tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_name );
                if ( tmp_args_element_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_10 );

                    exception_lineno = 278;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 278;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8 };
                    tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
                }

                Py_DECREF( tmp_called_name_10 );
                Py_DECREF( tmp_args_element_name_8 );
                if ( tmp_assattr_name_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 278;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( var_self );
                tmp_assattr_target_5 = var_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_filename, tmp_assattr_name_5 );
                Py_DECREF( tmp_assattr_name_5 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 278;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
            }
            goto branch_end_12;
            branch_no_12:;
            {
                PyObject *tmp_assattr_name_6;
                PyObject *tmp_assattr_target_6;
                tmp_assattr_name_6 = Py_None;
                CHECK_OBJECT( var_self );
                tmp_assattr_target_6 = var_self;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_filename, tmp_assattr_name_6 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 281;
                    type_description_1 = "oooooooooooooooooooooo";
                    goto try_except_handler_5;
                }
            }
            branch_end_12:;
        }
        branch_end_11:;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_03cef841b2cd91c72dee2065cfd3bcef );
    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_03cef841b2cd91c72dee2065cfd3bcef, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_03cef841b2cd91c72dee2065cfd3bcef, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        tmp_compexpr_left_12 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_12 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_12, tmp_compexpr_right_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_13;
        }
        else
        {
            goto branch_no_13;
        }
        branch_yes_13:;
        {
            nuitka_bool tmp_assign_source_32;
            tmp_assign_source_32 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_32;
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_11 = tmp_with_1__exit;
            tmp_args_element_name_9 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_10 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_11 = EXC_TRACEBACK(PyThreadState_GET());
            frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 227;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
            }

            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 227;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 227;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_15 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
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
                exception_lineno = 227;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame) frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooooooooooooooooo";
            goto try_except_handler_4;
            branch_no_14:;
        }
        goto branch_end_13;
        branch_no_13:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 227;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame) frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooooooooooo";
        goto try_except_handler_4;
        branch_end_13:;
    }
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_1___new__ );
    return NULL;
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
            goto branch_yes_15;
        }
        else
        {
            goto branch_no_15;
        }
        branch_yes_15:;
        {
            PyObject *tmp_called_name_12;
            PyObject *tmp_call_result_6;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_12 = tmp_with_1__exit;
            frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 227;
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_4 );
                Py_XDECREF( exception_keeper_value_4 );
                Py_XDECREF( exception_keeper_tb_4 );

                exception_lineno = 227;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        branch_no_15:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    {
        nuitka_bool tmp_condition_result_17;
        nuitka_bool tmp_compexpr_left_14;
        nuitka_bool tmp_compexpr_right_14;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_14 = tmp_with_1__indicator;
        tmp_compexpr_right_14 = NUITKA_BOOL_TRUE;
        tmp_condition_result_17 = ( tmp_compexpr_left_14 == tmp_compexpr_right_14 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_16;
        }
        else
        {
            goto branch_no_16;
        }
        branch_yes_16:;
        {
            PyObject *tmp_called_name_13;
            PyObject *tmp_call_result_7;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_13 = tmp_with_1__exit;
            frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame.f_lineno = 227;
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 227;
                type_description_1 = "oooooooooooooooooooooo";
                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_7 );
        }
        branch_no_16:;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    if ( var_self == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 283;
        type_description_1 = "oooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_self;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_03cef841b2cd91c72dee2065cfd3bcef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_03cef841b2cd91c72dee2065cfd3bcef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_03cef841b2cd91c72dee2065cfd3bcef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_03cef841b2cd91c72dee2065cfd3bcef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_03cef841b2cd91c72dee2065cfd3bcef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_03cef841b2cd91c72dee2065cfd3bcef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_03cef841b2cd91c72dee2065cfd3bcef,
        type_description_1,
        par_subtype,
        par_filename,
        par_dtype,
        par_mode,
        par_offset,
        par_shape,
        par_order,
        var_size,
        var_descr,
        var_mmap,
        var_self,
        var_start,
        var_fid,
        var_array_offset,
        var_f_ctx,
        var__dbytes,
        var_flen,
        var_acc,
        var_mm,
        var_k,
        var_bytes,
        var_os
    );


    // Release cached frame.
    if ( frame_03cef841b2cd91c72dee2065cfd3bcef == cache_frame_03cef841b2cd91c72dee2065cfd3bcef )
    {
        Py_DECREF( frame_03cef841b2cd91c72dee2065cfd3bcef );
    }
    cache_frame_03cef841b2cd91c72dee2065cfd3bcef = NULL;

    assertFrameObject( frame_03cef841b2cd91c72dee2065cfd3bcef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_1___new__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_offset );
    Py_DECREF( par_offset );
    par_offset = NULL;

    Py_XDECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_descr );
    var_descr = NULL;

    CHECK_OBJECT( (PyObject *)var_mmap );
    Py_DECREF( var_mmap );
    var_mmap = NULL;

    Py_XDECREF( var_self );
    var_self = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    CHECK_OBJECT( (PyObject *)var_fid );
    Py_DECREF( var_fid );
    var_fid = NULL;

    Py_XDECREF( var_array_offset );
    var_array_offset = NULL;

    CHECK_OBJECT( (PyObject *)var_f_ctx );
    Py_DECREF( var_f_ctx );
    var_f_ctx = NULL;

    Py_XDECREF( var__dbytes );
    var__dbytes = NULL;

    Py_XDECREF( var_flen );
    var_flen = NULL;

    Py_XDECREF( var_acc );
    var_acc = NULL;

    Py_XDECREF( var_mm );
    var_mm = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_bytes );
    var_bytes = NULL;

    CHECK_OBJECT( (PyObject *)par_subtype );
    Py_DECREF( par_subtype );
    par_subtype = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)var_os );
    Py_DECREF( var_os );
    var_os = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_offset );
    Py_DECREF( par_offset );
    par_offset = NULL;

    Py_XDECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_descr );
    var_descr = NULL;

    Py_XDECREF( var_mmap );
    var_mmap = NULL;

    Py_XDECREF( var_self );
    var_self = NULL;

    CHECK_OBJECT( (PyObject *)par_filename );
    Py_DECREF( par_filename );
    par_filename = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_fid );
    var_fid = NULL;

    Py_XDECREF( var_array_offset );
    var_array_offset = NULL;

    Py_XDECREF( var_f_ctx );
    var_f_ctx = NULL;

    Py_XDECREF( var__dbytes );
    var__dbytes = NULL;

    Py_XDECREF( var_flen );
    var_flen = NULL;

    Py_XDECREF( var_acc );
    var_acc = NULL;

    Py_XDECREF( var_mm );
    var_mm = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_bytes );
    var_bytes = NULL;

    CHECK_OBJECT( (PyObject *)par_subtype );
    Py_DECREF( par_subtype );
    par_subtype = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( var_os );
    var_os = NULL;

    CHECK_OBJECT( (PyObject *)par_order );
    Py_DECREF( par_order );
    par_order = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_1___new__ );
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


static PyObject *impl_numpy$core$memmap$$$function_2___array_finalize__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_obj = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_3e35b0a70ee3f40d1ba9de5e96adc924;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_3e35b0a70ee3f40d1ba9de5e96adc924 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3e35b0a70ee3f40d1ba9de5e96adc924, codeobj_3e35b0a70ee3f40d1ba9de5e96adc924, module_numpy$core$memmap, sizeof(void *)+sizeof(void *) );
    frame_3e35b0a70ee3f40d1ba9de5e96adc924 = cache_frame_3e35b0a70ee3f40d1ba9de5e96adc924;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3e35b0a70ee3f40d1ba9de5e96adc924 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3e35b0a70ee3f40d1ba9de5e96adc924 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_obj );
        tmp_source_name_1 = par_obj;
        tmp_attribute_name_1 = const_str_plain__mmap;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
            exception_tb = NULL;

            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_obj );
        tmp_args_element_name_2 = par_obj;
        frame_3e35b0a70ee3f40d1ba9de5e96adc924->m_frame.f_lineno = 286;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_may_share_memory, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( par_obj );
            tmp_source_name_2 = par_obj;
            tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__mmap );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 287;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__mmap, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 287;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT( par_obj );
            tmp_source_name_3 = par_obj;
            tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_filename );
            if ( tmp_assattr_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 288;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_filename, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 288;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_assattr_target_3;
            CHECK_OBJECT( par_obj );
            tmp_source_name_4 = par_obj;
            tmp_assattr_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_offset );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 289;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_offset, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 289;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_assattr_target_4;
            CHECK_OBJECT( par_obj );
            tmp_source_name_5 = par_obj;
            tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_mode );
            if ( tmp_assattr_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 290;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_mode, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 290;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_assattr_target_5;
            tmp_assattr_name_5 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_5 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__mmap, tmp_assattr_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 292;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_assattr_target_6;
            tmp_assattr_name_6 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_6 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_filename, tmp_assattr_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 293;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_assattr_target_7;
            tmp_assattr_name_7 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_7 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_offset, tmp_assattr_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 294;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_8;
            PyObject *tmp_assattr_target_8;
            tmp_assattr_name_8 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_8 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_mode, tmp_assattr_name_8 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3e35b0a70ee3f40d1ba9de5e96adc924 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3e35b0a70ee3f40d1ba9de5e96adc924 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3e35b0a70ee3f40d1ba9de5e96adc924, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3e35b0a70ee3f40d1ba9de5e96adc924->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3e35b0a70ee3f40d1ba9de5e96adc924, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3e35b0a70ee3f40d1ba9de5e96adc924,
        type_description_1,
        par_self,
        par_obj
    );


    // Release cached frame.
    if ( frame_3e35b0a70ee3f40d1ba9de5e96adc924 == cache_frame_3e35b0a70ee3f40d1ba9de5e96adc924 )
    {
        Py_DECREF( frame_3e35b0a70ee3f40d1ba9de5e96adc924 );
    }
    cache_frame_3e35b0a70ee3f40d1ba9de5e96adc924 = NULL;

    assertFrameObject( frame_3e35b0a70ee3f40d1ba9de5e96adc924 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_2___array_finalize__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

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

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_2___array_finalize__ );
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


static PyObject *impl_numpy$core$memmap$$$function_3_flush( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_3f659dd1bb40745bb70eae542b82bdf5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3f659dd1bb40745bb70eae542b82bdf5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3f659dd1bb40745bb70eae542b82bdf5, codeobj_3f659dd1bb40745bb70eae542b82bdf5, module_numpy$core$memmap, sizeof(void *) );
    frame_3f659dd1bb40745bb70eae542b82bdf5 = cache_frame_3f659dd1bb40745bb70eae542b82bdf5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3f659dd1bb40745bb70eae542b82bdf5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3f659dd1bb40745bb70eae542b82bdf5 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_base );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_base );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_attribute_name_1 = const_str_plain_flush;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_2, tmp_attribute_name_1 );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "o";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_base );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_3f659dd1bb40745bb70eae542b82bdf5->m_frame.f_lineno = 313;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_flush );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f659dd1bb40745bb70eae542b82bdf5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f659dd1bb40745bb70eae542b82bdf5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3f659dd1bb40745bb70eae542b82bdf5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3f659dd1bb40745bb70eae542b82bdf5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3f659dd1bb40745bb70eae542b82bdf5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3f659dd1bb40745bb70eae542b82bdf5,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_3f659dd1bb40745bb70eae542b82bdf5 == cache_frame_3f659dd1bb40745bb70eae542b82bdf5 )
    {
        Py_DECREF( frame_3f659dd1bb40745bb70eae542b82bdf5 );
    }
    cache_frame_3f659dd1bb40745bb70eae542b82bdf5 = NULL;

    assertFrameObject( frame_3f659dd1bb40745bb70eae542b82bdf5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_3_flush );
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
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_3_flush );
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


static PyObject *impl_numpy$core$memmap$$$function_4___array_wrap__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_arr = python_pars[ 1 ];
    PyObject *par_context = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_ca23535c35c0bb60ffd82bdb9c61d2df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ca23535c35c0bb60ffd82bdb9c61d2df = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ca23535c35c0bb60ffd82bdb9c61d2df, codeobj_ca23535c35c0bb60ffd82bdb9c61d2df, module_numpy$core$memmap, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ca23535c35c0bb60ffd82bdb9c61d2df = cache_frame_ca23535c35c0bb60ffd82bdb9c61d2df;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ca23535c35c0bb60ffd82bdb9c61d2df );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ca23535c35c0bb60ffd82bdb9c61d2df ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_memmap );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_memmap );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "memmap" );
            exception_tb = NULL;

            exception_lineno = 316;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_arr );
        tmp_args_element_name_1 = par_arr;
        CHECK_OBJECT( par_context );
        tmp_args_element_name_2 = par_context;
        frame_ca23535c35c0bb60ffd82bdb9c61d2df->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain___array_wrap__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_arr;
            assert( old != NULL );
            par_arr = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_compexpr_left_1 = par_self;
        CHECK_OBJECT( par_arr );
        tmp_compexpr_right_1 = par_arr;
        tmp_or_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_self );
        tmp_type_arg_1 = par_self;
        tmp_compexpr_left_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_compexpr_left_2 == NULL) );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_memmap );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_memmap );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "memmap" );
            exception_tb = NULL;

            exception_lineno = 321;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_2;
        tmp_or_right_value_1 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( par_arr );
        tmp_return_value = par_arr;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_arr );
        tmp_source_name_1 = par_arr;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_tuple_empty;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "ooo";
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
            CHECK_OBJECT( par_arr );
            tmp_subscribed_name_1 = par_arr;
            tmp_subscript_name_1 = const_tuple_empty;
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( par_arr );
        tmp_source_name_2 = par_arr;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_view );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_np );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
            exception_tb = NULL;

            exception_lineno = 328;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndarray );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 328;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ca23535c35c0bb60ffd82bdb9c61d2df->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca23535c35c0bb60ffd82bdb9c61d2df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca23535c35c0bb60ffd82bdb9c61d2df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca23535c35c0bb60ffd82bdb9c61d2df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ca23535c35c0bb60ffd82bdb9c61d2df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ca23535c35c0bb60ffd82bdb9c61d2df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ca23535c35c0bb60ffd82bdb9c61d2df, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ca23535c35c0bb60ffd82bdb9c61d2df,
        type_description_1,
        par_self,
        par_arr,
        par_context
    );


    // Release cached frame.
    if ( frame_ca23535c35c0bb60ffd82bdb9c61d2df == cache_frame_ca23535c35c0bb60ffd82bdb9c61d2df )
    {
        Py_DECREF( frame_ca23535c35c0bb60ffd82bdb9c61d2df );
    }
    cache_frame_ca23535c35c0bb60ffd82bdb9c61d2df = NULL;

    assertFrameObject( frame_ca23535c35c0bb60ffd82bdb9c61d2df );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_4___array_wrap__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    CHECK_OBJECT( (PyObject *)par_context );
    Py_DECREF( par_context );
    par_context = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    CHECK_OBJECT( (PyObject *)par_context );
    Py_DECREF( par_context );
    par_context = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_4___array_wrap__ );
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


static PyObject *impl_numpy$core$memmap$$$function_5___getitem__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_index = python_pars[ 1 ];
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_da82f996c272febd99c17404260b7625;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_da82f996c272febd99c17404260b7625 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_da82f996c272febd99c17404260b7625, codeobj_da82f996c272febd99c17404260b7625, module_numpy$core$memmap, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_da82f996c272febd99c17404260b7625 = cache_frame_da82f996c272febd99c17404260b7625;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_da82f996c272febd99c17404260b7625 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_da82f996c272febd99c17404260b7625 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_memmap );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_memmap );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "memmap" );
            exception_tb = NULL;

            exception_lineno = 331;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_index );
        tmp_args_element_name_1 = par_index;
        frame_da82f996c272febd99c17404260b7625->m_frame.f_lineno = 331;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain___getitem__, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_res );
        tmp_type_arg_1 = var_res;
        tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        assert( !(tmp_compexpr_left_1 == NULL) );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_memmap );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_memmap );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "memmap" );
            exception_tb = NULL;

            exception_lineno = 332;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
        CHECK_OBJECT( var_res );
        tmp_source_name_1 = var_res;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__mmap );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 332;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_and_right_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT( var_res );
            tmp_source_name_2 = var_res;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_view );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_ndarray );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ndarray );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "ndarray" );
                exception_tb = NULL;

                exception_lineno = 333;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_1 = tmp_mvar_value_3;
            tmp_dict_key_1 = const_str_plain_type;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_da82f996c272febd99c17404260b7625->m_frame.f_lineno = 333;
            tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 333;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_da82f996c272febd99c17404260b7625 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_da82f996c272febd99c17404260b7625 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_da82f996c272febd99c17404260b7625 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_da82f996c272febd99c17404260b7625, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_da82f996c272febd99c17404260b7625->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_da82f996c272febd99c17404260b7625, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_da82f996c272febd99c17404260b7625,
        type_description_1,
        par_self,
        par_index,
        var_res
    );


    // Release cached frame.
    if ( frame_da82f996c272febd99c17404260b7625 == cache_frame_da82f996c272febd99c17404260b7625 )
    {
        Py_DECREF( frame_da82f996c272febd99c17404260b7625 );
    }
    cache_frame_da82f996c272febd99c17404260b7625 = NULL;

    assertFrameObject( frame_da82f996c272febd99c17404260b7625 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_res );
    tmp_return_value = var_res;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_5___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_index );
    Py_DECREF( par_index );
    par_index = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

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

    CHECK_OBJECT( (PyObject *)par_index );
    Py_DECREF( par_index );
    par_index = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$memmap$$$function_5___getitem__ );
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



static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_1___new__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$memmap$$$function_1___new__,
        const_str_plain___new__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_03cef841b2cd91c72dee2065cfd3bcef,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$memmap,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_2___array_finalize__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$memmap$$$function_2___array_finalize__,
        const_str_plain___array_finalize__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3e35b0a70ee3f40d1ba9de5e96adc924,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$memmap,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_3_flush(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$memmap$$$function_3_flush,
        const_str_plain_flush,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3f659dd1bb40745bb70eae542b82bdf5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$memmap,
        const_str_digest_ac4e4595c9916a96d232c691fe937482,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_4___array_wrap__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$memmap$$$function_4___array_wrap__,
        const_str_plain___array_wrap__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ca23535c35c0bb60ffd82bdb9c61d2df,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$memmap,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$core$memmap$$$function_5___getitem__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$core$memmap$$$function_5___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_da82f996c272febd99c17404260b7625,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_numpy$core$memmap,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$memmap =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core.memmap",
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

MOD_INIT_DECL( numpy$core$memmap )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$memmap );
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
    puts("numpy.core.memmap: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core.memmap: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("numpy.core.memmap: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnumpy$core$memmap" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$memmap = Py_InitModule4(
        "numpy.core.memmap",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_numpy$core$memmap = PyModule_Create( &mdef_numpy$core$memmap );
#endif

    moduledict_numpy$core$memmap = MODULE_DICT( module_numpy$core$memmap );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_numpy$core$memmap,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$memmap,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_numpy$core$memmap,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_numpy$core$memmap );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_263887fd84384d5e2143287b88ff6e41, module_numpy$core$memmap );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    struct Nuitka_FrameObject *frame_28f72911a4ee8f99369dea46616420d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *locals_numpy$core$memmap_25 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_df64ed1cdbe3bacda0831f58069101df_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_df64ed1cdbe3bacda0831f58069101df_2 = NULL;
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
        UPDATE_STRING_DICT0( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_21ba7c9ff06c1265965193673b6cd46f;
        UPDATE_STRING_DICT0( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
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
    frame_28f72911a4ee8f99369dea46616420d3 = MAKE_MODULE_FRAME( codeobj_28f72911a4ee8f99369dea46616420d3, module_numpy$core$memmap );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_28f72911a4ee8f99369dea46616420d3 );
    assert( Py_REFCNT( frame_28f72911a4ee8f99369dea46616420d3 ) == 2 );

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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
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


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
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
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_numpy;
        tmp_globals_name_1 = (PyObject *)moduledict_numpy$core$memmap;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_28f72911a4ee8f99369dea46616420d3->m_frame.f_lineno = 3;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_numeric;
        tmp_globals_name_2 = (PyObject *)moduledict_numpy$core$memmap;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_uint8_str_plain_ndarray_str_plain_dtype_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_28f72911a4ee8f99369dea46616420d3->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_uint8 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_uint8, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_ndarray );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_ndarray, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_dtype );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_dtype, tmp_assign_source_11 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b;
        tmp_globals_name_3 = (PyObject *)moduledict_numpy$core$memmap;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_615c7cabf48dac9b02b66815407e10d8_tuple;
        tmp_level_name_3 = const_int_0;
        frame_28f72911a4ee8f99369dea46616420d3->m_frame.f_lineno = 5;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_7 = tmp_import_from_3__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_long );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_long, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_8 = tmp_import_from_3__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_basestring );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_9 = tmp_import_from_3__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_os_fspath );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_os_fspath, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_contextlib_nullcontext );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_contextlib_nullcontext, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_11 = tmp_import_from_3__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_is_pathlib_path );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_is_pathlib_path, tmp_assign_source_17 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_3ebbb82d9800d0665e0803be07081408;
        tmp_globals_name_4 = (PyObject *)moduledict_numpy$core$memmap;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_set_module_tuple;
        tmp_level_name_4 = const_int_0;
        frame_28f72911a4ee8f99369dea46616420d3->m_frame.f_lineno = 8;
        tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_set_module );
        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_set_module, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = LIST_COPY( const_list_str_plain_memmap_list );
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_dtype );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dtype );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "dtype" );
            exception_tb = NULL;

            exception_lineno = 12;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_20 = tmp_mvar_value_1;
        UPDATE_STRING_DICT0( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_dtypedescr, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = LIST_COPY( const_list_64b4e14366094971fa8910a55e360e41_list );
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_valid_filemodes, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = LIST_COPY( const_list_0be409bc3e85d5239a38ebc1056a8c4a_list );
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_writeable_filemodes, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = PyDict_Copy( const_dict_5a6585184ef887d5c8da5415908fefdf );
        UPDATE_STRING_DICT1( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_mode_equivalents, tmp_assign_source_23 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_ndarray );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ndarray );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ndarray" );
            exception_tb = NULL;

            exception_lineno = 25;

            goto try_except_handler_4;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        tmp_assign_source_24 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_24, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_numpy$core$memmap_25 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_263887fd84384d5e2143287b88ff6e41;
        tmp_res = PyDict_SetItem( locals_numpy$core$memmap_25, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_68e2e7140aa0ce647c2cb37f738c5a3f;
        tmp_res = PyDict_SetItem( locals_numpy$core$memmap_25, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_float__minus_100_0;
        tmp_res = PyDict_SetItem( locals_numpy$core$memmap_25, const_str_plain___array_priority__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_df64ed1cdbe3bacda0831f58069101df_2, codeobj_df64ed1cdbe3bacda0831f58069101df, module_numpy$core$memmap, 0 );
        frame_df64ed1cdbe3bacda0831f58069101df_2 = cache_frame_df64ed1cdbe3bacda0831f58069101df_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_df64ed1cdbe3bacda0831f58069101df_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_df64ed1cdbe3bacda0831f58069101df_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_staticmethod_arg_1;
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_uint8 );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_uint8 );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "uint8" );
                exception_tb = NULL;

                exception_lineno = 207;

                goto frame_exception_exit_2;
            }

            tmp_tuple_element_2 = tmp_mvar_value_3;
            tmp_defaults_1 = PyTuple_New( 5 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_str_digest_dd7618bbb3c1cb615487560bff75714c;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_int_0;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_2 );
            tmp_tuple_element_2 = Py_None;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_str_plain_C;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_defaults_1, 4, tmp_tuple_element_2 );
            tmp_staticmethod_arg_1 = MAKE_FUNCTION_numpy$core$memmap$$$function_1___new__( tmp_defaults_1 );



            tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
            Py_DECREF( tmp_staticmethod_arg_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 207;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_numpy$core$memmap_25, const_str_plain___new__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 207;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_df64ed1cdbe3bacda0831f58069101df_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_df64ed1cdbe3bacda0831f58069101df_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_df64ed1cdbe3bacda0831f58069101df_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_df64ed1cdbe3bacda0831f58069101df_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_df64ed1cdbe3bacda0831f58069101df_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_df64ed1cdbe3bacda0831f58069101df_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_df64ed1cdbe3bacda0831f58069101df_2 == cache_frame_df64ed1cdbe3bacda0831f58069101df_2 )
        {
            Py_DECREF( frame_df64ed1cdbe3bacda0831f58069101df_2 );
        }
        cache_frame_df64ed1cdbe3bacda0831f58069101df_2 = NULL;

        assertFrameObject( frame_df64ed1cdbe3bacda0831f58069101df_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_numpy$core$memmap$$$function_2___array_finalize__(  );



        tmp_res = PyDict_SetItem( locals_numpy$core$memmap_25, const_str_plain___array_finalize__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_numpy$core$memmap$$$function_3_flush(  );



        tmp_res = PyDict_SetItem( locals_numpy$core$memmap_25, const_str_plain_flush, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_numpy$core$memmap$$$function_4___array_wrap__( tmp_defaults_2 );



            tmp_res = PyDict_SetItem( locals_numpy$core$memmap_25, const_str_plain___array_wrap__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_numpy$core$memmap$$$function_5___getitem__(  );



        tmp_res = PyDict_SetItem( locals_numpy$core$memmap_25, const_str_plain___getitem__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_25 = locals_numpy$core$memmap_25;
        Py_INCREF( tmp_assign_source_25 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$memmap );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF( locals_numpy$core$memmap_25 );
        locals_numpy$core$memmap_25 = NULL;
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

        Py_DECREF( locals_numpy$core$memmap_25 );
        locals_numpy$core$memmap_25 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$core$memmap );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 25;
        goto try_except_handler_4;
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
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


            exception_lineno = 25;

            goto try_except_handler_4;
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
        tmp_assign_source_26 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_27 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_4;
            }
            assert( tmp_select_metaclass_1__base == NULL );
            tmp_select_metaclass_1__base = tmp_assign_source_27;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_source_name_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_26 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 25;

                goto try_except_handler_7;
            }
            goto try_return_handler_6;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$memmap );
        return MOD_RETURN_VALUE( NULL );
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

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_5 );
            Py_XDECREF( exception_keeper_value_5 );
            Py_XDECREF( exception_keeper_tb_5 );
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_26 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_26 == NULL) );
            goto try_return_handler_6;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( numpy$core$memmap );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( numpy$core$memmap );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_memmap;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_args_element_name_2 = tmp_class_creation_1__bases;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_28f72911a4ee8f99369dea46616420d3->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_set_module );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_module );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "set_module" );
            exception_tb = NULL;

            exception_lineno = 24;

            goto try_except_handler_4;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        frame_28f72911a4ee8f99369dea46616420d3->m_frame.f_lineno = 24;
        tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_plain_numpy_tuple, 0 ) );

        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_4;
        }
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_args_element_name_4 = tmp_class_creation_1__class;
        frame_28f72911a4ee8f99369dea46616420d3->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_class_creation_1__class;
            assert( old != NULL );
            tmp_class_creation_1__class = tmp_assign_source_29;
            Py_DECREF( old );
        }

    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_28f72911a4ee8f99369dea46616420d3 );
#endif
    popFrameStack();

    assertFrameObject( frame_28f72911a4ee8f99369dea46616420d3 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_28f72911a4ee8f99369dea46616420d3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_28f72911a4ee8f99369dea46616420d3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_28f72911a4ee8f99369dea46616420d3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_28f72911a4ee8f99369dea46616420d3, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_30 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain_memmap, tmp_assign_source_30 );
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


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_numpy$core$memmap, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_numpy$core$memmap );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
