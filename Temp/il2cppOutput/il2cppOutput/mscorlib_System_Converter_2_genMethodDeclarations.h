#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2277;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t99;
// System.AsyncCallback
struct AsyncCallback_t100;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m12501_gshared (Converter_2_t2277 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m12501(__this, ___object, ___method, method) (( void (*) (Converter_2_t2277 *, Object_t *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m12501_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m12502_gshared (Converter_2_t2277 * __this, Object_t * ___input, const MethodInfo* method);
#define Converter_2_Invoke_m12502(__this, ___input, method) (( Object_t * (*) (Converter_2_t2277 *, Object_t *, const MethodInfo*))Converter_2_Invoke_m12502_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m12503_gshared (Converter_2_t2277 * __this, Object_t * ___input, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m12503(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (Converter_2_t2277 *, Object_t *, AsyncCallback_t100 *, Object_t *, const MethodInfo*))Converter_2_BeginInvoke_m12503_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m12504_gshared (Converter_2_t2277 * __this, Object_t * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m12504(__this, ___result, method) (( Object_t * (*) (Converter_2_t2277 *, Object_t *, const MethodInfo*))Converter_2_EndInvoke_m12504_gshared)(__this, ___result, method)
