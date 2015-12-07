#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2103;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t345;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t2374;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2107;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2111;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2039;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t2378;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t2379;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t2380;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m10506_gshared (Dictionary_2_t2103 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10506(__this, method) (( void (*) (Dictionary_2_t2103 *, const MethodInfo*))Dictionary_2__ctor_m10506_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10508_gshared (Dictionary_2_t2103 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10508(__this, ___comparer, method) (( void (*) (Dictionary_2_t2103 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10508_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m10510_gshared (Dictionary_2_t2103 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m10510(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2103 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10510_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10512_gshared (Dictionary_2_t2103 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10512(__this, ___capacity, method) (( void (*) (Dictionary_2_t2103 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10512_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10514_gshared (Dictionary_2_t2103 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10514(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2103 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10514_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10516_gshared (Dictionary_2_t2103 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10516(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2103 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2__ctor_m10516_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10518_gshared (Dictionary_2_t2103 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10518(__this, method) (( Object_t* (*) (Dictionary_2_t2103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10518_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10520_gshared (Dictionary_2_t2103 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10520(__this, method) (( Object_t* (*) (Dictionary_2_t2103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10520_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10522_gshared (Dictionary_2_t2103 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10522(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10522_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10524_gshared (Dictionary_2_t2103 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10524(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2103 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10524_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10526_gshared (Dictionary_2_t2103 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10526(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2103 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10526_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10528_gshared (Dictionary_2_t2103 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10528(__this, ___key, method) (( bool (*) (Dictionary_2_t2103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10528_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10530_gshared (Dictionary_2_t2103 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10530(__this, ___key, method) (( void (*) (Dictionary_2_t2103 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10530_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10532_gshared (Dictionary_2_t2103 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10532(__this, method) (( Object_t * (*) (Dictionary_2_t2103 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10532_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10534_gshared (Dictionary_2_t2103 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10534(__this, method) (( bool (*) (Dictionary_2_t2103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10534_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10536_gshared (Dictionary_2_t2103 * __this, KeyValuePair_2_t2104  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10536(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2103 *, KeyValuePair_2_t2104 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10536_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10538_gshared (Dictionary_2_t2103 * __this, KeyValuePair_2_t2104  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10538(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2103 *, KeyValuePair_2_t2104 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10538_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10540_gshared (Dictionary_2_t2103 * __this, KeyValuePair_2U5BU5D_t2379* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10540(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2103 *, KeyValuePair_2U5BU5D_t2379*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10540_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10542_gshared (Dictionary_2_t2103 * __this, KeyValuePair_2_t2104  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10542(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2103 *, KeyValuePair_2_t2104 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10542_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10544_gshared (Dictionary_2_t2103 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10544(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2103 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10544_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10546_gshared (Dictionary_2_t2103 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10546(__this, method) (( Object_t * (*) (Dictionary_2_t2103 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10546_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10548_gshared (Dictionary_2_t2103 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10548(__this, method) (( Object_t* (*) (Dictionary_2_t2103 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10548_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10550_gshared (Dictionary_2_t2103 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10550(__this, method) (( Object_t * (*) (Dictionary_2_t2103 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10550_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10552_gshared (Dictionary_2_t2103 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10552(__this, method) (( int32_t (*) (Dictionary_2_t2103 *, const MethodInfo*))Dictionary_2_get_Count_m10552_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m10554_gshared (Dictionary_2_t2103 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10554(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2103 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m10554_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10556_gshared (Dictionary_2_t2103 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10556(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2103 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m10556_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10558_gshared (Dictionary_2_t2103 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10558(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2103 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10558_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10560_gshared (Dictionary_2_t2103 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10560(__this, ___size, method) (( void (*) (Dictionary_2_t2103 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10560_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10562_gshared (Dictionary_2_t2103 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10562(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2103 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10562_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2104  Dictionary_2_make_pair_m10564_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10564(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2104  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m10564_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m10566_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m10566(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m10566_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m10568_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10568(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m10568_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10570_gshared (Dictionary_2_t2103 * __this, KeyValuePair_2U5BU5D_t2379* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10570(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2103 *, KeyValuePair_2U5BU5D_t2379*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10570_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m10572_gshared (Dictionary_2_t2103 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10572(__this, method) (( void (*) (Dictionary_2_t2103 *, const MethodInfo*))Dictionary_2_Resize_m10572_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10574_gshared (Dictionary_2_t2103 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10574(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2103 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m10574_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m10576_gshared (Dictionary_2_t2103 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10576(__this, method) (( void (*) (Dictionary_2_t2103 *, const MethodInfo*))Dictionary_2_Clear_m10576_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10578_gshared (Dictionary_2_t2103 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10578(__this, ___key, method) (( bool (*) (Dictionary_2_t2103 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m10578_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10580_gshared (Dictionary_2_t2103 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10580(__this, ___value, method) (( bool (*) (Dictionary_2_t2103 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m10580_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10582_gshared (Dictionary_2_t2103 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10582(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2103 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2_GetObjectData_m10582_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10584_gshared (Dictionary_2_t2103 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10584(__this, ___sender, method) (( void (*) (Dictionary_2_t2103 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10584_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10586_gshared (Dictionary_2_t2103 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10586(__this, ___key, method) (( bool (*) (Dictionary_2_t2103 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m10586_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10588_gshared (Dictionary_2_t2103 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10588(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2103 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m10588_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2107 * Dictionary_2_get_Keys_m10590_gshared (Dictionary_2_t2103 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m10590(__this, method) (( KeyCollection_t2107 * (*) (Dictionary_2_t2103 *, const MethodInfo*))Dictionary_2_get_Keys_m10590_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2111 * Dictionary_2_get_Values_m10592_gshared (Dictionary_2_t2103 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10592(__this, method) (( ValueCollection_t2111 * (*) (Dictionary_2_t2103 *, const MethodInfo*))Dictionary_2_get_Values_m10592_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m10594_gshared (Dictionary_2_t2103 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10594(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2103 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10594_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m10596_gshared (Dictionary_2_t2103 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10596(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2103 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10596_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10598_gshared (Dictionary_2_t2103 * __this, KeyValuePair_2_t2104  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10598(__this, ___pair, method) (( bool (*) (Dictionary_2_t2103 *, KeyValuePair_2_t2104 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10598_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2109  Dictionary_2_GetEnumerator_m10600_gshared (Dictionary_2_t2103 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10600(__this, method) (( Enumerator_t2109  (*) (Dictionary_2_t2103 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10600_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t699  Dictionary_2_U3CCopyToU3Em__0_m10602_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10602(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t699  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10602_gshared)(__this /* static, unused */, ___key, ___value, method)
