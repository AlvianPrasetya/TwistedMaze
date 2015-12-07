#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
struct ThreadSafeDictionaryValueFactory_2_t398;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
struct ConstructorDelegate_t250;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t99;
// System.AsyncCallback
struct AsyncCallback_t100;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::.ctor(System.Object,System.IntPtr)
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_5MethodDeclarations.h"
#define ThreadSafeDictionaryValueFactory_2__ctor_m1528(__this, ___object, ___method, method) (( void (*) (ThreadSafeDictionaryValueFactory_2_t398 *, Object_t *, IntPtr_t, const MethodInfo*))ThreadSafeDictionaryValueFactory_2__ctor_m11200_gshared)(__this, ___object, ___method, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::Invoke(TKey)
#define ThreadSafeDictionaryValueFactory_2_Invoke_m11201(__this, ___key, method) (( ConstructorDelegate_t250 * (*) (ThreadSafeDictionaryValueFactory_2_t398 *, Type_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_Invoke_m11202_gshared)(__this, ___key, method)
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
#define ThreadSafeDictionaryValueFactory_2_BeginInvoke_m11203(__this, ___key, ___callback, ___object, method) (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t398 *, Type_t *, AsyncCallback_t100 *, Object_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_BeginInvoke_m11204_gshared)(__this, ___key, ___callback, ___object, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>::EndInvoke(System.IAsyncResult)
#define ThreadSafeDictionaryValueFactory_2_EndInvoke_m11205(__this, ___result, method) (( ConstructorDelegate_t250 * (*) (ThreadSafeDictionaryValueFactory_2_t398 *, Object_t *, const MethodInfo*))ThreadSafeDictionaryValueFactory_2_EndInvoke_m11206_gshared)(__this, ___result, method)
