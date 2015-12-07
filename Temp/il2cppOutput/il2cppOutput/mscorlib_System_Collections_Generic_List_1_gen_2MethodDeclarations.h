#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t111;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t110;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t2347;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t2036;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m1431(__this, method) (( void (*) (List_1_t111 *, const MethodInfo*))List_1__ctor_m1500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m9612(__this, ___capacity, method) (( void (*) (List_1_t111 *, int32_t, const MethodInfo*))List_1__ctor_m9153_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m9613(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9155_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9614(__this, method) (( Object_t* (*) (List_1_t111 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1709_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9615(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t111 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1694_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9616(__this, method) (( Object_t * (*) (List_1_t111 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1691_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9617(__this, ___item, method) (( int32_t (*) (List_1_t111 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1697_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9618(__this, ___item, method) (( bool (*) (List_1_t111 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1699_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9619(__this, ___item, method) (( int32_t (*) (List_1_t111 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1700_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9620(__this, ___index, ___item, method) (( void (*) (List_1_t111 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1701_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9621(__this, ___item, method) (( void (*) (List_1_t111 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1702_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9622(__this, method) (( bool (*) (List_1_t111 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1704_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9623(__this, method) (( Object_t * (*) (List_1_t111 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1693_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9624(__this, ___index, method) (( Object_t * (*) (List_1_t111 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1695_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9625(__this, ___index, ___value, method) (( void (*) (List_1_t111 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1696_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m9626(__this, ___item, method) (( void (*) (List_1_t111 *, GUILayoutEntry_t110 *, const MethodInfo*))List_1_Add_m1705_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9627(__this, ___newCount, method) (( void (*) (List_1_t111 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9170_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m9628(__this, method) (( void (*) (List_1_t111 *, const MethodInfo*))List_1_Clear_m1698_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m9629(__this, ___item, method) (( bool (*) (List_1_t111 *, GUILayoutEntry_t110 *, const MethodInfo*))List_1_Contains_m1706_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9630(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t111 *, GUILayoutEntryU5BU5D_t2036*, int32_t, const MethodInfo*))List_1_CopyTo_m1707_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m1426(__this, method) (( Enumerator_t369  (*) (List_1_t111 *, const MethodInfo*))List_1_GetEnumerator_m9175_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m9631(__this, ___item, method) (( int32_t (*) (List_1_t111 *, GUILayoutEntry_t110 *, const MethodInfo*))List_1_IndexOf_m1710_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9632(__this, ___start, ___delta, method) (( void (*) (List_1_t111 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9178_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9633(__this, ___index, method) (( void (*) (List_1_t111 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9180_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m9634(__this, ___index, ___item, method) (( void (*) (List_1_t111 *, int32_t, GUILayoutEntry_t110 *, const MethodInfo*))List_1_Insert_m1711_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m9635(__this, ___item, method) (( bool (*) (List_1_t111 *, GUILayoutEntry_t110 *, const MethodInfo*))List_1_Remove_m1708_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9636(__this, ___index, method) (( void (*) (List_1_t111 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1703_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m9637(__this, method) (( GUILayoutEntryU5BU5D_t2036* (*) (List_1_t111 *, const MethodInfo*))List_1_ToArray_m9185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m9638(__this, method) (( int32_t (*) (List_1_t111 *, const MethodInfo*))List_1_get_Capacity_m9187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9639(__this, ___value, method) (( void (*) (List_1_t111 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9189_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m9640(__this, method) (( int32_t (*) (List_1_t111 *, const MethodInfo*))List_1_get_Count_m1692_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m9641(__this, ___index, method) (( GUILayoutEntry_t110 * (*) (List_1_t111 *, int32_t, const MethodInfo*))List_1_get_Item_m1712_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m9642(__this, ___index, ___value, method) (( void (*) (List_1_t111 *, int32_t, GUILayoutEntry_t110 *, const MethodInfo*))List_1_set_Item_m1713_gshared)(__this, ___index, ___value, method)
