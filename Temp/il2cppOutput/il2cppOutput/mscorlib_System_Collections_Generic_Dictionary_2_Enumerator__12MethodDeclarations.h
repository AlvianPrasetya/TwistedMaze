#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t2184;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2181;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11660_gshared (Enumerator_t2184 * __this, Dictionary_2_t2181 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11660(__this, ___dictionary, method) (( void (*) (Enumerator_t2184 *, Dictionary_2_t2181 *, const MethodInfo*))Enumerator__ctor_m11660_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11661_gshared (Enumerator_t2184 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11661(__this, method) (( Object_t * (*) (Enumerator_t2184 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11661_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t699  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11662_gshared (Enumerator_t2184 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11662(__this, method) (( DictionaryEntry_t699  (*) (Enumerator_t2184 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11662_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11663_gshared (Enumerator_t2184 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11663(__this, method) (( Object_t * (*) (Enumerator_t2184 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11663_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11664_gshared (Enumerator_t2184 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11664(__this, method) (( Object_t * (*) (Enumerator_t2184 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11664_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11665_gshared (Enumerator_t2184 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11665(__this, method) (( bool (*) (Enumerator_t2184 *, const MethodInfo*))Enumerator_MoveNext_m11665_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2155  Enumerator_get_Current_m11666_gshared (Enumerator_t2184 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11666(__this, method) (( KeyValuePair_2_t2155  (*) (Enumerator_t2184 *, const MethodInfo*))Enumerator_get_Current_m11666_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11667_gshared (Enumerator_t2184 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11667(__this, method) (( Object_t * (*) (Enumerator_t2184 *, const MethodInfo*))Enumerator_get_CurrentKey_m11667_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t2042  Enumerator_get_CurrentValue_m11668_gshared (Enumerator_t2184 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11668(__this, method) (( KeyValuePair_2_t2042  (*) (Enumerator_t2184 *, const MethodInfo*))Enumerator_get_CurrentValue_m11668_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m11669_gshared (Enumerator_t2184 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11669(__this, method) (( void (*) (Enumerator_t2184 *, const MethodInfo*))Enumerator_VerifyState_m11669_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11670_gshared (Enumerator_t2184 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11670(__this, method) (( void (*) (Enumerator_t2184 *, const MethodInfo*))Enumerator_VerifyCurrent_m11670_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m11671_gshared (Enumerator_t2184 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11671(__this, method) (( void (*) (Enumerator_t2184 *, const MethodInfo*))Enumerator_Dispose_m11671_gshared)(__this, method)
