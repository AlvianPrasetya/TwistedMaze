#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1<System.Guid>
struct EqualityComparer_1_t2327;
// System.Object
struct Object_t;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
extern "C" void EqualityComparer_1__ctor_m12813_gshared (EqualityComparer_1_t2327 * __this, const MethodInfo* method);
#define EqualityComparer_1__ctor_m12813(__this, method) (( void (*) (EqualityComparer_1_t2327 *, const MethodInfo*))EqualityComparer_1__ctor_m12813_gshared)(__this, method)
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
extern "C" void EqualityComparer_1__cctor_m12814_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1__cctor_m12814(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1__cctor_m12814_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12815_gshared (EqualityComparer_1_t2327 * __this, Object_t * ___obj, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12815(__this, ___obj, method) (( int32_t (*) (EqualityComparer_1_t2327 *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12815_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12816_gshared (EqualityComparer_1_t2327 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12816(__this, ___x, ___y, method) (( bool (*) (EqualityComparer_1_t2327 *, Object_t *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12816_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
extern "C" EqualityComparer_1_t2327 * EqualityComparer_1_get_Default_m12817_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1_get_Default_m12817(__this /* static, unused */, method) (( EqualityComparer_1_t2327 * (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1_get_Default_m12817_gshared)(__this /* static, unused */, method)
