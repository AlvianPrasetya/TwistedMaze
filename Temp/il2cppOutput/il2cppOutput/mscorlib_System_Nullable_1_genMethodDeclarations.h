#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1486;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m8347_gshared (Nullable_1_t1486 * __this, TimeSpan_t603  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m8347(__this, ___value, method) (( void (*) (Nullable_1_t1486 *, TimeSpan_t603 , const MethodInfo*))Nullable_1__ctor_m8347_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m8348_gshared (Nullable_1_t1486 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m8348(__this, method) (( bool (*) (Nullable_1_t1486 *, const MethodInfo*))Nullable_1_get_HasValue_m8348_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t603  Nullable_1_get_Value_m8349_gshared (Nullable_1_t1486 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m8349(__this, method) (( TimeSpan_t603  (*) (Nullable_1_t1486 *, const MethodInfo*))Nullable_1_get_Value_m8349_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m12800_gshared (Nullable_1_t1486 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m12800(__this, ___other, method) (( bool (*) (Nullable_1_t1486 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m12800_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m12801_gshared (Nullable_1_t1486 * __this, Nullable_1_t1486  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m12801(__this, ___other, method) (( bool (*) (Nullable_1_t1486 *, Nullable_1_t1486 , const MethodInfo*))Nullable_1_Equals_m12801_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m12802_gshared (Nullable_1_t1486 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m12802(__this, method) (( int32_t (*) (Nullable_1_t1486 *, const MethodInfo*))Nullable_1_GetHashCode_m12802_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m12803_gshared (Nullable_1_t1486 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m12803(__this, method) (( String_t* (*) (Nullable_1_t1486 *, const MethodInfo*))Nullable_1_ToString_m12803_gshared)(__this, method)
