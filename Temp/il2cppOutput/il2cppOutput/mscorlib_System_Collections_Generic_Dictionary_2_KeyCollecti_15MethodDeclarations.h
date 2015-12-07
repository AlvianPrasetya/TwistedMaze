#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct KeyCollection_t2150;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct Dictionary_2_t233;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Networking.Types.NetworkID>
struct IEnumerator_1_t2396;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// UnityEngine.Networking.Types.NetworkID[]
struct NetworkIDU5BU5D_t2127;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_31.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_13MethodDeclarations.h"
#define KeyCollection__ctor_m11030(__this, ___dictionary, method) (( void (*) (KeyCollection_t2150 *, Dictionary_2_t233 *, const MethodInfo*))KeyCollection__ctor_m10939_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m11031(__this, ___item, method) (( void (*) (KeyCollection_t2150 *, uint64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m10940_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m11032(__this, method) (( void (*) (KeyCollection_t2150 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m10941_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m11033(__this, ___item, method) (( bool (*) (KeyCollection_t2150 *, uint64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m10942_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m11034(__this, ___item, method) (( bool (*) (KeyCollection_t2150 *, uint64_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m10943_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m11035(__this, method) (( Object_t* (*) (KeyCollection_t2150 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m10944_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m11036(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2150 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m10945_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m11037(__this, method) (( Object_t * (*) (KeyCollection_t2150 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m10946_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m11038(__this, method) (( bool (*) (KeyCollection_t2150 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m10947_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m11039(__this, method) (( Object_t * (*) (KeyCollection_t2150 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m10948_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m11040(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2150 *, NetworkIDU5BU5D_t2127*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m10949_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::GetEnumerator()
#define KeyCollection_GetEnumerator_m11041(__this, method) (( Enumerator_t2397  (*) (KeyCollection_t2150 *, const MethodInfo*))KeyCollection_GetEnumerator_m10950_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::get_Count()
#define KeyCollection_get_Count_m11042(__this, method) (( int32_t (*) (KeyCollection_t2150 *, const MethodInfo*))KeyCollection_get_Count_m10951_gshared)(__this, method)
