#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t102;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1473;
// System.Delegate
struct Delegate_t379;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m1672 (MulticastDelegate_t102 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m1670 (MulticastDelegate_t102 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m1671 (MulticastDelegate_t102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1473* MulticastDelegate_GetInvocationList_m1674 (MulticastDelegate_t102 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t379 * MulticastDelegate_CombineImpl_m1675 (MulticastDelegate_t102 * __this, Delegate_t379 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m4420 (MulticastDelegate_t102 * __this, MulticastDelegate_t102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t102 * MulticastDelegate_KPM_m4421 (Object_t * __this /* static, unused */, MulticastDelegate_t102 * ___needle, MulticastDelegate_t102 * ___haystack, MulticastDelegate_t102 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t379 * MulticastDelegate_RemoveImpl_m1676 (MulticastDelegate_t102 * __this, Delegate_t379 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
