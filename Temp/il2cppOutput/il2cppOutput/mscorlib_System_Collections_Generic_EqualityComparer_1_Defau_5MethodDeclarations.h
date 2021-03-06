﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>
struct DefaultComparer_t2148;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::.ctor()
extern "C" void DefaultComparer__ctor_m11017_gshared (DefaultComparer_t2148 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m11017(__this, method) (( void (*) (DefaultComparer_t2148 *, const MethodInfo*))DefaultComparer__ctor_m11017_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m11018_gshared (DefaultComparer_t2148 * __this, uint64_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m11018(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2148 *, uint64_t, const MethodInfo*))DefaultComparer_GetHashCode_m11018_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.UInt64>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m11019_gshared (DefaultComparer_t2148 * __this, uint64_t ___x, uint64_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m11019(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2148 *, uint64_t, uint64_t, const MethodInfo*))DefaultComparer_Equals_m11019_gshared)(__this, ___x, ___y, method)
