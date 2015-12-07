#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t570;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t344;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t2448;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t2244;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t2245;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1972;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t2449;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2450;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t2451;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_19MethodDeclarations.h"
#define Dictionary_2__ctor_m12052(__this, method) (( void (*) (Dictionary_2_t570 *, const MethodInfo*))Dictionary_2__ctor_m12053_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m2668(__this, ___comparer, method) (( void (*) (Dictionary_2_t570 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12054_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m12055(__this, ___dictionary, method) (( void (*) (Dictionary_2_t570 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12056_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Int32)
#define Dictionary_2__ctor_m12057(__this, ___capacity, method) (( void (*) (Dictionary_2_t570 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12058_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m12059(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t570 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12060_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m12061(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t570 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2__ctor_m12062_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12063(__this, method) (( Object_t* (*) (Dictionary_2_t570 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12064_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12065(__this, method) (( Object_t* (*) (Dictionary_2_t570 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12066_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12067(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t570 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12068_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12069(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t570 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12070_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m12071(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t570 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12072_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m12073(__this, ___key, method) (( bool (*) (Dictionary_2_t570 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12074_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m12075(__this, ___key, method) (( void (*) (Dictionary_2_t570 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12076_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12077(__this, method) (( Object_t * (*) (Dictionary_2_t570 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12078_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12079(__this, method) (( bool (*) (Dictionary_2_t570 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12080_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12081(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t570 *, KeyValuePair_2_t2243 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12082_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12083(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t570 *, KeyValuePair_2_t2243 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12084_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12085(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t570 *, KeyValuePair_2U5BU5D_t2450*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12086_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12087(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t570 *, KeyValuePair_2_t2243 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12088_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12089(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t570 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12090_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12091(__this, method) (( Object_t * (*) (Dictionary_2_t570 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12092_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12093(__this, method) (( Object_t* (*) (Dictionary_2_t570 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12094_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12095(__this, method) (( Object_t * (*) (Dictionary_2_t570 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12096_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Count()
#define Dictionary_2_get_Count_m12097(__this, method) (( int32_t (*) (Dictionary_2_t570 *, const MethodInfo*))Dictionary_2_get_Count_m12098_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
#define Dictionary_2_get_Item_m12099(__this, ___key, method) (( bool (*) (Dictionary_2_t570 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m12100_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m12101(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t570 *, String_t*, bool, const MethodInfo*))Dictionary_2_set_Item_m12102_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m12103(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t570 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12104_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m12105(__this, ___size, method) (( void (*) (Dictionary_2_t570 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12106_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m12107(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t570 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12108_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m12109(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2243  (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_make_pair_m12110_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m12111(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_pick_key_m12112_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m12113(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_pick_value_m12114_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m12115(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t570 *, KeyValuePair_2U5BU5D_t2450*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12116_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Resize()
#define Dictionary_2_Resize_m12117(__this, method) (( void (*) (Dictionary_2_t570 *, const MethodInfo*))Dictionary_2_Resize_m12118_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
#define Dictionary_2_Add_m12119(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t570 *, String_t*, bool, const MethodInfo*))Dictionary_2_Add_m12120_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Clear()
#define Dictionary_2_Clear_m12121(__this, method) (( void (*) (Dictionary_2_t570 *, const MethodInfo*))Dictionary_2_Clear_m12122_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m12123(__this, ___key, method) (( bool (*) (Dictionary_2_t570 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m12124_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m12125(__this, ___value, method) (( bool (*) (Dictionary_2_t570 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m12126_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m12127(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t570 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2_GetObjectData_m12128_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m12129(__this, ___sender, method) (( void (*) (Dictionary_2_t570 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12130_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Remove(TKey)
#define Dictionary_2_Remove_m12131(__this, ___key, method) (( bool (*) (Dictionary_2_t570 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m12132_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m12133(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t570 *, String_t*, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m12134_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Keys()
#define Dictionary_2_get_Keys_m12135(__this, method) (( KeyCollection_t2244 * (*) (Dictionary_2_t570 *, const MethodInfo*))Dictionary_2_get_Keys_m12136_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Values()
#define Dictionary_2_get_Values_m12137(__this, method) (( ValueCollection_t2245 * (*) (Dictionary_2_t570 *, const MethodInfo*))Dictionary_2_get_Values_m12138_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m12139(__this, ___key, method) (( String_t* (*) (Dictionary_2_t570 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12140_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m12141(__this, ___value, method) (( bool (*) (Dictionary_2_t570 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12142_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m12143(__this, ___pair, method) (( bool (*) (Dictionary_2_t570 *, KeyValuePair_2_t2243 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12144_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m12145(__this, method) (( Enumerator_t2246  (*) (Dictionary_2_t570 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12146_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m12147(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t699  (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12148_gshared)(__this /* static, unused */, ___key, ___value, method)
