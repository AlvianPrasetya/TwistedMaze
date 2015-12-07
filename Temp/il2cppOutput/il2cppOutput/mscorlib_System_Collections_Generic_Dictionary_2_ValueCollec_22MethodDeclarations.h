#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t2235;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2228;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t2456;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Byte[]
struct ByteU5BU5D_t151;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_23.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m12194_gshared (ValueCollection_t2235 * __this, Dictionary_2_t2228 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m12194(__this, ___dictionary, method) (( void (*) (ValueCollection_t2235 *, Dictionary_2_t2228 *, const MethodInfo*))ValueCollection__ctor_m12194_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12195_gshared (ValueCollection_t2235 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12195(__this, ___item, method) (( void (*) (ValueCollection_t2235 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12195_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12196_gshared (ValueCollection_t2235 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12196(__this, method) (( void (*) (ValueCollection_t2235 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12196_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12197_gshared (ValueCollection_t2235 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12197(__this, ___item, method) (( bool (*) (ValueCollection_t2235 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12197_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12198_gshared (ValueCollection_t2235 * __this, uint8_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12198(__this, ___item, method) (( bool (*) (ValueCollection_t2235 *, uint8_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12198_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12199_gshared (ValueCollection_t2235 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12199(__this, method) (( Object_t* (*) (ValueCollection_t2235 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12199_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m12200_gshared (ValueCollection_t2235 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m12200(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2235 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m12200_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12201_gshared (ValueCollection_t2235 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12201(__this, method) (( Object_t * (*) (ValueCollection_t2235 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12201_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12202_gshared (ValueCollection_t2235 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12202(__this, method) (( bool (*) (ValueCollection_t2235 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12202_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m12203_gshared (ValueCollection_t2235 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m12203(__this, method) (( Object_t * (*) (ValueCollection_t2235 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m12203_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m12204_gshared (ValueCollection_t2235 * __this, ByteU5BU5D_t151* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m12204(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2235 *, ByteU5BU5D_t151*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m12204_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t2236  ValueCollection_GetEnumerator_m12205_gshared (ValueCollection_t2235 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m12205(__this, method) (( Enumerator_t2236  (*) (ValueCollection_t2235 *, const MethodInfo*))ValueCollection_GetEnumerator_m12205_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m12206_gshared (ValueCollection_t2235 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m12206(__this, method) (( int32_t (*) (ValueCollection_t2235 *, const MethodInfo*))ValueCollection_get_Count_m12206_gshared)(__this, method)
