#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t131;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t344;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2335;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t2070;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t2071;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1972;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t2357;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2358;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t2359;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
#define Dictionary_2__ctor_m9873(__this, method) (( void (*) (Dictionary_2_t131 *, const MethodInfo*))Dictionary_2__ctor_m9874_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9875(__this, ___comparer, method) (( void (*) (Dictionary_2_t131 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9876_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m9877(__this, ___dictionary, method) (( void (*) (Dictionary_2_t131 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9878_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m2681(__this, ___capacity, method) (( void (*) (Dictionary_2_t131 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9879_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9880(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t131 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9881_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m9882(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t131 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2__ctor_m9883_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9884(__this, method) (( Object_t* (*) (Dictionary_2_t131 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9885_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9886(__this, method) (( Object_t* (*) (Dictionary_2_t131 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9887_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9888(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t131 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9889_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9890(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t131 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9891_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m9892(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t131 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9893_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m9894(__this, ___key, method) (( bool (*) (Dictionary_2_t131 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9895_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m9896(__this, ___key, method) (( void (*) (Dictionary_2_t131 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9897_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9898(__this, method) (( Object_t * (*) (Dictionary_2_t131 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9899_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9900(__this, method) (( bool (*) (Dictionary_2_t131 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9901_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9902(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t131 *, KeyValuePair_2_t2069 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9903_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9904(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t131 *, KeyValuePair_2_t2069 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9905_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9906(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t131 *, KeyValuePair_2U5BU5D_t2358*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9907_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9908(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t131 *, KeyValuePair_2_t2069 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9909_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9910(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t131 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9911_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9912(__this, method) (( Object_t * (*) (Dictionary_2_t131 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9913_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9914(__this, method) (( Object_t* (*) (Dictionary_2_t131 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9915_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Int32>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9916(__this, method) (( Object_t * (*) (Dictionary_2_t131 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9917_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Count()
#define Dictionary_2_get_Count_m9918(__this, method) (( int32_t (*) (Dictionary_2_t131 *, const MethodInfo*))Dictionary_2_get_Count_m9919_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(TKey)
#define Dictionary_2_get_Item_m9920(__this, ___key, method) (( int32_t (*) (Dictionary_2_t131 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9921_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m9922(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t131 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9923_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m9924(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t131 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9925_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m9926(__this, ___size, method) (( void (*) (Dictionary_2_t131 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9927_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m9928(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t131 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9929_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m9930(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2069  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9931_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m9932(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_key_m9933_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m9934(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9935_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m9936(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t131 *, KeyValuePair_2U5BU5D_t2358*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9937_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Resize()
#define Dictionary_2_Resize_m9938(__this, method) (( void (*) (Dictionary_2_t131 *, const MethodInfo*))Dictionary_2_Resize_m9939_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue)
#define Dictionary_2_Add_m9940(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t131 *, String_t*, int32_t, const MethodInfo*))Dictionary_2_Add_m9941_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Clear()
#define Dictionary_2_Clear_m9942(__this, method) (( void (*) (Dictionary_2_t131 *, const MethodInfo*))Dictionary_2_Clear_m9943_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m9944(__this, ___key, method) (( bool (*) (Dictionary_2_t131 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9945_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m9946(__this, ___value, method) (( bool (*) (Dictionary_2_t131 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9947_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m9948(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t131 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2_GetObjectData_m9949_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m9950(__this, ___sender, method) (( void (*) (Dictionary_2_t131 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9951_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Remove(TKey)
#define Dictionary_2_Remove_m9952(__this, ___key, method) (( bool (*) (Dictionary_2_t131 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9953_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m9954(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t131 *, String_t*, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9955_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Keys()
#define Dictionary_2_get_Keys_m9956(__this, method) (( KeyCollection_t2070 * (*) (Dictionary_2_t131 *, const MethodInfo*))Dictionary_2_get_Keys_m9957_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Values()
#define Dictionary_2_get_Values_m9958(__this, method) (( ValueCollection_t2071 * (*) (Dictionary_2_t131 *, const MethodInfo*))Dictionary_2_get_Values_m9959_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m9960(__this, ___key, method) (( String_t* (*) (Dictionary_2_t131 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9961_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m9962(__this, ___value, method) (( int32_t (*) (Dictionary_2_t131 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9963_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m9964(__this, ___pair, method) (( bool (*) (Dictionary_2_t131 *, KeyValuePair_2_t2069 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9965_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Int32>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m9966(__this, method) (( Enumerator_t2072  (*) (Dictionary_2_t131 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9967_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Int32>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m9968(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t699  (*) (Object_t * /* static, unused */, String_t*, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9969_gshared)(__this /* static, unused */, ___key, ___value, method)
