#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2281;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Object[]
struct ObjectU5BU5D_t40;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t485;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t492;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m12538_gshared (Collection_1_t2281 * __this, const MethodInfo* method);
#define Collection_1__ctor_m12538(__this, method) (( void (*) (Collection_1_t2281 *, const MethodInfo*))Collection_1__ctor_m12538_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12539_gshared (Collection_1_t2281 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12539(__this, method) (( bool (*) (Collection_1_t2281 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12539_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12540_gshared (Collection_1_t2281 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m12540(__this, ___array, ___index, method) (( void (*) (Collection_1_t2281 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12540_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12541_gshared (Collection_1_t2281 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12541(__this, method) (( Object_t * (*) (Collection_1_t2281 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12541_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12542_gshared (Collection_1_t2281 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m12542(__this, ___value, method) (( int32_t (*) (Collection_1_t2281 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m12542_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m12543_gshared (Collection_1_t2281 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m12543(__this, ___value, method) (( bool (*) (Collection_1_t2281 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m12543_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12544_gshared (Collection_1_t2281 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m12544(__this, ___value, method) (( int32_t (*) (Collection_1_t2281 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12544_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m12545_gshared (Collection_1_t2281 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m12545(__this, ___index, ___value, method) (( void (*) (Collection_1_t2281 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m12545_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m12546_gshared (Collection_1_t2281 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m12546(__this, ___value, method) (( void (*) (Collection_1_t2281 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m12546_gshared)(__this, ___value, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12547_gshared (Collection_1_t2281 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12547(__this, method) (( Object_t * (*) (Collection_1_t2281 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12547_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12548_gshared (Collection_1_t2281 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m12548(__this, ___index, method) (( Object_t * (*) (Collection_1_t2281 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12548_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m12549_gshared (Collection_1_t2281 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m12549(__this, ___index, ___value, method) (( void (*) (Collection_1_t2281 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12549_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m12550_gshared (Collection_1_t2281 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m12550(__this, ___item, method) (( void (*) (Collection_1_t2281 *, Object_t *, const MethodInfo*))Collection_1_Add_m12550_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m12551_gshared (Collection_1_t2281 * __this, const MethodInfo* method);
#define Collection_1_Clear_m12551(__this, method) (( void (*) (Collection_1_t2281 *, const MethodInfo*))Collection_1_Clear_m12551_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m12552_gshared (Collection_1_t2281 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m12552(__this, method) (( void (*) (Collection_1_t2281 *, const MethodInfo*))Collection_1_ClearItems_m12552_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m12553_gshared (Collection_1_t2281 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m12553(__this, ___item, method) (( bool (*) (Collection_1_t2281 *, Object_t *, const MethodInfo*))Collection_1_Contains_m12553_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m12554_gshared (Collection_1_t2281 * __this, ObjectU5BU5D_t40* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m12554(__this, ___array, ___index, method) (( void (*) (Collection_1_t2281 *, ObjectU5BU5D_t40*, int32_t, const MethodInfo*))Collection_1_CopyTo_m12554_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m12555_gshared (Collection_1_t2281 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m12555(__this, method) (( Object_t* (*) (Collection_1_t2281 *, const MethodInfo*))Collection_1_GetEnumerator_m12555_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12556_gshared (Collection_1_t2281 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m12556(__this, ___item, method) (( int32_t (*) (Collection_1_t2281 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m12556_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m12557_gshared (Collection_1_t2281 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m12557(__this, ___index, ___item, method) (( void (*) (Collection_1_t2281 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m12557_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12558_gshared (Collection_1_t2281 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m12558(__this, ___index, ___item, method) (( void (*) (Collection_1_t2281 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m12558_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m12559_gshared (Collection_1_t2281 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m12559(__this, ___item, method) (( bool (*) (Collection_1_t2281 *, Object_t *, const MethodInfo*))Collection_1_Remove_m12559_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12560_gshared (Collection_1_t2281 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m12560(__this, ___index, method) (( void (*) (Collection_1_t2281 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m12560_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12561_gshared (Collection_1_t2281 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m12561(__this, ___index, method) (( void (*) (Collection_1_t2281 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m12561_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12562_gshared (Collection_1_t2281 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m12562(__this, method) (( int32_t (*) (Collection_1_t2281 *, const MethodInfo*))Collection_1_get_Count_m12562_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m12563_gshared (Collection_1_t2281 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m12563(__this, ___index, method) (( Object_t * (*) (Collection_1_t2281 *, int32_t, const MethodInfo*))Collection_1_get_Item_m12563_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12564_gshared (Collection_1_t2281 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m12564(__this, ___index, ___value, method) (( void (*) (Collection_1_t2281 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m12564_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12565_gshared (Collection_1_t2281 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m12565(__this, ___index, ___item, method) (( void (*) (Collection_1_t2281 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m12565_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m12566_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m12566(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m12566_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m12567_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m12567(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m12567_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m12568_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m12568(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m12568_gshared)(__this /* static, unused */, ___list, method)
