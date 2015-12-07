#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.DictionaryEntry>
struct Transform_1_t2173;
// System.Object
struct Object_t;
// System.String
struct String_t;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
struct GetDelegate_t248;
// System.IAsyncResult
struct IAsyncResult_t99;
// System.AsyncCallback
struct AsyncCallback_t100;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
#define Transform_1__ctor_m11499(__this, ___object, ___method, method) (( void (*) (Transform_1_t2173 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m9807_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m11500(__this, ___key, ___value, method) (( DictionaryEntry_t699  (*) (Transform_1_t2173 *, String_t*, GetDelegate_t248 *, const MethodInfo*))Transform_1_Invoke_m9808_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m11501(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2173 *, String_t*, GetDelegate_t248 *, AsyncCallback_t100 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m9809_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m11502(__this, ___result, method) (( DictionaryEntry_t699  (*) (Transform_1_t2173 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m9810_gshared)(__this, ___result, method)
