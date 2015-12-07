#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t2068;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2057;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10045_gshared (ShimEnumerator_t2068 * __this, Dictionary_2_t2057 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10045(__this, ___host, method) (( void (*) (ShimEnumerator_t2068 *, Dictionary_2_t2057 *, const MethodInfo*))ShimEnumerator__ctor_m10045_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10046_gshared (ShimEnumerator_t2068 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10046(__this, method) (( bool (*) (ShimEnumerator_t2068 *, const MethodInfo*))ShimEnumerator_MoveNext_m10046_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t699  ShimEnumerator_get_Entry_m10047_gshared (ShimEnumerator_t2068 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10047(__this, method) (( DictionaryEntry_t699  (*) (ShimEnumerator_t2068 *, const MethodInfo*))ShimEnumerator_get_Entry_m10047_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10048_gshared (ShimEnumerator_t2068 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10048(__this, method) (( Object_t * (*) (ShimEnumerator_t2068 *, const MethodInfo*))ShimEnumerator_get_Key_m10048_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10049_gshared (ShimEnumerator_t2068 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10049(__this, method) (( Object_t * (*) (ShimEnumerator_t2068 *, const MethodInfo*))ShimEnumerator_get_Value_m10049_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10050_gshared (ShimEnumerator_t2068 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10050(__this, method) (( Object_t * (*) (ShimEnumerator_t2068 *, const MethodInfo*))ShimEnumerator_get_Current_m10050_gshared)(__this, method)
