#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t1512;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m8352_gshared (GenericComparer_1_t1512 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m8352(__this, method) (( void (*) (GenericComparer_1_t1512 *, const MethodInfo*))GenericComparer_1__ctor_m8352_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12821_gshared (GenericComparer_1_t1512 * __this, TimeSpan_t603  ___x, TimeSpan_t603  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m12821(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1512 *, TimeSpan_t603 , TimeSpan_t603 , const MethodInfo*))GenericComparer_1_Compare_m12821_gshared)(__this, ___x, ___y, method)
