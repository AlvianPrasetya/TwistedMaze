#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t2324;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12797_gshared (DefaultComparer_t2324 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12797(__this, method) (( void (*) (DefaultComparer_t2324 *, const MethodInfo*))DefaultComparer__ctor_m12797_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12798_gshared (DefaultComparer_t2324 * __this, DateTimeOffset_t409  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12798(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2324 *, DateTimeOffset_t409 , const MethodInfo*))DefaultComparer_GetHashCode_m12798_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12799_gshared (DefaultComparer_t2324 * __this, DateTimeOffset_t409  ___x, DateTimeOffset_t409  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12799(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2324 *, DateTimeOffset_t409 , DateTimeOffset_t409 , const MethodInfo*))DefaultComparer_Equals_m12799_gshared)(__this, ___x, ___y, method)
