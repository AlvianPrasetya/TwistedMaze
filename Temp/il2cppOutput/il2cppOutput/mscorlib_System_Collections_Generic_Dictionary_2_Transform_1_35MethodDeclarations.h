﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>
struct Transform_1_t2234;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t99;
// System.AsyncCallback
struct AsyncCallback_t100;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12190_gshared (Transform_1_t2234 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m12190(__this, ___object, ___method, method) (( void (*) (Transform_1_t2234 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m12190_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m12191_gshared (Transform_1_t2234 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m12191(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2234 *, Object_t *, uint8_t, const MethodInfo*))Transform_1_Invoke_m12191_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m12192_gshared (Transform_1_t2234 * __this, Object_t * ___key, uint8_t ___value, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m12192(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2234 *, Object_t *, uint8_t, AsyncCallback_t100 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m12192_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m12193_gshared (Transform_1_t2234 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m12193(__this, ___result, method) (( Object_t * (*) (Transform_1_t2234 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m12193_gshared)(__this, ___result, method)
