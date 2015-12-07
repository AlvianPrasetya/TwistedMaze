#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2051;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2041;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9815_gshared (ShimEnumerator_t2051 * __this, Dictionary_2_t2041 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9815(__this, ___host, method) (( void (*) (ShimEnumerator_t2051 *, Dictionary_2_t2041 *, const MethodInfo*))ShimEnumerator__ctor_m9815_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9816_gshared (ShimEnumerator_t2051 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9816(__this, method) (( bool (*) (ShimEnumerator_t2051 *, const MethodInfo*))ShimEnumerator_MoveNext_m9816_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t699  ShimEnumerator_get_Entry_m9817_gshared (ShimEnumerator_t2051 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9817(__this, method) (( DictionaryEntry_t699  (*) (ShimEnumerator_t2051 *, const MethodInfo*))ShimEnumerator_get_Entry_m9817_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9818_gshared (ShimEnumerator_t2051 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9818(__this, method) (( Object_t * (*) (ShimEnumerator_t2051 *, const MethodInfo*))ShimEnumerator_get_Key_m9818_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9819_gshared (ShimEnumerator_t2051 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9819(__this, method) (( Object_t * (*) (ShimEnumerator_t2051 *, const MethodInfo*))ShimEnumerator_get_Value_m9819_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9820_gshared (ShimEnumerator_t2051 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9820(__this, method) (( Object_t * (*) (ShimEnumerator_t2051 *, const MethodInfo*))ShimEnumerator_get_Current_m9820_gshared)(__this, method)
