#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t202;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t2371;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t336;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_6.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m10357_gshared (List_1_t202 * __this, const MethodInfo* method);
#define List_1__ctor_m10357(__this, method) (( void (*) (List_1_t202 *, const MethodInfo*))List_1__ctor_m10357_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1472_gshared (List_1_t202 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1472(__this, ___capacity, method) (( void (*) (List_1_t202 *, int32_t, const MethodInfo*))List_1__ctor_m1472_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m10358_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10358(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10358_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10359_gshared (List_1_t202 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10359(__this, method) (( Object_t* (*) (List_1_t202 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10359_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10360_gshared (List_1_t202 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10360(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t202 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10360_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10361_gshared (List_1_t202 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10361(__this, method) (( Object_t * (*) (List_1_t202 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10361_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10362_gshared (List_1_t202 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10362(__this, ___item, method) (( int32_t (*) (List_1_t202 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10362_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10363_gshared (List_1_t202 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10363(__this, ___item, method) (( bool (*) (List_1_t202 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10363_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10364_gshared (List_1_t202 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10364(__this, ___item, method) (( int32_t (*) (List_1_t202 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10364_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10365_gshared (List_1_t202 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10365(__this, ___index, ___item, method) (( void (*) (List_1_t202 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10365_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10366_gshared (List_1_t202 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10366(__this, ___item, method) (( void (*) (List_1_t202 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10366_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10367_gshared (List_1_t202 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10367(__this, method) (( bool (*) (List_1_t202 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10367_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10368_gshared (List_1_t202 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10368(__this, method) (( Object_t * (*) (List_1_t202 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10368_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10369_gshared (List_1_t202 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10369(__this, ___index, method) (( Object_t * (*) (List_1_t202 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10369_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10370_gshared (List_1_t202 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10370(__this, ___index, ___value, method) (( void (*) (List_1_t202 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10370_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m10371_gshared (List_1_t202 * __this, UIVertex_t209  ___item, const MethodInfo* method);
#define List_1_Add_m10371(__this, ___item, method) (( void (*) (List_1_t202 *, UIVertex_t209 , const MethodInfo*))List_1_Add_m10371_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10372_gshared (List_1_t202 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10372(__this, ___newCount, method) (( void (*) (List_1_t202 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10372_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m10373_gshared (List_1_t202 * __this, const MethodInfo* method);
#define List_1_Clear_m10373(__this, method) (( void (*) (List_1_t202 *, const MethodInfo*))List_1_Clear_m10373_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m10374_gshared (List_1_t202 * __this, UIVertex_t209  ___item, const MethodInfo* method);
#define List_1_Contains_m10374(__this, ___item, method) (( bool (*) (List_1_t202 *, UIVertex_t209 , const MethodInfo*))List_1_Contains_m10374_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10375_gshared (List_1_t202 * __this, UIVertexU5BU5D_t336* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10375(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t202 *, UIVertexU5BU5D_t336*, int32_t, const MethodInfo*))List_1_CopyTo_m10375_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2090  List_1_GetEnumerator_m10376_gshared (List_1_t202 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10376(__this, method) (( Enumerator_t2090  (*) (List_1_t202 *, const MethodInfo*))List_1_GetEnumerator_m10376_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10377_gshared (List_1_t202 * __this, UIVertex_t209  ___item, const MethodInfo* method);
#define List_1_IndexOf_m10377(__this, ___item, method) (( int32_t (*) (List_1_t202 *, UIVertex_t209 , const MethodInfo*))List_1_IndexOf_m10377_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10378_gshared (List_1_t202 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10378(__this, ___start, ___delta, method) (( void (*) (List_1_t202 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10378_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10379_gshared (List_1_t202 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10379(__this, ___index, method) (( void (*) (List_1_t202 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10379_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10380_gshared (List_1_t202 * __this, int32_t ___index, UIVertex_t209  ___item, const MethodInfo* method);
#define List_1_Insert_m10380(__this, ___index, ___item, method) (( void (*) (List_1_t202 *, int32_t, UIVertex_t209 , const MethodInfo*))List_1_Insert_m10380_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m10381_gshared (List_1_t202 * __this, UIVertex_t209  ___item, const MethodInfo* method);
#define List_1_Remove_m10381(__this, ___item, method) (( bool (*) (List_1_t202 *, UIVertex_t209 , const MethodInfo*))List_1_Remove_m10381_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10382_gshared (List_1_t202 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10382(__this, ___index, method) (( void (*) (List_1_t202 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10382_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t336* List_1_ToArray_m10383_gshared (List_1_t202 * __this, const MethodInfo* method);
#define List_1_ToArray_m10383(__this, method) (( UIVertexU5BU5D_t336* (*) (List_1_t202 *, const MethodInfo*))List_1_ToArray_m10383_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10384_gshared (List_1_t202 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10384(__this, method) (( int32_t (*) (List_1_t202 *, const MethodInfo*))List_1_get_Capacity_m10384_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10385_gshared (List_1_t202 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10385(__this, ___value, method) (( void (*) (List_1_t202 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10385_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m10386_gshared (List_1_t202 * __this, const MethodInfo* method);
#define List_1_get_Count_m10386(__this, method) (( int32_t (*) (List_1_t202 *, const MethodInfo*))List_1_get_Count_m10386_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t209  List_1_get_Item_m10387_gshared (List_1_t202 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10387(__this, ___index, method) (( UIVertex_t209  (*) (List_1_t202 *, int32_t, const MethodInfo*))List_1_get_Item_m10387_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10388_gshared (List_1_t202 * __this, int32_t ___index, UIVertex_t209  ___value, const MethodInfo* method);
#define List_1_set_Item_m10388(__this, ___index, ___value, method) (( void (*) (List_1_t202 *, int32_t, UIVertex_t209 , const MethodInfo*))List_1_set_Item_m10388_gshared)(__this, ___index, ___value, method)
