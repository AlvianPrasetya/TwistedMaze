#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionary_2_t401;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t2402;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ICollection_1_t2409;
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
struct IDictionary_2_t352;
// System.Type
struct Type_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
struct ThreadSafeDictionaryValueFactory_2_t400;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>[]
struct KeyValuePair_2U5BU5D_t2410;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>>
struct IEnumerator_1_t2411;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_6MethodDeclarations.h"
#define ThreadSafeDictionary_2__ctor_m1531(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t401 *, ThreadSafeDictionaryValueFactory_2_t400 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m11207_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::System.Collections.IEnumerable.GetEnumerator()
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m11302(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t401 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m11209_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Get(TKey)
#define ThreadSafeDictionary_2_Get_m11303(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t401 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m11211_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::AddValue(TKey)
#define ThreadSafeDictionary_2_AddValue_m11304(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t401 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m11213_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Add(TKey,TValue)
#define ThreadSafeDictionary_2_Add_m11305(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t401 *, Type_t *, Object_t*, const MethodInfo*))ThreadSafeDictionary_2_Add_m11215_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Keys()
#define ThreadSafeDictionary_2_get_Keys_m11306(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t401 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m11217_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Remove(TKey)
#define ThreadSafeDictionary_2_Remove_m11307(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t401 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m11219_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::TryGetValue(TKey,TValue&)
#define ThreadSafeDictionary_2_TryGetValue_m11308(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t401 *, Type_t *, Object_t**, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m11221_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Values()
#define ThreadSafeDictionary_2_get_Values_m11309(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t401 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m11223_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(TKey)
#define ThreadSafeDictionary_2_get_Item_m11310(__this, ___key, method) (( Object_t* (*) (ThreadSafeDictionary_2_t401 *, Type_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m11225_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::set_Item(TKey,TValue)
#define ThreadSafeDictionary_2_set_Item_m11311(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t401 *, Type_t *, Object_t*, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m11227_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Add_m11312(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t401 *, KeyValuePair_2_t2167 , const MethodInfo*))ThreadSafeDictionary_2_Add_m11229_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Clear()
#define ThreadSafeDictionary_2_Clear_m11313(__this, method) (( void (*) (ThreadSafeDictionary_2_t401 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m11231_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Contains_m11314(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t401 *, KeyValuePair_2_t2167 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m11233_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define ThreadSafeDictionary_2_CopyTo_m11315(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t401 *, KeyValuePair_2U5BU5D_t2410*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m11235_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Count()
#define ThreadSafeDictionary_2_get_Count_m11316(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t401 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m11237_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_IsReadOnly()
#define ThreadSafeDictionary_2_get_IsReadOnly_m11317(__this, method) (( bool (*) (ThreadSafeDictionary_2_t401 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m11239_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define ThreadSafeDictionary_2_Remove_m11318(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t401 *, KeyValuePair_2_t2167 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m11241_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator()
#define ThreadSafeDictionary_2_GetEnumerator_m11319(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t401 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m11243_gshared)(__this, method)
