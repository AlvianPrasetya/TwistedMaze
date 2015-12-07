#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.DictionaryEntry>
struct Transform_1_t2012;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t107;
// System.IAsyncResult
struct IAsyncResult_t99;
// System.AsyncCallback
struct AsyncCallback_t100;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
#define Transform_1__ctor_m9560(__this, ___object, ___method, method) (( void (*) (Transform_1_t2012 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m9530_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m9561(__this, ___key, ___value, method) (( DictionaryEntry_t699  (*) (Transform_1_t2012 *, int32_t, LayoutCache_t107 *, const MethodInfo*))Transform_1_Invoke_m9531_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m9562(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2012 *, int32_t, LayoutCache_t107 *, AsyncCallback_t100 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m9532_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m9563(__this, ___result, method) (( DictionaryEntry_t699  (*) (Transform_1_t2012 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m9533_gshared)(__this, ___result, method)
