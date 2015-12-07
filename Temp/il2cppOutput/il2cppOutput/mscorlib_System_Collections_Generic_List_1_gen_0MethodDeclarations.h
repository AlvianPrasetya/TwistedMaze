#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t238;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t485;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Object[]
struct ObjectU5BU5D_t40;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m1500_gshared (List_1_t238 * __this, const MethodInfo* method);
#define List_1__ctor_m1500(__this, method) (( void (*) (List_1_t238 *, const MethodInfo*))List_1__ctor_m1500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9153_gshared (List_1_t238 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9153(__this, ___capacity, method) (( void (*) (List_1_t238 *, int32_t, const MethodInfo*))List_1__ctor_m9153_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m9155_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m9155(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9155_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1709_gshared (List_1_t238 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1709(__this, method) (( Object_t* (*) (List_1_t238 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1709_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m1694_gshared (List_1_t238 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m1694(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t238 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1694_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m1691_gshared (List_1_t238 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m1691(__this, method) (( Object_t * (*) (List_1_t238 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1691_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m1697_gshared (List_1_t238 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m1697(__this, ___item, method) (( int32_t (*) (List_1_t238 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1697_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m1699_gshared (List_1_t238 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m1699(__this, ___item, method) (( bool (*) (List_1_t238 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1699_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m1700_gshared (List_1_t238 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m1700(__this, ___item, method) (( int32_t (*) (List_1_t238 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1700_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m1701_gshared (List_1_t238 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m1701(__this, ___index, ___item, method) (( void (*) (List_1_t238 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1701_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m1702_gshared (List_1_t238 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m1702(__this, ___item, method) (( void (*) (List_1_t238 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1702_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1704_gshared (List_1_t238 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1704(__this, method) (( bool (*) (List_1_t238 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1704_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m1693_gshared (List_1_t238 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m1693(__this, method) (( Object_t * (*) (List_1_t238 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1693_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m1695_gshared (List_1_t238 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m1695(__this, ___index, method) (( Object_t * (*) (List_1_t238 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1695_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m1696_gshared (List_1_t238 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m1696(__this, ___index, ___value, method) (( void (*) (List_1_t238 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1696_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m1705_gshared (List_1_t238 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m1705(__this, ___item, method) (( void (*) (List_1_t238 *, Object_t *, const MethodInfo*))List_1_Add_m1705_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m9170_gshared (List_1_t238 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m9170(__this, ___newCount, method) (( void (*) (List_1_t238 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9170_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m1698_gshared (List_1_t238 * __this, const MethodInfo* method);
#define List_1_Clear_m1698(__this, method) (( void (*) (List_1_t238 *, const MethodInfo*))List_1_Clear_m1698_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m1706_gshared (List_1_t238 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m1706(__this, ___item, method) (( bool (*) (List_1_t238 *, Object_t *, const MethodInfo*))List_1_Contains_m1706_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m1707_gshared (List_1_t238 * __this, ObjectU5BU5D_t40* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m1707(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t238 *, ObjectU5BU5D_t40*, int32_t, const MethodInfo*))List_1_CopyTo_m1707_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1987  List_1_GetEnumerator_m9175_gshared (List_1_t238 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m9175(__this, method) (( Enumerator_t1987  (*) (List_1_t238 *, const MethodInfo*))List_1_GetEnumerator_m9175_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m1710_gshared (List_1_t238 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m1710(__this, ___item, method) (( int32_t (*) (List_1_t238 *, Object_t *, const MethodInfo*))List_1_IndexOf_m1710_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m9178_gshared (List_1_t238 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m9178(__this, ___start, ___delta, method) (( void (*) (List_1_t238 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9178_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m9180_gshared (List_1_t238 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m9180(__this, ___index, method) (( void (*) (List_1_t238 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9180_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m1711_gshared (List_1_t238 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m1711(__this, ___index, ___item, method) (( void (*) (List_1_t238 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m1711_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m1708_gshared (List_1_t238 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m1708(__this, ___item, method) (( bool (*) (List_1_t238 *, Object_t *, const MethodInfo*))List_1_Remove_m1708_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m1703_gshared (List_1_t238 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m1703(__this, ___index, method) (( void (*) (List_1_t238 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1703_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t40* List_1_ToArray_m9185_gshared (List_1_t238 * __this, const MethodInfo* method);
#define List_1_ToArray_m9185(__this, method) (( ObjectU5BU5D_t40* (*) (List_1_t238 *, const MethodInfo*))List_1_ToArray_m9185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m9187_gshared (List_1_t238 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m9187(__this, method) (( int32_t (*) (List_1_t238 *, const MethodInfo*))List_1_get_Capacity_m9187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m9189_gshared (List_1_t238 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m9189(__this, ___value, method) (( void (*) (List_1_t238 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9189_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m1692_gshared (List_1_t238 * __this, const MethodInfo* method);
#define List_1_get_Count_m1692(__this, method) (( int32_t (*) (List_1_t238 *, const MethodInfo*))List_1_get_Count_m1692_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m1712_gshared (List_1_t238 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m1712(__this, ___index, method) (( Object_t * (*) (List_1_t238 *, int32_t, const MethodInfo*))List_1_get_Item_m1712_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m1713_gshared (List_1_t238 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m1713(__this, ___index, ___value, method) (( void (*) (List_1_t238 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m1713_gshared)(__this, ___index, ___value, method)
