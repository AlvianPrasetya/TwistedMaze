#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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


// System.Array
#include "mscorlib_System_Array.h"

// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Decimal>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif

// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"


// System.Int32 System.Collections.Generic.IList`1<System.Decimal>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Decimal>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"


// T System.Collections.Generic.IEnumerator`1<System.TimeSpan>::get_Current()
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_86.h"
#ifndef _MSC_VER
#else
#endif
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_86MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
extern "C" TimeSpan_t603  Array_InternalArray__get_Item_TisTimeSpan_t603_m13399_gshared (Array_t * __this, int32_t p0, const MethodInfo* method);
#define Array_InternalArray__get_Item_TisTimeSpan_t603_m13399(__this, p0, method) (( TimeSpan_t603  (*) (Array_t *, int32_t, const MethodInfo*))Array_InternalArray__get_Item_TisTimeSpan_t603_m13399_gshared)(__this, p0, method)


// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12713_gshared (InternalEnumerator_1_t2312 * __this, Array_t * ___array, const MethodInfo* method)
{
	{
		Array_t * L_0 = ___array;
		__this->___array_0 = L_0;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12714_gshared (InternalEnumerator_1_t2312 * __this, const MethodInfo* method)
{
	{
		TimeSpan_t603  L_0 = (( TimeSpan_t603  (*) (InternalEnumerator_1_t2312 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((InternalEnumerator_1_t2312 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		TimeSpan_t603  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12715_gshared (InternalEnumerator_1_t2312 * __this, const MethodInfo* method)
{
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12716_gshared (InternalEnumerator_1_t2312 * __this, const MethodInfo* method)
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
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t603  InternalEnumerator_1_get_Current_m12717_gshared (InternalEnumerator_1_t2312 * __this, const MethodInfo* method)
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
		TimeSpan_t603  L_8 = (( TimeSpan_t603  (*) (Array_t *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)((Array_t *)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6-(int32_t)1))-(int32_t)L_7)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.TimeSpan>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::Remove(T)
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.TimeSpan>::GetEnumerator()
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IList`1<System.TimeSpan>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.TimeSpan>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::set_Item(System.Int32,T)
#ifndef _MSC_VER
#else
#endif

// System.DateTime
#include "mscorlib_System_DateTime.h"


// System.Int32 System.IComparable`1<System.DateTime>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.DateTime>::Equals(T)
// System.Collections.Generic.GenericComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_genMethodDeclarations.h"

// System.Collections.Generic.Comparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1MethodDeclarations.h"


// System.Void System.Collections.Generic.GenericComparer`1<System.DateTime>::.ctor()
extern TypeInfo* Comparer_1_t2317_il2cpp_TypeInfo_var;
extern "C" void GenericComparer_1__ctor_m8343_gshared (GenericComparer_1_t1506 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t2317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5310);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t2317 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2317_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t2317 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2317 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTime>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12766_gshared (GenericComparer_1_t1506 * __this, DateTime_t104  ___x, DateTime_t104  ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		DateTime_t104  L_0 = ___x;
		DateTime_t104  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		DateTime_t104  L_3 = ___y;
		DateTime_t104  L_4 = L_3;
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
		DateTime_t104  L_6 = ___y;
		DateTime_t104  L_7 = L_6;
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
		DateTime_t104  L_9 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTime_t104  >::Invoke(0 /* System.Int32 System.IComparable`1<System.DateTime>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (DateTime_t104 )L_9);
		return L_10;
	}
}
// System.Collections.Generic.Comparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_1MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.ctor()
extern "C" void Comparer_1__ctor_m12767_gshared (Comparer_1_t2317 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.cctor()
extern const Il2CppType* GenericComparer_1_t1530_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t247_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m12768_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((Comparer_1_t2317_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2317 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t2318 * L_8 = (DefaultComparer_t2318 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2318 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2317_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t362_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m12769_gshared (Comparer_1_t2317 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
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
		NullCheck((Comparer_1_t2317 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, DateTime_t104 , DateTime_t104  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::Compare(T,T) */, (Comparer_1_t2317 *)__this, (DateTime_t104 )((*(DateTime_t104 *)((DateTime_t104 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (DateTime_t104 )((*(DateTime_t104 *)((DateTime_t104 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t362 * L_8 = (ArgumentException_t362 *)il2cpp_codegen_object_new (ArgumentException_t362_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m7534(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTime>::get_Default()
extern "C" Comparer_1_t2317 * Comparer_1_get_Default_m12770_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2317 * L_0 = ((Comparer_1_t2317_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.DateTime>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern TypeInfo* Comparer_1_t2317_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m12771_gshared (DefaultComparer_t2318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t2317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5310);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t2317 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2317_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t2317 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2317 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern TypeInfo* IComparable_t457_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t362_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m12772_gshared (DefaultComparer_t2318 * __this, DateTime_t104  ___x, DateTime_t104  ___y, const MethodInfo* method)
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
		DateTime_t104  L_0 = ___x;
		DateTime_t104  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		DateTime_t104  L_3 = ___y;
		DateTime_t104  L_4 = L_3;
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
		DateTime_t104  L_6 = ___y;
		DateTime_t104  L_7 = L_6;
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
		DateTime_t104  L_9 = ___x;
		DateTime_t104  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		DateTime_t104  L_12 = ___x;
		DateTime_t104  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		DateTime_t104  L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTime_t104  >::Invoke(0 /* System.Int32 System.IComparable`1<System.DateTime>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (DateTime_t104 )L_15);
		return L_16;
	}

IL_003e:
	{
		DateTime_t104  L_17 = ___x;
		DateTime_t104  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t457_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		DateTime_t104  L_20 = ___x;
		DateTime_t104  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		DateTime_t104  L_23 = ___y;
		DateTime_t104  L_24 = L_23;
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
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer_.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer_MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8MethodDeclarations.h"


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern TypeInfo* EqualityComparer_1_t2319_il2cpp_TypeInfo_var;
extern "C" void GenericEqualityComparer_1__ctor_m8344_gshared (GenericEqualityComparer_1_t1507 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2319_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5313);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t2319 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2319_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t2319 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2319 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12773_gshared (GenericEqualityComparer_1_t1507 * __this, DateTime_t104  ___obj, const MethodInfo* method)
{
	{
		DateTime_t104  L_0 = ___obj;
		DateTime_t104  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m12774_gshared (GenericEqualityComparer_1_t1507 * __this, DateTime_t104  ___x, DateTime_t104  ___y, const MethodInfo* method)
{
	{
		DateTime_t104  L_0 = ___x;
		DateTime_t104  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		DateTime_t104  L_3 = ___y;
		DateTime_t104  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		DateTime_t104  L_6 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, DateTime_t104  >::Invoke(0 /* System.Boolean System.IEquatable`1<System.DateTime>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (DateTime_t104 )L_6);
		return L_7;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_8.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_8.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_8MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.ctor()
extern "C" void EqualityComparer_1__ctor_m12775_gshared (EqualityComparer_1_t2319 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t1541_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t247_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m12776_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t1541_0_0_0_var = il2cpp_codegen_type_from_index(3029);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(GenericEqualityComparer_1_t1541_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t247* L_4 = (TypeU5BU5D_t247*)((TypeU5BU5D_t247*)SZArrayNew(TypeU5BU5D_t247_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t247* >::Invoke(78 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t247*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m1429(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2319_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2319 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t2320 * L_8 = (DefaultComparer_t2320 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2320 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2319_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12777_gshared (EqualityComparer_1_t2319 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2319 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, DateTime_t104  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::GetHashCode(T) */, (EqualityComparer_1_t2319 *)__this, (DateTime_t104 )((*(DateTime_t104 *)((DateTime_t104 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12778_gshared (EqualityComparer_1_t2319 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2319 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, DateTime_t104 , DateTime_t104  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::Equals(T,T) */, (EqualityComparer_1_t2319 *)__this, (DateTime_t104 )((*(DateTime_t104 *)((DateTime_t104 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (DateTime_t104 )((*(DateTime_t104 *)((DateTime_t104 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTime>::get_Default()
extern "C" EqualityComparer_1_t2319 * EqualityComparer_1_get_Default_m12779_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2319 * L_0 = ((EqualityComparer_1_t2319_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.DateTime>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.DateTime>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern TypeInfo* EqualityComparer_1_t2319_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m12780_gshared (DefaultComparer_t2320 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2319_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5313);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t2319 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2319_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t2319 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2319 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12781_gshared (DefaultComparer_t2320 * __this, DateTime_t104  ___obj, const MethodInfo* method)
{
	{
		DateTime_t104  L_0 = ___obj;
		DateTime_t104  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12782_gshared (DefaultComparer_t2320 * __this, DateTime_t104  ___x, DateTime_t104  ___y, const MethodInfo* method)
{
	{
		DateTime_t104  L_0 = ___x;
		DateTime_t104  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		DateTime_t104  L_3 = ___y;
		DateTime_t104  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		DateTime_t104  L_6 = ___y;
		DateTime_t104  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"


// System.Int32 System.IComparable`1<System.DateTimeOffset>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.DateTimeOffset>::Equals(T)
// System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_0MethodDeclarations.h"

// System.Collections.Generic.Comparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_2MethodDeclarations.h"


// System.Void System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::.ctor()
extern TypeInfo* Comparer_1_t2321_il2cpp_TypeInfo_var;
extern "C" void GenericComparer_1__ctor_m8345_gshared (GenericComparer_1_t1508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t2321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5316);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t2321 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2321_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t2321 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2321 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12783_gshared (GenericComparer_1_t1508 * __this, DateTimeOffset_t409  ___x, DateTimeOffset_t409  ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		DateTimeOffset_t409  L_0 = ___x;
		DateTimeOffset_t409  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		DateTimeOffset_t409  L_3 = ___y;
		DateTimeOffset_t409  L_4 = L_3;
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
		DateTimeOffset_t409  L_6 = ___y;
		DateTimeOffset_t409  L_7 = L_6;
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
		DateTimeOffset_t409  L_9 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTimeOffset_t409  >::Invoke(0 /* System.Int32 System.IComparable`1<System.DateTimeOffset>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (DateTimeOffset_t409 )L_9);
		return L_10;
	}
}
// System.Collections.Generic.Comparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_2.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_2MethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.ctor()
extern "C" void Comparer_1__ctor_m12784_gshared (Comparer_1_t2321 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.cctor()
extern const Il2CppType* GenericComparer_1_t1530_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t247_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m12785_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((Comparer_1_t2321_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2321 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t2322 * L_8 = (DefaultComparer_t2322 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2322 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2321_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t362_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m12786_gshared (Comparer_1_t2321 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
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
		NullCheck((Comparer_1_t2321 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, DateTimeOffset_t409 , DateTimeOffset_t409  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::Compare(T,T) */, (Comparer_1_t2321 *)__this, (DateTimeOffset_t409 )((*(DateTimeOffset_t409 *)((DateTimeOffset_t409 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (DateTimeOffset_t409 )((*(DateTimeOffset_t409 *)((DateTimeOffset_t409 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t362 * L_8 = (ArgumentException_t362 *)il2cpp_codegen_object_new (ArgumentException_t362_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m7534(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTimeOffset>::get_Default()
extern "C" Comparer_1_t2321 * Comparer_1_get_Default_m12787_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2321 * L_0 = ((Comparer_1_t2321_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.DateTimeOffset>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern TypeInfo* Comparer_1_t2321_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m12788_gshared (DefaultComparer_t2322 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t2321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5316);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t2321 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2321_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t2321 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2321 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern TypeInfo* IComparable_t457_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t362_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m12789_gshared (DefaultComparer_t2322 * __this, DateTimeOffset_t409  ___x, DateTimeOffset_t409  ___y, const MethodInfo* method)
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
		DateTimeOffset_t409  L_0 = ___x;
		DateTimeOffset_t409  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		DateTimeOffset_t409  L_3 = ___y;
		DateTimeOffset_t409  L_4 = L_3;
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
		DateTimeOffset_t409  L_6 = ___y;
		DateTimeOffset_t409  L_7 = L_6;
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
		DateTimeOffset_t409  L_9 = ___x;
		DateTimeOffset_t409  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		DateTimeOffset_t409  L_12 = ___x;
		DateTimeOffset_t409  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		DateTimeOffset_t409  L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTimeOffset_t409  >::Invoke(0 /* System.Int32 System.IComparable`1<System.DateTimeOffset>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (DateTimeOffset_t409 )L_15);
		return L_16;
	}

IL_003e:
	{
		DateTimeOffset_t409  L_17 = ___x;
		DateTimeOffset_t409  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t457_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		DateTimeOffset_t409  L_20 = ___x;
		DateTimeOffset_t409  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		DateTimeOffset_t409  L_23 = ___y;
		DateTimeOffset_t409  L_24 = L_23;
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
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__0.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__0MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_9MethodDeclarations.h"


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::.ctor()
extern TypeInfo* EqualityComparer_1_t2323_il2cpp_TypeInfo_var;
extern "C" void GenericEqualityComparer_1__ctor_m8346_gshared (GenericEqualityComparer_1_t1509 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5319);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t2323 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2323_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t2323 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2323 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12790_gshared (GenericEqualityComparer_1_t1509 * __this, DateTimeOffset_t409  ___obj, const MethodInfo* method)
{
	{
		DateTimeOffset_t409  L_0 = ___obj;
		DateTimeOffset_t409  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m12791_gshared (GenericEqualityComparer_1_t1509 * __this, DateTimeOffset_t409  ___x, DateTimeOffset_t409  ___y, const MethodInfo* method)
{
	{
		DateTimeOffset_t409  L_0 = ___x;
		DateTimeOffset_t409  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		DateTimeOffset_t409  L_3 = ___y;
		DateTimeOffset_t409  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		DateTimeOffset_t409  L_6 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, DateTimeOffset_t409  >::Invoke(0 /* System.Boolean System.IEquatable`1<System.DateTimeOffset>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (DateTimeOffset_t409 )L_6);
		return L_7;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_9.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_9.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_9MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.ctor()
extern "C" void EqualityComparer_1__ctor_m12792_gshared (EqualityComparer_1_t2323 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t1541_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t247_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m12793_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t1541_0_0_0_var = il2cpp_codegen_type_from_index(3029);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(GenericEqualityComparer_1_t1541_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t247* L_4 = (TypeU5BU5D_t247*)((TypeU5BU5D_t247*)SZArrayNew(TypeU5BU5D_t247_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t247* >::Invoke(78 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t247*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m1429(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2323_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2323 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t2324 * L_8 = (DefaultComparer_t2324 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2324 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2323_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12794_gshared (EqualityComparer_1_t2323 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2323 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, DateTimeOffset_t409  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::GetHashCode(T) */, (EqualityComparer_1_t2323 *)__this, (DateTimeOffset_t409 )((*(DateTimeOffset_t409 *)((DateTimeOffset_t409 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12795_gshared (EqualityComparer_1_t2323 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2323 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, DateTimeOffset_t409 , DateTimeOffset_t409  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::Equals(T,T) */, (EqualityComparer_1_t2323 *)__this, (DateTimeOffset_t409 )((*(DateTimeOffset_t409 *)((DateTimeOffset_t409 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (DateTimeOffset_t409 )((*(DateTimeOffset_t409 *)((DateTimeOffset_t409 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::get_Default()
extern "C" EqualityComparer_1_t2323 * EqualityComparer_1_get_Default_m12796_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2323 * L_0 = ((EqualityComparer_1_t2323_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern TypeInfo* EqualityComparer_1_t2323_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m12797_gshared (DefaultComparer_t2324 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5319);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t2323 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2323_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t2323 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2323 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12798_gshared (DefaultComparer_t2324 * __this, DateTimeOffset_t409  ___obj, const MethodInfo* method)
{
	{
		DateTimeOffset_t409  L_0 = ___obj;
		DateTimeOffset_t409  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12799_gshared (DefaultComparer_t2324 * __this, DateTimeOffset_t409  ___x, DateTimeOffset_t409  ___y, const MethodInfo* method)
{
	{
		DateTimeOffset_t409  L_0 = ___x;
		DateTimeOffset_t409  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		DateTimeOffset_t409  L_3 = ___y;
		DateTimeOffset_t409  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		DateTimeOffset_t409  L_6 = ___y;
		DateTimeOffset_t409  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"
#ifndef _MSC_VER
#else
#endif
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"

// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m8347_gshared (Nullable_1_t1486 * __this, TimeSpan_t603  ___value, const MethodInfo* method)
{
	{
		__this->___has_value_1 = 1;
		TimeSpan_t603  L_0 = ___value;
		__this->___value_0 = L_0;
		return;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m8348_gshared (Nullable_1_t1486 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		return L_0;
	}
}
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern TypeInfo* InvalidOperationException_t711_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t603  Nullable_1_get_Value_m8349_gshared (Nullable_1_t1486 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1033);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t711 * L_1 = (InvalidOperationException_t711 *)il2cpp_codegen_object_new (InvalidOperationException_t711_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2626(L_1, (String_t*)(String_t*) &_stringLiteral1175, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		TimeSpan_t603  L_2 = (TimeSpan_t603 )(__this->___value_0);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m12800_gshared (Nullable_1_t1486 * __this, Object_t * ___other, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___other;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		bool L_1 = (bool)(__this->___has_value_1);
		return ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		Object_t * L_2 = ___other;
		if (((Object_t *)IsInst(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0))))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		Object_t * L_3 = ___other;
		void* L_4 = alloca(sizeof(Nullable_1_t1486 ));
		UnBoxNullable(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), L_4);
		bool L_5 = (( bool (*) (Nullable_1_t1486 *, Nullable_1_t1486 , const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)((Nullable_1_t1486 *)__this, (Nullable_1_t1486 )((*(Nullable_1_t1486 *)((Nullable_1_t1486 *)L_4))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return L_5;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m12801_gshared (Nullable_1_t1486 * __this, Nullable_1_t1486  ___other, const MethodInfo* method)
{
	{
		bool L_0 = (bool)((&___other)->___has_value_1);
		bool L_1 = (bool)(__this->___has_value_1);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		bool L_2 = (bool)(__this->___has_value_1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		TimeSpan_t603 * L_3 = (TimeSpan_t603 *)&((&___other)->___value_0);
		TimeSpan_t603  L_4 = (TimeSpan_t603 )(__this->___value_0);
		TimeSpan_t603  L_5 = L_4;
		Object_t * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), &L_5);
		NullCheck((ValueType_t458 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, (ValueType_t458 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_3), (Object_t *)L_6);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m12802_gshared (Nullable_1_t1486 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		TimeSpan_t603 * L_1 = (TimeSpan_t603 *)&(__this->___value_0);
		NullCheck((ValueType_t458 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.ValueType::GetHashCode() */, (ValueType_t458 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}
}
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Nullable_1_ToString_m12803_gshared (Nullable_1_t1486 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)(__this->___has_value_1);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		TimeSpan_t603 * L_1 = (TimeSpan_t603 *)&(__this->___value_0);
		NullCheck((ValueType_t458 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.ValueType::ToString() */, (ValueType_t458 *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), L_1));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.SByte
#include "mscorlib_System_SByte.h"


// System.Int32 System.Collections.Generic.IComparer`1<System.SByte>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif

// System.Int16
#include "mscorlib_System_Int16.h"


// System.Int32 System.Collections.Generic.IComparer`1<System.Int16>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif

// System.Int64
#include "mscorlib_System_Int64.h"


// System.Int32 System.Collections.Generic.IComparer`1<System.Int64>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif

// System.Guid
#include "mscorlib_System_Guid.h"


// System.Int32 System.IComparable`1<System.Guid>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.Guid>::Equals(T)
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1MethodDeclarations.h"

// System.Collections.Generic.Comparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_3MethodDeclarations.h"


// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern TypeInfo* Comparer_1_t2325_il2cpp_TypeInfo_var;
extern "C" void GenericComparer_1__ctor_m8350_gshared (GenericComparer_1_t1510 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t2325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5322);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t2325 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2325_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t2325 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2325 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12804_gshared (GenericComparer_1_t1510 * __this, Guid_t410  ___x, Guid_t410  ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		Guid_t410  L_0 = ___x;
		Guid_t410  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		Guid_t410  L_3 = ___y;
		Guid_t410  L_4 = L_3;
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
		Guid_t410  L_6 = ___y;
		Guid_t410  L_7 = L_6;
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
		Guid_t410  L_9 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t410  >::Invoke(0 /* System.Int32 System.IComparable`1<System.Guid>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Guid_t410 )L_9);
		return L_10;
	}
}
// System.Collections.Generic.Comparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_3.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_3.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_3MethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.ctor()
extern "C" void Comparer_1__ctor_m12805_gshared (Comparer_1_t2325 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.cctor()
extern const Il2CppType* GenericComparer_1_t1530_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t247_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m12806_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((Comparer_1_t2325_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2325 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t2326 * L_8 = (DefaultComparer_t2326 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2326 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2325_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t362_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m12807_gshared (Comparer_1_t2325 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
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
		NullCheck((Comparer_1_t2325 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, Guid_t410 , Guid_t410  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T) */, (Comparer_1_t2325 *)__this, (Guid_t410 )((*(Guid_t410 *)((Guid_t410 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Guid_t410 )((*(Guid_t410 *)((Guid_t410 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t362 * L_8 = (ArgumentException_t362 *)il2cpp_codegen_object_new (ArgumentException_t362_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m7534(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Guid>::get_Default()
extern "C" Comparer_1_t2325 * Comparer_1_get_Default_m12808_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2325 * L_0 = ((Comparer_1_t2325_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.Guid>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern TypeInfo* Comparer_1_t2325_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m12809_gshared (DefaultComparer_t2326 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t2325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5322);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t2325 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2325_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t2325 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2325 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern TypeInfo* IComparable_t457_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t362_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m12810_gshared (DefaultComparer_t2326 * __this, Guid_t410  ___x, Guid_t410  ___y, const MethodInfo* method)
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
		Guid_t410  L_0 = ___x;
		Guid_t410  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		Guid_t410  L_3 = ___y;
		Guid_t410  L_4 = L_3;
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
		Guid_t410  L_6 = ___y;
		Guid_t410  L_7 = L_6;
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
		Guid_t410  L_9 = ___x;
		Guid_t410  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		Guid_t410  L_12 = ___x;
		Guid_t410  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		Guid_t410  L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t410  >::Invoke(0 /* System.Int32 System.IComparable`1<System.Guid>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (Guid_t410 )L_15);
		return L_16;
	}

IL_003e:
	{
		Guid_t410  L_17 = ___x;
		Guid_t410  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t457_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		Guid_t410  L_20 = ___x;
		Guid_t410  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		Guid_t410  L_23 = ___y;
		Guid_t410  L_24 = L_23;
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
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__1.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__1MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_10MethodDeclarations.h"


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern TypeInfo* EqualityComparer_1_t2327_il2cpp_TypeInfo_var;
extern "C" void GenericEqualityComparer_1__ctor_m8351_gshared (GenericEqualityComparer_1_t1511 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5325);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t2327 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2327_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t2327 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2327 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12811_gshared (GenericEqualityComparer_1_t1511 * __this, Guid_t410  ___obj, const MethodInfo* method)
{
	{
		Guid_t410  L_0 = ___obj;
		Guid_t410  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m12812_gshared (GenericEqualityComparer_1_t1511 * __this, Guid_t410  ___x, Guid_t410  ___y, const MethodInfo* method)
{
	{
		Guid_t410  L_0 = ___x;
		Guid_t410  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Guid_t410  L_3 = ___y;
		Guid_t410  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Guid_t410  L_6 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, Guid_t410  >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Guid>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Guid_t410 )L_6);
		return L_7;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_10.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_10.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_10MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
extern "C" void EqualityComparer_1__ctor_m12813_gshared (EqualityComparer_1_t2327 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t1541_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t247_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m12814_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t1541_0_0_0_var = il2cpp_codegen_type_from_index(3029);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(GenericEqualityComparer_1_t1541_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t247* L_4 = (TypeU5BU5D_t247*)((TypeU5BU5D_t247*)SZArrayNew(TypeU5BU5D_t247_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t247* >::Invoke(78 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t247*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m1429(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2327_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2327 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t2328 * L_8 = (DefaultComparer_t2328 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2328 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2327_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12815_gshared (EqualityComparer_1_t2327 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2327 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, Guid_t410  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T) */, (EqualityComparer_1_t2327 *)__this, (Guid_t410 )((*(Guid_t410 *)((Guid_t410 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12816_gshared (EqualityComparer_1_t2327 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2327 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Guid_t410 , Guid_t410  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T) */, (EqualityComparer_1_t2327 *)__this, (Guid_t410 )((*(Guid_t410 *)((Guid_t410 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (Guid_t410 )((*(Guid_t410 *)((Guid_t410 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
extern "C" EqualityComparer_1_t2327 * EqualityComparer_1_get_Default_m12817_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2327 * L_0 = ((EqualityComparer_1_t2327_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern TypeInfo* EqualityComparer_1_t2327_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m12818_gshared (DefaultComparer_t2328 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2327_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5325);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t2327 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2327_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t2327 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2327 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12819_gshared (DefaultComparer_t2328 * __this, Guid_t410  ___obj, const MethodInfo* method)
{
	{
		Guid_t410  L_0 = ___obj;
		Guid_t410  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12820_gshared (DefaultComparer_t2328 * __this, Guid_t410  ___x, Guid_t410  ___y, const MethodInfo* method)
{
	{
		Guid_t410  L_0 = ___x;
		Guid_t410  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Guid_t410  L_3 = ___y;
		Guid_t410  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Guid_t410  L_6 = ___y;
		Guid_t410  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T)
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.IEquatable`1<System.TimeSpan>::Equals(T)
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2MethodDeclarations.h"

// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_4MethodDeclarations.h"


// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern TypeInfo* Comparer_1_t2329_il2cpp_TypeInfo_var;
extern "C" void GenericComparer_1__ctor_m8352_gshared (GenericComparer_1_t1512 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t2329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5328);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t2329 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2329_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t2329 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2329 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12821_gshared (GenericComparer_1_t1512 * __this, TimeSpan_t603  ___x, TimeSpan_t603  ___y, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t603  L_0 = ___x;
		TimeSpan_t603  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		TimeSpan_t603  L_3 = ___y;
		TimeSpan_t603  L_4 = L_3;
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
		TimeSpan_t603  L_6 = ___y;
		TimeSpan_t603  L_7 = L_6;
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
		TimeSpan_t603  L_9 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t603  >::Invoke(0 /* System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (TimeSpan_t603 )L_9);
		return L_10;
	}
}
// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_4.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_4.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_4MethodDeclarations.h"


// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
extern "C" void Comparer_1__ctor_m12822_gshared (Comparer_1_t2329 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
extern const Il2CppType* GenericComparer_1_t1530_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t247_il2cpp_TypeInfo_var;
extern "C" void Comparer_1__cctor_m12823_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
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
		((Comparer_1_t2329_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((Comparer_1_t2329 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t2330 * L_8 = (DefaultComparer_t2330 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2330 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((Comparer_1_t2329_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* ArgumentException_t362_il2cpp_TypeInfo_var;
extern "C" int32_t Comparer_1_System_Collections_IComparer_Compare_m12824_gshared (Comparer_1_t2329 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
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
		NullCheck((Comparer_1_t2329 *)__this);
		int32_t L_7 = (int32_t)VirtFuncInvoker2< int32_t, TimeSpan_t603 , TimeSpan_t603  >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T) */, (Comparer_1_t2329 *)__this, (TimeSpan_t603 )((*(TimeSpan_t603 *)((TimeSpan_t603 *)UnBox (L_5, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (TimeSpan_t603 )((*(TimeSpan_t603 *)((TimeSpan_t603 *)UnBox (L_6, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_7;
	}

IL_0033:
	{
		ArgumentException_t362 * L_8 = (ArgumentException_t362 *)il2cpp_codegen_object_new (ArgumentException_t362_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m7534(L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
extern "C" Comparer_1_t2329 * Comparer_1_get_Default_m12825_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		Comparer_1_t2329 * L_0 = ((Comparer_1_t2329_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.TimeSpan>::Compare(T,T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern TypeInfo* Comparer_1_t2329_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m12826_gshared (DefaultComparer_t2330 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Comparer_1_t2329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5328);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((Comparer_1_t2329 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Comparer_1_t2329_il2cpp_TypeInfo_var);
		(( void (*) (Comparer_1_t2329 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((Comparer_1_t2329 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern TypeInfo* IComparable_t457_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t362_il2cpp_TypeInfo_var;
extern "C" int32_t DefaultComparer_Compare_m12827_gshared (DefaultComparer_t2330 * __this, TimeSpan_t603  ___x, TimeSpan_t603  ___y, const MethodInfo* method)
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
		TimeSpan_t603  L_0 = ___x;
		TimeSpan_t603  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		TimeSpan_t603  L_3 = ___y;
		TimeSpan_t603  L_4 = L_3;
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
		TimeSpan_t603  L_6 = ___y;
		TimeSpan_t603  L_7 = L_6;
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
		TimeSpan_t603  L_9 = ___x;
		TimeSpan_t603  L_10 = L_9;
		Object_t * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_10);
		if (!((Object_t*)IsInst(L_11, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))))
		{
			goto IL_003e;
		}
	}
	{
		TimeSpan_t603  L_12 = ___x;
		TimeSpan_t603  L_13 = L_12;
		Object_t * L_14 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_13);
		TimeSpan_t603  L_15 = ___y;
		NullCheck((Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))));
		int32_t L_16 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t603  >::Invoke(0 /* System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)((Object_t*)Castclass(L_14, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2))), (TimeSpan_t603 )L_15);
		return L_16;
	}

IL_003e:
	{
		TimeSpan_t603  L_17 = ___x;
		TimeSpan_t603  L_18 = L_17;
		Object_t * L_19 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_18);
		if (!((Object_t *)IsInst(L_19, IComparable_t457_il2cpp_TypeInfo_var)))
		{
			goto IL_0062;
		}
	}
	{
		TimeSpan_t603  L_20 = ___x;
		TimeSpan_t603  L_21 = L_20;
		Object_t * L_22 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_21);
		TimeSpan_t603  L_23 = ___y;
		TimeSpan_t603  L_24 = L_23;
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
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2.h"
#ifndef _MSC_VER
#else
#endif
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11MethodDeclarations.h"


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern TypeInfo* EqualityComparer_1_t2331_il2cpp_TypeInfo_var;
extern "C" void GenericEqualityComparer_1__ctor_m8353_gshared (GenericEqualityComparer_1_t1513 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5331);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t2331 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2331_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t2331 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2331 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m12828_gshared (GenericEqualityComparer_1_t1513 * __this, TimeSpan_t603  ___obj, const MethodInfo* method)
{
	{
		TimeSpan_t603  L_0 = ___obj;
		TimeSpan_t603  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m12829_gshared (GenericEqualityComparer_1_t1513 * __this, TimeSpan_t603  ___x, TimeSpan_t603  ___y, const MethodInfo* method)
{
	{
		TimeSpan_t603  L_0 = ___x;
		TimeSpan_t603  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		TimeSpan_t603  L_3 = ___y;
		TimeSpan_t603  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		TimeSpan_t603  L_6 = ___y;
		NullCheck((Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_7 = (bool)InterfaceFuncInvoker1< bool, TimeSpan_t603  >::Invoke(0 /* System.Boolean System.IEquatable`1<System.TimeSpan>::Equals(T) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2), (Object_t*)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (TimeSpan_t603 )L_6);
		return L_7;
	}
}
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_11.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_11.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_11MethodDeclarations.h"


// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.ctor()
extern "C" void EqualityComparer_1__ctor_m12830_gshared (EqualityComparer_1_t2331 * __this, const MethodInfo* method)
{
	{
		NullCheck((Object_t *)__this);
		Object__ctor_m1415((Object_t *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.cctor()
extern const Il2CppType* GenericEqualityComparer_1_t1541_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t247_il2cpp_TypeInfo_var;
extern "C" void EqualityComparer_1__cctor_m12831_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GenericEqualityComparer_1_t1541_0_0_0_var = il2cpp_codegen_type_from_index(3029);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(GenericEqualityComparer_1_t1541_0_0_0_var), /*hidden argument*/NULL);
		TypeU5BU5D_t247* L_4 = (TypeU5BU5D_t247*)((TypeU5BU5D_t247*)SZArrayNew(TypeU5BU5D_t247_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, (RuntimeTypeHandle_t931 )LoadTypeToken(IL2CPP_RGCTX_TYPE(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, 0)) = (Type_t *)L_5;
		NullCheck((Type_t *)L_3);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t247* >::Invoke(78 /* System.Type System.Type::MakeGenericType(System.Type[]) */, (Type_t *)L_3, (TypeU5BU5D_t247*)L_4);
		Object_t * L_7 = Activator_CreateInstance_m1429(NULL /*static, unused*/, (Type_t *)L_6, /*hidden argument*/NULL);
		((EqualityComparer_1_t2331_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = ((EqualityComparer_1_t2331 *)Castclass(L_7, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)));
		goto IL_0058;
	}

IL_004e:
	{
		DefaultComparer_t2332 * L_8 = (DefaultComparer_t2332 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		(( void (*) (DefaultComparer_t2332 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		((EqualityComparer_1_t2331_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0 = L_8;
	}

IL_0058:
	{
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m12832_gshared (EqualityComparer_1_t2331 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		NullCheck((EqualityComparer_1_t2331 *)__this);
		int32_t L_1 = (int32_t)VirtFuncInvoker1< int32_t, TimeSpan_t603  >::Invoke(8 /* System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T) */, (EqualityComparer_1_t2331 *)__this, (TimeSpan_t603 )((*(TimeSpan_t603 *)((TimeSpan_t603 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_1;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m12833_gshared (EqualityComparer_1_t2331 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___x;
		Object_t * L_1 = ___y;
		NullCheck((EqualityComparer_1_t2331 *)__this);
		bool L_2 = (bool)VirtFuncInvoker2< bool, TimeSpan_t603 , TimeSpan_t603  >::Invoke(9 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T) */, (EqualityComparer_1_t2331 *)__this, (TimeSpan_t603 )((*(TimeSpan_t603 *)((TimeSpan_t603 *)UnBox (L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))), (TimeSpan_t603 )((*(TimeSpan_t603 *)((TimeSpan_t603 *)UnBox (L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6))))));
		return L_2;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::get_Default()
extern "C" EqualityComparer_1_t2331 * EqualityComparer_1_get_Default_m12834_gshared (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		EqualityComparer_1_t2331 * L_0 = ((EqualityComparer_1_t2331_StaticFields*)IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3)->static_fields)->____default_0;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern TypeInfo* EqualityComparer_1_t2331_il2cpp_TypeInfo_var;
extern "C" void DefaultComparer__ctor_m12835_gshared (DefaultComparer_t2332 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EqualityComparer_1_t2331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5331);
		s_Il2CppMethodIntialized = true;
	}
	{
		NullCheck((EqualityComparer_1_t2331 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EqualityComparer_1_t2331_il2cpp_TypeInfo_var);
		(( void (*) (EqualityComparer_1_t2331 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((EqualityComparer_1_t2331 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12836_gshared (DefaultComparer_t2332 * __this, TimeSpan_t603  ___obj, const MethodInfo* method)
{
	{
		TimeSpan_t603  L_0 = ___obj;
		TimeSpan_t603  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___obj)));
		return L_3;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12837_gshared (DefaultComparer_t2332 * __this, TimeSpan_t603  ___x, TimeSpan_t603  ___y, const MethodInfo* method)
{
	{
		TimeSpan_t603  L_0 = ___x;
		TimeSpan_t603  L_1 = L_0;
		Object_t * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		TimeSpan_t603  L_3 = ___y;
		TimeSpan_t603  L_4 = L_3;
		Object_t * L_5 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_4);
		return ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		TimeSpan_t603  L_6 = ___y;
		TimeSpan_t603  L_7 = L_6;
		Object_t * L_8 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_7);
		NullCheck((Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)));
		bool L_9 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (Object_t *)Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), (&___x)), (Object_t *)L_8);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
