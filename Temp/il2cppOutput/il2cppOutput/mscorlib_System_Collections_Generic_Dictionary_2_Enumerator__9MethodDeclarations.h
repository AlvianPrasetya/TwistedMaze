#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t2139;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2133;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10957_gshared (Enumerator_t2139 * __this, Dictionary_2_t2133 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10957(__this, ___dictionary, method) (( void (*) (Enumerator_t2139 *, Dictionary_2_t2133 *, const MethodInfo*))Enumerator__ctor_m10957_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10958_gshared (Enumerator_t2139 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10958(__this, method) (( Object_t * (*) (Enumerator_t2139 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10958_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t699  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10959_gshared (Enumerator_t2139 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10959(__this, method) (( DictionaryEntry_t699  (*) (Enumerator_t2139 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10959_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10960_gshared (Enumerator_t2139 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10960(__this, method) (( Object_t * (*) (Enumerator_t2139 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10960_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10961_gshared (Enumerator_t2139 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10961(__this, method) (( Object_t * (*) (Enumerator_t2139 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10961_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10962_gshared (Enumerator_t2139 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10962(__this, method) (( bool (*) (Enumerator_t2139 *, const MethodInfo*))Enumerator_MoveNext_m10962_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2134  Enumerator_get_Current_m10963_gshared (Enumerator_t2139 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10963(__this, method) (( KeyValuePair_2_t2134  (*) (Enumerator_t2139 *, const MethodInfo*))Enumerator_get_Current_m10963_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m10964_gshared (Enumerator_t2139 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10964(__this, method) (( uint64_t (*) (Enumerator_t2139 *, const MethodInfo*))Enumerator_get_CurrentKey_m10964_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m10965_gshared (Enumerator_t2139 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10965(__this, method) (( Object_t * (*) (Enumerator_t2139 *, const MethodInfo*))Enumerator_get_CurrentValue_m10965_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m10966_gshared (Enumerator_t2139 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10966(__this, method) (( void (*) (Enumerator_t2139 *, const MethodInfo*))Enumerator_VerifyState_m10966_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10967_gshared (Enumerator_t2139 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10967(__this, method) (( void (*) (Enumerator_t2139 *, const MethodInfo*))Enumerator_VerifyCurrent_m10967_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m10968_gshared (Enumerator_t2139 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10968(__this, method) (( void (*) (Enumerator_t2139 *, const MethodInfo*))Enumerator_Dispose_m10968_gshared)(__this, method)
