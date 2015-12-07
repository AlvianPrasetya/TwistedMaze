#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t2256;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t635;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12387_gshared (Enumerator_t2256 * __this, Dictionary_2_t635 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12387(__this, ___dictionary, method) (( void (*) (Enumerator_t2256 *, Dictionary_2_t635 *, const MethodInfo*))Enumerator__ctor_m12387_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12388_gshared (Enumerator_t2256 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12388(__this, method) (( Object_t * (*) (Enumerator_t2256 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12388_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t699  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12389_gshared (Enumerator_t2256 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12389(__this, method) (( DictionaryEntry_t699  (*) (Enumerator_t2256 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12389_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12390_gshared (Enumerator_t2256 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12390(__this, method) (( Object_t * (*) (Enumerator_t2256 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12390_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12391_gshared (Enumerator_t2256 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12391(__this, method) (( Object_t * (*) (Enumerator_t2256 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12391_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12392_gshared (Enumerator_t2256 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12392(__this, method) (( bool (*) (Enumerator_t2256 *, const MethodInfo*))Enumerator_MoveNext_m12392_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2252  Enumerator_get_Current_m12393_gshared (Enumerator_t2256 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12393(__this, method) (( KeyValuePair_2_t2252  (*) (Enumerator_t2256 *, const MethodInfo*))Enumerator_get_Current_m12393_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12394_gshared (Enumerator_t2256 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12394(__this, method) (( int32_t (*) (Enumerator_t2256 *, const MethodInfo*))Enumerator_get_CurrentKey_m12394_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12395_gshared (Enumerator_t2256 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12395(__this, method) (( int32_t (*) (Enumerator_t2256 *, const MethodInfo*))Enumerator_get_CurrentValue_m12395_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m12396_gshared (Enumerator_t2256 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12396(__this, method) (( void (*) (Enumerator_t2256 *, const MethodInfo*))Enumerator_VerifyState_m12396_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12397_gshared (Enumerator_t2256 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12397(__this, method) (( void (*) (Enumerator_t2256 *, const MethodInfo*))Enumerator_VerifyCurrent_m12397_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12398_gshared (Enumerator_t2256 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12398(__this, method) (( void (*) (Enumerator_t2256 *, const MethodInfo*))Enumerator_Dispose_m12398_gshared)(__this, method)
