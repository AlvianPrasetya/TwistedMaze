#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2057;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t345;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2335;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2060;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2064;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2039;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t2360;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2361;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2362;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m9874_gshared (Dictionary_2_t2057 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9874(__this, method) (( void (*) (Dictionary_2_t2057 *, const MethodInfo*))Dictionary_2__ctor_m9874_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9876_gshared (Dictionary_2_t2057 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9876(__this, ___comparer, method) (( void (*) (Dictionary_2_t2057 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9876_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9878_gshared (Dictionary_2_t2057 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9878(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2057 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9878_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9879_gshared (Dictionary_2_t2057 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9879(__this, ___capacity, method) (( void (*) (Dictionary_2_t2057 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9879_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9881_gshared (Dictionary_2_t2057 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9881(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2057 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9881_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9883_gshared (Dictionary_2_t2057 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9883(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2057 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2__ctor_m9883_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9885_gshared (Dictionary_2_t2057 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9885(__this, method) (( Object_t* (*) (Dictionary_2_t2057 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9885_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9887_gshared (Dictionary_2_t2057 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9887(__this, method) (( Object_t* (*) (Dictionary_2_t2057 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9887_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9889_gshared (Dictionary_2_t2057 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9889(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2057 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9889_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9891_gshared (Dictionary_2_t2057 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9891(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2057 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9891_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9893_gshared (Dictionary_2_t2057 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9893(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2057 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9893_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9895_gshared (Dictionary_2_t2057 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9895(__this, ___key, method) (( bool (*) (Dictionary_2_t2057 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9895_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9897_gshared (Dictionary_2_t2057 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9897(__this, ___key, method) (( void (*) (Dictionary_2_t2057 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9897_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9899_gshared (Dictionary_2_t2057 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9899(__this, method) (( Object_t * (*) (Dictionary_2_t2057 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9899_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9901_gshared (Dictionary_2_t2057 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9901(__this, method) (( bool (*) (Dictionary_2_t2057 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9901_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9903_gshared (Dictionary_2_t2057 * __this, KeyValuePair_2_t2058  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9903(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2057 *, KeyValuePair_2_t2058 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9903_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9905_gshared (Dictionary_2_t2057 * __this, KeyValuePair_2_t2058  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9905(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2057 *, KeyValuePair_2_t2058 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9905_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9907_gshared (Dictionary_2_t2057 * __this, KeyValuePair_2U5BU5D_t2361* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9907(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2057 *, KeyValuePair_2U5BU5D_t2361*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9907_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9909_gshared (Dictionary_2_t2057 * __this, KeyValuePair_2_t2058  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9909(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2057 *, KeyValuePair_2_t2058 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9909_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9911_gshared (Dictionary_2_t2057 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9911(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2057 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9911_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9913_gshared (Dictionary_2_t2057 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9913(__this, method) (( Object_t * (*) (Dictionary_2_t2057 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9913_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9915_gshared (Dictionary_2_t2057 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9915(__this, method) (( Object_t* (*) (Dictionary_2_t2057 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9915_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9917_gshared (Dictionary_2_t2057 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9917(__this, method) (( Object_t * (*) (Dictionary_2_t2057 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9917_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9919_gshared (Dictionary_2_t2057 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9919(__this, method) (( int32_t (*) (Dictionary_2_t2057 *, const MethodInfo*))Dictionary_2_get_Count_m9919_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m9921_gshared (Dictionary_2_t2057 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9921(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2057 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9921_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9923_gshared (Dictionary_2_t2057 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9923(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2057 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9923_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9925_gshared (Dictionary_2_t2057 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9925(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2057 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9925_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9927_gshared (Dictionary_2_t2057 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9927(__this, ___size, method) (( void (*) (Dictionary_2_t2057 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9927_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9929_gshared (Dictionary_2_t2057 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9929(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2057 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9929_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2058  Dictionary_2_make_pair_m9931_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9931(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2058  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9931_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9933_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9933(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m9933_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m9935_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9935(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9935_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9937_gshared (Dictionary_2_t2057 * __this, KeyValuePair_2U5BU5D_t2361* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9937(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2057 *, KeyValuePair_2U5BU5D_t2361*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9937_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m9939_gshared (Dictionary_2_t2057 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9939(__this, method) (( void (*) (Dictionary_2_t2057 *, const MethodInfo*))Dictionary_2_Resize_m9939_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9941_gshared (Dictionary_2_t2057 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9941(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2057 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m9941_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m9943_gshared (Dictionary_2_t2057 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9943(__this, method) (( void (*) (Dictionary_2_t2057 *, const MethodInfo*))Dictionary_2_Clear_m9943_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9945_gshared (Dictionary_2_t2057 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9945(__this, ___key, method) (( bool (*) (Dictionary_2_t2057 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9945_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9947_gshared (Dictionary_2_t2057 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9947(__this, ___value, method) (( bool (*) (Dictionary_2_t2057 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9947_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9949_gshared (Dictionary_2_t2057 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9949(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2057 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2_GetObjectData_m9949_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9951_gshared (Dictionary_2_t2057 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9951(__this, ___sender, method) (( void (*) (Dictionary_2_t2057 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9951_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9953_gshared (Dictionary_2_t2057 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9953(__this, ___key, method) (( bool (*) (Dictionary_2_t2057 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9953_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9955_gshared (Dictionary_2_t2057 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9955(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2057 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9955_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2060 * Dictionary_2_get_Keys_m9957_gshared (Dictionary_2_t2057 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9957(__this, method) (( KeyCollection_t2060 * (*) (Dictionary_2_t2057 *, const MethodInfo*))Dictionary_2_get_Keys_m9957_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2064 * Dictionary_2_get_Values_m9959_gshared (Dictionary_2_t2057 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9959(__this, method) (( ValueCollection_t2064 * (*) (Dictionary_2_t2057 *, const MethodInfo*))Dictionary_2_get_Values_m9959_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9961_gshared (Dictionary_2_t2057 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9961(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2057 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9961_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m9963_gshared (Dictionary_2_t2057 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9963(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2057 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9963_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9965_gshared (Dictionary_2_t2057 * __this, KeyValuePair_2_t2058  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9965(__this, ___pair, method) (( bool (*) (Dictionary_2_t2057 *, KeyValuePair_2_t2058 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9965_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2062  Dictionary_2_GetEnumerator_m9967_gshared (Dictionary_2_t2057 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9967(__this, method) (( Enumerator_t2062  (*) (Dictionary_2_t2057 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9967_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t699  Dictionary_2_U3CCopyToU3Em__0_m9969_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9969(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t699  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9969_gshared)(__this /* static, unused */, ___key, ___value, method)
