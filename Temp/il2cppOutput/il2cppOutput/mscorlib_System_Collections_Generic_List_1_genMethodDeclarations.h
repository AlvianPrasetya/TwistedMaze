#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t4;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t1;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
struct IEnumerator_1_t2333;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1985;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
#define List_1__ctor_m9151(__this, method) (( void (*) (List_1_t4 *, const MethodInfo*))List_1__ctor_m1500_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor(System.Int32)
#define List_1__ctor_m9152(__this, ___capacity, method) (( void (*) (List_1_t4 *, int32_t, const MethodInfo*))List_1__ctor_m9153_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.cctor()
#define List_1__cctor_m9154(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9155_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9156(__this, method) (( Object_t* (*) (List_1_t4 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1709_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9157(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1694_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9158(__this, method) (( Object_t * (*) (List_1_t4 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1691_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9159(__this, ___item, method) (( int32_t (*) (List_1_t4 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1697_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9160(__this, ___item, method) (( bool (*) (List_1_t4 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1699_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9161(__this, ___item, method) (( int32_t (*) (List_1_t4 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1700_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9162(__this, ___index, ___item, method) (( void (*) (List_1_t4 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1701_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9163(__this, ___item, method) (( void (*) (List_1_t4 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1702_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9164(__this, method) (( bool (*) (List_1_t4 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1704_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9165(__this, method) (( Object_t * (*) (List_1_t4 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1693_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9166(__this, ___index, method) (( Object_t * (*) (List_1_t4 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1695_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9167(__this, ___index, ___value, method) (( void (*) (List_1_t4 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1696_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
#define List_1_Add_m9168(__this, ___item, method) (( void (*) (List_1_t4 *, GameObject_t1 *, const MethodInfo*))List_1_Add_m1705_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9169(__this, ___newCount, method) (( void (*) (List_1_t4 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9170_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
#define List_1_Clear_m9171(__this, method) (( void (*) (List_1_t4 *, const MethodInfo*))List_1_Clear_m1698_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
#define List_1_Contains_m9172(__this, ___item, method) (( bool (*) (List_1_t4 *, GameObject_t1 *, const MethodInfo*))List_1_Contains_m1706_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9173(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t4 *, GameObjectU5BU5D_t1985*, int32_t, const MethodInfo*))List_1_CopyTo_m1707_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
#define List_1_GetEnumerator_m9174(__this, method) (( Enumerator_t1991  (*) (List_1_t4 *, const MethodInfo*))List_1_GetEnumerator_m9175_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::IndexOf(T)
#define List_1_IndexOf_m9176(__this, ___item, method) (( int32_t (*) (List_1_t4 *, GameObject_t1 *, const MethodInfo*))List_1_IndexOf_m1710_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9177(__this, ___start, ___delta, method) (( void (*) (List_1_t4 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9178_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9179(__this, ___index, method) (( void (*) (List_1_t4 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9180_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Insert(System.Int32,T)
#define List_1_Insert_m9181(__this, ___index, ___item, method) (( void (*) (List_1_t4 *, int32_t, GameObject_t1 *, const MethodInfo*))List_1_Insert_m1711_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(T)
#define List_1_Remove_m9182(__this, ___item, method) (( bool (*) (List_1_t4 *, GameObject_t1 *, const MethodInfo*))List_1_Remove_m1708_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9183(__this, ___index, method) (( void (*) (List_1_t4 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1703_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
#define List_1_ToArray_m9184(__this, method) (( GameObjectU5BU5D_t1985* (*) (List_1_t4 *, const MethodInfo*))List_1_ToArray_m9185_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Capacity()
#define List_1_get_Capacity_m9186(__this, method) (( int32_t (*) (List_1_t4 *, const MethodInfo*))List_1_get_Capacity_m9187_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9188(__this, ___value, method) (( void (*) (List_1_t4 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9189_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
#define List_1_get_Count_m9190(__this, method) (( int32_t (*) (List_1_t4 *, const MethodInfo*))List_1_get_Count_m1692_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
#define List_1_get_Item_m9191(__this, ___index, method) (( GameObject_t1 * (*) (List_1_t4 *, int32_t, const MethodInfo*))List_1_get_Item_m1712_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
#define List_1_set_Item_m9192(__this, ___index, ___value, method) (( void (*) (List_1_t4 *, int32_t, GameObject_t1 *, const MethodInfo*))List_1_set_Item_m1713_gshared)(__this, ___index, ___value, method)
