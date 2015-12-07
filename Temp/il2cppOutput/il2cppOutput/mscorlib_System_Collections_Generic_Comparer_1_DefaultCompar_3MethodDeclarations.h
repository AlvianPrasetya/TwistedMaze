﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2326;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12809_gshared (DefaultComparer_t2326 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12809(__this, method) (( void (*) (DefaultComparer_t2326 *, const MethodInfo*))DefaultComparer__ctor_m12809_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12810_gshared (DefaultComparer_t2326 * __this, Guid_t410  ___x, Guid_t410  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12810(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2326 *, Guid_t410 , Guid_t410 , const MethodInfo*))DefaultComparer_Compare_m12810_gshared)(__this, ___x, ___y, method)
