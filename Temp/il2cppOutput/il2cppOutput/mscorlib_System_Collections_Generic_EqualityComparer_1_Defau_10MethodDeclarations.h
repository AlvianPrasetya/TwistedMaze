#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2328;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12818_gshared (DefaultComparer_t2328 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12818(__this, method) (( void (*) (DefaultComparer_t2328 *, const MethodInfo*))DefaultComparer__ctor_m12818_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12819_gshared (DefaultComparer_t2328 * __this, Guid_t410  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12819(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2328 *, Guid_t410 , const MethodInfo*))DefaultComparer_GetHashCode_m12819_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12820_gshared (DefaultComparer_t2328 * __this, Guid_t410  ___x, Guid_t410  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12820(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2328 *, Guid_t410 , Guid_t410 , const MethodInfo*))DefaultComparer_Equals_m12820_gshared)(__this, ___x, ___y, method)
