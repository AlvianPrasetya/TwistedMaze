﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t2062;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2057;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9999_gshared (Enumerator_t2062 * __this, Dictionary_2_t2057 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9999(__this, ___dictionary, method) (( void (*) (Enumerator_t2062 *, Dictionary_2_t2057 *, const MethodInfo*))Enumerator__ctor_m9999_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10000_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10000(__this, method) (( Object_t * (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10000_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t699  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10001_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10001(__this, method) (( DictionaryEntry_t699  (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10001_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10002_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10002(__this, method) (( Object_t * (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10002_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10003_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10003(__this, method) (( Object_t * (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10003_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10004_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10004(__this, method) (( bool (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_MoveNext_m10004_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2058  Enumerator_get_Current_m10005_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10005(__this, method) (( KeyValuePair_2_t2058  (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_get_Current_m10005_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m10006_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10006(__this, method) (( Object_t * (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_get_CurrentKey_m10006_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m10007_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10007(__this, method) (( int32_t (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_get_CurrentValue_m10007_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m10008_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10008(__this, method) (( void (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_VerifyState_m10008_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10009_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10009(__this, method) (( void (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_VerifyCurrent_m10009_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m10010_gshared (Enumerator_t2062 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10010(__this, method) (( void (*) (Enumerator_t2062 *, const MethodInfo*))Enumerator_Dispose_m10010_gshared)(__this, method)
