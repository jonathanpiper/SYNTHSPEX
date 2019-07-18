
#include "nuitka/prelude.h"

// Sentinel PyObject to be used for all our call iterator endings. It will
// become a PyCObject pointing to NULL. It's address is unique, and that's
// enough for us to use it as sentinel value.
PyObject *_sentinel_value = NULL;

PyObject *const_int_0;
PyObject *const_str_dot;
PyObject *const_int_pos_1;
PyObject *const_int_pos_2;
PyObject *const_int_pos_6;
PyObject *const_int_pos_7;
PyObject *const_str_empty;
PyObject *const_dict_empty;
PyObject *const_str_chr_42;
PyObject *const_tuple_empty;
PyObject *const_str_plain_rb;
PyObject *const_str_plain_int;
PyObject *const_str_plain_len;
PyObject *const_str_plain_sum;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_iter;
PyObject *const_str_plain_long;
PyObject *const_str_plain_name;
PyObject *const_str_plain_open;
PyObject *const_str_plain_read;
PyObject *const_str_plain_repr;
PyObject *const_str_plain_site;
PyObject *const_str_plain_type;
PyObject *const_str_plain_False;
PyObject *const_str_plain_level;
PyObject *const_str_plain_range;
PyObject *const_str_plain_format;
PyObject *const_str_plain_locals;
PyObject *const_str_plain_xrange;
PyObject *const_str_plain___all__;
PyObject *const_str_plain___cmp__;
PyObject *const_str_plain___doc__;
PyObject *const_str_plain_compile;
PyObject *const_str_plain_globals;
PyObject *const_str_plain_inspect;
PyObject *const_str_plain_pylibpd;
PyObject *const_str_plain___dict__;
PyObject *const_str_plain___exit__;
PyObject *const_str_plain___file__;
PyObject *const_str_plain___iter__;
PyObject *const_str_plain___main__;
PyObject *const_str_plain___name__;
PyObject *const_str_plain___path__;
PyObject *const_str_plain_callback;
PyObject *const_str_plain_exc_type;
PyObject *const_str_plain_fromlist;
PyObject *const_str_plain___class__;
PyObject *const_str_plain___enter__;
PyObject *const_str_plain_bytearray;
PyObject *const_str_plain_exc_value;
PyObject *const_str_plain___import__;
PyObject *const_str_plain___module__;
PyObject *const_str_plain_libpd_bang;
PyObject *const_str_plain___delattr__;
PyObject *const_str_plain___getattr__;
PyObject *const_str_plain___package__;
PyObject *const_str_plain___setattr__;
PyObject *const_str_plain_classmethod;
PyObject *const_str_plain___builtins__;
PyObject *const_str_plain_staticmethod;
PyObject *const_tuple_str_chr_42_tuple;
PyObject *const_str_plain___metaclass__;
PyObject *const_str_plain_exc_traceback;
PyObject *const_str_plain_libpd_subscribe;
PyObject *const_str_plain_libpd_open_patch;
PyObject *const_str_digest_49797bf29503761b116e94d134df9c96;
PyObject *const_str_digest_58961c73026e70b23b08cf381b49e04e;

static void _createGlobalConstants( void )
{
    NUITKA_MAY_BE_UNUSED PyObject *exception_type, *exception_value;
    NUITKA_MAY_BE_UNUSED PyTracebackObject *exception_tb;

#ifdef _MSC_VER
    // Prevent unused warnings in case of simple programs, the attribute
    // NUITKA_MAY_BE_UNUSED doesn't work for MSVC.
    (void *)exception_type; (void *)exception_value; (void *)exception_tb;
#endif

    const_int_0 = PyInt_FromLong( 0l );
    const_str_dot = UNSTREAM_CHAR( 46, 0 );
    const_int_pos_1 = PyInt_FromLong( 1l );
    const_int_pos_2 = PyInt_FromLong( 2l );
    const_int_pos_6 = PyInt_FromLong( 6l );
    const_int_pos_7 = PyInt_FromLong( 7l );
    const_str_empty = UNSTREAM_STRING( &constant_bin[ 0 ], 0, 0 );
    const_dict_empty = _PyDict_NewPresized( 0 );
    assert( PyDict_Size( const_dict_empty ) == 0 );
    const_str_chr_42 = UNSTREAM_CHAR( 42, 0 );
    const_tuple_empty = PyTuple_New( 0 );
    const_str_plain_rb = UNSTREAM_STRING( &constant_bin[ 3467 ], 2, 1 );
    const_str_plain_int = UNSTREAM_STRING( &constant_bin[ 2106 ], 3, 1 );
    const_str_plain_len = UNSTREAM_STRING( &constant_bin[ 3469 ], 3, 1 );
    const_str_plain_sum = UNSTREAM_STRING( &constant_bin[ 3472 ], 3, 1 );
    const_str_plain_sys = UNSTREAM_STRING( &constant_bin[ 2172 ], 3, 1 );
    const_str_plain_iter = UNSTREAM_STRING( &constant_bin[ 1262 ], 4, 1 );
    const_str_plain_long = UNSTREAM_STRING( &constant_bin[ 3475 ], 4, 1 );
    const_str_plain_name = UNSTREAM_STRING( &constant_bin[ 1777 ], 4, 1 );
    const_str_plain_open = UNSTREAM_STRING( &constant_bin[ 2086 ], 4, 1 );
    const_str_plain_read = UNSTREAM_STRING( &constant_bin[ 1426 ], 4, 1 );
    const_str_plain_repr = UNSTREAM_STRING( &constant_bin[ 2034 ], 4, 1 );
    const_str_plain_site = UNSTREAM_STRING( &constant_bin[ 3479 ], 4, 1 );
    const_str_plain_type = UNSTREAM_STRING( &constant_bin[ 1419 ], 4, 1 );
    const_str_plain_False = UNSTREAM_STRING( &constant_bin[ 3483 ], 5, 1 );
    const_str_plain_level = UNSTREAM_STRING( &constant_bin[ 3488 ], 5, 1 );
    const_str_plain_range = UNSTREAM_STRING( &constant_bin[ 3493 ], 5, 1 );
    const_str_plain_format = UNSTREAM_STRING( &constant_bin[ 3498 ], 6, 1 );
    const_str_plain_locals = UNSTREAM_STRING( &constant_bin[ 3504 ], 6, 1 );
    const_str_plain_xrange = UNSTREAM_STRING( &constant_bin[ 3510 ], 6, 1 );
    const_str_plain___all__ = UNSTREAM_STRING( &constant_bin[ 3516 ], 7, 1 );
    const_str_plain___cmp__ = UNSTREAM_STRING( &constant_bin[ 3523 ], 7, 1 );
    const_str_plain___doc__ = UNSTREAM_STRING( &constant_bin[ 3530 ], 7, 1 );
    const_str_plain_compile = UNSTREAM_STRING( &constant_bin[ 3537 ], 7, 1 );
    const_str_plain_globals = UNSTREAM_STRING( &constant_bin[ 3544 ], 7, 1 );
    const_str_plain_inspect = UNSTREAM_STRING( &constant_bin[ 3551 ], 7, 1 );
    const_str_plain_pylibpd = UNSTREAM_STRING( &constant_bin[ 1763 ], 7, 1 );
    const_str_plain___dict__ = UNSTREAM_STRING( &constant_bin[ 3558 ], 8, 1 );
    const_str_plain___exit__ = UNSTREAM_STRING( &constant_bin[ 3566 ], 8, 1 );
    const_str_plain___file__ = UNSTREAM_STRING( &constant_bin[ 3574 ], 8, 1 );
    const_str_plain___iter__ = UNSTREAM_STRING( &constant_bin[ 3582 ], 8, 1 );
    const_str_plain___main__ = UNSTREAM_STRING( &constant_bin[ 3590 ], 8, 1 );
    const_str_plain___name__ = UNSTREAM_STRING( &constant_bin[ 3598 ], 8, 1 );
    const_str_plain___path__ = UNSTREAM_STRING( &constant_bin[ 3606 ], 8, 1 );
    const_str_plain_callback = UNSTREAM_STRING( &constant_bin[ 1931 ], 8, 1 );
    const_str_plain_exc_type = UNSTREAM_STRING( &constant_bin[ 3614 ], 8, 1 );
    const_str_plain_fromlist = UNSTREAM_STRING( &constant_bin[ 3622 ], 8, 1 );
    const_str_plain___class__ = UNSTREAM_STRING( &constant_bin[ 3630 ], 9, 1 );
    const_str_plain___enter__ = UNSTREAM_STRING( &constant_bin[ 3639 ], 9, 1 );
    const_str_plain_bytearray = UNSTREAM_STRING( &constant_bin[ 3648 ], 9, 1 );
    const_str_plain_exc_value = UNSTREAM_STRING( &constant_bin[ 3657 ], 9, 1 );
    const_str_plain___import__ = UNSTREAM_STRING( &constant_bin[ 3666 ], 10, 1 );
    const_str_plain___module__ = UNSTREAM_STRING( &constant_bin[ 3676 ], 10, 1 );
    const_str_plain_libpd_bang = UNSTREAM_STRING( &constant_bin[ 3686 ], 10, 1 );
    const_str_plain___delattr__ = UNSTREAM_STRING( &constant_bin[ 3696 ], 11, 1 );
    const_str_plain___getattr__ = UNSTREAM_STRING( &constant_bin[ 3707 ], 11, 1 );
    const_str_plain___package__ = UNSTREAM_STRING( &constant_bin[ 3718 ], 11, 1 );
    const_str_plain___setattr__ = UNSTREAM_STRING( &constant_bin[ 3729 ], 11, 1 );
    const_str_plain_classmethod = UNSTREAM_STRING( &constant_bin[ 3740 ], 11, 1 );
    const_str_plain___builtins__ = UNSTREAM_STRING( &constant_bin[ 3751 ], 12, 1 );
    const_str_plain_staticmethod = UNSTREAM_STRING( &constant_bin[ 3763 ], 12, 1 );
    const_tuple_str_chr_42_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_42_tuple, 0, const_str_chr_42 ); Py_INCREF( const_str_chr_42 );
    const_str_plain___metaclass__ = UNSTREAM_STRING( &constant_bin[ 3775 ], 13, 1 );
    const_str_plain_exc_traceback = UNSTREAM_STRING( &constant_bin[ 3788 ], 13, 1 );
    const_str_plain_libpd_subscribe = UNSTREAM_STRING( &constant_bin[ 3801 ], 15, 1 );
    const_str_plain_libpd_open_patch = UNSTREAM_STRING( &constant_bin[ 3816 ], 16, 1 );
    const_str_digest_49797bf29503761b116e94d134df9c96 = UNSTREAM_STRING( &constant_bin[ 1231 ], 8, 0 );
    const_str_digest_58961c73026e70b23b08cf381b49e04e = UNSTREAM_STRING( &constant_bin[ 3832 ], 15, 0 );

#if _NUITKA_EXE
    /* Set the "sys.executable" path to the original CPython executable. */
    PySys_SetObject(
        (char *)"executable",
        const_str_digest_58961c73026e70b23b08cf381b49e04e
    );
#endif
}

// In debug mode we can check that the constants were not tampered with in any
// given moment. We typically do it at program exit, but we can add extra calls
// for sanity.
#ifndef __NUITKA_NO_ASSERT__
void checkGlobalConstants( void )
{

}
#endif

void createGlobalConstants( void )
{
    if ( _sentinel_value == NULL )
    {
#if PYTHON_VERSION < 300
        _sentinel_value = PyCObject_FromVoidPtr( NULL, NULL );
#else
        // The NULL value is not allowed for a capsule, so use something else.
        _sentinel_value = PyCapsule_New( (void *)27, "sentinel", NULL );
#endif
        assert( _sentinel_value );

        _createGlobalConstants();
    }
}
