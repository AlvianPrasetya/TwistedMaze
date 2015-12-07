#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t2239;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2228;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12224_gshared (ShimEnumerator_t2239 * __this, Dictionary_2_t2228 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12224(__this, ___host, method) (( void (*) (ShimEnumerator_t2239 *, Dictionary_2_t2228 *, const MethodInfo*))ShimEnumerator__ctor_m12224_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12225_gshared (ShimEnumerator_t2239 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12225(__this, method) (( bool (*) (ShimEnumerator_t2239 *, const MethodInfo*))ShimEnumerator_MoveNext_m12225_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t699  ShimEnumerator_get_Entry_m12226_gshared (ShimEnumerator_t2239 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12226(__this, method) (( DictionaryEntry_t699  (*) (ShimEnumerator_t2239 *, const MethodInfo*))ShimEnumerator_get_Entry_m12226_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12227_gshared (ShimEnumerator_t2239 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12227(__this, method) (( Object_t * (*) (ShimEnumerator_t2239 *, const MethodInfo*))ShimEnumerator_get_Key_m12227_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12228_gshared (ShimEnumerator_t2239 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12228(__this, method) (( Object_t * (*) (ShimEnumerator_t2239 *, const MethodInfo*))ShimEnumerator_get_Value_m12228_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12229_gshared (ShimEnumerator_t2239 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12229(__this, method) (( Object_t * (*) (ShimEnumerator_t2239 *, const MethodInfo*))ShimEnumerator_get_Current_m12229_gshared)(__this, method)
