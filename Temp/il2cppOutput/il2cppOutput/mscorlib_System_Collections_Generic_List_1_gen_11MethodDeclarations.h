#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t421;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t2436;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Type[]
struct TypeU5BU5D_t247;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_11.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m1548(__this, method) (( void (*) (List_1_t421 *, const MethodInfo*))List_1__ctor_m1500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m11828(__this, ___capacity, method) (( void (*) (List_1_t421 *, int32_t, const MethodInfo*))List_1__ctor_m9153_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m11829(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9155_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11830(__this, method) (( Object_t* (*) (List_1_t421 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1709_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11831(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t421 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1694_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11832(__this, method) (( Object_t * (*) (List_1_t421 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1691_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11833(__this, ___item, method) (( int32_t (*) (List_1_t421 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1697_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11834(__this, ___item, method) (( bool (*) (List_1_t421 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1699_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11835(__this, ___item, method) (( int32_t (*) (List_1_t421 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1700_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11836(__this, ___index, ___item, method) (( void (*) (List_1_t421 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1701_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11837(__this, ___item, method) (( void (*) (List_1_t421 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1702_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11838(__this, method) (( bool (*) (List_1_t421 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1704_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11839(__this, method) (( Object_t * (*) (List_1_t421 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1693_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11840(__this, ___index, method) (( Object_t * (*) (List_1_t421 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1695_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11841(__this, ___index, ___value, method) (( void (*) (List_1_t421 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1696_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m11842(__this, ___item, method) (( void (*) (List_1_t421 *, Type_t *, const MethodInfo*))List_1_Add_m1705_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11843(__this, ___newCount, method) (( void (*) (List_1_t421 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9170_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m11844(__this, method) (( void (*) (List_1_t421 *, const MethodInfo*))List_1_Clear_m1698_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m11845(__this, ___item, method) (( bool (*) (List_1_t421 *, Type_t *, const MethodInfo*))List_1_Contains_m1706_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11846(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t421 *, TypeU5BU5D_t247*, int32_t, const MethodInfo*))List_1_CopyTo_m1707_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m11847(__this, method) (( Enumerator_t2207  (*) (List_1_t421 *, const MethodInfo*))List_1_GetEnumerator_m9175_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m11848(__this, ___item, method) (( int32_t (*) (List_1_t421 *, Type_t *, const MethodInfo*))List_1_IndexOf_m1710_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11849(__this, ___start, ___delta, method) (( void (*) (List_1_t421 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9178_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11850(__this, ___index, method) (( void (*) (List_1_t421 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9180_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m11851(__this, ___index, ___item, method) (( void (*) (List_1_t421 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m1711_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m11852(__this, ___item, method) (( bool (*) (List_1_t421 *, Type_t *, const MethodInfo*))List_1_Remove_m1708_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11853(__this, ___index, method) (( void (*) (List_1_t421 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1703_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m1549(__this, method) (( TypeU5BU5D_t247* (*) (List_1_t421 *, const MethodInfo*))List_1_ToArray_m9185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m11854(__this, method) (( int32_t (*) (List_1_t421 *, const MethodInfo*))List_1_get_Capacity_m9187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11855(__this, ___value, method) (( void (*) (List_1_t421 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9189_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m11856(__this, method) (( int32_t (*) (List_1_t421 *, const MethodInfo*))List_1_get_Count_m1692_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m11857(__this, ___index, method) (( Type_t * (*) (List_1_t421 *, int32_t, const MethodInfo*))List_1_get_Item_m1712_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m11858(__this, ___index, ___value, method) (( void (*) (List_1_t421 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m1713_gshared)(__this, ___index, ___value, method)
