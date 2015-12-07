#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2261;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t635;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12429_gshared (ShimEnumerator_t2261 * __this, Dictionary_2_t635 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12429(__this, ___host, method) (( void (*) (ShimEnumerator_t2261 *, Dictionary_2_t635 *, const MethodInfo*))ShimEnumerator__ctor_m12429_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12430_gshared (ShimEnumerator_t2261 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12430(__this, method) (( bool (*) (ShimEnumerator_t2261 *, const MethodInfo*))ShimEnumerator_MoveNext_m12430_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t699  ShimEnumerator_get_Entry_m12431_gshared (ShimEnumerator_t2261 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12431(__this, method) (( DictionaryEntry_t699  (*) (ShimEnumerator_t2261 *, const MethodInfo*))ShimEnumerator_get_Entry_m12431_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12432_gshared (ShimEnumerator_t2261 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12432(__this, method) (( Object_t * (*) (ShimEnumerator_t2261 *, const MethodInfo*))ShimEnumerator_get_Key_m12432_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12433_gshared (ShimEnumerator_t2261 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12433(__this, method) (( Object_t * (*) (ShimEnumerator_t2261 *, const MethodInfo*))ShimEnumerator_get_Value_m12433_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12434_gshared (ShimEnumerator_t2261 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12434(__this, method) (( Object_t * (*) (ShimEnumerator_t2261 *, const MethodInfo*))ShimEnumerator_get_Current_m12434_gshared)(__this, method)
