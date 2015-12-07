#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2318;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m12771_gshared (DefaultComparer_t2318 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12771(__this, method) (( void (*) (DefaultComparer_t2318 *, const MethodInfo*))DefaultComparer__ctor_m12771_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12772_gshared (DefaultComparer_t2318 * __this, DateTime_t104  ___x, DateTime_t104  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12772(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2318 *, DateTime_t104 , DateTime_t104 , const MethodInfo*))DefaultComparer_Compare_m12772_gshared)(__this, ___x, ___y, method)
