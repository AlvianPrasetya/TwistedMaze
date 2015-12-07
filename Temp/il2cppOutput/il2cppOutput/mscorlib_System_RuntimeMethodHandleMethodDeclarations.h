#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_t1433;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RuntimeMethodHandle::.ctor(System.IntPtr)
extern "C" void RuntimeMethodHandle__ctor_m8179 (RuntimeMethodHandle_t1433 * __this, IntPtr_t ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeMethodHandle__ctor_m8180 (RuntimeMethodHandle_t1433 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeMethodHandle::get_Value()
extern "C" IntPtr_t RuntimeMethodHandle_get_Value_m8181 (RuntimeMethodHandle_t1433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeMethodHandle_GetObjectData_m8182 (RuntimeMethodHandle_t1433 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeMethodHandle::Equals(System.Object)
extern "C" bool RuntimeMethodHandle_Equals_m8183 (RuntimeMethodHandle_t1433 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeMethodHandle::GetHashCode()
extern "C" int32_t RuntimeMethodHandle_GetHashCode_m8184 (RuntimeMethodHandle_t1433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
