#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
struct GenericEqualityComparer_1_t1511;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m8351_gshared (GenericEqualityComparer_1_t1511 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m8351(__this, method) (( void (*) (GenericEqualityComparer_1_t1511 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m8351_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12811_gshared (GenericEqualityComparer_1_t1511 * __this, Guid_t410  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m12811(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1511 *, Guid_t410 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m12811_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m12812_gshared (GenericEqualityComparer_1_t1511 * __this, Guid_t410  ___x, Guid_t410  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m12812(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1511 *, Guid_t410 , Guid_t410 , const MethodInfo*))GenericEqualityComparer_1_Equals_m12812_gshared)(__this, ___x, ___y, method)
