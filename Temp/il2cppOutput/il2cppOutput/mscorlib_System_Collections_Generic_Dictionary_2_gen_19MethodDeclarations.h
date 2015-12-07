#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2228;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t345;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t2452;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t2231;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t2235;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2039;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t2453;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t2454;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t2455;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m12053_gshared (Dictionary_2_t2228 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12053(__this, method) (( void (*) (Dictionary_2_t2228 *, const MethodInfo*))Dictionary_2__ctor_m12053_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12054_gshared (Dictionary_2_t2228 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12054(__this, ___comparer, method) (( void (*) (Dictionary_2_t2228 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12054_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m12056_gshared (Dictionary_2_t2228 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m12056(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2228 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12056_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12058_gshared (Dictionary_2_t2228 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12058(__this, ___capacity, method) (( void (*) (Dictionary_2_t2228 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12058_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12060_gshared (Dictionary_2_t2228 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12060(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2228 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12060_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12062_gshared (Dictionary_2_t2228 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12062(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2228 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2__ctor_m12062_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12064_gshared (Dictionary_2_t2228 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12064(__this, method) (( Object_t* (*) (Dictionary_2_t2228 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12064_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12066_gshared (Dictionary_2_t2228 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12066(__this, method) (( Object_t* (*) (Dictionary_2_t2228 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12066_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12068_gshared (Dictionary_2_t2228 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12068(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2228 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12068_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12070_gshared (Dictionary_2_t2228 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12070(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2228 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12070_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12072_gshared (Dictionary_2_t2228 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12072(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2228 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12072_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12074_gshared (Dictionary_2_t2228 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12074(__this, ___key, method) (( bool (*) (Dictionary_2_t2228 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12074_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12076_gshared (Dictionary_2_t2228 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12076(__this, ___key, method) (( void (*) (Dictionary_2_t2228 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12076_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12078_gshared (Dictionary_2_t2228 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12078(__this, method) (( Object_t * (*) (Dictionary_2_t2228 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12078_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12080_gshared (Dictionary_2_t2228 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12080(__this, method) (( bool (*) (Dictionary_2_t2228 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12080_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12082_gshared (Dictionary_2_t2228 * __this, KeyValuePair_2_t2229  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12082(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2228 *, KeyValuePair_2_t2229 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12082_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12084_gshared (Dictionary_2_t2228 * __this, KeyValuePair_2_t2229  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12084(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2228 *, KeyValuePair_2_t2229 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12084_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12086_gshared (Dictionary_2_t2228 * __this, KeyValuePair_2U5BU5D_t2454* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12086(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2228 *, KeyValuePair_2U5BU5D_t2454*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12086_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12088_gshared (Dictionary_2_t2228 * __this, KeyValuePair_2_t2229  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12088(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2228 *, KeyValuePair_2_t2229 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12088_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12090_gshared (Dictionary_2_t2228 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12090(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2228 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12090_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12092_gshared (Dictionary_2_t2228 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12092(__this, method) (( Object_t * (*) (Dictionary_2_t2228 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12092_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12094_gshared (Dictionary_2_t2228 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12094(__this, method) (( Object_t* (*) (Dictionary_2_t2228 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12094_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12096_gshared (Dictionary_2_t2228 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12096(__this, method) (( Object_t * (*) (Dictionary_2_t2228 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12096_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12098_gshared (Dictionary_2_t2228 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12098(__this, method) (( int32_t (*) (Dictionary_2_t2228 *, const MethodInfo*))Dictionary_2_get_Count_m12098_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m12100_gshared (Dictionary_2_t2228 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12100(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t2228 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12100_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12102_gshared (Dictionary_2_t2228 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12102(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2228 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m12102_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12104_gshared (Dictionary_2_t2228 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12104(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2228 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12104_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12106_gshared (Dictionary_2_t2228 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12106(__this, ___size, method) (( void (*) (Dictionary_2_t2228 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12106_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12108_gshared (Dictionary_2_t2228 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12108(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2228 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12108_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2229  Dictionary_2_make_pair_m12110_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12110(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2229  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m12110_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m12112_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12112(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m12112_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m12114_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12114(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m12114_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12116_gshared (Dictionary_2_t2228 * __this, KeyValuePair_2U5BU5D_t2454* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12116(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2228 *, KeyValuePair_2U5BU5D_t2454*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12116_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m12118_gshared (Dictionary_2_t2228 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12118(__this, method) (( void (*) (Dictionary_2_t2228 *, const MethodInfo*))Dictionary_2_Resize_m12118_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12120_gshared (Dictionary_2_t2228 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12120(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2228 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m12120_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m12122_gshared (Dictionary_2_t2228 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12122(__this, method) (( void (*) (Dictionary_2_t2228 *, const MethodInfo*))Dictionary_2_Clear_m12122_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12124_gshared (Dictionary_2_t2228 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12124(__this, ___key, method) (( bool (*) (Dictionary_2_t2228 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12124_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12126_gshared (Dictionary_2_t2228 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12126(__this, ___value, method) (( bool (*) (Dictionary_2_t2228 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m12126_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12128_gshared (Dictionary_2_t2228 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12128(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2228 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2_GetObjectData_m12128_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12130_gshared (Dictionary_2_t2228 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12130(__this, ___sender, method) (( void (*) (Dictionary_2_t2228 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12130_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12132_gshared (Dictionary_2_t2228 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12132(__this, ___key, method) (( bool (*) (Dictionary_2_t2228 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12132_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12134_gshared (Dictionary_2_t2228 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12134(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2228 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12134_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t2231 * Dictionary_2_get_Keys_m12136_gshared (Dictionary_2_t2228 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12136(__this, method) (( KeyCollection_t2231 * (*) (Dictionary_2_t2228 *, const MethodInfo*))Dictionary_2_get_Keys_m12136_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t2235 * Dictionary_2_get_Values_m12138_gshared (Dictionary_2_t2228 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12138(__this, method) (( ValueCollection_t2235 * (*) (Dictionary_2_t2228 *, const MethodInfo*))Dictionary_2_get_Values_m12138_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12140_gshared (Dictionary_2_t2228 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12140(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2228 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12140_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m12142_gshared (Dictionary_2_t2228 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12142(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t2228 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12142_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12144_gshared (Dictionary_2_t2228 * __this, KeyValuePair_2_t2229  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12144(__this, ___pair, method) (( bool (*) (Dictionary_2_t2228 *, KeyValuePair_2_t2229 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12144_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t2233  Dictionary_2_GetEnumerator_m12146_gshared (Dictionary_2_t2228 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12146(__this, method) (( Enumerator_t2233  (*) (Dictionary_2_t2228 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12146_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t699  Dictionary_2_U3CCopyToU3Em__0_m12148_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12148(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t699  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12148_gshared)(__this /* static, unused */, ___key, ___value, method)
