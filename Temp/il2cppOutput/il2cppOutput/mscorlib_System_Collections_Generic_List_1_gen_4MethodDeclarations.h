#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t149;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t151;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t2369;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t912;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m1461(__this, method) (( void (*) (List_1_t149 *, const MethodInfo*))List_1__ctor_m1500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m10242(__this, ___capacity, method) (( void (*) (List_1_t149 *, int32_t, const MethodInfo*))List_1__ctor_m9153_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m10243(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9155_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10244(__this, method) (( Object_t* (*) (List_1_t149 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1709_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m10245(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t149 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1694_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10246(__this, method) (( Object_t * (*) (List_1_t149 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1691_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m10247(__this, ___item, method) (( int32_t (*) (List_1_t149 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1697_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m10248(__this, ___item, method) (( bool (*) (List_1_t149 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1699_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m10249(__this, ___item, method) (( int32_t (*) (List_1_t149 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1700_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m10250(__this, ___index, ___item, method) (( void (*) (List_1_t149 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1701_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m10251(__this, ___item, method) (( void (*) (List_1_t149 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1702_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10252(__this, method) (( bool (*) (List_1_t149 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1704_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m10253(__this, method) (( Object_t * (*) (List_1_t149 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1693_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m10254(__this, ___index, method) (( Object_t * (*) (List_1_t149 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1695_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m10255(__this, ___index, ___value, method) (( void (*) (List_1_t149 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1696_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m10256(__this, ___item, method) (( void (*) (List_1_t149 *, ByteU5BU5D_t151*, const MethodInfo*))List_1_Add_m1705_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m10257(__this, ___newCount, method) (( void (*) (List_1_t149 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9170_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m10258(__this, method) (( void (*) (List_1_t149 *, const MethodInfo*))List_1_Clear_m1698_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m10259(__this, ___item, method) (( bool (*) (List_1_t149 *, ByteU5BU5D_t151*, const MethodInfo*))List_1_Contains_m1706_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m10260(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t149 *, ByteU5BU5DU5BU5D_t912*, int32_t, const MethodInfo*))List_1_CopyTo_m1707_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m10261(__this, method) (( Enumerator_t2080  (*) (List_1_t149 *, const MethodInfo*))List_1_GetEnumerator_m9175_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m10262(__this, ___item, method) (( int32_t (*) (List_1_t149 *, ByteU5BU5D_t151*, const MethodInfo*))List_1_IndexOf_m1710_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m10263(__this, ___start, ___delta, method) (( void (*) (List_1_t149 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9178_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m10264(__this, ___index, method) (( void (*) (List_1_t149 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9180_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m10265(__this, ___index, ___item, method) (( void (*) (List_1_t149 *, int32_t, ByteU5BU5D_t151*, const MethodInfo*))List_1_Insert_m1711_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m10266(__this, ___item, method) (( bool (*) (List_1_t149 *, ByteU5BU5D_t151*, const MethodInfo*))List_1_Remove_m1708_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m10267(__this, ___index, method) (( void (*) (List_1_t149 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1703_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m10268(__this, method) (( ByteU5BU5DU5BU5D_t912* (*) (List_1_t149 *, const MethodInfo*))List_1_ToArray_m9185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m10269(__this, method) (( int32_t (*) (List_1_t149 *, const MethodInfo*))List_1_get_Capacity_m9187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m10270(__this, ___value, method) (( void (*) (List_1_t149 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9189_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m10271(__this, method) (( int32_t (*) (List_1_t149 *, const MethodInfo*))List_1_get_Count_m1692_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m10272(__this, ___index, method) (( ByteU5BU5D_t151* (*) (List_1_t149 *, int32_t, const MethodInfo*))List_1_get_Item_m1712_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m10273(__this, ___index, ___value, method) (( void (*) (List_1_t149 *, int32_t, ByteU5BU5D_t151*, const MethodInfo*))List_1_set_Item_m1713_gshared)(__this, ___index, ___value, method)
