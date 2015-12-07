#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2115;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2103;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10683_gshared (ShimEnumerator_t2115 * __this, Dictionary_2_t2103 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10683(__this, ___host, method) (( void (*) (ShimEnumerator_t2115 *, Dictionary_2_t2103 *, const MethodInfo*))ShimEnumerator__ctor_m10683_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10684_gshared (ShimEnumerator_t2115 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10684(__this, method) (( bool (*) (ShimEnumerator_t2115 *, const MethodInfo*))ShimEnumerator_MoveNext_m10684_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t699  ShimEnumerator_get_Entry_m10685_gshared (ShimEnumerator_t2115 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10685(__this, method) (( DictionaryEntry_t699  (*) (ShimEnumerator_t2115 *, const MethodInfo*))ShimEnumerator_get_Entry_m10685_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10686_gshared (ShimEnumerator_t2115 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10686(__this, method) (( Object_t * (*) (ShimEnumerator_t2115 *, const MethodInfo*))ShimEnumerator_get_Key_m10686_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10687_gshared (ShimEnumerator_t2115 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10687(__this, method) (( Object_t * (*) (ShimEnumerator_t2115 *, const MethodInfo*))ShimEnumerator_get_Value_m10687_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10688_gshared (ShimEnumerator_t2115 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10688(__this, method) (( Object_t * (*) (ShimEnumerator_t2115 *, const MethodInfo*))ShimEnumerator_get_Current_m10688_gshared)(__this, method)
