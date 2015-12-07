#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t70;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t99;
// System.AsyncCallback
struct AsyncCallback_t100;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
#define Action_1__ctor_m9243(__this, ___object, ___method, method) (( void (*) (Action_1_t70 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m9244_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m9245(__this, ___obj, method) (( void (*) (Action_1_t70 *, bool, const MethodInfo*))Action_1_Invoke_m9246_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m9247(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t70 *, bool, AsyncCallback_t100 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m9248_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m9249(__this, ___result, method) (( void (*) (Action_1_t70 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m9250_gshared)(__this, ___result, method)
