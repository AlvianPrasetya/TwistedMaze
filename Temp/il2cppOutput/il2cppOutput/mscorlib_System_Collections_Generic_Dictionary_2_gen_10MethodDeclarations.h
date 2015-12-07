#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2041;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t345;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2044;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2048;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2039;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t2352;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2179;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2353;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t698;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9649_gshared (Dictionary_2_t2041 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9649(__this, method) (( void (*) (Dictionary_2_t2041 *, const MethodInfo*))Dictionary_2__ctor_m9649_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9650_gshared (Dictionary_2_t2041 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9650(__this, ___comparer, method) (( void (*) (Dictionary_2_t2041 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9650_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9652_gshared (Dictionary_2_t2041 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9652(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2041 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9652_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9654_gshared (Dictionary_2_t2041 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9654(__this, ___capacity, method) (( void (*) (Dictionary_2_t2041 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9654_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9656_gshared (Dictionary_2_t2041 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9656(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2041 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9656_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9658_gshared (Dictionary_2_t2041 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9658(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2041 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2__ctor_m9658_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9660_gshared (Dictionary_2_t2041 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9660(__this, method) (( Object_t* (*) (Dictionary_2_t2041 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9660_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9662_gshared (Dictionary_2_t2041 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9662(__this, method) (( Object_t* (*) (Dictionary_2_t2041 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9662_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9664_gshared (Dictionary_2_t2041 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9664(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2041 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9664_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9666_gshared (Dictionary_2_t2041 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9666(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2041 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9666_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9668_gshared (Dictionary_2_t2041 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9668(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2041 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9668_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9670_gshared (Dictionary_2_t2041 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9670(__this, ___key, method) (( bool (*) (Dictionary_2_t2041 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9670_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9672_gshared (Dictionary_2_t2041 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9672(__this, ___key, method) (( void (*) (Dictionary_2_t2041 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9672_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9674_gshared (Dictionary_2_t2041 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9674(__this, method) (( Object_t * (*) (Dictionary_2_t2041 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9674_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9676_gshared (Dictionary_2_t2041 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9676(__this, method) (( bool (*) (Dictionary_2_t2041 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9676_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9678_gshared (Dictionary_2_t2041 * __this, KeyValuePair_2_t2042  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9678(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2041 *, KeyValuePair_2_t2042 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9678_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9680_gshared (Dictionary_2_t2041 * __this, KeyValuePair_2_t2042  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9680(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2041 *, KeyValuePair_2_t2042 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9680_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9682_gshared (Dictionary_2_t2041 * __this, KeyValuePair_2U5BU5D_t2179* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9682(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2041 *, KeyValuePair_2U5BU5D_t2179*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9682_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9684_gshared (Dictionary_2_t2041 * __this, KeyValuePair_2_t2042  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9684(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2041 *, KeyValuePair_2_t2042 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9684_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9686_gshared (Dictionary_2_t2041 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9686(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2041 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9686_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9688_gshared (Dictionary_2_t2041 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9688(__this, method) (( Object_t * (*) (Dictionary_2_t2041 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9688_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9690_gshared (Dictionary_2_t2041 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9690(__this, method) (( Object_t* (*) (Dictionary_2_t2041 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9690_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9692_gshared (Dictionary_2_t2041 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9692(__this, method) (( Object_t * (*) (Dictionary_2_t2041 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9692_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9694_gshared (Dictionary_2_t2041 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9694(__this, method) (( int32_t (*) (Dictionary_2_t2041 *, const MethodInfo*))Dictionary_2_get_Count_m9694_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9696_gshared (Dictionary_2_t2041 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9696(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2041 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9696_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9698_gshared (Dictionary_2_t2041 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9698(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2041 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9698_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9700_gshared (Dictionary_2_t2041 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9700(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2041 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9700_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9702_gshared (Dictionary_2_t2041 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9702(__this, ___size, method) (( void (*) (Dictionary_2_t2041 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9702_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9704_gshared (Dictionary_2_t2041 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9704(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2041 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9704_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2042  Dictionary_2_make_pair_m9706_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9706(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2042  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9706_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9708_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9708(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9708_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9710_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9710(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9710_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9712_gshared (Dictionary_2_t2041 * __this, KeyValuePair_2U5BU5D_t2179* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9712(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2041 *, KeyValuePair_2U5BU5D_t2179*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9712_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9714_gshared (Dictionary_2_t2041 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9714(__this, method) (( void (*) (Dictionary_2_t2041 *, const MethodInfo*))Dictionary_2_Resize_m9714_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9716_gshared (Dictionary_2_t2041 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9716(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2041 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m9716_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9718_gshared (Dictionary_2_t2041 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9718(__this, method) (( void (*) (Dictionary_2_t2041 *, const MethodInfo*))Dictionary_2_Clear_m9718_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9720_gshared (Dictionary_2_t2041 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9720(__this, ___key, method) (( bool (*) (Dictionary_2_t2041 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9720_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9722_gshared (Dictionary_2_t2041 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9722(__this, ___value, method) (( bool (*) (Dictionary_2_t2041 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9722_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9724_gshared (Dictionary_2_t2041 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9724(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2041 *, SerializationInfo_t359 *, StreamingContext_t360 , const MethodInfo*))Dictionary_2_GetObjectData_m9724_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9726_gshared (Dictionary_2_t2041 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9726(__this, ___sender, method) (( void (*) (Dictionary_2_t2041 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9726_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9728_gshared (Dictionary_2_t2041 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9728(__this, ___key, method) (( bool (*) (Dictionary_2_t2041 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9728_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9730_gshared (Dictionary_2_t2041 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9730(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2041 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9730_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2044 * Dictionary_2_get_Keys_m9732_gshared (Dictionary_2_t2041 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9732(__this, method) (( KeyCollection_t2044 * (*) (Dictionary_2_t2041 *, const MethodInfo*))Dictionary_2_get_Keys_m9732_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2048 * Dictionary_2_get_Values_m9733_gshared (Dictionary_2_t2041 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9733(__this, method) (( ValueCollection_t2048 * (*) (Dictionary_2_t2041 *, const MethodInfo*))Dictionary_2_get_Values_m9733_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9735_gshared (Dictionary_2_t2041 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9735(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2041 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9735_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9737_gshared (Dictionary_2_t2041 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9737(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2041 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9737_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9739_gshared (Dictionary_2_t2041 * __this, KeyValuePair_2_t2042  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9739(__this, ___pair, method) (( bool (*) (Dictionary_2_t2041 *, KeyValuePair_2_t2042 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9739_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2046  Dictionary_2_GetEnumerator_m9741_gshared (Dictionary_2_t2041 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9741(__this, method) (( Enumerator_t2046  (*) (Dictionary_2_t2041 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9741_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t699  Dictionary_2_U3CCopyToU3Em__0_m9743_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9743(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t699  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9743_gshared)(__this /* static, unused */, ___key, ___value, method)
