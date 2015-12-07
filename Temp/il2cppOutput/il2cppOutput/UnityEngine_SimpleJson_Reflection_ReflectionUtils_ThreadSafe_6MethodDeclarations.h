#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t2159;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t345;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2157;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2179;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2353;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m11207_gshared (ThreadSafeDictionary_2_t2159 * __this, ThreadSafeDictionaryValueFactory_2_t2157 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m11207(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2159 *, ThreadSafeDictionaryValueFactory_2_t2157 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m11207_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m11209_gshared (ThreadSafeDictionary_2_t2159 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m11209(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2159 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m11209_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m11211_gshared (ThreadSafeDictionary_2_t2159 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m11211(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2159 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m11211_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m11213_gshared (ThreadSafeDictionary_2_t2159 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m11213(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2159 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m11213_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m11215_gshared (ThreadSafeDictionary_2_t2159 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m11215(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2159 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m11215_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m11217_gshared (ThreadSafeDictionary_2_t2159 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m11217(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2159 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m11217_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m11219_gshared (ThreadSafeDictionary_2_t2159 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m11219(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t2159 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m11219_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m11221_gshared (ThreadSafeDictionary_2_t2159 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m11221(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2159 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m11221_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m11223_gshared (ThreadSafeDictionary_2_t2159 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m11223(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2159 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m11223_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m11225_gshared (ThreadSafeDictionary_2_t2159 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m11225(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2159 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m11225_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m11227_gshared (ThreadSafeDictionary_2_t2159 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m11227(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2159 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m11227_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m11229_gshared (ThreadSafeDictionary_2_t2159 * __this, KeyValuePair_2_t2042  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m11229(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2159 *, KeyValuePair_2_t2042 , const MethodInfo*))ThreadSafeDictionary_2_Add_m11229_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m11231_gshared (ThreadSafeDictionary_2_t2159 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m11231(__this, method) (( void (*) (ThreadSafeDictionary_2_t2159 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m11231_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m11233_gshared (ThreadSafeDictionary_2_t2159 * __this, KeyValuePair_2_t2042  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m11233(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2159 *, KeyValuePair_2_t2042 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m11233_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m11235_gshared (ThreadSafeDictionary_2_t2159 * __this, KeyValuePair_2U5BU5D_t2179* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m11235(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2159 *, KeyValuePair_2U5BU5D_t2179*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m11235_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m11237_gshared (ThreadSafeDictionary_2_t2159 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m11237(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2159 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m11237_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m11239_gshared (ThreadSafeDictionary_2_t2159 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m11239(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2159 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m11239_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m11241_gshared (ThreadSafeDictionary_2_t2159 * __this, KeyValuePair_2_t2042  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m11241(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2159 *, KeyValuePair_2_t2042 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m11241_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m11243_gshared (ThreadSafeDictionary_2_t2159 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m11243(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2159 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m11243_gshared)(__this, method)
