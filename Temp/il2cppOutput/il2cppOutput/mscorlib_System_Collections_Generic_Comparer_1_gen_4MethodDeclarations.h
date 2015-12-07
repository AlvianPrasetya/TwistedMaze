#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1<System.TimeSpan>
struct Comparer_1_t2329;
// System.Object
struct Object_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
extern "C" void Comparer_1__ctor_m12822_gshared (Comparer_1_t2329 * __this, const MethodInfo* method);
#define Comparer_1__ctor_m12822(__this, method) (( void (*) (Comparer_1_t2329 *, const MethodInfo*))Comparer_1__ctor_m12822_gshared)(__this, method)
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
extern "C" void Comparer_1__cctor_m12823_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1__cctor_m12823(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1__cctor_m12823_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m12824_gshared (Comparer_1_t2329 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define Comparer_1_System_Collections_IComparer_Compare_m12824(__this, ___x, ___y, method) (( int32_t (*) (Comparer_1_t2329 *, Object_t *, Object_t *, const MethodInfo*))Comparer_1_System_Collections_IComparer_Compare_m12824_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
extern "C" Comparer_1_t2329 * Comparer_1_get_Default_m12825_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Comparer_1_get_Default_m12825(__this /* static, unused */, method) (( Comparer_1_t2329 * (*) (Object_t * /* static, unused */, const MethodInfo*))Comparer_1_get_Default_m12825_gshared)(__this /* static, unused */, method)
