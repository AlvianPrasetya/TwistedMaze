#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2060;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2057;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t485;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Object[]
struct ObjectU5BU5D_t40;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m9981_gshared (KeyCollection_t2060 * __this, Dictionary_2_t2057 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m9981(__this, ___dictionary, method) (( void (*) (KeyCollection_t2060 *, Dictionary_2_t2057 *, const MethodInfo*))KeyCollection__ctor_m9981_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m9982_gshared (KeyCollection_t2060 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m9982(__this, ___item, method) (( void (*) (KeyCollection_t2060 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m9982_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m9983_gshared (KeyCollection_t2060 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m9983(__this, method) (( void (*) (KeyCollection_t2060 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m9983_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m9984_gshared (KeyCollection_t2060 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m9984(__this, ___item, method) (( bool (*) (KeyCollection_t2060 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m9984_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m9985_gshared (KeyCollection_t2060 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m9985(__this, ___item, method) (( bool (*) (KeyCollection_t2060 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m9985_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m9986_gshared (KeyCollection_t2060 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m9986(__this, method) (( Object_t* (*) (KeyCollection_t2060 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m9986_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m9987_gshared (KeyCollection_t2060 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m9987(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2060 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m9987_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m9988_gshared (KeyCollection_t2060 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m9988(__this, method) (( Object_t * (*) (KeyCollection_t2060 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m9988_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m9989_gshared (KeyCollection_t2060 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m9989(__this, method) (( bool (*) (KeyCollection_t2060 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m9989_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m9990_gshared (KeyCollection_t2060 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m9990(__this, method) (( Object_t * (*) (KeyCollection_t2060 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m9990_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m9991_gshared (KeyCollection_t2060 * __this, ObjectU5BU5D_t40* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m9991(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2060 *, ObjectU5BU5D_t40*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m9991_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2061  KeyCollection_GetEnumerator_m9992_gshared (KeyCollection_t2060 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m9992(__this, method) (( Enumerator_t2061  (*) (KeyCollection_t2060 *, const MethodInfo*))KeyCollection_GetEnumerator_m9992_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m9993_gshared (KeyCollection_t2060 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m9993(__this, method) (( int32_t (*) (KeyCollection_t2060 *, const MethodInfo*))KeyCollection_get_Count_m9993_gshared)(__this, method)
