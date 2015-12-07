#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t2233;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2228;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12178_gshared (Enumerator_t2233 * __this, Dictionary_2_t2228 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12178(__this, ___dictionary, method) (( void (*) (Enumerator_t2233 *, Dictionary_2_t2228 *, const MethodInfo*))Enumerator__ctor_m12178_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12179_gshared (Enumerator_t2233 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12179(__this, method) (( Object_t * (*) (Enumerator_t2233 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12179_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t699  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12180_gshared (Enumerator_t2233 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12180(__this, method) (( DictionaryEntry_t699  (*) (Enumerator_t2233 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12180_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12181_gshared (Enumerator_t2233 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12181(__this, method) (( Object_t * (*) (Enumerator_t2233 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12181_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12182_gshared (Enumerator_t2233 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12182(__this, method) (( Object_t * (*) (Enumerator_t2233 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12182_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12183_gshared (Enumerator_t2233 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12183(__this, method) (( bool (*) (Enumerator_t2233 *, const MethodInfo*))Enumerator_MoveNext_m12183_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t2229  Enumerator_get_Current_m12184_gshared (Enumerator_t2233 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12184(__this, method) (( KeyValuePair_2_t2229  (*) (Enumerator_t2233 *, const MethodInfo*))Enumerator_get_Current_m12184_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12185_gshared (Enumerator_t2233 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12185(__this, method) (( Object_t * (*) (Enumerator_t2233 *, const MethodInfo*))Enumerator_get_CurrentKey_m12185_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m12186_gshared (Enumerator_t2233 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12186(__this, method) (( uint8_t (*) (Enumerator_t2233 *, const MethodInfo*))Enumerator_get_CurrentValue_m12186_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m12187_gshared (Enumerator_t2233 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12187(__this, method) (( void (*) (Enumerator_t2233 *, const MethodInfo*))Enumerator_VerifyState_m12187_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12188_gshared (Enumerator_t2233 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12188(__this, method) (( void (*) (Enumerator_t2233 *, const MethodInfo*))Enumerator_VerifyCurrent_m12188_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m12189_gshared (Enumerator_t2233 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12189(__this, method) (( void (*) (Enumerator_t2233 *, const MethodInfo*))Enumerator_Dispose_m12189_gshared)(__this, method)
