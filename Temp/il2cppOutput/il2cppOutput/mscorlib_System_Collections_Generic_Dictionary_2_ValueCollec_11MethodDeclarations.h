#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2111;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2103;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t2381;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Int64[]
struct Int64U5BU5D_t1474;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_12.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m10653_gshared (ValueCollection_t2111 * __this, Dictionary_2_t2103 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m10653(__this, ___dictionary, method) (( void (*) (ValueCollection_t2111 *, Dictionary_2_t2103 *, const MethodInfo*))ValueCollection__ctor_m10653_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m10654_gshared (ValueCollection_t2111 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m10654(__this, ___item, method) (( void (*) (ValueCollection_t2111 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m10654_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m10655_gshared (ValueCollection_t2111 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m10655(__this, method) (( void (*) (ValueCollection_t2111 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m10655_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m10656_gshared (ValueCollection_t2111 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m10656(__this, ___item, method) (( bool (*) (ValueCollection_t2111 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m10656_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m10657_gshared (ValueCollection_t2111 * __this, int64_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m10657(__this, ___item, method) (( bool (*) (ValueCollection_t2111 *, int64_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m10657_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m10658_gshared (ValueCollection_t2111 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m10658(__this, method) (( Object_t* (*) (ValueCollection_t2111 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m10658_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m10659_gshared (ValueCollection_t2111 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m10659(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2111 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m10659_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m10660_gshared (ValueCollection_t2111 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m10660(__this, method) (( Object_t * (*) (ValueCollection_t2111 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m10660_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m10661_gshared (ValueCollection_t2111 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m10661(__this, method) (( bool (*) (ValueCollection_t2111 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m10661_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m10662_gshared (ValueCollection_t2111 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m10662(__this, method) (( Object_t * (*) (ValueCollection_t2111 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m10662_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m10663_gshared (ValueCollection_t2111 * __this, Int64U5BU5D_t1474* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m10663(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2111 *, Int64U5BU5D_t1474*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m10663_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2112  ValueCollection_GetEnumerator_m10664_gshared (ValueCollection_t2111 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m10664(__this, method) (( Enumerator_t2112  (*) (ValueCollection_t2111 *, const MethodInfo*))ValueCollection_GetEnumerator_m10664_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m10665_gshared (ValueCollection_t2111 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m10665(__this, method) (( int32_t (*) (ValueCollection_t2111 *, const MethodInfo*))ValueCollection_get_Count_m10665_gshared)(__this, method)
