#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t2145;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2133;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11003_gshared (ShimEnumerator_t2145 * __this, Dictionary_2_t2133 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11003(__this, ___host, method) (( void (*) (ShimEnumerator_t2145 *, Dictionary_2_t2133 *, const MethodInfo*))ShimEnumerator__ctor_m11003_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11004_gshared (ShimEnumerator_t2145 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11004(__this, method) (( bool (*) (ShimEnumerator_t2145 *, const MethodInfo*))ShimEnumerator_MoveNext_m11004_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t699  ShimEnumerator_get_Entry_m11005_gshared (ShimEnumerator_t2145 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11005(__this, method) (( DictionaryEntry_t699  (*) (ShimEnumerator_t2145 *, const MethodInfo*))ShimEnumerator_get_Entry_m11005_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11006_gshared (ShimEnumerator_t2145 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11006(__this, method) (( Object_t * (*) (ShimEnumerator_t2145 *, const MethodInfo*))ShimEnumerator_get_Key_m11006_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11007_gshared (ShimEnumerator_t2145 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11007(__this, method) (( Object_t * (*) (ShimEnumerator_t2145 *, const MethodInfo*))ShimEnumerator_get_Value_m11007_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11008_gshared (ShimEnumerator_t2145 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11008(__this, method) (( Object_t * (*) (ShimEnumerator_t2145 *, const MethodInfo*))ShimEnumerator_get_Current_m11008_gshared)(__this, method)
