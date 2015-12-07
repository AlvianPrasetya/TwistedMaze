#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2028;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2014;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9543_gshared (ShimEnumerator_t2028 * __this, Dictionary_2_t2014 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9543(__this, ___host, method) (( void (*) (ShimEnumerator_t2028 *, Dictionary_2_t2014 *, const MethodInfo*))ShimEnumerator__ctor_m9543_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9544_gshared (ShimEnumerator_t2028 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9544(__this, method) (( bool (*) (ShimEnumerator_t2028 *, const MethodInfo*))ShimEnumerator_MoveNext_m9544_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t699  ShimEnumerator_get_Entry_m9545_gshared (ShimEnumerator_t2028 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9545(__this, method) (( DictionaryEntry_t699  (*) (ShimEnumerator_t2028 *, const MethodInfo*))ShimEnumerator_get_Entry_m9545_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9546_gshared (ShimEnumerator_t2028 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9546(__this, method) (( Object_t * (*) (ShimEnumerator_t2028 *, const MethodInfo*))ShimEnumerator_get_Key_m9546_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9547_gshared (ShimEnumerator_t2028 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9547(__this, method) (( Object_t * (*) (ShimEnumerator_t2028 *, const MethodInfo*))ShimEnumerator_get_Value_m9547_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9548_gshared (ShimEnumerator_t2028 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9548(__this, method) (( Object_t * (*) (ShimEnumerator_t2028 *, const MethodInfo*))ShimEnumerator_get_Current_m9548_gshared)(__this, method)
