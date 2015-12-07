#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>
struct InternalEnumerator_1_t2135;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10923_gshared (InternalEnumerator_1_t2135 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10923(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2135 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10923_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10924_gshared (InternalEnumerator_1_t2135 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10924(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2135 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10924_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10925_gshared (InternalEnumerator_1_t2135 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10925(__this, method) (( void (*) (InternalEnumerator_1_t2135 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10925_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10926_gshared (InternalEnumerator_1_t2135 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10926(__this, method) (( bool (*) (InternalEnumerator_1_t2135 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10926_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2134  InternalEnumerator_1_get_Current_m10927_gshared (InternalEnumerator_1_t2135 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10927(__this, method) (( KeyValuePair_2_t2134  (*) (InternalEnumerator_1_t2135 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10927_gshared)(__this, method)
