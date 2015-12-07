#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct ValueCollection_t2151;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct Dictionary_2_t233;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t231;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Types.NetworkAccessToken>
struct IEnumerator_1_t2398;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// UnityEngine.Networking.Types.NetworkAccessToken[]
struct NetworkAccessTokenU5BU5D_t2128;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_31.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_14MethodDeclarations.h"
#define ValueCollection__ctor_m11043(__this, ___dictionary, method) (( void (*) (ValueCollection_t2151 *, Dictionary_2_t233 *, const MethodInfo*))ValueCollection__ctor_m10973_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m11044(__this, ___item, method) (( void (*) (ValueCollection_t2151 *, NetworkAccessToken_t231 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m10974_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m11045(__this, method) (( void (*) (ValueCollection_t2151 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m10975_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m11046(__this, ___item, method) (( bool (*) (ValueCollection_t2151 *, NetworkAccessToken_t231 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m10976_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m11047(__this, ___item, method) (( bool (*) (ValueCollection_t2151 *, NetworkAccessToken_t231 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m10977_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m11048(__this, method) (( Object_t* (*) (ValueCollection_t2151 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m10978_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m11049(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2151 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m10979_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m11050(__this, method) (( Object_t * (*) (ValueCollection_t2151 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m10980_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m11051(__this, method) (( bool (*) (ValueCollection_t2151 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m10981_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m11052(__this, method) (( Object_t * (*) (ValueCollection_t2151 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m10982_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m11053(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2151 *, NetworkAccessTokenU5BU5D_t2128*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m10983_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetEnumerator()
#define ValueCollection_GetEnumerator_m11054(__this, method) (( Enumerator_t2399  (*) (ValueCollection_t2151 *, const MethodInfo*))ValueCollection_GetEnumerator_m10984_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Count()
#define ValueCollection_get_Count_m11055(__this, method) (( int32_t (*) (ValueCollection_t2151 *, const MethodInfo*))ValueCollection_get_Count_m10985_gshared)(__this, method)
