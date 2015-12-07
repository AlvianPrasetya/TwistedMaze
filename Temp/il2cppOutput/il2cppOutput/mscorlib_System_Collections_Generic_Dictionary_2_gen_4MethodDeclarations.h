#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t239;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t344;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t345;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t385;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t386;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1972;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t339;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t346;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t348;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
#define Dictionary_2__ctor_m1501(__this, method) (( void (*) (Dictionary_2_t239 *, const MethodInfo*))Dictionary_2__ctor_m9649_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m11097(__this, ___comparer, method) (( void (*) (Dictionary_2_t239 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9650_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m11098(__this, ___dictionary, method) (( void (*) (Dictionary_2_t239 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9652_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Int32)
#define Dictionary_2__ctor_m11099(__this, ___capacity, method) (( void (*) (Dictionary_2_t239 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9654_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m11100(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t239 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9656_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m11101(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t239 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2__ctor_m9658_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11102(__this, method) (( Object_t* (*) (Dictionary_2_t239 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9660_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11103(__this, method) (( Object_t* (*) (Dictionary_2_t239 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9662_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11104(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t239 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9664_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11105(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t239 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9666_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m11106(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t239 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9668_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m11107(__this, ___key, method) (( bool (*) (Dictionary_2_t239 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9670_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m11108(__this, ___key, method) (( void (*) (Dictionary_2_t239 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9672_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11109(__this, method) (( Object_t * (*) (Dictionary_2_t239 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9674_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11110(__this, method) (( bool (*) (Dictionary_2_t239 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9676_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11111(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t239 *, KeyValuePair_2_t347 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9678_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11112(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t239 *, KeyValuePair_2_t347 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9680_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11113(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t239 *, KeyValuePair_2U5BU5D_t346*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9682_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11114(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t239 *, KeyValuePair_2_t347 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9684_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11115(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t239 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9686_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11116(__this, method) (( Object_t * (*) (Dictionary_2_t239 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9688_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11117(__this, method) (( Object_t* (*) (Dictionary_2_t239 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9690_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11118(__this, method) (( Object_t * (*) (Dictionary_2_t239 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9692_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
#define Dictionary_2_get_Count_m11119(__this, method) (( int32_t (*) (Dictionary_2_t239 *, const MethodInfo*))Dictionary_2_get_Count_m9694_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
#define Dictionary_2_get_Item_m11120(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t239 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9696_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m11121(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t239 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9698_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m11122(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t239 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9700_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m11123(__this, ___size, method) (( void (*) (Dictionary_2_t239 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9702_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m11124(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t239 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9704_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m11125(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t347  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9706_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m11126(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9708_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m11127(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9710_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m11128(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t239 *, KeyValuePair_2U5BU5D_t346*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9712_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Resize()
#define Dictionary_2_Resize_m11129(__this, method) (( void (*) (Dictionary_2_t239 *, const MethodInfo*))Dictionary_2_Resize_m9714_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
#define Dictionary_2_Add_m11130(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t239 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_Add_m9716_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
#define Dictionary_2_Clear_m11131(__this, method) (( void (*) (Dictionary_2_t239 *, const MethodInfo*))Dictionary_2_Clear_m9718_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m11132(__this, ___key, method) (( bool (*) (Dictionary_2_t239 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9720_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m11133(__this, ___value, method) (( bool (*) (Dictionary_2_t239 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9722_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m11134(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t239 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2_GetObjectData_m9724_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m11135(__this, ___sender, method) (( void (*) (Dictionary_2_t239 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9726_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(TKey)
#define Dictionary_2_Remove_m11136(__this, ___key, method) (( bool (*) (Dictionary_2_t239 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9728_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m11137(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t239 *, String_t*, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9730_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
#define Dictionary_2_get_Keys_m1503(__this, method) (( KeyCollection_t385 * (*) (Dictionary_2_t239 *, const MethodInfo*))Dictionary_2_get_Keys_m9732_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
#define Dictionary_2_get_Values_m1504(__this, method) (( ValueCollection_t386 * (*) (Dictionary_2_t239 *, const MethodInfo*))Dictionary_2_get_Values_m9733_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m11138(__this, ___key, method) (( String_t* (*) (Dictionary_2_t239 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9735_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m11139(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t239 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9737_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m11140(__this, ___pair, method) (( bool (*) (Dictionary_2_t239 *, KeyValuePair_2_t347 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9739_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m1502(__this, method) (( Enumerator_t384  (*) (Dictionary_2_t239 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9741_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Object>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m11141(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t699  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9743_gshared)(__this /* static, unused */, ___key, ___value, method)
