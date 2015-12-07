#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2181;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t345;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ICollection_1_t2429;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t2182;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t2186;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2039;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t2430;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t2431;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>
struct IEnumerator_1_t2432;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void Dictionary_2__ctor_m11545_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11545(__this, method) (( void (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2__ctor_m11545_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11547_gshared (Dictionary_2_t2181 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11547(__this, ___comparer, method) (( void (*) (Dictionary_2_t2181 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11547_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11549_gshared (Dictionary_2_t2181 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11549(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2181 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11549_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11551_gshared (Dictionary_2_t2181 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11551(__this, ___capacity, method) (( void (*) (Dictionary_2_t2181 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11551_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11553_gshared (Dictionary_2_t2181 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11553(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2181 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11553_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11555_gshared (Dictionary_2_t2181 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11555(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2181 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2__ctor_m11555_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11557_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11557(__this, method) (( Object_t* (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11557_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11559_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11559(__this, method) (( Object_t* (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11559_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11561_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11561(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11561_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11563_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11563(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2181 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11563_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11565_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11565(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2181 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11565_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11567_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11567(__this, ___key, method) (( bool (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11567_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11569_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11569(__this, ___key, method) (( void (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11569_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11571_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11571(__this, method) (( Object_t * (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11571_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11573_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11573(__this, method) (( bool (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11573_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11575_gshared (Dictionary_2_t2181 * __this, KeyValuePair_2_t2155  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11575(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2181 *, KeyValuePair_2_t2155 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11575_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11577_gshared (Dictionary_2_t2181 * __this, KeyValuePair_2_t2155  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11577(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2181 *, KeyValuePair_2_t2155 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11577_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11579_gshared (Dictionary_2_t2181 * __this, KeyValuePair_2U5BU5D_t2431* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11579(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2181 *, KeyValuePair_2U5BU5D_t2431*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11579_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11581_gshared (Dictionary_2_t2181 * __this, KeyValuePair_2_t2155  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11581(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2181 *, KeyValuePair_2_t2155 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11581_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11583_gshared (Dictionary_2_t2181 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11583(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2181 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11583_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11585_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11585(__this, method) (( Object_t * (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11585_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11587_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11587(__this, method) (( Object_t* (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11587_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11589_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11589(__this, method) (( Object_t * (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11589_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11591_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11591(__this, method) (( int32_t (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_get_Count_m11591_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(TKey)
extern "C" KeyValuePair_2_t2042  Dictionary_2_get_Item_m11593_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11593(__this, ___key, method) (( KeyValuePair_2_t2042  (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11593_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11595_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, KeyValuePair_2_t2042  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11595(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2181 *, Object_t *, KeyValuePair_2_t2042 , const MethodInfo*))Dictionary_2_set_Item_m11595_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11597_gshared (Dictionary_2_t2181 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11597(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2181 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11597_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11599_gshared (Dictionary_2_t2181 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11599(__this, ___size, method) (( void (*) (Dictionary_2_t2181 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11599_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11601_gshared (Dictionary_2_t2181 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11601(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2181 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11601_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2155  Dictionary_2_make_pair_m11603_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2042  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11603(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2155  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2042 , const MethodInfo*))Dictionary_2_make_pair_m11603_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11605_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2042  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11605(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2042 , const MethodInfo*))Dictionary_2_pick_key_m11605_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::pick_value(TKey,TValue)
extern "C" KeyValuePair_2_t2042  Dictionary_2_pick_value_m11607_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2042  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11607(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2042  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2042 , const MethodInfo*))Dictionary_2_pick_value_m11607_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11609_gshared (Dictionary_2_t2181 * __this, KeyValuePair_2U5BU5D_t2431* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11609(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2181 *, KeyValuePair_2U5BU5D_t2431*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11609_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Resize()
extern "C" void Dictionary_2_Resize_m11611_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11611(__this, method) (( void (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_Resize_m11611_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11613_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, KeyValuePair_2_t2042  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11613(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2181 *, Object_t *, KeyValuePair_2_t2042 , const MethodInfo*))Dictionary_2_Add_m11613_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
extern "C" void Dictionary_2_Clear_m11615_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11615(__this, method) (( void (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_Clear_m11615_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11617_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11617(__this, ___key, method) (( bool (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11617_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11619_gshared (Dictionary_2_t2181 * __this, KeyValuePair_2_t2042  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11619(__this, ___value, method) (( bool (*) (Dictionary_2_t2181 *, KeyValuePair_2_t2042 , const MethodInfo*))Dictionary_2_ContainsValue_m11619_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11621_gshared (Dictionary_2_t2181 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11621(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2181 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2_GetObjectData_m11621_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11623_gshared (Dictionary_2_t2181 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11623(__this, ___sender, method) (( void (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11623_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11625_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11625(__this, ___key, method) (( bool (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11625_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11627_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, KeyValuePair_2_t2042 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11627(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2181 *, Object_t *, KeyValuePair_2_t2042 *, const MethodInfo*))Dictionary_2_TryGetValue_m11627_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Keys()
extern "C" KeyCollection_t2182 * Dictionary_2_get_Keys_m11629_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11629(__this, method) (( KeyCollection_t2182 * (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_get_Keys_m11629_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Values()
extern "C" ValueCollection_t2186 * Dictionary_2_get_Values_m11631_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11631(__this, method) (( ValueCollection_t2186 * (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_get_Values_m11631_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11633_gshared (Dictionary_2_t2181 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11633(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11633_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ToTValue(System.Object)
extern "C" KeyValuePair_2_t2042  Dictionary_2_ToTValue_m11635_gshared (Dictionary_2_t2181 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11635(__this, ___value, method) (( KeyValuePair_2_t2042  (*) (Dictionary_2_t2181 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11635_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11637_gshared (Dictionary_2_t2181 * __this, KeyValuePair_2_t2155  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11637(__this, ___pair, method) (( bool (*) (Dictionary_2_t2181 *, KeyValuePair_2_t2155 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11637_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator()
extern "C" Enumerator_t2184  Dictionary_2_GetEnumerator_m11639_gshared (Dictionary_2_t2181 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11639(__this, method) (( Enumerator_t2184  (*) (Dictionary_2_t2181 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11639_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t699  Dictionary_2_U3CCopyToU3Em__0_m11641_gshared (Object_t * __this /* static, unused */, Object_t * ___key, KeyValuePair_2_t2042  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11641(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t699  (*) (Object_t * /* static, unused */, Object_t *, KeyValuePair_2_t2042 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11641_gshared)(__this /* static, unused */, ___key, ___value, method)
