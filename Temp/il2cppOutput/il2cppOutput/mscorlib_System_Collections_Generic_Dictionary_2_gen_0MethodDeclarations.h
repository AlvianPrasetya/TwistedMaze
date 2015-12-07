#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t126;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t344;
// System.Collections.Generic.ICollection`1<UnityEngine.GUIStyle>
struct ICollection_1_t2348;
// System.Object
struct Object_t;
// UnityEngine.GUIStyle
struct GUIStyle_t31;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GUIStyle>
struct KeyCollection_t2053;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GUIStyle>
struct ValueCollection_t371;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1972;
// System.Collections.Generic.IDictionary`2<System.String,UnityEngine.GUIStyle>
struct IDictionary_2_t2349;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>[]
struct KeyValuePair_2U5BU5D_t2350;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>>
struct IEnumerator_1_t2351;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.GUIStyle>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
#define Dictionary_2__ctor_m9648(__this, method) (( void (*) (Dictionary_2_t126 *, const MethodInfo*))Dictionary_2__ctor_m9649_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m1434(__this, ___comparer, method) (( void (*) (Dictionary_2_t126 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9650_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m9651(__this, ___dictionary, method) (( void (*) (Dictionary_2_t126 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9652_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Int32)
#define Dictionary_2__ctor_m9653(__this, ___capacity, method) (( void (*) (Dictionary_2_t126 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9654_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m9655(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t126 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9656_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m9657(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t126 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2__ctor_m9658_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9659(__this, method) (( Object_t* (*) (Dictionary_2_t126 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9660_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9661(__this, method) (( Object_t* (*) (Dictionary_2_t126 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9662_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9663(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t126 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9664_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9665(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t126 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9666_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m9667(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t126 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9668_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m9669(__this, ___key, method) (( bool (*) (Dictionary_2_t126 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9670_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m9671(__this, ___key, method) (( void (*) (Dictionary_2_t126 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9672_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9673(__this, method) (( Object_t * (*) (Dictionary_2_t126 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9674_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9675(__this, method) (( bool (*) (Dictionary_2_t126 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9676_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9677(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t126 *, KeyValuePair_2_t2052 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9678_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9679(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t126 *, KeyValuePair_2_t2052 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9680_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9681(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t126 *, KeyValuePair_2U5BU5D_t2350*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9682_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9683(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t126 *, KeyValuePair_2_t2052 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9684_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9685(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t126 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9686_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9687(__this, method) (( Object_t * (*) (Dictionary_2_t126 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9688_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9689(__this, method) (( Object_t* (*) (Dictionary_2_t126 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9690_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9691(__this, method) (( Object_t * (*) (Dictionary_2_t126 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9692_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Count()
#define Dictionary_2_get_Count_m9693(__this, method) (( int32_t (*) (Dictionary_2_t126 *, const MethodInfo*))Dictionary_2_get_Count_m9694_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Item(TKey)
#define Dictionary_2_get_Item_m9695(__this, ___key, method) (( GUIStyle_t31 * (*) (Dictionary_2_t126 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9696_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m9697(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t126 *, String_t*, GUIStyle_t31 *, const MethodInfo*))Dictionary_2_set_Item_m9698_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m9699(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t126 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9700_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m9701(__this, ___size, method) (( void (*) (Dictionary_2_t126 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9702_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m9703(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t126 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9704_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m9705(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2052  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t31 *, const MethodInfo*))Dictionary_2_make_pair_m9706_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m9707(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t31 *, const MethodInfo*))Dictionary_2_pick_key_m9708_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m9709(__this /* static, unused */, ___key, ___value, method) (( GUIStyle_t31 * (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t31 *, const MethodInfo*))Dictionary_2_pick_value_m9710_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m9711(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t126 *, KeyValuePair_2U5BU5D_t2350*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9712_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Resize()
#define Dictionary_2_Resize_m9713(__this, method) (( void (*) (Dictionary_2_t126 *, const MethodInfo*))Dictionary_2_Resize_m9714_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Add(TKey,TValue)
#define Dictionary_2_Add_m9715(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t126 *, String_t*, GUIStyle_t31 *, const MethodInfo*))Dictionary_2_Add_m9716_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Clear()
#define Dictionary_2_Clear_m9717(__this, method) (( void (*) (Dictionary_2_t126 *, const MethodInfo*))Dictionary_2_Clear_m9718_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m9719(__this, ___key, method) (( bool (*) (Dictionary_2_t126 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9720_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m9721(__this, ___value, method) (( bool (*) (Dictionary_2_t126 *, GUIStyle_t31 *, const MethodInfo*))Dictionary_2_ContainsValue_m9722_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m9723(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t126 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2_GetObjectData_m9724_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m9725(__this, ___sender, method) (( void (*) (Dictionary_2_t126 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9726_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::Remove(TKey)
#define Dictionary_2_Remove_m9727(__this, ___key, method) (( bool (*) (Dictionary_2_t126 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9728_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m9729(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t126 *, String_t*, GUIStyle_t31 **, const MethodInfo*))Dictionary_2_TryGetValue_m9730_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Keys()
#define Dictionary_2_get_Keys_m9731(__this, method) (( KeyCollection_t2053 * (*) (Dictionary_2_t126 *, const MethodInfo*))Dictionary_2_get_Keys_m9732_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::get_Values()
#define Dictionary_2_get_Values_m1435(__this, method) (( ValueCollection_t371 * (*) (Dictionary_2_t126 *, const MethodInfo*))Dictionary_2_get_Values_m9733_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m9734(__this, ___key, method) (( String_t* (*) (Dictionary_2_t126 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9735_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m9736(__this, ___value, method) (( GUIStyle_t31 * (*) (Dictionary_2_t126 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9737_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m9738(__this, ___pair, method) (( bool (*) (Dictionary_2_t126 *, KeyValuePair_2_t2052 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9739_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m9740(__this, method) (( Enumerator_t2054  (*) (Dictionary_2_t126 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9741_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m9742(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t699  (*) (Object_t * /* static, unused */, String_t*, GUIStyle_t31 *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9743_gshared)(__this /* static, unused */, ___key, ___value, method)
