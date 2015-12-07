#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t2190;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2181;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11706_gshared (ShimEnumerator_t2190 * __this, Dictionary_2_t2181 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11706(__this, ___host, method) (( void (*) (ShimEnumerator_t2190 *, Dictionary_2_t2181 *, const MethodInfo*))ShimEnumerator__ctor_m11706_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11707_gshared (ShimEnumerator_t2190 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11707(__this, method) (( bool (*) (ShimEnumerator_t2190 *, const MethodInfo*))ShimEnumerator_MoveNext_m11707_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t699  ShimEnumerator_get_Entry_m11708_gshared (ShimEnumerator_t2190 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11708(__this, method) (( DictionaryEntry_t699  (*) (ShimEnumerator_t2190 *, const MethodInfo*))ShimEnumerator_get_Entry_m11708_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11709_gshared (ShimEnumerator_t2190 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11709(__this, method) (( Object_t * (*) (ShimEnumerator_t2190 *, const MethodInfo*))ShimEnumerator_get_Key_m11709_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11710_gshared (ShimEnumerator_t2190 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11710(__this, method) (( Object_t * (*) (ShimEnumerator_t2190 *, const MethodInfo*))ShimEnumerator_get_Value_m11710_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11711_gshared (ShimEnumerator_t2190 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11711(__this, method) (( Object_t * (*) (ShimEnumerator_t2190 *, const MethodInfo*))ShimEnumerator_get_Current_m11711_gshared)(__this, method)
