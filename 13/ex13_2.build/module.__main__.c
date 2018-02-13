/* Generated code for Python source for module '__main__'
 * created by Nuitka version 0.5.28.1
 *
 * This code is in part copyright 2017 Kay Hayen.
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

/* The _module___main__ is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The module constants used, if any. */
static PyObject *const_str_plain_split;
static PyObject *const_str_plain___package__;
static PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_sys;
static PyObject *const_tuple_str_plain_line_tuple;
static PyObject *const_str_plain_f;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_digest_439d1398e2f3d2739cafa9b75372a63f_tuple;
static PyObject *const_str_plain_depth;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_int_0;
static PyObject *const_str_plain_key;
static PyObject *const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_site;
extern PyObject *const_str_plain_types;
static PyObject *const_str_plain_finished;
static PyObject *const_tuple_str_plain_depth_str_plain_pos_str_plain_delay_tuple;
static PyObject *const_str_plain_line;
static PyObject *const_str_plain_os;
static PyObject *const_str_angle_module;
static PyObject *const_str_plain_input;
static PyObject *const_str_plain_l;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_process_line;
extern PyObject *const_str_plain___enter__;
static PyObject *const_int_pos_2;
static PyObject *const_str_plain_caught;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain___main__;
static PyObject *const_str_plain_calc_pos;
static PyObject *const_str_plain___annotations__;
static PyObject *const_str_plain_delay;
static PyObject *const_str_plain_layers;
static PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_plain_pos;
static PyObject *const_str_digest_29e01a155392c91b76597faf5cba68d6;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_split = UNSTREAM_STRING( &constant_bin[ 0 ], 5, 1 );
    const_str_plain___package__ = UNSTREAM_STRING( &constant_bin[ 5 ], 11, 1 );
    const_str_plain___spec__ = UNSTREAM_STRING( &constant_bin[ 16 ], 8, 1 );
    const_str_plain_sys = UNSTREAM_STRING( &constant_bin[ 24 ], 3, 1 );
    const_tuple_str_plain_line_tuple = PyTuple_New( 1 );
    const_str_plain_line = UNSTREAM_STRING( &constant_bin[ 27 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_line_tuple, 0, const_str_plain_line ); Py_INCREF( const_str_plain_line );
    const_str_plain_f = UNSTREAM_STRING( &constant_bin[ 31 ], 1, 1 );
    const_tuple_str_digest_439d1398e2f3d2739cafa9b75372a63f_tuple = PyTuple_New( 1 );
    const_str_digest_439d1398e2f3d2739cafa9b75372a63f = UNSTREAM_STRING( &constant_bin[ 32 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_439d1398e2f3d2739cafa9b75372a63f_tuple, 0, const_str_digest_439d1398e2f3d2739cafa9b75372a63f ); Py_INCREF( const_str_digest_439d1398e2f3d2739cafa9b75372a63f );
    const_str_plain_depth = UNSTREAM_STRING( &constant_bin[ 34 ], 5, 1 );
    const_str_plain_key = UNSTREAM_STRING( &constant_bin[ 39 ], 3, 1 );
    const_str_plain_finished = UNSTREAM_STRING( &constant_bin[ 42 ], 8, 1 );
    const_tuple_str_plain_depth_str_plain_pos_str_plain_delay_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_depth_str_plain_pos_str_plain_delay_tuple, 0, const_str_plain_depth ); Py_INCREF( const_str_plain_depth );
    const_str_plain_pos = UNSTREAM_STRING( &constant_bin[ 50 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_depth_str_plain_pos_str_plain_delay_tuple, 1, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    const_str_plain_delay = UNSTREAM_STRING( &constant_bin[ 53 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_depth_str_plain_pos_str_plain_delay_tuple, 2, const_str_plain_delay ); Py_INCREF( const_str_plain_delay );
    const_str_plain_os = UNSTREAM_STRING( &constant_bin[ 51 ], 2, 1 );
    const_str_angle_module = UNSTREAM_STRING( &constant_bin[ 58 ], 8, 0 );
    const_str_plain_input = UNSTREAM_STRING( &constant_bin[ 66 ], 5, 1 );
    const_str_plain_l = UNSTREAM_STRING( &constant_bin[ 2 ], 1, 1 );
    const_str_plain_process_line = UNSTREAM_STRING( &constant_bin[ 71 ], 12, 1 );
    const_int_pos_2 = PyLong_FromUnsignedLong( 2ul );
    const_str_plain_caught = UNSTREAM_STRING( &constant_bin[ 83 ], 6, 1 );
    const_str_plain_calc_pos = UNSTREAM_STRING( &constant_bin[ 89 ], 8, 1 );
    const_str_plain___annotations__ = UNSTREAM_STRING( &constant_bin[ 97 ], 15, 1 );
    const_str_plain_layers = UNSTREAM_STRING( &constant_bin[ 112 ], 6, 1 );
    const_tuple_none_none_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_str_digest_29e01a155392c91b76597faf5cba68d6 = UNSTREAM_STRING( &constant_bin[ 118 ], 33, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_904224f8132e0870cc9c561348c9d7e9;
static PyCodeObject *codeobj_2eb4cef6f4594242c1e0295e66bf024a;
static PyCodeObject *codeobj_b6bbd625a4647055ad593bb8469e29b1;
/* For use in "MainProgram.c". */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_29e01a155392c91b76597faf5cba68d6;
    codeobj_904224f8132e0870cc9c561348c9d7e9 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_module, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_main = codeobj_904224f8132e0870cc9c561348c9d7e9;
    codeobj_2eb4cef6f4594242c1e0295e66bf024a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_calc_pos, 6, const_tuple_str_plain_depth_str_plain_pos_str_plain_delay_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b6bbd625a4647055ad593bb8469e29b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_process_line, 3, const_tuple_str_plain_line_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION___main__$$$function_1_process_line(  );


static PyObject *MAKE_FUNCTION___main__$$$function_2_calc_pos(  );


// The module function definitions.
static PyObject *impl___main__$$$function_1_process_line( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_line = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_b6bbd625a4647055ad593bb8469e29b1 = NULL;

    struct Nuitka_FrameObject *frame_b6bbd625a4647055ad593bb8469e29b1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b6bbd625a4647055ad593bb8469e29b1, codeobj_b6bbd625a4647055ad593bb8469e29b1, module___main__, sizeof(void *) );
    frame_b6bbd625a4647055ad593bb8469e29b1 = cache_frame_b6bbd625a4647055ad593bb8469e29b1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b6bbd625a4647055ad593bb8469e29b1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b6bbd625a4647055ad593bb8469e29b1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = (PyObject *)&PyMap_Type;
    tmp_args_element_name_1 = (PyObject *)&PyLong_Type;
    tmp_called_instance_1 = par_line;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_b6bbd625a4647055ad593bb8469e29b1->m_frame.f_lineno = 4;
    tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_digest_439d1398e2f3d2739cafa9b75372a63f_tuple, 0 ) );

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_b6bbd625a4647055ad593bb8469e29b1->m_frame.f_lineno = 4;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6bbd625a4647055ad593bb8469e29b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6bbd625a4647055ad593bb8469e29b1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b6bbd625a4647055ad593bb8469e29b1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b6bbd625a4647055ad593bb8469e29b1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b6bbd625a4647055ad593bb8469e29b1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b6bbd625a4647055ad593bb8469e29b1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b6bbd625a4647055ad593bb8469e29b1,
        type_description_1,
        par_line
    );


    // Release cached frame.
    if ( frame_b6bbd625a4647055ad593bb8469e29b1 == cache_frame_b6bbd625a4647055ad593bb8469e29b1 )
    {
        Py_DECREF( frame_b6bbd625a4647055ad593bb8469e29b1 );
    }
    cache_frame_b6bbd625a4647055ad593bb8469e29b1 = NULL;

    assertFrameObject( frame_b6bbd625a4647055ad593bb8469e29b1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( __main__$$$function_1_process_line );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_line );
    par_line = NULL;

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

    Py_XDECREF( par_line );
    par_line = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( __main__$$$function_1_process_line );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl___main__$$$function_2_calc_pos( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_depth = python_pars[ 0 ];
    PyObject *par_pos = python_pars[ 1 ];
    PyObject *par_delay = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    static struct Nuitka_FrameObject *cache_frame_2eb4cef6f4594242c1e0295e66bf024a = NULL;

    struct Nuitka_FrameObject *frame_2eb4cef6f4594242c1e0295e66bf024a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2eb4cef6f4594242c1e0295e66bf024a, codeobj_2eb4cef6f4594242c1e0295e66bf024a, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2eb4cef6f4594242c1e0295e66bf024a = cache_frame_2eb4cef6f4594242c1e0295e66bf024a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2eb4cef6f4594242c1e0295e66bf024a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2eb4cef6f4594242c1e0295e66bf024a ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_2 = par_pos;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_1 = par_delay;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = const_int_pos_2;
    tmp_right_name_3 = par_depth;

    if ( tmp_right_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "depth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 7;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_3 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 7;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_2;
    tmp_right_name_2 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 7;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2eb4cef6f4594242c1e0295e66bf024a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2eb4cef6f4594242c1e0295e66bf024a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2eb4cef6f4594242c1e0295e66bf024a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2eb4cef6f4594242c1e0295e66bf024a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2eb4cef6f4594242c1e0295e66bf024a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2eb4cef6f4594242c1e0295e66bf024a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2eb4cef6f4594242c1e0295e66bf024a,
        type_description_1,
        par_depth,
        par_pos,
        par_delay
    );


    // Release cached frame.
    if ( frame_2eb4cef6f4594242c1e0295e66bf024a == cache_frame_2eb4cef6f4594242c1e0295e66bf024a )
    {
        Py_DECREF( frame_2eb4cef6f4594242c1e0295e66bf024a );
    }
    cache_frame_2eb4cef6f4594242c1e0295e66bf024a = NULL;

    assertFrameObject( frame_2eb4cef6f4594242c1e0295e66bf024a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( __main__$$$function_2_calc_pos );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_depth );
    par_depth = NULL;

    Py_XDECREF( par_pos );
    par_pos = NULL;

    Py_XDECREF( par_delay );
    par_delay = NULL;

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

    Py_XDECREF( par_depth );
    par_depth = NULL;

    Py_XDECREF( par_pos );
    par_pos = NULL;

    Py_XDECREF( par_delay );
    par_delay = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( __main__$$$function_2_calc_pos );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION___main__$$$function_1_process_line(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_1_process_line,
        const_str_plain_process_line,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b6bbd625a4647055ad593bb8469e29b1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module___main__,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_2_calc_pos(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_2_calc_pos,
        const_str_plain_calc_pos,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2eb4cef6f4594242c1e0295e66bf024a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module___main__,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef___main__ =
{
    PyModuleDef_HEAD_INIT,
    "__main__",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
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
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module___main__ = PyModule_Create( &mdef___main__ );
#endif

    moduledict___main__ = MODULE_DICT( module___main__ );

    CHECK_OBJECT( module___main__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain___main__, module___main__ );

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

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    PyObject *tmp_with_1__indicator = NULL;
    PyObject *tmp_with_1__source = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_open_filename_1;
    bool tmp_result;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_904224f8132e0870cc9c561348c9d7e9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    // Frame without reuse.
    frame_904224f8132e0870cc9c561348c9d7e9 = MAKE_MODULE_FRAME( codeobj_904224f8132e0870cc9c561348c9d7e9, module___main__ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_904224f8132e0870cc9c561348c9d7e9 );
    assert( Py_REFCNT( frame_904224f8132e0870cc9c561348c9d7e9 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_os;
    tmp_level_name_1 = const_int_0;
    frame_904224f8132e0870cc9c561348c9d7e9->m_frame.f_lineno = 1;
    tmp_unused = IMPORT_MODULE_KW( tmp_name_name_1, NULL, NULL, NULL, tmp_level_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_name_name_2 = const_str_plain_sys;
    tmp_level_name_2 = const_int_0;
    frame_904224f8132e0870cc9c561348c9d7e9->m_frame.f_lineno = 1;
    tmp_unused = IMPORT_MODULE_KW( tmp_name_name_2, NULL, NULL, NULL, tmp_level_name_2 );
    assert( tmp_unused != NULL );
    Py_DECREF( tmp_unused );
    tmp_name_name_3 = const_str_plain_types;
    tmp_level_name_3 = const_int_0;
    frame_904224f8132e0870cc9c561348c9d7e9->m_frame.f_lineno = 1;
    tmp_unused = IMPORT_MODULE_KW( tmp_name_name_3, NULL, NULL, NULL, tmp_level_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_name_name_4 = const_str_plain_site;
    tmp_level_name_4 = const_int_0;
    frame_904224f8132e0870cc9c561348c9d7e9->m_frame.f_lineno = 1;
    tmp_unused = IMPORT_MODULE_KW( tmp_name_name_4, NULL, NULL, NULL, tmp_level_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_29e01a155392c91b76597faf5cba68d6;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = metapath_based_loader;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, tmp_assign_source_4 );
    tmp_assign_source_5 = Py_None;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_None;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_6 );
    tmp_assign_source_7 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_7 );
    tmp_assign_source_8 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_layers, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION___main__$$$function_1_process_line(  );
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_process_line, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION___main__$$$function_2_calc_pos(  );
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_calc_pos, tmp_assign_source_10 );
    // Tried code:
    tmp_open_filename_1 = const_str_plain_input;
    tmp_assign_source_11 = BUILTIN_OPEN( tmp_open_filename_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_11;

    tmp_source_name_1 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_1, const_str_plain___enter__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    frame_904224f8132e0870cc9c561348c9d7e9->m_frame.f_lineno = 9;
    tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_12;

    tmp_source_name_2 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_assign_source_13 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___exit__ );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_13;

    tmp_assign_source_14 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_14 );
    tmp_with_1__indicator = tmp_assign_source_14;

    tmp_assign_source_15 = tmp_with_1__enter;

    CHECK_OBJECT( tmp_assign_source_15 );
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_f, tmp_assign_source_15 );
    // Tried code:
    // Tried code:
    tmp_iter_arg_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_f );

    if (unlikely( tmp_iter_arg_1 == NULL ))
    {
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_f );
    }

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "f" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 10;

        goto try_except_handler_3;
    }

    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_3;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_16;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_next_source_1 );
    tmp_assign_source_17 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            exception_lineno = 10;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_assign_source_18 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_18 );
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_line, tmp_assign_source_18 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_process_line );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_process_line );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "process_line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;

        goto try_except_handler_4;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_line );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_line );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "line" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;

        goto try_except_handler_4;
    }

    frame_904224f8132e0870cc9c561348c9d7e9->m_frame.f_lineno = 11;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_l, tmp_assign_source_19 );
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_l );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "l" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 12;

        goto try_except_handler_4;
    }

    tmp_subscript_name_1 = const_int_pos_1;
    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_4;
    }
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_layers );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_layers );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "layers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 12;

        goto try_except_handler_4;
    }

    tmp_subscribed_name_2 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_l );

    if (unlikely( tmp_subscribed_name_2 == NULL ))
    {
        tmp_subscribed_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_l );
    }

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "l" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 12;

        goto try_except_handler_4;
    }

    tmp_subscript_name_2 = const_int_0;
    tmp_ass_subscript_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_ass_subscript_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 12;

        goto try_except_handler_4;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_4;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

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
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_904224f8132e0870cc9c561348c9d7e9, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_904224f8132e0870cc9c561348c9d7e9, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_BaseException;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_20 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        tmp_with_1__indicator = tmp_assign_source_20;
        Py_INCREF( tmp_with_1__indicator );
        Py_XDECREF( old );
    }

    tmp_called_name_3 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_args_element_name_2 = PyThreadState_GET()->exc_type;
    tmp_args_element_name_3 = PyThreadState_GET()->exc_value;
    tmp_args_element_name_4 = PyThreadState_GET()->exc_traceback;
    frame_904224f8132e0870cc9c561348c9d7e9->m_frame.f_lineno = 9;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_5;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 9;

        goto try_except_handler_5;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 9;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904224f8132e0870cc9c561348c9d7e9->m_frame) frame_904224f8132e0870cc9c561348c9d7e9->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 9;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904224f8132e0870cc9c561348c9d7e9->m_frame) frame_904224f8132e0870cc9c561348c9d7e9->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_5;
    branch_end_1:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( __main__ );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
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

    tmp_compare_left_2 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_4 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_4 );
    frame_904224f8132e0870cc9c561348c9d7e9->m_frame.f_lineno = 9;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_4 );
        Py_XDECREF( exception_keeper_value_4 );
        Py_XDECREF( exception_keeper_tb_4 );

        exception_lineno = 9;

        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_1;
    // End of try:
    try_end_4:;
    tmp_compare_left_3 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_True;
    tmp_is_2 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_5 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_5 );
    frame_904224f8132e0870cc9c561348c9d7e9->m_frame.f_lineno = 9;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    goto try_end_5;
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

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    tmp_assign_source_21 = Py_False;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_finished, tmp_assign_source_21 );
    tmp_assign_source_22 = Py_False;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_caught, tmp_assign_source_22 );
    tmp_assign_source_23 = const_int_0;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_delay, tmp_assign_source_23 );
    loop_start_2:;
    tmp_cond_value_2 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_finished );

    if (unlikely( tmp_cond_value_2 == NULL ))
    {
        tmp_cond_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_finished );
    }

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "finished" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;

        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    goto loop_end_2;
    branch_no_5:;
    tmp_assign_source_24 = Py_False;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_caught, tmp_assign_source_24 );
    tmp_iter_arg_2 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_layers );

    if (unlikely( tmp_iter_arg_2 == NULL ))
    {
        tmp_iter_arg_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_layers );
    }

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "layers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_3:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_next_source_2 );
    tmp_assign_source_26 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_26 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            exception_lineno = 21;
            goto try_except_handler_6;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    tmp_assign_source_27 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_27 );
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_key, tmp_assign_source_27 );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_calc_pos );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_calc_pos );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "calc_pos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;

        goto try_except_handler_6;
    }

    tmp_subscribed_name_3 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_layers );

    if (unlikely( tmp_subscribed_name_3 == NULL ))
    {
        tmp_subscribed_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_layers );
    }

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "layers" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;

        goto try_except_handler_6;
    }

    tmp_subscript_name_3 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_key );

    if (unlikely( tmp_subscript_name_3 == NULL ))
    {
        tmp_subscript_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_key );
    }

    if ( tmp_subscript_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;

        goto try_except_handler_6;
    }

    tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_6;
    }
    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_key );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_key );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;

        goto try_except_handler_6;
    }

    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_delay );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_delay );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "delay" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;

        goto try_except_handler_6;
    }

    frame_904224f8132e0870cc9c561348c9d7e9->m_frame.f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_compare_left_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_6;
    }
    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 22;

        goto try_except_handler_6;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_28 = Py_True;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_caught, tmp_assign_source_28 );
    goto loop_end_3;
    branch_no_6:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_cond_value_3 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_caught );

    if (unlikely( tmp_cond_value_3 == NULL ))
    {
        tmp_cond_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_caught );
    }

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "caught" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;

        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_delay );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_delay );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "delay" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;

        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_29 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_delay, tmp_assign_source_29 );
    goto branch_end_7;
    branch_no_7:;
    tmp_assign_source_30 = Py_True;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain_finished, tmp_assign_source_30 );
    branch_end_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_7 != NULL );
    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_delay );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_delay );
    }

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "delay" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;

        goto frame_exception_exit_1;
    }

    frame_904224f8132e0870cc9c561348c9d7e9->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_904224f8132e0870cc9c561348c9d7e9 );
#endif
    popFrameStack();

    assertFrameObject( frame_904224f8132e0870cc9c561348c9d7e9 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_904224f8132e0870cc9c561348c9d7e9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_904224f8132e0870cc9c561348c9d7e9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_904224f8132e0870cc9c561348c9d7e9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_904224f8132e0870cc9c561348c9d7e9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module___main__ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
