#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_25.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_25MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20MethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12382_gshared (Enumerator_t2255 * __this, Dictionary_2_t635 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t635 * L_0 = ___host;
		NullCheck((Dictionary_2_t635 *)L_0);
		Enumerator_t2256  L_1 = (( Enumerator_t2256  (*) (Dictionary_2_t635 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t635 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12383_gshared (Enumerator_t2255 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2256 * L_0 = (Enumerator_t2256 *)&(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2256 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12384_gshared (Enumerator_t2255 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2256 * L_0 = (Enumerator_t2256 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2256 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12385_gshared (Enumerator_t2255 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2256 * L_0 = (Enumerator_t2256 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2256 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m12386_gshared (Enumerator_t2255 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2256 * L_0 = (Enumerator_t2256 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2252 * L_1 = (KeyValuePair_2_t2252 *)&(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2252 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2252 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.Link
#include "mscorlib_System_Collections_Generic_Link.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12387_gshared (Enumerator_t2256 * __this, Dictionary_2_t635 * ___dictionary, const MethodInfo* method)
{
	{
		Dictionary_2_t635 * L_0 = ___dictionary;
		__this->___dictionary_0 = L_0;
		Dictionary_2_t635 * L_1 = ___dictionary;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)(L_1->___generation_14);
		__this->___stamp_2 = L_2;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12388_gshared (Enumerator_t2256 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2256 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2252  L_0 = (KeyValuePair_2_t2252 )(__this->___current_3);
		KeyValuePair_2_t2252  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t699  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12389_gshared (Enumerator_t2256 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2256 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2252 * L_0 = (KeyValuePair_2_t2252 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2252 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2252 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_2);
		KeyValuePair_2_t2252 * L_4 = (KeyValuePair_2_t2252 *)&(__this->___current_3);
		int32_t L_5 = (( int32_t (*) (KeyValuePair_2_t2252 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2252 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_6);
		DictionaryEntry_t699  L_8 = {0};
		DictionaryEntry__ctor_m2627(&L_8, (Object_t *)L_3, (Object_t *)L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12390_gshared (Enumerator_t2256 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((Enumerator_t2256 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), &L_1);
		return L_2;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12391_gshared (Enumerator_t2256 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (( int32_t (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((Enumerator_t2256 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12392_gshared (Enumerator_t2256 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		(( void (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2256 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		goto IL_0072;
	}

IL_0013:
	{
		int32_t L_1 = (int32_t)(__this->___next_1);
		int32_t L_2 = (int32_t)L_1;
		V_1 = (int32_t)L_2;
		__this->___next_1 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_1;
		V_0 = (int32_t)L_3;
		Dictionary_2_t635 * L_4 = (Dictionary_2_t635 *)(__this->___dictionary_0);
		NullCheck(L_4);
		LinkU5BU5D_t2009* L_5 = (LinkU5BU5D_t2009*)(L_4->___linkSlots_5);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = (int32_t)(((Link_t1021 *)(Link_t1021 *)SZArrayLdElema(L_5, L_6))->___HashCode_0);
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)-2147483648))))
		{
			goto IL_0072;
		}
	}
	{
		Dictionary_2_t635 * L_8 = (Dictionary_2_t635 *)(__this->___dictionary_0);
		NullCheck(L_8);
		Int32U5BU5D_t634* L_9 = (Int32U5BU5D_t634*)(L_8->___keySlots_6);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Dictionary_2_t635 * L_12 = (Dictionary_2_t635 *)(__this->___dictionary_0);
		NullCheck(L_12);
		Int32U5BU5D_t634* L_13 = (Int32U5BU5D_t634*)(L_12->___valueSlots_7);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		KeyValuePair_2_t2252  L_16 = {0};
		(( void (*) (KeyValuePair_2_t2252 *, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(&L_16, (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_11)), (int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_13, L_15)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		__this->___current_3 = L_16;
		return 1;
	}

IL_0072:
	{
		int32_t L_17 = (int32_t)(__this->___next_1);
		Dictionary_2_t635 * L_18 = (Dictionary_2_t635 *)(__this->___dictionary_0);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)(L_18->___touchedSlots_8);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0013;
		}
	}
	{
		__this->___next_1 = (-1);
		return 0;
	}
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2252  Enumerator_get_Current_m12393_gshared (Enumerator_t2256 * __this, const MethodInfo* method)
{
	{
		KeyValuePair_2_t2252  L_0 = (KeyValuePair_2_t2252 )(__this->___current_3);
		return L_0;
	}
}
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12394_gshared (Enumerator_t2256 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2256 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2252 * L_0 = (KeyValuePair_2_t2252 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2252 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((KeyValuePair_2_t2252 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12395_gshared (Enumerator_t2256 * __this, const MethodInfo* method)
{
	{
		(( void (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Enumerator_t2256 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		KeyValuePair_2_t2252 * L_0 = (KeyValuePair_2_t2252 *)&(__this->___current_3);
		int32_t L_1 = (( int32_t (*) (KeyValuePair_2_t2252 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2252 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern TypeInfo* ObjectDisposedException_t904_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyState_m12396_gshared (Enumerator_t2256 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t904_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1607);
		InvalidOperationException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t635 * L_0 = (Dictionary_2_t635 *)(__this->___dictionary_0);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ObjectDisposedException_t904 * L_1 = (ObjectDisposedException_t904 *)il2cpp_codegen_object_new (ObjectDisposedException_t904_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3762(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		Dictionary_2_t635 * L_2 = (Dictionary_2_t635 *)(__this->___dictionary_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)(L_2->___generation_14);
		int32_t L_4 = (int32_t)(__this->___stamp_2);
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t711 * L_5 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_5, (String_t*)(String_t*) &_stringLiteral1270, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" void Enumerator_VerifyCurrent_m12397_gshared (Enumerator_t2256 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		(( void (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)((Enumerator_t2256 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		int32_t L_0 = (int32_t)(__this->___next_1);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t711 * L_1 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_1, (String_t*)(String_t*) &_stringLiteral1271, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12398_gshared (Enumerator_t2256 * __this, const MethodInfo* method)
{
	{
		__this->___dictionary_0 = (Dictionary_2_t635 *)NULL;
		return;
	}
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_40.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_40MethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12399_gshared (Transform_1_t2257 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m12400_gshared (Transform_1_t2257 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12400((Transform_1_t2257 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m12401_gshared (Transform_1_t2257 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t41_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Int32_t41_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m12402_gshared (Transform_1_t2257 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_25.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_25MethodDeclarations.h"

// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_26MethodDeclarations.h"
struct Dictionary_2_t635;
struct Array_t;
struct Transform_1_t2257;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_ICollectionCopyTo<System.Int32>(System.Array,System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_ICollectionCopyTo_TisInt32_t41_m13231_gshared (Dictionary_2_t635 * __this, Array_t * p0, int32_t p1, Transform_1_t2257 * p2, const MethodInfo* method);
#define Dictionary_2_Do_ICollectionCopyTo_TisInt32_t41_m13231(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t635 *, Array_t *, int32_t, Transform_1_t2257 *, const MethodInfo*))Dictionary_2_Do_ICollectionCopyTo_TisInt32_t41_m13231_gshared)(__this, p0, p1, p2, method)
struct Dictionary_2_t635;
struct Int32U5BU5D_t634;
struct Transform_1_t2257;
// Declaration System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Do_CopyTo<System.Int32,System.Int32>(!!1[],System.Int32,System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,!!0>)
extern "C" void Dictionary_2_Do_CopyTo_TisInt32_t41_TisInt32_t41_m13232_gshared (Dictionary_2_t635 * __this, Int32U5BU5D_t634* p0, int32_t p1, Transform_1_t2257 * p2, const MethodInfo* method);
#define Dictionary_2_Do_CopyTo_TisInt32_t41_TisInt32_t41_m13232(__this, p0, p1, p2, method) (( void (*) (Dictionary_2_t635 *, Int32U5BU5D_t634*, int32_t, Transform_1_t2257 *, const MethodInfo*))Dictionary_2_Do_CopyTo_TisInt32_t41_TisInt32_t41_m13232_gshared)(__this, p0, p1, p2, method)


// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern TypeInfo* ArgumentNullException_t387_il2cpp_TypeInfo_var;
extern "C" void ValueCollection__ctor_m12403_gshared (ValueCollection_t2258 * __this, Dictionary_2_t635 * ___dictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(191);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t635 * L_0 = ___dictionary;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t387 * L_1 = (ArgumentNullException_t387 *)il2cpp_codegen_object_new (ArgumentNullException_t387_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1507(L_1, (String_t*)(String_t*) &_stringLiteral1261, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Dictionary_2_t635 * L_2 = ___dictionary;
		__this->___dictionary_0 = L_2;
		return;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m12404_gshared (ValueCollection_t2258 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2643(L_0, (String_t*)(String_t*) &_stringLiteral1272, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m12405_gshared (ValueCollection_t2258 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2643(L_0, (String_t*)(String_t*) &_stringLiteral1272, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m12406_gshared (ValueCollection_t2258 * __this, int32_t ___item, const MethodInfo* method)
{
	{
		Dictionary_2_t635 * L_0 = (Dictionary_2_t635 *)(__this->___dictionary_0);
		int32_t L_1 = ___item;
		NullCheck((Dictionary_2_t635 *)L_0);
		bool L_2 = (( bool (*) (Dictionary_2_t635 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t635 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m12407_gshared (ValueCollection_t2258 * __this, int32_t ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2643(L_0, (String_t*)(String_t*) &_stringLiteral1272, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m12408_gshared (ValueCollection_t2258 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2258 *)__this);
		Enumerator_t2259  L_0 = (( Enumerator_t2259  (*) (ValueCollection_t2258 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2258 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2259  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t*)L_2;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m12409_gshared (ValueCollection_t2258 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	Int32U5BU5D_t634* V_0 = {0};
	{
		Array_t * L_0 = ___array;
		V_0 = (Int32U5BU5D_t634*)((Int32U5BU5D_t634*)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)));
		Int32U5BU5D_t634* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Int32U5BU5D_t634* L_2 = V_0;
		int32_t L_3 = ___index;
		NullCheck((ValueCollection_t2258 *)__this);
		VirtActionInvoker2< Int32U5BU5D_t634*, int32_t >::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::CopyTo(TValue[],System.Int32) */, (ValueCollection_t2258 *)__this, (Int32U5BU5D_t634*)L_2, (int32_t)L_3);
		return;
	}

IL_0013:
	{
		Dictionary_2_t635 * L_4 = (Dictionary_2_t635 *)(__this->___dictionary_0);
		Array_t * L_5 = ___array;
		int32_t L_6 = ___index;
		NullCheck((Dictionary_2_t635 *)L_4);
		(( void (*) (Dictionary_2_t635 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t635 *)L_4, (Array_t *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t635 * L_7 = (Dictionary_2_t635 *)(__this->___dictionary_0);
		Array_t * L_8 = ___array;
		int32_t L_9 = ___index;
		IntPtr_t L_10 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2257 * L_11 = (Transform_1_t2257 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2257 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_11, (Object_t *)NULL, (IntPtr_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t635 *)L_7);
		(( void (*) (Dictionary_2_t635 *, Array_t *, int32_t, Transform_1_t2257 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)((Dictionary_2_t635 *)L_7, (Array_t *)L_8, (int32_t)L_9, (Transform_1_t2257 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m12410_gshared (ValueCollection_t2258 * __this, const MethodInfo* method)
{
	{
		NullCheck((ValueCollection_t2258 *)__this);
		Enumerator_t2259  L_0 = (( Enumerator_t2259  (*) (ValueCollection_t2258 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((ValueCollection_t2258 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		Enumerator_t2259  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		return (Object_t *)L_2;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m12411_gshared (ValueCollection_t2258 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern TypeInfo* ICollection_t489_il2cpp_TypeInfo_var;
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m12412_gshared (ValueCollection_t2258 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(806);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t635 * L_0 = (Dictionary_2_t635 *)(__this->___dictionary_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t489_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m12413_gshared (ValueCollection_t2258 * __this, Int32U5BU5D_t634* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Dictionary_2_t635 * L_0 = (Dictionary_2_t635 *)(__this->___dictionary_0);
		Int32U5BU5D_t634* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Dictionary_2_t635 *)L_0);
		(( void (*) (Dictionary_2_t635 *, Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((Dictionary_2_t635 *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		Dictionary_2_t635 * L_3 = (Dictionary_2_t635 *)(__this->___dictionary_0);
		Int32U5BU5D_t634* L_4 = ___array;
		int32_t L_5 = ___index;
		IntPtr_t L_6 = { (void*)IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6) };
		Transform_1_t2257 * L_7 = (Transform_1_t2257 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		(( void (*) (Transform_1_t2257 *, Object_t *, IntPtr_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(L_7, (Object_t *)NULL, (IntPtr_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		NullCheck((Dictionary_2_t635 *)L_3);
		(( void (*) (Dictionary_2_t635 *, Int32U5BU5D_t634*, int32_t, Transform_1_t2257 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10)->method)((Dictionary_2_t635 *)L_3, (Int32U5BU5D_t634*)L_4, (int32_t)L_5, (Transform_1_t2257 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 10));
		return;
	}
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2259  ValueCollection_GetEnumerator_m12414_gshared (ValueCollection_t2258 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t635 * L_0 = (Dictionary_2_t635 *)(__this->___dictionary_0);
		Enumerator_t2259  L_1 = {0};
		(( void (*) (Enumerator_t2259 *, Dictionary_2_t635 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11)->method)(&L_1, (Dictionary_2_t635 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11));
		return L_1;
	}
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m12415_gshared (ValueCollection_t2258 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t635 * L_0 = (Dictionary_2_t635 *)(__this->___dictionary_0);
		NullCheck((Dictionary_2_t635 *)L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count() */, (Dictionary_2_t635 *)L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12416_gshared (Enumerator_t2259 * __this, Dictionary_2_t635 * ___host, const MethodInfo* method)
{
	{
		Dictionary_2_t635 * L_0 = ___host;
		NullCheck((Dictionary_2_t635 *)L_0);
		Enumerator_t2256  L_1 = (( Enumerator_t2256  (*) (Dictionary_2_t635 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t635 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12417_gshared (Enumerator_t2259 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2256 * L_0 = (Enumerator_t2256 *)&(__this->___host_enumerator_0);
		int32_t L_1 = (( int32_t (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2256 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_2);
		return L_3;
	}
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12418_gshared (Enumerator_t2259 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2256 * L_0 = (Enumerator_t2256 *)&(__this->___host_enumerator_0);
		(( void (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2256 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12419_gshared (Enumerator_t2259 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2256 * L_0 = (Enumerator_t2256 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((Enumerator_t2256 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return L_1;
	}
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m12420_gshared (Enumerator_t2259 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2256 * L_0 = (Enumerator_t2256 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2252 * L_1 = (KeyValuePair_2_t2252 *)&(L_0->___current_3);
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2252 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)((KeyValuePair_2_t2252 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_41.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_41MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12421_gshared (Transform_1_t2251 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t699  Transform_1_Invoke_m12422_gshared (Transform_1_t2251 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12422((Transform_1_t2251 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef DictionaryEntry_t699  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef DictionaryEntry_t699  (*FunctionPointerType) (Object_t * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m12423_gshared (Transform_1_t2251 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t41_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Int32_t41_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t699  Transform_1_EndInvoke_m12424_gshared (Transform_1_t2251 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(DictionaryEntry_t699 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_42.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_42MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m12425_gshared (Transform_1_t2260 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2252  Transform_1_Invoke_m12426_gshared (Transform_1_t2260 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Transform_1_Invoke_m12426((Transform_1_t2260 *)__this->___prev_9,___key, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef KeyValuePair_2_t2252  (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef KeyValuePair_2_t2252  (*FunctionPointerType) (Object_t * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___key, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_1_BeginInvoke_m12427_gshared (Transform_1_t2260 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t41_il2cpp_TypeInfo_var, &___key);
	__d_args[1] = Box(Int32_t41_il2cpp_TypeInfo_var, &___value);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2252  Transform_1_EndInvoke_m12428_gshared (Transform_1_t2260 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(KeyValuePair_2_t2252 *)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_6.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ShimEnumera_6MethodDeclarations.h"



// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12429_gshared (ShimEnumerator_t2261 * __this, Dictionary_2_t635 * ___host, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		Dictionary_2_t635 * L_0 = ___host;
		NullCheck((Dictionary_2_t635 *)L_0);
		Enumerator_t2256  L_1 = (( Enumerator_t2256  (*) (Dictionary_2_t635 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Dictionary_2_t635 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		__this->___host_enumerator_0 = L_1;
		return;
	}
}
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12430_gshared (ShimEnumerator_t2261 * __this, const MethodInfo* method)
{
	{
		Enumerator_t2256 * L_0 = (Enumerator_t2256 *)&(__this->___host_enumerator_0);
		bool L_1 = (( bool (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Enumerator_t2256 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_1;
	}
}
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern TypeInfo* IDictionaryEnumerator_t698_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t699  ShimEnumerator_get_Entry_m12431_gshared (ShimEnumerator_t2261 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1069);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t2256  L_0 = (Enumerator_t2256 )(__this->___host_enumerator_0);
		Enumerator_t2256  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_1);
		NullCheck((Object_t *)L_2);
		DictionaryEntry_t699  L_3 = (DictionaryEntry_t699 )InterfaceFuncInvoker0< DictionaryEntry_t699  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t698_il2cpp_TypeInfo_var, (Object_t *)L_2);
		return L_3;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12432_gshared (ShimEnumerator_t2261 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2252  V_0 = {0};
	{
		Enumerator_t2256 * L_0 = (Enumerator_t2256 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2252  L_1 = (( KeyValuePair_2_t2252  (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2256 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2252 )L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2252 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((KeyValuePair_2_t2252 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12433_gshared (ShimEnumerator_t2261 * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2252  V_0 = {0};
	{
		Enumerator_t2256 * L_0 = (Enumerator_t2256 *)&(__this->___host_enumerator_0);
		KeyValuePair_2_t2252  L_1 = (( KeyValuePair_2_t2252  (*) (Enumerator_t2256 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->method)((Enumerator_t2256 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		V_0 = (KeyValuePair_2_t2252 )L_1;
		int32_t L_2 = (( int32_t (*) (KeyValuePair_2_t2252 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)((KeyValuePair_2_t2252 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7), &L_3);
		return L_4;
	}
}
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern TypeInfo* DictionaryEntry_t699_il2cpp_TypeInfo_var;
extern "C" Object_t * ShimEnumerator_get_Current_m12434_gshared (ShimEnumerator_t2261 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEntry_t699_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1034);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((ShimEnumerator_t2261 *)__this);
		DictionaryEntry_t699  L_0 = (DictionaryEntry_t699 )VirtFuncInvoker0< DictionaryEntry_t699  >::Invoke(6 /* System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry() */, (ShimEnumerator_t2261 *)__this);
		DictionaryEntry_t699  L_1 = L_0;
		Object_t * L_2 = Box(DictionaryEntry_t699_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.Int32>::Compare(T,T)
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Comparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_genMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultComparMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.ctor()
extern "C" void Comparer_1__ctor_m12435_gshared (Comparer_1_t2262 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Int32>::.cctor()
extern const Il2CppType* GenericComparer_1_t1530_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t247_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m12436_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t1530_0_0_0_var = il2cpp_codegen_type_from_index(2913);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		TypeU5BU5D_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(224);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(GenericComparer_1_t1530_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t247* L_4 = (TypeU5BU5D_t247*)((TypeU5BU5D_t247*)SZArrayNew(TypeU5BU5D_t247_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t247* >::Invoke(78 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t247*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m1429(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t2262_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2262 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t2264 * L_8 = (DefaultComparer_t2264 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2264 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2262_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t362_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m12437_gshared (Comparer_1_t2262 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t2262 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::Compare(T,T) */, (Comparer_1_t2262 *)__this, (int32_t)((*(int32_t*)((int32_t*)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (int32_t)((*(int32_t*)((int32_t*)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t362 * L_8 = (ArgumentException_t362 *)il2cpp_codegen_object_new (ArgumentException_t362_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m7534(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Int32>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Int32>::get_Default()
extern "C" Comparer_1_t2262 * Comparer_1_get_Default_m12438_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2262 * L_0 = ((Comparer_1_t2262_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
// System.Collections.Generic.GenericComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericComparer`1<System.Int32>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_3MethodDeclarations.h"



// System.Void System.Collections.Generic.GenericComparer`1<System.Int32>::.ctor()
extern TypeInfo* Comparer_1_t2262_il2cpp_TypeInfo_var;
extern "C" void GenericComparer_1__ctor_m12439_gshared (GenericComparer_1_t2263 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t2262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5016);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t2262 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2262_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t2262 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2262 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Int32>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12440_gshared (GenericComparer_1_t2263 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___x;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___y;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		int32_t L_6 = ___y;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		int32_t L_9 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.IComparable`1<System.Int32>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (int32_t)L_9);
		return L_10;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<System.Int32>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::.ctor()
extern TypeInfo* Comparer_1_t2262_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m12441_gshared (DefaultComparer_t2264 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t2262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5016);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t2262 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2262_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t2262 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2262 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Int32>::Compare(T,T)
extern TypeInfo* IComparable_t457_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t362_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m12442_gshared (DefaultComparer_t2264 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(319);
		ArgumentException_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = ___x;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___y;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		if (L_5)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		int32_t L_6 = ___y;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		if (L_8)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		int32_t L_9 = ___x;
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_12 = ___x;
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		int32_t L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* System.Int32 System.IComparable`1<System.Int32>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (int32_t)L_15);
		return L_16;
	}

IL_003e:
	{
		int32_t L_17 = ___x;
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t457_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_20 = ___x;
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		int32_t L_23 = ___y;
		int32_t L_24 = L_23;
		Object_t * L_25 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_24);
		NullCheck((Object_t *)((Object_t *)Castclass(L_22, IComparable_t457_il2cpp_TypeInfo_var)));
		int32_t L_26 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t457_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_22, IComparable_t457_il2cpp_TypeInfo_var)), (Object_t *)L_25);
		return L_26;
	}

IL_0062:
	{
		ArgumentException_t362 * L_27 = (ArgumentException_t362 *)il2cpp_codegen_object_new (ArgumentException_t362_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1414(L_27, (String_t*)(String_t*) &_stringLiteral1260, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"


// T System.Collections.Generic.IEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_54MethodDeclarations.h"

// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Text.RegularExpressions.Mark>(System.Int32)
extern "C" Mark_t651  Array_InternalArray__get_Item_TisMark_t651_m13239_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisMark_t651_m13239(__this, p0, method) (( Mark_t651  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisMark_t651_m13239_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12443_gshared (InternalEnumerator_1_t2265 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12444_gshared (InternalEnumerator_1_t2265 * __this, const MethodInfo* method)
{
	{
		Mark_t651  L_0 = (( Mark_t651  (*) (InternalEnumerator_1_t2265 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2265 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Mark_t651  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12445_gshared (InternalEnumerator_1_t2265 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12446_gshared (InternalEnumerator_1_t2265 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2629((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Text.RegularExpressions.Mark>::get_Current()
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" Mark_t651  InternalEnumerator_1_get_Current_m12447_gshared (InternalEnumerator_1_t2265 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t711 * L_1 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_1, (String_t*)(String_t*) &_stringLiteral1135, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t711 * L_3 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_3, (String_t*)(String_t*) &_stringLiteral1136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2629((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Mark_t651  L_8 = (( Mark_t651  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "System_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Text.RegularExpressions.Mark>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Text.RegularExpressions.Mark>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Text.RegularExpressions.Mark>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"


// T System.Collections.Generic.IEnumerator`1<System.Uri/UriScheme>::get_Current()
// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_55.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Uri/UriScheme>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_55MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Uri/UriScheme>(System.Int32)
extern "C" UriScheme_t687  Array_InternalArray__get_Item_TisUriScheme_t687_m13250_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUriScheme_t687_m13250(__this, p0, method) (( UriScheme_t687  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUriScheme_t687_m13250_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12448_gshared (InternalEnumerator_1_t2266 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Uri/UriScheme>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12449_gshared (InternalEnumerator_1_t2266 * __this, const MethodInfo* method)
{
	{
		UriScheme_t687  L_0 = (( UriScheme_t687  (*) (InternalEnumerator_1_t2266 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2266 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		UriScheme_t687  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Uri/UriScheme>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12450_gshared (InternalEnumerator_1_t2266 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Uri/UriScheme>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12451_gshared (InternalEnumerator_1_t2266 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2629((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Uri/UriScheme>::get_Current()
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" UriScheme_t687  InternalEnumerator_1_get_Current_m12452_gshared (InternalEnumerator_1_t2266 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t711 * L_1 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_1, (String_t*)(String_t*) &_stringLiteral1135, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t711 * L_3 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_3, (String_t*)(String_t*) &_stringLiteral1136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2629((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		UriScheme_t687  L_8 = (( UriScheme_t687  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Uri/UriScheme>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Uri/UriScheme>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Uri/UriScheme>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Uri/UriScheme>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Uri/UriScheme>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"


// T System.Collections.Generic.IEnumerator`1<System.UInt32>::get_Current()
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.UInt32>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_56MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
extern "C" uint32_t Array_InternalArray__get_Item_TisUInt32_t382_m13261_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisUInt32_t382_m13261(__this, p0, method) (( uint32_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisUInt32_t382_m13261_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.UInt32>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12453_gshared (InternalEnumerator_1_t2267 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12454_gshared (InternalEnumerator_1_t2267 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (( uint32_t (*) (InternalEnumerator_1_t2267 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2267 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint32_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt32>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12455_gshared (InternalEnumerator_1_t2267 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt32>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12456_gshared (InternalEnumerator_1_t2267 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2629((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.UInt32>::get_Current()
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" uint32_t InternalEnumerator_1_get_Current_m12457_gshared (InternalEnumerator_1_t2267 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t711 * L_1 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_1, (String_t*)(String_t*) &_stringLiteral1135, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t711 * L_3 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_3, (String_t*)(String_t*) &_stringLiteral1136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2629((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		uint32_t L_8 = (( uint32_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.UInt32>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UInt32>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt32>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt32>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt32>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt32>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.UInt32>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UInt32>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UInt32>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UInt32>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UInt32>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<System.Object>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

// System.Int64
#include "mscorlib_System_Int64.h"


// System.Int32 System.IComparable`1<System.Int64>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<System.UInt32>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.UInt32>::Equals(T)
#ifndef _MSC_VER
#else
#endif

// System.UInt64
#include "mscorlib_System_UInt64.h"


// System.Int32 System.IComparable`1<System.UInt64>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

// System.Byte
#include "mscorlib_System_Byte.h"


// System.Int32 System.IComparable`1<System.Byte>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif

// System.SByte
#include "mscorlib_System_SByte.h"


// System.Int32 System.IComparable`1<System.SByte>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.SByte>::Equals(T)
#ifndef _MSC_VER
#else
#endif

// System.Int16
#include "mscorlib_System_Int16.h"


// System.Int32 System.IComparable`1<System.Int16>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.Int16>::Equals(T)
#ifndef _MSC_VER
#else
#endif

// System.UInt16
#include "mscorlib_System_UInt16.h"


// System.Int32 System.IComparable`1<System.UInt16>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.UInt16>::Equals(T)
#ifndef _MSC_VER
#else
#endif

// System.Single
#include "mscorlib_System_Single.h"


// System.Int32 System.IComparable`1<System.Single>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.Single>::Equals(T)
#ifndef _MSC_VER
#else
#endif

// System.Double
#include "mscorlib_System_Double.h"


// System.Int32 System.IComparable`1<System.Double>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.Double>::Equals(T)
#ifndef _MSC_VER
#else
#endif

// System.Decimal
#include "mscorlib_System_Decimal.h"


// System.Int32 System.IComparable`1<System.Decimal>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.Decimal>::Equals(T)
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Int16>::get_Current()
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_61MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
extern "C" int16_t Array_InternalArray__get_Item_TisInt16_t396_m13272_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisInt16_t396_m13272(__this, p0, method) (( int16_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisInt16_t396_m13272_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Int16>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12478_gshared (InternalEnumerator_1_t2272 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12479_gshared (InternalEnumerator_1_t2272 * __this, const MethodInfo* method)
{
	{
		int16_t L_0 = (( int16_t (*) (InternalEnumerator_1_t2272 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2272 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int16_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int16>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12480_gshared (InternalEnumerator_1_t2272 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int16>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12481_gshared (InternalEnumerator_1_t2272 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2629((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Int16>::get_Current()
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" int16_t InternalEnumerator_1_get_Current_m12482_gshared (InternalEnumerator_1_t2272 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t711 * L_1 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_1, (String_t*)(String_t*) &_stringLiteral1135, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t711 * L_3 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_3, (String_t*)(String_t*) &_stringLiteral1136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2629((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int16_t L_8 = (( int16_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Int16>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int16>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Int16>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Int16>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Int16>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Int16>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Int16>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.SByte>::get_Current()
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_62MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
extern "C" int8_t Array_InternalArray__get_Item_TisSByte_t395_m13283_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSByte_t395_m13283(__this, p0, method) (( int8_t (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSByte_t395_m13283_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.SByte>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12483_gshared (InternalEnumerator_1_t2273 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.SByte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12484_gshared (InternalEnumerator_1_t2273 * __this, const MethodInfo* method)
{
	{
		int8_t L_0 = (( int8_t (*) (InternalEnumerator_1_t2273 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2273 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int8_t L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.SByte>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12485_gshared (InternalEnumerator_1_t2273 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.SByte>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12486_gshared (InternalEnumerator_1_t2273 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2629((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.SByte>::get_Current()
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" int8_t InternalEnumerator_1_get_Current_m12487_gshared (InternalEnumerator_1_t2273 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t711 * L_1 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_1, (String_t*)(String_t*) &_stringLiteral1135, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t711 * L_3 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_3, (String_t*)(String_t*) &_stringLiteral1136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2629((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		int8_t L_8 = (( int8_t (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.SByte>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.SByte>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.SByte>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.SByte>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.SByte>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.SByte>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.SByte>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Double>::get_Current()
// System.Array/InternalEnumerator`1<System.Double>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Double>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_63MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Double>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Double>(System.Int32)
extern "C" double Array_InternalArray__get_Item_TisDouble_t390_m13294_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisDouble_t390_m13294(__this, p0, method) (( double (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisDouble_t390_m13294_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Double>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12488_gshared (InternalEnumerator_1_t2274 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Double>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12489_gshared (InternalEnumerator_1_t2274 * __this, const MethodInfo* method)
{
	{
		double L_0 = (( double (*) (InternalEnumerator_1_t2274 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2274 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		double L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Double>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12490_gshared (InternalEnumerator_1_t2274 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Double>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12491_gshared (InternalEnumerator_1_t2274 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2629((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Double>::get_Current()
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" double InternalEnumerator_1_get_Current_m12492_gshared (InternalEnumerator_1_t2274 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t711 * L_1 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_1, (String_t*)(String_t*) &_stringLiteral1135, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t711 * L_3 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_3, (String_t*)(String_t*) &_stringLiteral1136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2629((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		double L_8 = (( double (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Double>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Double>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Double>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Double>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Double>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Double>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Double>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Double>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Double>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Double>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Double>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Double>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Double>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.Object>::Compare(T,T)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_genMethodDeclarations.h"



// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m12493_gshared (Comparison_1_t2275 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12494_gshared (Comparison_1_t2275 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Comparison_1_Invoke_m12494((Comparison_1_t2275 *)__this->___prev_9,___x, ___y, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, Object_t * ___y, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___x, ___y,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12495_gshared (Comparison_1_t2275 * __this, Object_t * ___x, Object_t * ___y, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___x;
	__d_args[1] = ___y;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12496_gshared (Comparison_1_t2275 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_genMethodDeclarations.h"



// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m12497_gshared (Predicate_1_t2276 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m12498_gshared (Predicate_1_t2276 * __this, Object_t * ___obj, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Predicate_1_Invoke_m12498((Predicate_1_t2276 *)__this->___prev_9,___obj, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Object_t * ___obj, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___obj,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m12499_gshared (Predicate_1_t2276 * __this, Object_t * ___obj, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m12500_gshared (Predicate_1_t2276 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_genMethodDeclarations.h"



// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m12501_gshared (Converter_2_t2277 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m12502_gshared (Converter_2_t2277 * __this, Object_t * ___input, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Converter_2_Invoke_m12502((Converter_2_t2277 *)__this->___prev_9,___input, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___input, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___input, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m12503_gshared (Converter_2_t2277 * __this, Object_t * ___input, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m12504_gshared (Converter_2_t2277 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.Comparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_0MethodDeclarations.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_0MethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<System.Object>::.ctor()
extern "C" void Comparer_1__ctor_m12505_gshared (Comparer_1_t2278 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Object>::.cctor()
extern const Il2CppType* GenericComparer_1_t1530_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t247_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m12506_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericComparer_1_t1530_0_0_0_var = il2cpp_codegen_type_from_index(2913);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		TypeU5BU5D_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(224);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)), /*hidden argument*/NULL);
		Type_t * L_1 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, (Type_t *)L_0, (Type_t *)L_1);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(GenericComparer_1_t1530_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t247* L_4 = (TypeU5BU5D_t247*)((TypeU5BU5D_t247*)SZArrayNew(TypeU5BU5D_t247_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t247* >::Invoke(78 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t247*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m1429(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((Comparer_1_t2278_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2278 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t2279 * L_8 = (DefaultComparer_t2279 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2279 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2278_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Object>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t362_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m12507_gshared (Comparer_1_t2278 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___y;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		Object_t * L_2 = ___y;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		Object_t * L_3 = ___x;
		if (!((Object_t *)IsInst(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_4 = ___y;
		if (!((Object_t *)IsInst(L_4, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_5 = ___x;
		Object_t * L_6 = ___y;
		NullCheck((Comparer_1_t2278 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t2278 *)__this, (Object_t *)((Object_t *)Castclass(L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))), (Object_t *)((Object_t *)Castclass(L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t362 * L_8 = (ArgumentException_t362 *)il2cpp_codegen_object_new (ArgumentException_t362_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m7534(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Object>::get_Default()
extern "C" Comparer_1_t2278 * Comparer_1_get_Default_m12508_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2278 * L_0 = ((Comparer_1_t2278_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>::.ctor()
extern TypeInfo* Comparer_1_t2278_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m12509_gshared (DefaultComparer_t2279 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t2278_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5110);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t2278 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2278_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t2278 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2278 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Object>::Compare(T,T)
extern TypeInfo* IComparable_t457_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t362_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m12510_gshared (DefaultComparer_t2279 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparable_t457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(319);
		ArgumentException_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_2 = ___y;
		Object_t * L_3 = L_2;
		if (((Object_t *)L_3))
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Object_t * L_4 = ___y;
		Object_t * L_5 = L_4;
		if (((Object_t *)L_5))
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		Object_t * L_6 = ___x;
		Object_t * L_7 = L_6;
		if (!((Object_t*)IsInst(((Object_t *)L_7), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		Object_t * L_8 = ___x;
		Object_t * L_9 = L_8;
		Object_t * L_10 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(((Object_t *)L_9), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_11 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable`1<System.Object>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(((Object_t *)L_9), IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (Object_t *)L_10);
		return L_11;
	}

IL_003e:
	{
		Object_t * L_12 = ___x;
		Object_t * L_13 = L_12;
		if (!((Object_t *)IsInst(((Object_t *)L_13), IComparable_t457_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		Object_t * L_14 = ___x;
		Object_t * L_15 = L_14;
		Object_t * L_16 = ___y;
		Object_t * L_17 = L_16;
		NullCheck((Object_t *)((Object_t *)Castclass(((Object_t *)L_15), IComparable_t457_il2cpp_TypeInfo_var)));
		int32_t L_18 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t457_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(((Object_t *)L_15), IComparable_t457_il2cpp_TypeInfo_var)), (Object_t *)((Object_t *)L_17));
		return L_18;
	}

IL_0062:
	{
		ArgumentException_t362 * L_19 = (ArgumentException_t362 *)il2cpp_codegen_object_new (ArgumentException_t362_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1414(L_19, (String_t*)(String_t*) &_stringLiteral1260, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1MethodDeclarations.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::.ctor(System.Collections.Generic.IList`1<T>)
extern TypeInfo* ArgumentNullException_t387_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1__ctor_m12511_gshared (ReadOnlyCollection_1_t2280 * __this, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(191);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		Object_t* L_0 = ___list;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t387 * L_1 = (ArgumentNullException_t387 *)il2cpp_codegen_object_new (ArgumentNullException_t387_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1507(L_1, (String_t*)(String_t*) &_stringLiteral1276, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Object_t* L_2 = ___list;
		__this->___list_0 = L_2;
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12512_gshared (ReadOnlyCollection_1_t2280 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2672(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m12513_gshared (ReadOnlyCollection_1_t2280 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2672(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m12514_gshared (ReadOnlyCollection_1_t2280 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2672(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m12515_gshared (ReadOnlyCollection_1_t2280 * __this, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2672(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m12516_gshared (ReadOnlyCollection_1_t2280 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2672(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m12517_gshared (ReadOnlyCollection_1_t2280 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((ReadOnlyCollection_1_t2280 *)__this);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(30 /* T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32) */, (ReadOnlyCollection_1_t2280 *)__this, (int32_t)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m12518_gshared (ReadOnlyCollection_1_t2280 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2672(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12519_gshared (ReadOnlyCollection_1_t2280 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t489_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m12520_gshared (ReadOnlyCollection_1_t2280 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(806);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t489_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t489_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t489_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* IEnumerable_t351_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m12521_gshared (ReadOnlyCollection_1_t2280 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t *)L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t351_il2cpp_TypeInfo_var, (Object_t *)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_Add_m12522_gshared (ReadOnlyCollection_1_t2280 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2672(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Clear()
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Clear_m12523_gshared (ReadOnlyCollection_1_t2280 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2672(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool ReadOnlyCollection_1_System_Collections_IList_Contains_m12524_gshared (ReadOnlyCollection_1_t2280 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_2, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12525_gshared (ReadOnlyCollection_1_t2280 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_2, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Insert_m12526_gshared (ReadOnlyCollection_1_t2280 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2672(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_Remove_m12527_gshared (ReadOnlyCollection_1_t2280 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2672(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12528_gshared (ReadOnlyCollection_1_t2280 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2672(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m12529_gshared (ReadOnlyCollection_1_t2280 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_System_Collections_IList_get_Item_m12530_gshared (ReadOnlyCollection_1_t2280 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" void ReadOnlyCollection_1_System_Collections_IList_set_Item_m12531_gshared (ReadOnlyCollection_1_t2280 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2672(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::Contains(T)
extern "C" bool ReadOnlyCollection_1_Contains_m12532_gshared (ReadOnlyCollection_1_t2280 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Object_t * L_1 = ___value;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void ReadOnlyCollection_1_CopyTo_m12533_gshared (ReadOnlyCollection_1_t2280 * __this, ObjectU5BU5D_t40* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		ObjectU5BU5D_t40* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< ObjectU5BU5D_t40*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0, (ObjectU5BU5D_t40*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
extern "C" Object_t* ReadOnlyCollection_1_GetEnumerator_m12534_gshared (ReadOnlyCollection_1_t2280 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::IndexOf(T)
extern "C" int32_t ReadOnlyCollection_1_IndexOf_m12535_gshared (ReadOnlyCollection_1_t2280 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Object_t * L_1 = ___value;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
extern "C" int32_t ReadOnlyCollection_1_get_Count_m12536_gshared (ReadOnlyCollection_1_t2280 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * ReadOnlyCollection_1_get_Item_m12537_gshared (ReadOnlyCollection_1_t2280 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_gen.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"


// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern TypeInfo* ICollection_t489_il2cpp_TypeInfo_var;
extern "C" void Collection_1__ctor_m12538_gshared (Collection_1_t2281 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(806);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t238 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		List_1_t238 * L_0 = (List_1_t238 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (List_1_t238 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = (List_1_t238 *)L_0;
		List_1_t238 * L_1 = V_0;
		V_1 = (Object_t *)L_1;
		Object_t * L_2 = V_1;
		NullCheck((Object_t *)L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t489_il2cpp_TypeInfo_var, (Object_t *)L_2);
		__this->___syncRoot_1 = L_3;
		List_1_t238 * L_4 = V_0;
		__this->___list_0 = L_4;
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12539_gshared (Collection_1_t2281 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t489_il2cpp_TypeInfo_var;
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12540_gshared (Collection_1_t2281 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(806);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t *)((Object_t *)Castclass(L_0, ICollection_t489_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(2 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t489_il2cpp_TypeInfo_var, (Object_t *)((Object_t *)Castclass(L_0, ICollection_t489_il2cpp_TypeInfo_var)), (Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12541_gshared (Collection_1_t2281 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12542_gshared (Collection_1_t2281 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___value;
		Object_t * L_4 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2281 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T) */, (Collection_1_t2281 *)__this, (int32_t)L_2, (Object_t *)L_4);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m12543_gshared (Collection_1_t2281 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_2, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))));
		return L_4;
	}

IL_001a:
	{
		return 0;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12544_gshared (Collection_1_t2281 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_2 = (Object_t*)(__this->___list_0);
		Object_t * L_3 = ___value;
		NullCheck((Object_t*)L_2);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_2, (Object_t *)((Object_t *)Castclass(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))));
		return L_4;
	}

IL_001a:
	{
		return (-1);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m12545_gshared (Collection_1_t2281 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2281 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T) */, (Collection_1_t2281 *)__this, (int32_t)L_0, (Object_t *)L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m12546_gshared (Collection_1_t2281 * __this, Object_t * ___value, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		(( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(NULL /*static, unused*/, (Object_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		Object_t * L_1 = ___value;
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2281 *)__this);
		int32_t L_3 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(24 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T) */, (Collection_1_t2281 *)__this, (Object_t *)L_2);
		V_0 = (int32_t)L_3;
		int32_t L_4 = V_0;
		NullCheck((Collection_1_t2281 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32) */, (Collection_1_t2281 *)__this, (int32_t)L_4);
		return;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12547_gshared (Collection_1_t2281 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___syncRoot_1);
		return L_0;
	}
}
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12548_gshared (Collection_1_t2281 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		Object_t * L_3 = L_2;
		return ((Object_t *)L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m12549_gshared (Collection_1_t2281 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		Object_t * L_2 = (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(NULL /*static, unused*/, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		NullCheck((Collection_1_t2281 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T) */, (Collection_1_t2281 *)__this, (int32_t)L_0, (Object_t *)L_2);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m12550_gshared (Collection_1_t2281 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Object_t * L_3 = ___item;
		NullCheck((Collection_1_t2281 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T) */, (Collection_1_t2281 *)__this, (int32_t)L_2, (Object_t *)L_3);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m12551_gshared (Collection_1_t2281 * __this, const MethodInfo* method)
{
	{
		NullCheck((Collection_1_t2281 *)__this);
		VirtActionInvoker0::Invoke(30 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems() */, (Collection_1_t2281 *)__this);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m12552_gshared (Collection_1_t2281 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::Clear() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m12553_gshared (Collection_1_t2281 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Object_t * L_1 = ___item;
		NullCheck((Object_t*)L_0);
		bool L_2 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::Contains(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m12554_gshared (Collection_1_t2281 * __this, ObjectU5BU5D_t40* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		ObjectU5BU5D_t40* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< ObjectU5BU5D_t40*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(T[],System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0, (ObjectU5BU5D_t40*)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m12555_gshared (Collection_1_t2281 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		Object_t* L_1 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (Object_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12556_gshared (Collection_1_t2281 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		Object_t * L_1 = ___item;
		NullCheck((Object_t*)L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.Collections.Generic.IList`1<System.Object>::IndexOf(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (Object_t *)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m12557_gshared (Collection_1_t2281 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___item;
		NullCheck((Collection_1_t2281 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(31 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T) */, (Collection_1_t2281 *)__this, (int32_t)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12558_gshared (Collection_1_t2281 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Object>::Insert(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (Object_t *)L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m12559_gshared (Collection_1_t2281 * __this, Object_t * ___item, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___item;
		NullCheck((Collection_1_t2281 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(24 /* System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T) */, (Collection_1_t2281 *)__this, (Object_t *)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		NullCheck((Collection_1_t2281 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32) */, (Collection_1_t2281 *)__this, (int32_t)L_3);
		return 1;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12560_gshared (Collection_1_t2281 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		NullCheck((Collection_1_t2281 *)__this);
		VirtActionInvoker1< int32_t >::Invoke(32 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32) */, (Collection_1_t2281 *)__this, (int32_t)L_0);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12561_gshared (Collection_1_t2281 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.IList`1<System.Object>::RemoveAt(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12562_gshared (Collection_1_t2281 * __this, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		NullCheck((Object_t*)L_0);
		int32_t L_1 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		return L_1;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m12563_gshared (Collection_1_t2281 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		NullCheck((Object_t*)L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, int32_t >::Invoke(3 /* T System.Collections.Generic.IList`1<System.Object>::get_Item(System.Int32) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1);
		return L_2;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12564_gshared (Collection_1_t2281 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index;
		Object_t * L_1 = ___value;
		NullCheck((Collection_1_t2281 *)__this);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(33 /* System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T) */, (Collection_1_t2281 *)__this, (int32_t)L_0, (Object_t *)L_1);
		return;
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12565_gshared (Collection_1_t2281 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)(__this->___list_0);
		int32_t L_1 = ___index;
		Object_t * L_2 = ___item;
		NullCheck((Object_t*)L_0);
		InterfaceActionInvoker2< int32_t, Object_t * >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Object>::set_Item(System.Int32,T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (Object_t*)L_0, (int32_t)L_1, (Object_t *)L_2);
		return;
	}
}
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool Collection_1_IsValidItem_m12566_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___item;
		if (((Object_t *)IsInst(L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7))))
		{
			goto IL_0022;
		}
	}
	{
		Object_t * L_1 = ___item;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)), /*hidden argument*/NULL);
		NullCheck((Type_t *)L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, (Type_t *)L_2);
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		G_B6_0 = G_B4_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B6_0 = 1;
	}

IL_0023:
	{
		return G_B6_0;
	}
}
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern TypeInfo* ArgumentException_t362_il2cpp_TypeInfo_var;
extern "C" Object_t * Collection_1_ConvertItem_m12567_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___item;
		bool L_1 = (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6)->method)(NULL /*static, unused*/, (Object_t *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Object_t * L_2 = ___item;
		return ((Object_t *)Castclass(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)));
	}

IL_000f:
	{
		ArgumentException_t362 * L_3 = (ArgumentException_t362 *)il2cpp_codegen_object_new (ArgumentException_t362_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1414(L_3, (String_t*)(String_t*) &_stringLiteral1274, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}
}
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" void Collection_1_CheckWritable_m12568_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___list;
		NullCheck((Object_t*)L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.Generic.ICollection`1<System.Object>::get_IsReadOnly() */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_t713 * L_2 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2672(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000e:
	{
		return;
	}
}
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_genMethodDeclarations.h"

// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3MethodDeclarations.h"
struct Array_t;
struct ObjectU5BU5D_t40;
struct Object_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
extern "C" int32_t Array_IndexOf_TisObject_t_m8341_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t40* p0, Object_t * p1, const MethodInfo* method);
#define Array_IndexOf_TisObject_t_m8341(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t40*, Object_t *, const MethodInfo*))Array_IndexOf_TisObject_t_m8341_gshared)(__this /* static, unused */, p0, p1, method)


// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
extern "C" void ArrayReadOnlyList_1__ctor_m12569_gshared (ArrayReadOnlyList_1_t2282 * __this, ObjectU5BU5D_t40* ___array, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t40* L_0 = ___array;
		__this->___array_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m12570_gshared (ArrayReadOnlyList_1_t2282 * __this, const MethodInfo* method)
{
	{
		NullCheck((ArrayReadOnlyList_1_t2282 *)__this);
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(17 /* System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator() */, (ArrayReadOnlyList_1_t2282 *)__this);
		return L_0;
	}
}
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t389_il2cpp_TypeInfo_var;
extern "C" Object_t * ArrayReadOnlyList_1_get_Item_m12571_gshared (ArrayReadOnlyList_1_t2282 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t389_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(199);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___index;
		ObjectU5BU5D_t40* L_1 = (ObjectU5BU5D_t40*)(__this->___array_0);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) >= ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_t389 * L_2 = (ArgumentOutOfRangeException_t389 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t389_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2633(L_2, (String_t*)(String_t*) &_stringLiteral299, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		ObjectU5BU5D_t40* L_3 = (ObjectU5BU5D_t40*)(__this->___array_0);
		int32_t L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5));
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
extern "C" void ArrayReadOnlyList_1_set_Item_m12572_gshared (ArrayReadOnlyList_1_t2282 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method)
{
	{
		Exception_t118 * L_0 = (( Exception_t118 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
extern "C" int32_t ArrayReadOnlyList_1_get_Count_m12573_gshared (ArrayReadOnlyList_1_t2282 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t40* L_0 = (ObjectU5BU5D_t40*)(__this->___array_0);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
extern "C" bool ArrayReadOnlyList_1_get_IsReadOnly_m12574_gshared (ArrayReadOnlyList_1_t2282 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
extern "C" void ArrayReadOnlyList_1_Add_m12575_gshared (ArrayReadOnlyList_1_t2282 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Exception_t118 * L_0 = (( Exception_t118 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
extern "C" void ArrayReadOnlyList_1_Clear_m12576_gshared (ArrayReadOnlyList_1_t2282 * __this, const MethodInfo* method)
{
	{
		Exception_t118 * L_0 = (( Exception_t118 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
extern "C" bool ArrayReadOnlyList_1_Contains_m12577_gshared (ArrayReadOnlyList_1_t2282 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t40* L_0 = (ObjectU5BU5D_t40*)(__this->___array_0);
		Object_t * L_1 = ___item;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t40*, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t40*)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return ((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void ArrayReadOnlyList_1_CopyTo_m12578_gshared (ArrayReadOnlyList_1_t2282 * __this, ObjectU5BU5D_t40* ___array, int32_t ___index, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t40* L_0 = (ObjectU5BU5D_t40*)(__this->___array_0);
		ObjectU5BU5D_t40* L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck((Array_t *)L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(7 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, (Array_t *)L_0, (Array_t *)(Array_t *)L_1, (int32_t)L_2);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
extern "C" Object_t* ArrayReadOnlyList_1_GetEnumerator_m12579_gshared (ArrayReadOnlyList_1_t2282 * __this, const MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator0_t2283 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t2283 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2283 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator0_t2283 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_0 = (U3CGetEnumeratorU3Ec__Iterator0_t2283 *)L_0;
		U3CGetEnumeratorU3Ec__Iterator0_t2283 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_3 = __this;
		U3CGetEnumeratorU3Ec__Iterator0_t2283 * L_2 = V_0;
		return L_2;
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
extern "C" int32_t ArrayReadOnlyList_1_IndexOf_m12580_gshared (ArrayReadOnlyList_1_t2282 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t40* L_0 = (ObjectU5BU5D_t40*)(__this->___array_0);
		Object_t * L_1 = ___item;
		int32_t L_2 = (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t40*, Object_t *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, (ObjectU5BU5D_t40*)L_0, (Object_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_2;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
extern "C" void ArrayReadOnlyList_1_Insert_m12581_gshared (ArrayReadOnlyList_1_t2282 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method)
{
	{
		Exception_t118 * L_0 = (( Exception_t118 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
extern "C" bool ArrayReadOnlyList_1_Remove_m12582_gshared (ArrayReadOnlyList_1_t2282 * __this, Object_t * ___item, const MethodInfo* method)
{
	{
		Exception_t118 * L_0 = (( Exception_t118 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
extern "C" void ArrayReadOnlyList_1_RemoveAt_m12583_gshared (ArrayReadOnlyList_1_t2282 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		Exception_t118 * L_0 = (( Exception_t118 * (*) (Object_t * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
extern TypeInfo* NotSupportedException_t713_il2cpp_TypeInfo_var;
extern "C" Exception_t118 * ArrayReadOnlyList_1_ReadOnlyError_m12584_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1045);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t713 * L_0 = (NotSupportedException_t713 *)il2cpp_codegen_object_new (NotSupportedException_t713_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2643(L_0, (String_t*)(String_t*) &_stringLiteral1139, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0__ctor_m12585_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2283 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// T System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m12586_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2283 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_2);
		return L_0;
	}
}
// System.Object System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m12587_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2283 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (Object_t *)(__this->___U24current_2);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::MoveNext()
extern "C" bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m12588_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2283 * __this, const MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)(__this->___U24PC_1);
		V_0 = (uint32_t)L_0;
		__this->___U24PC_1 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_001e;
		}
		if (L_1 == 1)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0076;
	}

IL_001e:
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_005a;
	}

IL_0027:
	{
		ArrayReadOnlyList_1_t2282 * L_2 = (ArrayReadOnlyList_1_t2282 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_2);
		ObjectU5BU5D_t40* L_3 = (ObjectU5BU5D_t40*)(L_2->___array_0);
		int32_t L_4 = (int32_t)(__this->___U3CiU3E__0_0);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		__this->___U24current_2 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5));
		__this->___U24PC_1 = 1;
		goto IL_0078;
	}

IL_004c:
	{
		int32_t L_6 = (int32_t)(__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_7 = (int32_t)(__this->___U3CiU3E__0_0);
		ArrayReadOnlyList_1_t2282 * L_8 = (ArrayReadOnlyList_1_t2282 *)(__this->___U3CU3Ef__this_3);
		NullCheck(L_8);
		ObjectU5BU5D_t40* L_9 = (ObjectU5BU5D_t40*)(L_8->___array_0);
		NullCheck(L_9);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___U24PC_1 = (-1);
	}

IL_0076:
	{
		return 0;
	}

IL_0078:
	{
		return 1;
	}
	// Dead block : IL_007a: ldloc.1
}
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Dispose()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m12589_gshared (U3CGetEnumeratorU3Ec__Iterator0_t2283 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_65.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_65MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
extern "C" TableRange_t954  Array_InternalArray__get_Item_TisTableRange_t954_m13342_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTableRange_t954_m13342(__this, p0, method) (( TableRange_t954  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTableRange_t954_m13342_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12595_gshared (InternalEnumerator_1_t2285 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12596_gshared (InternalEnumerator_1_t2285 * __this, const MethodInfo* method)
{
	{
		TableRange_t954  L_0 = (( TableRange_t954  (*) (InternalEnumerator_1_t2285 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2285 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TableRange_t954  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12597_gshared (InternalEnumerator_1_t2285 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12598_gshared (InternalEnumerator_1_t2285 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2629((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" TableRange_t954  InternalEnumerator_1_get_Current_m12599_gshared (InternalEnumerator_1_t2285 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t711 * L_1 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_1, (String_t*)(String_t*) &_stringLiteral1135, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t711 * L_3 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_3, (String_t*)(String_t*) &_stringLiteral1136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2629((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		TableRange_t954  L_8 = (( TableRange_t954  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::set_Item(System.Int32,T)
// System.Collections.Generic.CollectionDebuggerView`1<System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.CollectionDebuggerView`1<System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_1MethodDeclarations.h"



// System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_2MethodDeclarations.h"



// System.Collections.Generic.GenericComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_4MethodDeclarations.h"



// System.Void System.Collections.Generic.GenericComparer`1<System.Object>::.ctor()
extern TypeInfo* Comparer_1_t2278_il2cpp_TypeInfo_var;
extern "C" void GenericComparer_1__ctor_m12620_gshared (GenericComparer_1_t2292 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t2278_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5110);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t2278 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2278_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t2278 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2278 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Object>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12621_gshared (GenericComparer_1_t2292 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_2 = ___y;
		Object_t * L_3 = L_2;
		if (((Object_t *)L_3))
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Object_t * L_4 = ___y;
		Object_t * L_5 = L_4;
		if (((Object_t *)L_5))
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		Object_t * L_6 = ___y;
		NullCheck((Object_t*)(*(&___x)));
		int32_t L_7 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(0 /* System.Int32 System.IComparable`1<System.Object>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)(*(&___x)), (Object_t *)L_6);
		return L_7;
	}
}
// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__7.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericEqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__7MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1<System.Object>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_genMethodDeclarations.h"


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Object>::.ctor()
extern TypeInfo* EqualityComparer_1_t1988_il2cpp_TypeInfo_var;
extern "C" void GenericEqualityComparer_1__ctor_m12622_gshared (GenericEqualityComparer_1_t2293 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t1988_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4329);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t1988 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t1988_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t1988 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t1988 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Object>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12623_gshared (GenericEqualityComparer_1_t2293 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)(*(&___obj)));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)(*(&___obj)));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Object>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m12624_gshared (GenericEqualityComparer_1_t2293 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = L_0;
		if (((Object_t *)L_1))
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_2 = ___y;
		Object_t * L_3 = L_2;
		return ((((Object_t*)(Object_t *)((Object_t *)L_3)) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Object_t * L_4 = ___y;
		NullCheck((Object_t*)(*(&___x)));
		bool L_5 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)(*(&___x)), (Object_t *)L_4);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_70.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_70MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
extern "C" Slot_t1031  Array_InternalArray__get_Item_TisSlot_t1031_m13353_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSlot_t1031_m13353(__this, p0, method) (( Slot_t1031  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSlot_t1031_m13353_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12625_gshared (InternalEnumerator_1_t2294 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12626_gshared (InternalEnumerator_1_t2294 * __this, const MethodInfo* method)
{
	{
		Slot_t1031  L_0 = (( Slot_t1031  (*) (InternalEnumerator_1_t2294 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2294 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Slot_t1031  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12627_gshared (InternalEnumerator_1_t2294 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12628_gshared (InternalEnumerator_1_t2294 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2629((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" Slot_t1031  InternalEnumerator_1_get_Current_m12629_gshared (InternalEnumerator_1_t2294 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t711 * L_1 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_1, (String_t*)(String_t*) &_stringLiteral1135, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t711 * L_3 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_3, (String_t*)(String_t*) &_stringLiteral1136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2629((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Slot_t1031  L_8 = (( Slot_t1031  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/Slot>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.Collections.SortedList/Slot
#include "mscorlib_System_Collections_SortedList_Slot.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_71.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_71MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
extern "C" Slot_t1038  Array_InternalArray__get_Item_TisSlot_t1038_m13364_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisSlot_t1038_m13364(__this, p0, method) (( Slot_t1038  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisSlot_t1038_m13364_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12630_gshared (InternalEnumerator_1_t2295 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12631_gshared (InternalEnumerator_1_t2295 * __this, const MethodInfo* method)
{
	{
		Slot_t1038  L_0 = (( Slot_t1038  (*) (InternalEnumerator_1_t2295 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2295 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Slot_t1038  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12632_gshared (InternalEnumerator_1_t2295 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12633_gshared (InternalEnumerator_1_t2295 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2629((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" Slot_t1038  InternalEnumerator_1_get_Current_m12634_gshared (InternalEnumerator_1_t2295 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t711 * L_1 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_1, (String_t*)(String_t*) &_stringLiteral1135, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t711 * L_3 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_3, (String_t*)(String_t*) &_stringLiteral1136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2629((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Slot_t1038  L_8 = (( Slot_t1038  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/Slot>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::set_Item(System.Int32,T)
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_genMethodDeclarations.h"



// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Getter_2__ctor_m12680_gshared (Getter_2_t2305 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Getter_2_Invoke_m12681_gshared (Getter_2_t2305 * __this, Object_t * ____this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Getter_2_Invoke_m12681((Getter_2_t2305 *)__this->___prev_9,____this, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ____this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ____this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Getter_2_BeginInvoke_m12682_gshared (Getter_2_t2305 * __this, Object_t * ____this, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____this;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Getter_2_EndInvoke_m12683_gshared (Getter_2_t2305 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_genMethodDeclarations.h"



// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m12684_gshared (StaticGetter_1_t2306 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m12685_gshared (StaticGetter_1_t2306 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		StaticGetter_1_Invoke_m12685((StaticGetter_1_t2306 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m12686_gshared (StaticGetter_1_t2306 * __this, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m12687_gshared (StaticGetter_1_t2306 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif

// System.DateTime
#include "mscorlib_System_DateTime.h"


// T System.Collections.Generic.IEnumerator`1<System.DateTime>::get_Current()
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_84.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_84MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
extern "C" DateTime_t104  Array_InternalArray__get_Item_TisDateTime_t104_m13377_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisDateTime_t104_m13377(__this, p0, method) (( DateTime_t104  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisDateTime_t104_m13377_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12703_gshared (InternalEnumerator_1_t2310 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared (InternalEnumerator_1_t2310 * __this, const MethodInfo* method)
{
	{
		DateTime_t104  L_0 = (( DateTime_t104  (*) (InternalEnumerator_1_t2310 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2310 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		DateTime_t104  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12705_gshared (InternalEnumerator_1_t2310 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12706_gshared (InternalEnumerator_1_t2310 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2629((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" DateTime_t104  InternalEnumerator_1_get_Current_m12707_gshared (InternalEnumerator_1_t2310 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t711 * L_1 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_1, (String_t*)(String_t*) &_stringLiteral1135, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t711 * L_3 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_3, (String_t*)(String_t*) &_stringLiteral1136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2629((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		DateTime_t104  L_8 = (( DateTime_t104  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.DateTime>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTime>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.DateTime>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.DateTime>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.DateTime>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.DateTime>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.DateTime>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif



// T System.Collections.Generic.IEnumerator`1<System.Decimal>::get_Current()
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_85.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_85MethodDeclarations.h"

struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
extern "C" Decimal_t393  Array_InternalArray__get_Item_TisDecimal_t393_m13388_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisDecimal_t393_m13388(__this, p0, method) (( Decimal_t393  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisDecimal_t393_m13388_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12708_gshared (InternalEnumerator_1_t2311 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12709_gshared (InternalEnumerator_1_t2311 * __this, const MethodInfo* method)
{
	{
		Decimal_t393  L_0 = (( Decimal_t393  (*) (InternalEnumerator_1_t2311 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2311 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Decimal_t393  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12710_gshared (InternalEnumerator_1_t2311 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12711_gshared (InternalEnumerator_1_t2311 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_1);
		int32_t L_2 = Array_get_Length_m2629((Array_t *)L_1, /*hidden argument*/NULL);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (int32_t)(__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (int32_t)(__this->___idx_1);
		int32_t L_5 = (int32_t)((int32_t)((int32_t)L_4-(int32_t)1));
		V_0 = (int32_t)L_5;
		__this->___idx_1 = L_5;
		int32_t L_6 = V_0;
		G_B5_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" Decimal_t393  InternalEnumerator_1_get_Current_m12712_gshared (InternalEnumerator_1_t2311 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t711 * L_1 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_1, (String_t*)(String_t*) &_stringLiteral1135, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (int32_t)(__this->___idx_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t711 * L_3 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_3, (String_t*)(String_t*) &_stringLiteral1136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (Array_t *)(__this->___array_0);
		Array_t * L_5 = (Array_t *)(__this->___array_0);
		NullCheck((Array_t *)L_5);
		int32_t L_6 = Array_get_Length_m2629((Array_t *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = (int32_t)(__this->___idx_1);
		NullCheck((Array_t *)L_4);
		Decimal_t393  L_8 = (( Decimal_t393  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Decimal>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::Remove(T)
#ifdef __clang__
#pragma clang diagnostic pop
#endif
