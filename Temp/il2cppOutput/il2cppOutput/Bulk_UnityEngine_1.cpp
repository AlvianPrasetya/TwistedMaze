#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
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
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.String
#include "mscorlib_System_String.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
extern "C" void GameObject_GetComponentFastPath_m853 (GameObject_t1 * __this, Type_t * ___type, IntPtr_t ___oneFurtherThanResultValue, const MethodInfo* method)
{
	typedef void (*GameObject_GetComponentFastPath_m853_ftn) (GameObject_t1 *, Type_t *, IntPtr_t);
	static GameObject_GetComponentFastPath_m853_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_GetComponentFastPath_m853_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)");
	_il2cpp_icall_func(__this, ___type, ___oneFurtherThanResultValue);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" Transform_t7 * GameObject_get_transform_m87 (GameObject_t1 * __this, const MethodInfo* method)
{
	typedef Transform_t7 * (*GameObject_get_transform_m87_ftn) (GameObject_t1 *);
	static GameObject_get_transform_m87_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_get_transform_m87_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::get_transform()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" void GameObject_SendMessage_m854 (GameObject_t1 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, const MethodInfo* method)
{
	typedef void (*GameObject_SendMessage_m854_ftn) (GameObject_t1 *, String_t*, Object_t *, int32_t);
	static GameObject_SendMessage_m854_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_SendMessage_m854_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)");
	_il2cpp_icall_func(__this, ___methodName, ___value, ___options);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" GameObject_t1 * GameObject_Find_m114 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef GameObject_t1 * (*GameObject_Find_m114_ftn) (String_t*);
	static GameObject_Find_m114_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameObject_Find_m114_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.GameObject::Find(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_Enumerator.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Transform/Enumerator
#include "UnityEngine_UnityEngine_Transform_EnumeratorMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C" void Enumerator__ctor_m855 (Enumerator_t165 * __this, Transform_t7 * ___outer, const MethodInfo* method)
{
	{
		__this->___currentIndex_1 = (-1);
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		Transform_t7 * L_0 = ___outer;
		__this->___outer_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m856 (Enumerator_t165 * __this, const MethodInfo* method)
{
	{
		Transform_t7 * L_0 = (__this->___outer_0);
		int32_t L_1 = (__this->___currentIndex_1);
		NullCheck(L_0);
		Transform_t7 * L_2 = Transform_GetChild_m872(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m857 (Enumerator_t165 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Transform_t7 * L_0 = (__this->___outer_0);
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m870(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = (__this->___currentIndex_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2+(int32_t)1));
		V_1 = L_3;
		__this->___currentIndex_1 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		return ((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"


// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_get_position_m858 (Transform_t7 * __this, Vector3_t26 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_position_m858_ftn) (Transform_t7 *, Vector3_t26 *);
	static Transform_INTERNAL_get_position_m858_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_position_m858_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_position_m859 (Transform_t7 * __this, Vector3_t26 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_position_m859_ftn) (Transform_t7 *, Vector3_t26 *);
	static Transform_INTERNAL_set_position_m859_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_position_m859_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" Vector3_t26  Transform_get_position_m68 (Transform_t7 * __this, const MethodInfo* method)
{
	Vector3_t26  V_0 = {0};
	{
		Transform_INTERNAL_get_position_m858(__this, (&V_0), /*hidden argument*/NULL);
		Vector3_t26  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" void Transform_set_position_m78 (Transform_t7 * __this, Vector3_t26  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_position_m859(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_rotation_m860 (Transform_t7 * __this, Quaternion_t27 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_rotation_m860_ftn) (Transform_t7 *, Quaternion_t27 *);
	static Transform_INTERNAL_get_rotation_m860_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_rotation_m860_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_rotation_m861 (Transform_t7 * __this, Quaternion_t27 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_rotation_m861_ftn) (Transform_t7 *, Quaternion_t27 *);
	static Transform_INTERNAL_set_rotation_m861_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_rotation_m861_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" Quaternion_t27  Transform_get_rotation_m70 (Transform_t7 * __this, const MethodInfo* method)
{
	Quaternion_t27  V_0 = {0};
	{
		Transform_INTERNAL_get_rotation_m860(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t27  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" void Transform_set_rotation_m80 (Transform_t7 * __this, Quaternion_t27  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_rotation_m861(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_get_localRotation_m862 (Transform_t7 * __this, Quaternion_t27 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_get_localRotation_m862_ftn) (Transform_t7 *, Quaternion_t27 *);
	static Transform_INTERNAL_get_localRotation_m862_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_get_localRotation_m862_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
extern "C" void Transform_INTERNAL_set_localRotation_m863 (Transform_t7 * __this, Quaternion_t27 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localRotation_m863_ftn) (Transform_t7 *, Quaternion_t27 *);
	static Transform_INTERNAL_set_localRotation_m863_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localRotation_m863_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" Quaternion_t27  Transform_get_localRotation_m864 (Transform_t7 * __this, const MethodInfo* method)
{
	Quaternion_t27  V_0 = {0};
	{
		Transform_INTERNAL_get_localRotation_m862(__this, (&V_0), /*hidden argument*/NULL);
		Quaternion_t27  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" void Transform_set_localRotation_m865 (Transform_t7 * __this, Quaternion_t27  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localRotation_m863(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
extern "C" void Transform_INTERNAL_set_localScale_m866 (Transform_t7 * __this, Vector3_t26 * ___value, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_set_localScale_m866_ftn) (Transform_t7 *, Vector3_t26 *);
	static Transform_INTERNAL_set_localScale_m866_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_set_localScale_m866_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" void Transform_set_localScale_m134 (Transform_t7 * __this, Vector3_t26  ___value, const MethodInfo* method)
{
	{
		Transform_INTERNAL_set_localScale_m866(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C" void Transform_Rotate_m151 (Transform_t7 * __this, Vector3_t26  ___eulerAngles, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		V_0 = 1;
		Vector3_t26  L_0 = ___eulerAngles;
		int32_t L_1 = V_0;
		Transform_Rotate_m867(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
extern "C" void Transform_Rotate_m867 (Transform_t7 * __this, Vector3_t26  ___eulerAngles, int32_t ___relativeTo, const MethodInfo* method)
{
	Quaternion_t27  V_0 = {0};
	{
		float L_0 = ((&___eulerAngles)->___x_0);
		float L_1 = ((&___eulerAngles)->___y_1);
		float L_2 = ((&___eulerAngles)->___z_2);
		Quaternion_t27  L_3 = Quaternion_Euler_m585(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___relativeTo;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		Quaternion_t27  L_5 = Transform_get_localRotation_m864(__this, /*hidden argument*/NULL);
		Quaternion_t27  L_6 = V_0;
		Quaternion_t27  L_7 = Quaternion_op_Multiply_m590(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		Transform_set_localRotation_m865(__this, L_7, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0039:
	{
		Quaternion_t27  L_8 = Transform_get_rotation_m70(__this, /*hidden argument*/NULL);
		Quaternion_t27  L_9 = Transform_get_rotation_m70(__this, /*hidden argument*/NULL);
		Quaternion_t27  L_10 = Quaternion_Inverse_m582(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Quaternion_t27  L_11 = V_0;
		Quaternion_t27  L_12 = Quaternion_op_Multiply_m590(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		Quaternion_t27  L_13 = Transform_get_rotation_m70(__this, /*hidden argument*/NULL);
		Quaternion_t27  L_14 = Quaternion_op_Multiply_m590(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Quaternion_t27  L_15 = Quaternion_op_Multiply_m590(NULL /*static, unused*/, L_8, L_14, /*hidden argument*/NULL);
		Transform_set_rotation_m80(__this, L_15, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.Transform::RotateAroundInternal(UnityEngine.Vector3,System.Single)
extern "C" void Transform_RotateAroundInternal_m868 (Transform_t7 * __this, Vector3_t26  ___axis, float ___angle, const MethodInfo* method)
{
	{
		float L_0 = ___angle;
		Transform_INTERNAL_CALL_RotateAroundInternal_m869(NULL /*static, unused*/, __this, (&___axis), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::INTERNAL_CALL_RotateAroundInternal(UnityEngine.Transform,UnityEngine.Vector3&,System.Single)
extern "C" void Transform_INTERNAL_CALL_RotateAroundInternal_m869 (Object_t * __this /* static, unused */, Transform_t7 * ___self, Vector3_t26 * ___axis, float ___angle, const MethodInfo* method)
{
	typedef void (*Transform_INTERNAL_CALL_RotateAroundInternal_m869_ftn) (Transform_t7 *, Vector3_t26 *, float);
	static Transform_INTERNAL_CALL_RotateAroundInternal_m869_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_INTERNAL_CALL_RotateAroundInternal_m869_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::INTERNAL_CALL_RotateAroundInternal(UnityEngine.Transform,UnityEngine.Vector3&,System.Single)");
	_il2cpp_icall_func(___self, ___axis, ___angle);
}
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" void Transform_RotateAround_m149 (Transform_t7 * __this, Vector3_t26  ___point, Vector3_t26  ___axis, float ___angle, const MethodInfo* method)
{
	Vector3_t26  V_0 = {0};
	Quaternion_t27  V_1 = {0};
	Vector3_t26  V_2 = {0};
	{
		Vector3_t26  L_0 = Transform_get_position_m68(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = ___angle;
		Vector3_t26  L_2 = ___axis;
		Quaternion_t27  L_3 = Quaternion_AngleAxis_m122(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Vector3_t26  L_4 = V_0;
		Vector3_t26  L_5 = ___point;
		Vector3_t26  L_6 = Vector3_op_Subtraction_m566(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Quaternion_t27  L_7 = V_1;
		Vector3_t26  L_8 = V_2;
		Vector3_t26  L_9 = Quaternion_op_Multiply_m591(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		Vector3_t26  L_10 = ___point;
		Vector3_t26  L_11 = V_2;
		Vector3_t26  L_12 = Vector3_op_Addition_m565(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		Vector3_t26  L_13 = V_0;
		Transform_set_position_m78(__this, L_13, /*hidden argument*/NULL);
		Vector3_t26  L_14 = ___axis;
		float L_15 = ___angle;
		Transform_RotateAroundInternal_m868(__this, L_14, ((float)((float)L_15*(float)(0.0174532924f))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" int32_t Transform_get_childCount_m870 (Transform_t7 * __this, const MethodInfo* method)
{
	typedef int32_t (*Transform_get_childCount_m870_ftn) (Transform_t7 *);
	static Transform_get_childCount_m870_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m870_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	return _il2cpp_icall_func(__this);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern TypeInfo* Enumerator_t165_il2cpp_TypeInfo_var;
extern "C" Object_t * Transform_GetEnumerator_m871 (Transform_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enumerator_t165 * L_0 = (Enumerator_t165 *)il2cpp_codegen_object_new (Enumerator_t165_il2cpp_TypeInfo_var);
		Enumerator__ctor_m855(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" Transform_t7 * Transform_GetChild_m872 (Transform_t7 * __this, int32_t ___index, const MethodInfo* method)
{
	typedef Transform_t7 * (*Transform_GetChild_m872_ftn) (Transform_t7 *, int32_t);
	static Transform_GetChild_m872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m872_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	return _il2cpp_icall_func(__this, ___index);
}
// UnityEngine.Time
#include "UnityEngine_UnityEngine_Time.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"



// System.Single UnityEngine.Time::get_deltaTime()
extern "C" float Time_get_deltaTime_m154 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_deltaTime_m154_ftn) ();
	static Time_get_deltaTime_m154_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m154_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_fixedDeltaTime()
extern "C" float Time_get_fixedDeltaTime_m117 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_fixedDeltaTime_m117_ftn) ();
	static Time_get_fixedDeltaTime_m117_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_fixedDeltaTime_m117_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_fixedDeltaTime()");
	return _il2cpp_icall_func();
}
// System.Single UnityEngine.Time::get_timeScale()
extern "C" float Time_get_timeScale_m75 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Time_get_timeScale_m75_ftn) ();
	static Time_get_timeScale_m75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_timeScale_m75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_timeScale()");
	return _il2cpp_icall_func();
}
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C" void Time_set_timeScale_m91 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method)
{
	typedef void (*Time_set_timeScale_m91_ftn) (float);
	static Time_set_timeScale_m91_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_set_timeScale_m91_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::set_timeScale(System.Single)");
	_il2cpp_icall_func(___value);
}
// UnityEngine.Random
#include "UnityEngine_UnityEngine_Random.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"



// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" int32_t Random_Range_m86 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	{
		int32_t L_0 = ___min;
		int32_t L_1 = ___max;
		int32_t L_2 = Random_RandomRangeInt_m873(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
extern "C" int32_t Random_RandomRangeInt_m873 (Object_t * __this /* static, unused */, int32_t ___min, int32_t ___max, const MethodInfo* method)
{
	typedef int32_t (*Random_RandomRangeInt_m873_ftn) (int32_t, int32_t);
	static Random_RandomRangeInt_m873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_RandomRangeInt_m873_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
	return _il2cpp_icall_func(___min, ___max);
}
// System.Single UnityEngine.Random::get_value()
extern "C" float Random_get_value_m66 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef float (*Random_get_value_m66_ftn) ();
	static Random_get_value_m66_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Random_get_value_m66_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Random::get_value()");
	return _il2cpp_icall_func();
}
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstruction.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.YieldInstruction
#include "UnityEngine_UnityEngine_YieldInstructionMethodDeclarations.h"



// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m874 (YieldInstruction_t65 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t65_marshal(const YieldInstruction_t65& unmarshaled, YieldInstruction_t65_marshaled& marshaled)
{
}
void YieldInstruction_t65_marshal_back(const YieldInstruction_t65_marshaled& marshaled, YieldInstruction_t65& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
void YieldInstruction_t65_marshal_cleanup(YieldInstruction_t65_marshaled& marshaled)
{
}
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsException.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PlayerPrefsException
#include "UnityEngine_UnityEngine_PlayerPrefsExceptionMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"


// System.Void UnityEngine.PlayerPrefsException::.ctor(System.String)
extern "C" void PlayerPrefsException__ctor_m875 (PlayerPrefsException_t168 * __this, String_t* ___error, const MethodInfo* method)
{
	{
		String_t* L_0 = ___error;
		Exception__ctor_m1470(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefs.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"

// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Boolean UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)
extern "C" bool PlayerPrefs_TrySetInt_m876 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method)
{
	typedef bool (*PlayerPrefs_TrySetInt_m876_ftn) (String_t*, int32_t);
	static PlayerPrefs_TrySetInt_m876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_TrySetInt_m876_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(___key, ___value);
}
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern TypeInfo* PlayerPrefsException_t168_il2cpp_TypeInfo_var;
extern "C" void PlayerPrefs_SetInt_m137 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerPrefsException_t168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(151);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___key;
		int32_t L_1 = ___value;
		bool L_2 = PlayerPrefs_TrySetInt_m876(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		PlayerPrefsException_t168 * L_3 = (PlayerPrefsException_t168 *)il2cpp_codegen_object_new (PlayerPrefsException_t168_il2cpp_TypeInfo_var);
		PlayerPrefsException__ctor_m875(L_3, (String_t*) &_stringLiteral145, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0017:
	{
		return;
	}
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C" int32_t PlayerPrefs_GetInt_m877 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___defaultValue, const MethodInfo* method)
{
	typedef int32_t (*PlayerPrefs_GetInt_m877_ftn) (String_t*, int32_t);
	static PlayerPrefs_GetInt_m877_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetInt_m877_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
extern "C" int32_t PlayerPrefs_GetInt_m136 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		String_t* L_0 = ___key;
		int32_t L_1 = V_0;
		int32_t L_2 = PlayerPrefs_GetInt_m877(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern "C" String_t* PlayerPrefs_GetString_m878 (Object_t * __this /* static, unused */, String_t* ___key, String_t* ___defaultValue, const MethodInfo* method)
{
	typedef String_t* (*PlayerPrefs_GetString_m878_ftn) (String_t*, String_t*);
	static PlayerPrefs_GetString_m878_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PlayerPrefs_GetString_m878_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PlayerPrefs::GetString(System.String,System.String)");
	return _il2cpp_icall_func(___key, ___defaultValue);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* PlayerPrefs_GetString_m879 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ___key;
		String_t* L_2 = V_0;
		String_t* L_3 = PlayerPrefs_GetString_m878(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"


// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern "C" Vector3_t26  Particle_get_position_m880 (Particle_t170 * __this, const MethodInfo* method)
{
	{
		Vector3_t26  L_0 = (__this->___m_Position_0);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
extern "C" void Particle_set_position_m881 (Particle_t170 * __this, Vector3_t26  ___value, const MethodInfo* method)
{
	{
		Vector3_t26  L_0 = ___value;
		__this->___m_Position_0 = L_0;
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern "C" Vector3_t26  Particle_get_velocity_m882 (Particle_t170 * __this, const MethodInfo* method)
{
	{
		Vector3_t26  L_0 = (__this->___m_Velocity_1);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern "C" void Particle_set_velocity_m883 (Particle_t170 * __this, Vector3_t26  ___value, const MethodInfo* method)
{
	{
		Vector3_t26  L_0 = ___value;
		__this->___m_Velocity_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_energy()
extern "C" float Particle_get_energy_m884 (Particle_t170 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Energy_5);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_energy(System.Single)
extern "C" void Particle_set_energy_m885 (Particle_t170 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Energy_5 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_startEnergy()
extern "C" float Particle_get_startEnergy_m886 (Particle_t170 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_StartEnergy_6);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern "C" void Particle_set_startEnergy_m887 (Particle_t170 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_StartEnergy_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_size()
extern "C" float Particle_get_size_m888 (Particle_t170 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Size_2);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_size(System.Single)
extern "C" void Particle_set_size_m889 (Particle_t170 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Size_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_rotation()
extern "C" float Particle_get_rotation_m890 (Particle_t170 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Rotation_3);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern "C" void Particle_set_rotation_m891 (Particle_t170 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Rotation_3 = L_0;
		return;
	}
}
// System.Single UnityEngine.Particle::get_angularVelocity()
extern "C" float Particle_get_angularVelocity_m892 (Particle_t170 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_AngularVelocity_4);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern "C" void Particle_set_angularVelocity_m893 (Particle_t170 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_AngularVelocity_4 = L_0;
		return;
	}
}
// UnityEngine.Color UnityEngine.Particle::get_color()
extern "C" Color_t36  Particle_get_color_m894 (Particle_t170 * __this, const MethodInfo* method)
{
	{
		Color_t36  L_0 = (__this->___m_Color_7);
		return L_0;
	}
}
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
extern "C" void Particle_set_color_m895 (Particle_t170 * __this, Color_t36  ___value, const MethodInfo* method)
{
	{
		Color_t36  L_0 = ___value;
		__this->___m_Color_7 = L_0;
		return;
	}
}
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2D.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_5.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
#include "mscorlib_System_Collections_Generic_List_1_gen_5MethodDeclarations.h"


// System.Void UnityEngine.Physics2D::.cctor()
extern TypeInfo* List_1_t171_il2cpp_TypeInfo_var;
extern TypeInfo* Physics2D_t48_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1471_MethodInfo_var;
extern "C" void Physics2D__cctor_m896 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(152);
		Physics2D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		List_1__ctor_m1471_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483681);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t171 * L_0 = (List_1_t171 *)il2cpp_codegen_object_new (List_1_t171_il2cpp_TypeInfo_var);
		List_1__ctor_m1471(L_0, /*hidden argument*/List_1__ctor_m1471_MethodInfo_var);
		((Physics2D_t48_StaticFields*)Physics2D_t48_il2cpp_TypeInfo_var->static_fields)->___m_LastDisabledRigidbody2D_0 = L_0;
		return;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2)
extern TypeInfo* Physics2D_t48_il2cpp_TypeInfo_var;
extern "C" RaycastHit2DU5BU5D_t47* Physics2D_RaycastAll_m162 (Object_t * __this /* static, unused */, Vector2_t13  ___origin, Vector2_t13  ___direction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = ((int32_t)-5);
		V_3 = (std::numeric_limits<float>::infinity());
		float L_0 = V_3;
		int32_t L_1 = V_2;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t48_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t47* L_4 = Physics2D_INTERNAL_CALL_RaycastAll_m897(NULL /*static, unused*/, (&___origin), (&___direction), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t47* Physics2D_INTERNAL_CALL_RaycastAll_m897 (Object_t * __this /* static, unused */, Vector2_t13 * ___origin, Vector2_t13 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef RaycastHit2DU5BU5D_t47* (*Physics2D_INTERNAL_CALL_RaycastAll_m897_ftn) (Vector2_t13 *, Vector2_t13 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_RaycastAll_m897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_RaycastAll_m897_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___origin, ___direction, ___distance, ___layerMask, ___minDepth, ___maxDepth);
}
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single)
extern TypeInfo* Physics2D_t48_il2cpp_TypeInfo_var;
extern "C" Collider2DU5BU5D_t46* Physics2D_OverlapCircleAll_m161 (Object_t * __this /* static, unused */, Vector2_t13  ___point, float ___radius, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = ((int32_t)-5);
		float L_0 = ___radius;
		int32_t L_1 = V_2;
		float L_2 = V_1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t48_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t46* L_4 = Physics2D_INTERNAL_CALL_OverlapCircleAll_m898(NULL /*static, unused*/, (&___point), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Collider2D[] UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircleAll(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" Collider2DU5BU5D_t46* Physics2D_INTERNAL_CALL_OverlapCircleAll_m898 (Object_t * __this /* static, unused */, Vector2_t13 * ___point, float ___radius, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method)
{
	typedef Collider2DU5BU5D_t46* (*Physics2D_INTERNAL_CALL_OverlapCircleAll_m898_ftn) (Vector2_t13 *, float, int32_t, float, float);
	static Physics2D_INTERNAL_CALL_OverlapCircleAll_m898_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics2D_INTERNAL_CALL_OverlapCircleAll_m898_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircleAll(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)");
	return _il2cpp_icall_func(___point, ___radius, ___layerMask, ___minDepth, ___maxDepth);
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"

// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2DMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"


// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t49 * RaycastHit2D_get_collider_m164 (RaycastHit2D_t50 * __this, const MethodInfo* method)
{
	{
		Collider2D_t49 * L_0 = (__this->___m_Collider_5);
		return L_0;
	}
}
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t38 * RaycastHit2D_get_rigidbody_m899 (RaycastHit2D_t50 * __this, const MethodInfo* method)
{
	Rigidbody2D_t38 * G_B3_0 = {0};
	{
		Collider2D_t49 * L_0 = RaycastHit2D_get_collider_m164(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m850(NULL /*static, unused*/, L_0, (Object_t28 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Collider2D_t49 * L_2 = RaycastHit2D_get_collider_m164(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_t38 * L_3 = Collider2D_get_attachedRigidbody_m903(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = ((Rigidbody2D_t38 *)(NULL));
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t7 * RaycastHit2D_get_transform_m165 (RaycastHit2D_t50 * __this, const MethodInfo* method)
{
	Rigidbody2D_t38 * V_0 = {0};
	{
		Rigidbody2D_t38 * L_0 = RaycastHit2D_get_rigidbody_m899(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Rigidbody2D_t38 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m850(NULL /*static, unused*/, L_1, (Object_t28 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Rigidbody2D_t38 * L_3 = V_0;
		NullCheck(L_3);
		Transform_t7 * L_4 = Component_get_transform_m67(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		Collider2D_t49 * L_5 = RaycastHit2D_get_collider_m164(__this, /*hidden argument*/NULL);
		bool L_6 = Object_op_Inequality_m850(NULL /*static, unused*/, L_5, (Object_t28 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		Collider2D_t49 * L_7 = RaycastHit2D_get_collider_m164(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t7 * L_8 = Component_get_transform_m67(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0037:
	{
		return (Transform_t7 *)NULL;
	}
}
// UnityEngine.RigidbodyConstraints2D
#include "UnityEngine_UnityEngine_RigidbodyConstraints2D.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RigidbodyConstraints2D
#include "UnityEngine_UnityEngine_RigidbodyConstraints2DMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"



// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_position(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_position_m900 (Rigidbody2D_t38 * __this, Vector2_t13 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_get_position_m900_ftn) (Rigidbody2D_t38 *, Vector2_t13 *);
	static Rigidbody2D_INTERNAL_get_position_m900_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_get_position_m900_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_get_position(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
extern "C" Vector2_t13  Rigidbody2D_get_position_m115 (Rigidbody2D_t38 * __this, const MethodInfo* method)
{
	Vector2_t13  V_0 = {0};
	{
		Rigidbody2D_INTERNAL_get_position_m900(__this, (&V_0), /*hidden argument*/NULL);
		Vector2_t13  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
extern "C" void Rigidbody2D_MovePosition_m120 (Rigidbody2D_t38 * __this, Vector2_t13  ___position, const MethodInfo* method)
{
	{
		Rigidbody2D_INTERNAL_CALL_MovePosition_m901(NULL /*static, unused*/, __this, (&___position), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody2D,UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_CALL_MovePosition_m901 (Object_t * __this /* static, unused */, Rigidbody2D_t38 * ___self, Vector2_t13 * ___position, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_CALL_MovePosition_m901_ftn) (Rigidbody2D_t38 *, Vector2_t13 *);
	static Rigidbody2D_INTERNAL_CALL_MovePosition_m901_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_CALL_MovePosition_m901_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody2D,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___self, ___position);
}
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m902 (Rigidbody2D_t38 * __this, Vector2_t13 * ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_INTERNAL_set_velocity_m902_ftn) (Rigidbody2D_t38 *, Vector2_t13 *);
	static Rigidbody2D_INTERNAL_set_velocity_m902_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_INTERNAL_set_velocity_m902_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" void Rigidbody2D_set_velocity_m146 (Rigidbody2D_t38 * __this, Vector2_t13  ___value, const MethodInfo* method)
{
	{
		Rigidbody2D_INTERNAL_set_velocity_m902(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody2D::set_constraints(UnityEngine.RigidbodyConstraints2D)
extern "C" void Rigidbody2D_set_constraints_m147 (Rigidbody2D_t38 * __this, int32_t ___value, const MethodInfo* method)
{
	typedef void (*Rigidbody2D_set_constraints_m147_ftn) (Rigidbody2D_t38 *, int32_t);
	static Rigidbody2D_set_constraints_m147_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody2D_set_constraints_m147_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody2D::set_constraints(UnityEngine.RigidbodyConstraints2D)");
	_il2cpp_icall_func(__this, ___value);
}
#ifndef _MSC_VER
#else
#endif



// UnityEngine.Rigidbody2D UnityEngine.Collider2D::get_attachedRigidbody()
extern "C" Rigidbody2D_t38 * Collider2D_get_attachedRigidbody_m903 (Collider2D_t49 * __this, const MethodInfo* method)
{
	typedef Rigidbody2D_t38 * (*Collider2D_get_attachedRigidbody_m903_ftn) (Collider2D_t49 *);
	static Collider2D_get_attachedRigidbody_m903_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider2D_get_attachedRigidbody_m903_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider2D::get_attachedRigidbody()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2D.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ContactPoint2D
#include "UnityEngine_UnityEngine_ContactPoint2DMethodDeclarations.h"



// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2D.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2DMethodDeclarations.h"



// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C" GameObject_t1 * Collision2D_get_gameObject_m81 (Collision2D_t24 * __this, const MethodInfo* method)
{
	GameObject_t1 * G_B3_0 = {0};
	{
		Rigidbody2D_t38 * L_0 = (__this->___m_Rigidbody_0);
		bool L_1 = Object_op_Inequality_m850(NULL /*static, unused*/, L_0, (Object_t28 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Rigidbody2D_t38 * L_2 = (__this->___m_Rigidbody_0);
		NullCheck(L_2);
		GameObject_t1 * L_3 = Component_get_gameObject_m76(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002c;
	}

IL_0021:
	{
		Collider2D_t49 * L_4 = (__this->___m_Collider_1);
		NullCheck(L_4);
		GameObject_t1 * L_5 = Component_get_gameObject_m76(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_002c:
	{
		return G_B3_0;
	}
}
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern "C" void AudioConfigurationChangeHandler__ctor_m904 (AudioConfigurationChangeHandler_t175 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern "C" void AudioConfigurationChangeHandler_Invoke_m905 (AudioConfigurationChangeHandler_t175 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AudioConfigurationChangeHandler_Invoke_m905((AudioConfigurationChangeHandler_t175 *)__this->___prev_9,___deviceWasChanged, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, bool ___deviceWasChanged, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___deviceWasChanged,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t175(Il2CppObject* delegate, bool ___deviceWasChanged)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___deviceWasChanged' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___deviceWasChanged);

	// Marshaling cleanup of parameter '___deviceWasChanged' native representation

}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern TypeInfo* Boolean_t53_il2cpp_TypeInfo_var;
extern "C" Object_t * AudioConfigurationChangeHandler_BeginInvoke_m906 (AudioConfigurationChangeHandler_t175 * __this, bool ___deviceWasChanged, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t53_il2cpp_TypeInfo_var, &___deviceWasChanged);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern "C" void AudioConfigurationChangeHandler_EndInvoke_m907 (AudioConfigurationChangeHandler_t175 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"



// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern TypeInfo* AudioSettings_t176_il2cpp_TypeInfo_var;
extern "C" void AudioSettings_InvokeOnAudioConfigurationChanged_m908 (AudioSettings_t176 * __this, bool ___deviceWasChanged, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AudioSettings_t176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(153);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioConfigurationChangeHandler_t175 * L_0 = ((AudioSettings_t176_StaticFields*)AudioSettings_t176_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AudioConfigurationChangeHandler_t175 * L_1 = ((AudioSettings_t176_StaticFields*)AudioSettings_t176_il2cpp_TypeInfo_var->static_fields)->___OnAudioConfigurationChanged_0;
		bool L_2 = ___deviceWasChanged;
		NullCheck(L_1);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */, L_1, L_2);
	}

IL_0015:
	{
		return;
	}
}
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"


// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMReaderCallback__ctor_m909 (PCMReaderCallback_t178 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" void PCMReaderCallback_Invoke_m910 (PCMReaderCallback_t178 * __this, SingleU5BU5D_t177* ___data, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMReaderCallback_Invoke_m910((PCMReaderCallback_t178 *)__this->___prev_9,___data, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, SingleU5BU5D_t177* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, SingleU5BU5D_t177* ___data, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___data,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t178(Il2CppObject* delegate, SingleU5BU5D_t177* ___data)
{
	typedef void (STDCALL *native_function_ptr_type)(float*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___data' to native representation
	float* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_array<float>((Il2CppCodeGenArray*)___data);

	// Native function invocation
	_il2cpp_pinvoke_func(____data_marshaled);

	// Marshaling cleanup of parameter '___data' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m911 (PCMReaderCallback_t178 * __this, SingleU5BU5D_t177* ___data, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m912 (PCMReaderCallback_t178 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"



// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMSetPositionCallback__ctor_m913 (PCMSetPositionCallback_t179 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern "C" void PCMSetPositionCallback_Invoke_m914 (PCMSetPositionCallback_t179 * __this, int32_t ___position, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PCMSetPositionCallback_Invoke_m914((PCMSetPositionCallback_t179 *)__this->___prev_9,___position, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___position, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___position,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_PCMSetPositionCallback_t179(Il2CppObject* delegate, int32_t ___position)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___position' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___position);

	// Marshaling cleanup of parameter '___position' native representation

}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern "C" Object_t * PCMSetPositionCallback_BeginInvoke_m915 (PCMSetPositionCallback_t179 * __this, int32_t ___position, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t41_il2cpp_TypeInfo_var, &___position);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMSetPositionCallback_EndInvoke_m916 (PCMSetPositionCallback_t179 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"



// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m917 (AudioClip_t16 * __this, SingleU5BU5D_t177* ___data, const MethodInfo* method)
{
	{
		PCMReaderCallback_t178 * L_0 = (__this->___m_PCMReaderCallback_2);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMReaderCallback_t178 * L_1 = (__this->___m_PCMReaderCallback_2);
		SingleU5BU5D_t177* L_2 = ___data;
		NullCheck(L_1);
		VirtActionInvoker1< SingleU5BU5D_t177* >::Invoke(10 /* System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m918 (AudioClip_t16 * __this, int32_t ___position, const MethodInfo* method)
{
	{
		PCMSetPositionCallback_t179 * L_0 = (__this->___m_PCMSetPositionCallback_3);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		PCMSetPositionCallback_t179 * L_1 = (__this->___m_PCMSetPositionCallback_3);
		int32_t L_2 = ___position;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"

// System.UInt64
#include "mscorlib_System_UInt64.h"


// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m919 (AudioSource_t17 * __this, uint64_t ___delay, const MethodInfo* method)
{
	typedef void (*AudioSource_Play_m919_ftn) (AudioSource_t17 *, uint64_t);
	static AudioSource_Play_m919_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m919_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.UInt64)");
	_il2cpp_icall_func(__this, ___delay);
}
// System.Void UnityEngine.AudioSource::Play()
extern "C" void AudioSource_Play_m145 (AudioSource_t17 * __this, const MethodInfo* method)
{
	uint64_t V_0 = 0;
	{
		V_0 = (((int64_t)0));
		uint64_t L_0 = V_0;
		AudioSource_Play_m919(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" bool AudioSource_get_isPlaying_m144 (AudioSource_t17 * __this, const MethodInfo* method)
{
	typedef bool (*AudioSource_get_isPlaying_m144_ftn) (AudioSource_t17 *);
	static AudioSource_get_isPlaying_m144_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_m144_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"



// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m920 (WebCamDevice_t180 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m921 (WebCamDevice_t180 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Flags_1);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t180_marshal(const WebCamDevice_t180& unmarshaled, WebCamDevice_t180_marshaled& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Flags_1 = unmarshaled.___m_Flags_1;
}
void WebCamDevice_t180_marshal_back(const WebCamDevice_t180_marshaled& marshaled, WebCamDevice_t180& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	unmarshaled.___m_Flags_1 = marshaled.___m_Flags_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
void WebCamDevice_t180_marshal_cleanup(WebCamDevice_t180_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"



// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"

// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"


// System.Void UnityEngine.AnimationEvent::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AnimationEvent__ctor_m922 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		__this->___m_Time_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_FunctionName_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___m_StringParameter_2 = L_1;
		__this->___m_ObjectReferenceParameter_3 = (Object_t28 *)NULL;
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_t182 *)NULL;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern "C" String_t* AnimationEvent_get_data_m923 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern "C" void AnimationEvent_set_data_m924 (AnimationEvent_t183 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C" String_t* AnimationEvent_get_stringParameter_m925 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringParameter_2);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C" void AnimationEvent_set_stringParameter_m926 (AnimationEvent_t183 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_StringParameter_2 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C" float AnimationEvent_get_floatParameter_m927 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatParameter_4);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern "C" void AnimationEvent_set_floatParameter_m928 (AnimationEvent_t183 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_FloatParameter_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C" int32_t AnimationEvent_get_intParameter_m929 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntParameter_5);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern "C" void AnimationEvent_set_intParameter_m930 (AnimationEvent_t183 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_IntParameter_5 = L_0;
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C" Object_t28 * AnimationEvent_get_objectReferenceParameter_m931 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	{
		Object_t28 * L_0 = (__this->___m_ObjectReferenceParameter_3);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern "C" void AnimationEvent_set_objectReferenceParameter_m932 (AnimationEvent_t183 * __this, Object_t28 * ___value, const MethodInfo* method)
{
	{
		Object_t28 * L_0 = ___value;
		__this->___m_ObjectReferenceParameter_3 = L_0;
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" String_t* AnimationEvent_get_functionName_m933 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_FunctionName_1);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C" void AnimationEvent_set_functionName_m934 (AnimationEvent_t183 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_FunctionName_1 = L_0;
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" float AnimationEvent_get_time_m935 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Time_0);
		return L_0;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C" void AnimationEvent_set_time_m936 (AnimationEvent_t183 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___m_Time_0 = L_0;
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C" int32_t AnimationEvent_get_messageOptions_m937 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_MessageOptions_6);
		return (int32_t)(L_0);
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern "C" void AnimationEvent_set_messageOptions_m938 (AnimationEvent_t183 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_MessageOptions_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" bool AnimationEvent_get_isFiredByLegacy_m939 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" bool AnimationEvent_get_isFiredByAnimator_m940 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Source_7);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern "C" AnimationState_t182 * AnimationEvent_get_animationState_m941 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m939(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m799(NULL /*static, unused*/, (String_t*) &_stringLiteral146, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimationState_t182 * L_1 = (__this->___m_StateSender_8);
		return L_1;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern "C" AnimatorStateInfo_t184  AnimationEvent_get_animatorStateInfo_m942 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m940(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m799(NULL /*static, unused*/, (String_t*) &_stringLiteral147, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorStateInfo_t184  L_1 = (__this->___m_AnimatorStateInfo_9);
		return L_1;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern "C" AnimatorClipInfo_t185  AnimationEvent_get_animatorClipInfo_m943 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_m940(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Debug_LogError_m799(NULL /*static, unused*/, (String_t*) &_stringLiteral148, /*hidden argument*/NULL);
	}

IL_0015:
	{
		AnimatorClipInfo_t185  L_1 = (__this->___m_AnimatorClipInfo_10);
		return L_1;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern "C" int32_t AnimationEvent_GetHash_m944 (AnimationEvent_t183 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m933(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m935(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m1421((&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)33)*(int32_t)L_2))+(int32_t)L_4));
		int32_t L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"



// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"



// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m945 (AnimationCurve_t187 * __this, KeyframeU5BU5D_t332* ___keys, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		KeyframeU5BU5D_t332* L_0 = ___keys;
		AnimationCurve_Init_m949(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m946 (AnimationCurve_t187 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		AnimationCurve_Init_m949(__this, (KeyframeU5BU5D_t332*)(KeyframeU5BU5D_t332*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m947 (AnimationCurve_t187 * __this, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Cleanup_m947_ftn) (AnimationCurve_t187 *);
	static AnimationCurve_Cleanup_m947_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Cleanup_m947_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Cleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m948 (AnimationCurve_t187 * __this, const MethodInfo* method)
{
	Exception_t118 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t118 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		AnimationCurve_Cleanup_m947(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t118 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m170(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t118 *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m949 (AnimationCurve_t187 * __this, KeyframeU5BU5D_t332* ___keys, const MethodInfo* method)
{
	typedef void (*AnimationCurve_Init_m949_ftn) (AnimationCurve_t187 *, KeyframeU5BU5D_t332*);
	static AnimationCurve_Init_m949_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationCurve_Init_m949_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])");
	_il2cpp_icall_func(__this, ___keys);
}
// Conversion methods for marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t187_marshal(const AnimationCurve_t187& unmarshaled, AnimationCurve_t187_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void AnimationCurve_t187_marshal_back(const AnimationCurve_t187_marshaled& marshaled, AnimationCurve_t187& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationCurve
void AnimationCurve_t187_marshal_cleanup(AnimationCurve_t187_marshaled& marshaled)
{
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"


// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern "C" bool AnimatorStateInfo_IsName_m950 (AnimatorStateInfo_t184 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m968(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = (__this->___m_FullPath_2);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = (__this->___m_Name_0);
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = (__this->___m_Path_1);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		return G_B4_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C" int32_t AnimatorStateInfo_get_fullPathHash_m951 (AnimatorStateInfo_t184 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" int32_t AnimatorStateInfo_get_nameHash_m952 (AnimatorStateInfo_t184 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Path_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" int32_t AnimatorStateInfo_get_shortNameHash_m953 (AnimatorStateInfo_t184 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_0);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" float AnimatorStateInfo_get_normalizedTime_m954 (AnimatorStateInfo_t184 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" float AnimatorStateInfo_get_length_m955 (AnimatorStateInfo_t184 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_Length_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" int32_t AnimatorStateInfo_get_tagHash_m956 (AnimatorStateInfo_t184 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Tag_5);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C" bool AnimatorStateInfo_IsTag_m957 (AnimatorStateInfo_t184 * __this, String_t* ___tag, const MethodInfo* method)
{
	{
		String_t* L_0 = ___tag;
		int32_t L_1 = Animator_StringToHash_m968(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Tag_5);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" bool AnimatorStateInfo_get_loop_m958 (AnimatorStateInfo_t184 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Loop_6);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"



// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" bool AnimatorTransitionInfo_IsName_m959 (AnimatorTransitionInfo_t189 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m968(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_Name_2);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___name;
		int32_t L_4 = Animator_StringToHash_m968(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___m_FullPath_0);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m960 (AnimatorTransitionInfo_t189 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = Animator_StringToHash_m968(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___m_UserName_1);
		return ((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m961 (AnimatorTransitionInfo_t189 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_FullPath_0);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m962 (AnimatorTransitionInfo_t189 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Name_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m963 (AnimatorTransitionInfo_t189 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_UserName_1);
		return L_0;
	}
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m964 (AnimatorTransitionInfo_t189 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_NormalizedTime_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m965 (AnimatorTransitionInfo_t189 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_AnyState_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m966 (AnimatorTransitionInfo_t189 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m967 (AnimatorTransitionInfo_t189 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_TransitionType_5);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t189_marshal(const AnimatorTransitionInfo_t189& unmarshaled, AnimatorTransitionInfo_t189_marshaled& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_NormalizedTime_3 = unmarshaled.___m_NormalizedTime_3;
	marshaled.___m_AnyState_4 = unmarshaled.___m_AnyState_4;
	marshaled.___m_TransitionType_5 = unmarshaled.___m_TransitionType_5;
}
void AnimatorTransitionInfo_t189_marshal_back(const AnimatorTransitionInfo_t189_marshaled& marshaled, AnimatorTransitionInfo_t189& unmarshaled)
{
	unmarshaled.___m_FullPath_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_UserName_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_Name_2 = marshaled.___m_Name_2;
	unmarshaled.___m_NormalizedTime_3 = marshaled.___m_NormalizedTime_3;
	unmarshaled.___m_AnyState_4 = marshaled.___m_AnyState_4;
	unmarshaled.___m_TransitionType_5 = marshaled.___m_TransitionType_5;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
void AnimatorTransitionInfo_t189_marshal_cleanup(AnimatorTransitionInfo_t189_marshaled& marshaled)
{
}
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
#ifndef _MSC_VER
#else
#endif



// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m968 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	typedef int32_t (*Animator_StringToHash_m968_ftn) (String_t*);
	static Animator_StringToHash_m968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m968_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	return _il2cpp_icall_func(___name);
}
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"



// Conversion methods for marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t191_marshal(const SkeletonBone_t191& unmarshaled, SkeletonBone_t191_marshaled& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___position_1 = unmarshaled.___position_1;
	marshaled.___rotation_2 = unmarshaled.___rotation_2;
	marshaled.___scale_3 = unmarshaled.___scale_3;
	marshaled.___transformModified_4 = unmarshaled.___transformModified_4;
}
void SkeletonBone_t191_marshal_back(const SkeletonBone_t191_marshaled& marshaled, SkeletonBone_t191& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	unmarshaled.___position_1 = marshaled.___position_1;
	unmarshaled.___rotation_2 = marshaled.___rotation_2;
	unmarshaled.___scale_3 = marshaled.___scale_3;
	unmarshaled.___transformModified_4 = marshaled.___transformModified_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
void SkeletonBone_t191_marshal_cleanup(SkeletonBone_t191_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"



// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"



// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m969 (HumanBone_t193 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_BoneName_0);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m970 (HumanBone_t193 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_BoneName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m971 (HumanBone_t193 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_HumanName_1);
		return L_0;
	}
}
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m972 (HumanBone_t193 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___m_HumanName_1 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
void HumanBone_t193_marshal(const HumanBone_t193& unmarshaled, HumanBone_t193_marshaled& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
void HumanBone_t193_marshal_back(const HumanBone_t193_marshaled& marshaled, HumanBone_t193& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	unmarshaled.___limit_2 = marshaled.___limit_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
void HumanBone_t193_marshal_cleanup(HumanBone_t193_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"



// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"



// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"



// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMesh.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMeshMethodDeclarations.h"



// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C" void TextMesh_set_text_m74 (TextMesh_t25 * __this, String_t* ___value, const MethodInfo* method)
{
	typedef void (*TextMesh_set_text_m74_ftn) (TextMesh_t25 *, String_t*);
	static TextMesh_set_text_m74_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextMesh_set_text_m74_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextMesh::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value);
}
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"

// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"


// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C" int32_t CharacterInfo_get_advance_m973 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___width_3);
		return (((int32_t)L_0));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern "C" int32_t CharacterInfo_get_glyphWidth_m974 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_width_m597(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern "C" int32_t CharacterInfo_get_glyphHeight_m975 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_height_m599(L_0, /*hidden argument*/NULL);
		return (((int32_t)((-L_1))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern "C" int32_t CharacterInfo_get_bearing_m976 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m593(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C" int32_t CharacterInfo_get_minY_m977 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t32 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m595(L_1, /*hidden argument*/NULL);
		Rect_t32 * L_3 = &(__this->___vert_2);
		float L_4 = Rect_get_height_m599(L_3, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)((float)((float)L_2+(float)L_4))))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C" int32_t CharacterInfo_get_maxY_m978 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___ascent_7);
		Rect_t32 * L_1 = &(__this->___vert_2);
		float L_2 = Rect_get_y_m595(L_1, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)(((int32_t)L_2))));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C" int32_t CharacterInfo_get_minX_m979 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m593(L_0, /*hidden argument*/NULL);
		return (((int32_t)L_1));
	}
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C" int32_t CharacterInfo_get_maxX_m980 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___vert_2);
		float L_1 = Rect_get_x_m593(L_0, /*hidden argument*/NULL);
		Rect_t32 * L_2 = &(__this->___vert_2);
		float L_3 = Rect_get_width_m597(L_2, /*hidden argument*/NULL);
		return (((int32_t)((float)((float)L_1+(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C" Vector2_t13  CharacterInfo_get_uvBottomLeftUnFlipped_m981 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m593(L_0, /*hidden argument*/NULL);
		Rect_t32 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m595(L_2, /*hidden argument*/NULL);
		Vector2_t13  L_4 = {0};
		Vector2__ctor_m116(&L_4, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C" Vector2_t13  CharacterInfo_get_uvBottomRightUnFlipped_m982 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m593(L_0, /*hidden argument*/NULL);
		Rect_t32 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m597(L_2, /*hidden argument*/NULL);
		Rect_t32 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m595(L_4, /*hidden argument*/NULL);
		Vector2_t13  L_6 = {0};
		Vector2__ctor_m116(&L_6, ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C" Vector2_t13  CharacterInfo_get_uvTopRightUnFlipped_m983 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m593(L_0, /*hidden argument*/NULL);
		Rect_t32 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_width_m597(L_2, /*hidden argument*/NULL);
		Rect_t32 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_y_m595(L_4, /*hidden argument*/NULL);
		Rect_t32 * L_6 = &(__this->___uv_1);
		float L_7 = Rect_get_height_m599(L_6, /*hidden argument*/NULL);
		Vector2_t13  L_8 = {0};
		Vector2__ctor_m116(&L_8, ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C" Vector2_t13  CharacterInfo_get_uvTopLeftUnFlipped_m984 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	{
		Rect_t32 * L_0 = &(__this->___uv_1);
		float L_1 = Rect_get_x_m593(L_0, /*hidden argument*/NULL);
		Rect_t32 * L_2 = &(__this->___uv_1);
		float L_3 = Rect_get_y_m595(L_2, /*hidden argument*/NULL);
		Rect_t32 * L_4 = &(__this->___uv_1);
		float L_5 = Rect_get_height_m599(L_4, /*hidden argument*/NULL);
		Vector2_t13  L_6 = {0};
		Vector2__ctor_m116(&L_6, L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C" Vector2_t13  CharacterInfo_get_uvBottomLeft_m985 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	Vector2_t13  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t13  L_1 = CharacterInfo_get_uvBottomLeftUnFlipped_m981(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t13  L_2 = CharacterInfo_get_uvBottomLeftUnFlipped_m981(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C" Vector2_t13  CharacterInfo_get_uvBottomRight_m986 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	Vector2_t13  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t13  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m984(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t13  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m982(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C" Vector2_t13  CharacterInfo_get_uvTopRight_m987 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	Vector2_t13  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t13  L_1 = CharacterInfo_get_uvTopRightUnFlipped_m983(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t13  L_2 = CharacterInfo_get_uvTopRightUnFlipped_m983(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C" Vector2_t13  CharacterInfo_get_uvTopLeft_m988 (CharacterInfo_t197 * __this, const MethodInfo* method)
{
	Vector2_t13  G_B3_0 = {0};
	{
		bool L_0 = (__this->___flipped_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t13  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m982(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Vector2_t13  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m984(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t197_marshal(const CharacterInfo_t197& unmarshaled, CharacterInfo_t197_marshaled& marshaled)
{
	marshaled.___index_0 = unmarshaled.___index_0;
	marshaled.___uv_1 = unmarshaled.___uv_1;
	marshaled.___vert_2 = unmarshaled.___vert_2;
	marshaled.___width_3 = unmarshaled.___width_3;
	marshaled.___size_4 = unmarshaled.___size_4;
	marshaled.___style_5 = unmarshaled.___style_5;
	marshaled.___flipped_6 = unmarshaled.___flipped_6;
	marshaled.___ascent_7 = unmarshaled.___ascent_7;
}
void CharacterInfo_t197_marshal_back(const CharacterInfo_t197_marshaled& marshaled, CharacterInfo_t197& unmarshaled)
{
	unmarshaled.___index_0 = marshaled.___index_0;
	unmarshaled.___uv_1 = marshaled.___uv_1;
	unmarshaled.___vert_2 = marshaled.___vert_2;
	unmarshaled.___width_3 = marshaled.___width_3;
	unmarshaled.___size_4 = marshaled.___size_4;
	unmarshaled.___style_5 = marshaled.___style_5;
	unmarshaled.___flipped_6 = marshaled.___flipped_6;
	unmarshaled.___ascent_7 = marshaled.___ascent_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
void CharacterInfo_t197_marshal_cleanup(CharacterInfo_t197_marshaled& marshaled)
{
}
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"



// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern "C" void FontTextureRebuildCallback__ctor_m989 (FontTextureRebuildCallback_t198 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" void FontTextureRebuildCallback_Invoke_m990 (FontTextureRebuildCallback_t198 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		FontTextureRebuildCallback_Invoke_m990((FontTextureRebuildCallback_t198 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t198(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m991 (FontTextureRebuildCallback_t198 * __this, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C" void FontTextureRebuildCallback_EndInvoke_m992 (FontTextureRebuildCallback_t198 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"

// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_4.h"
// System.Action`1<UnityEngine.Font>
#include "mscorlib_System_Action_1_gen_4MethodDeclarations.h"


// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern TypeInfo* Font_t124_il2cpp_TypeInfo_var;
extern "C" void Font_InvokeTextureRebuilt_Internal_m993 (Object_t * __this /* static, unused */, Font_t124 * ___font, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Font_t124_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(154);
		s_Il2CppMethodIntialized = true;
	}
	Action_1_t199 * V_0 = {0};
	{
		Action_1_t199 * L_0 = ((Font_t124_StaticFields*)Font_t124_il2cpp_TypeInfo_var->static_fields)->___textureRebuilt_2;
		V_0 = L_0;
		Action_1_t199 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Action_1_t199 * L_2 = V_0;
		Font_t124 * L_3 = ___font;
		NullCheck(L_2);
		VirtActionInvoker1< Font_t124 * >::Invoke(10 /* System.Void System.Action`1<UnityEngine.Font>::Invoke(!0) */, L_2, L_3);
	}

IL_0013:
	{
		Font_t124 * L_4 = ___font;
		NullCheck(L_4);
		FontTextureRebuildCallback_t198 * L_5 = (L_4->___m_FontTextureRebuildCallback_3);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		Font_t124 * L_6 = ___font;
		NullCheck(L_6);
		FontTextureRebuildCallback_t198 * L_7 = (L_6->___m_FontTextureRebuildCallback_3);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke() */, L_7);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m994 (Font_t124 * __this, const MethodInfo* method)
{
	typedef bool (*Font_get_dynamic_m994_ftn) (Font_t124 *);
	static Font_get_dynamic_m994_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_dynamic_m994_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_dynamic()");
	return _il2cpp_icall_func(__this);
}
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"



// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"



// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_6.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_7.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_8.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_gen_6MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_7MethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_8MethodDeclarations.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"


// System.Void UnityEngine.TextGenerator::.ctor()
extern "C" void TextGenerator__ctor_m995 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	{
		TextGenerator__ctor_m996(__this, ((int32_t)50), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern TypeInfo* List_1_t202_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t203_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t204_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1472_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m1473_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m1474_MethodInfo_var;
extern "C" void TextGenerator__ctor_m996 (TextGenerator_t205 * __this, int32_t ___initialCapacity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t202_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(158);
		List_1_t203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(159);
		List_1_t204_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		List_1__ctor_m1472_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		List_1__ctor_m1473_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483683);
		List_1__ctor_m1474_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___initialCapacity;
		List_1_t202 * L_1 = (List_1_t202 *)il2cpp_codegen_object_new (List_1_t202_il2cpp_TypeInfo_var);
		List_1__ctor_m1472(L_1, ((int32_t)((int32_t)((int32_t)((int32_t)L_0+(int32_t)1))*(int32_t)4)), /*hidden argument*/List_1__ctor_m1472_MethodInfo_var);
		__this->___m_Verts_5 = L_1;
		int32_t L_2 = ___initialCapacity;
		List_1_t203 * L_3 = (List_1_t203 *)il2cpp_codegen_object_new (List_1_t203_il2cpp_TypeInfo_var);
		List_1__ctor_m1473(L_3, ((int32_t)((int32_t)L_2+(int32_t)1)), /*hidden argument*/List_1__ctor_m1473_MethodInfo_var);
		__this->___m_Characters_6 = L_3;
		List_1_t204 * L_4 = (List_1_t204 *)il2cpp_codegen_object_new (List_1_t204_il2cpp_TypeInfo_var);
		List_1__ctor_m1474(L_4, ((int32_t)20), /*hidden argument*/List_1__ctor_m1474_MethodInfo_var);
		__this->___m_Lines_7 = L_4;
		TextGenerator_Init_m998(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern "C" void TextGenerator_System_IDisposable_Dispose_m997 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	{
		TextGenerator_Dispose_cpp_m999(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::Init()
extern "C" void TextGenerator_Init_m998 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Init_m998_ftn) (TextGenerator_t205 *);
	static TextGenerator_Init_m998_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Init_m998_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Init()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern "C" void TextGenerator_Dispose_cpp_m999 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	typedef void (*TextGenerator_Dispose_cpp_m999_ftn) (TextGenerator_t205 *);
	static TextGenerator_Dispose_cpp_m999_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_Dispose_cpp_m999_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::Dispose_cpp()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_m1000 (TextGenerator_t205 * __this, String_t* ___str, Font_t124 * ___font, Color_t36  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t13  ___extents, Vector2_t13  ___pivot, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t124 * L_1 = ___font;
		Color_t36  L_2 = ___color;
		int32_t L_3 = ___fontSize;
		float L_4 = ___scaleFactor;
		float L_5 = ___lineSpacing;
		int32_t L_6 = ___style;
		bool L_7 = ___richText;
		bool L_8 = ___resizeTextForBestFit;
		int32_t L_9 = ___resizeTextMinSize;
		int32_t L_10 = ___resizeTextMaxSize;
		int32_t L_11 = ___verticalOverFlow;
		int32_t L_12 = ___horizontalOverflow;
		bool L_13 = ___updateBounds;
		int32_t L_14 = ___anchor;
		float L_15 = ((&___extents)->___x_1);
		float L_16 = ((&___extents)->___y_2);
		float L_17 = ((&___pivot)->___x_1);
		float L_18 = ((&___pivot)->___y_2);
		bool L_19 = ___generateOutOfBounds;
		bool L_20 = TextGenerator_Populate_Internal_cpp_m1001(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_Populate_Internal_cpp_m1001 (TextGenerator_t205 * __this, String_t* ___str, Font_t124 * ___font, Color_t36  ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	{
		String_t* L_0 = ___str;
		Font_t124 * L_1 = ___font;
		int32_t L_2 = ___fontSize;
		float L_3 = ___scaleFactor;
		float L_4 = ___lineSpacing;
		int32_t L_5 = ___style;
		bool L_6 = ___richText;
		bool L_7 = ___resizeTextForBestFit;
		int32_t L_8 = ___resizeTextMinSize;
		int32_t L_9 = ___resizeTextMaxSize;
		int32_t L_10 = ___verticalOverFlow;
		int32_t L_11 = ___horizontalOverflow;
		bool L_12 = ___updateBounds;
		int32_t L_13 = ___anchor;
		float L_14 = ___extentsX;
		float L_15 = ___extentsY;
		float L_16 = ___pivotX;
		float L_17 = ___pivotY;
		bool L_18 = ___generateOutOfBounds;
		bool L_19 = TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m1002(NULL /*static, unused*/, __this, L_0, L_1, (&___color), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern "C" bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m1002 (Object_t * __this /* static, unused */, TextGenerator_t205 * ___self, String_t* ___str, Font_t124 * ___font, Color_t36 * ___color, int32_t ___fontSize, float ___scaleFactor, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, const MethodInfo* method)
{
	typedef bool (*TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m1002_ftn) (TextGenerator_t205 *, String_t*, Font_t124 *, Color_t36 *, int32_t, float, float, int32_t, bool, bool, int32_t, int32_t, int32_t, int32_t, bool, int32_t, float, float, float, float, bool);
	static TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m1002_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m1002_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)");
	return _il2cpp_icall_func(___self, ___str, ___font, ___color, ___fontSize, ___scaleFactor, ___lineSpacing, ___style, ___richText, ___resizeTextForBestFit, ___resizeTextMinSize, ___resizeTextMaxSize, ___verticalOverFlow, ___horizontalOverflow, ___updateBounds, ___anchor, ___extentsX, ___extentsY, ___pivotX, ___pivotY, ___generateOutOfBounds);
}
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern "C" Rect_t32  TextGenerator_get_rectExtents_m1003 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	typedef Rect_t32  (*TextGenerator_get_rectExtents_m1003_ftn) (TextGenerator_t205 *);
	static TextGenerator_get_rectExtents_m1003_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_rectExtents_m1003_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_rectExtents()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern "C" int32_t TextGenerator_get_vertexCount_m1004 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_vertexCount_m1004_ftn) (TextGenerator_t205 *);
	static TextGenerator_get_vertexCount_m1004_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_vertexCount_m1004_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_vertexCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern "C" void TextGenerator_GetVerticesInternal_m1005 (TextGenerator_t205 * __this, Object_t * ___vertices, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetVerticesInternal_m1005_ftn) (TextGenerator_t205 *, Object_t *);
	static TextGenerator_GetVerticesInternal_m1005_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesInternal_m1005_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___vertices);
}
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern "C" UIVertexU5BU5D_t336* TextGenerator_GetVerticesArray_m1006 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	typedef UIVertexU5BU5D_t336* (*TextGenerator_GetVerticesArray_m1006_ftn) (TextGenerator_t205 *);
	static TextGenerator_GetVerticesArray_m1006_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetVerticesArray_m1006_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetVerticesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern "C" int32_t TextGenerator_get_characterCount_m1007 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_characterCount_m1007_ftn) (TextGenerator_t205 *);
	static TextGenerator_get_characterCount_m1007_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_characterCount_m1007_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_characterCount()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t29_il2cpp_TypeInfo_var;
extern "C" int32_t TextGenerator_get_characterCountVisible_m1008 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Mathf_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1475(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0036;
	}

IL_0016:
	{
		String_t* L_2 = (__this->___m_LastString_1);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1413(L_2, /*hidden argument*/NULL);
		int32_t L_4 = TextGenerator_get_vertexCount_m1004(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		int32_t L_5 = Mathf_Max_m698(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)((int32_t)L_4-(int32_t)4))/(int32_t)4)), /*hidden argument*/NULL);
		int32_t L_6 = Mathf_Min_m697(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern "C" void TextGenerator_GetCharactersInternal_m1009 (TextGenerator_t205 * __this, Object_t * ___characters, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetCharactersInternal_m1009_ftn) (TextGenerator_t205 *, Object_t *);
	static TextGenerator_GetCharactersInternal_m1009_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersInternal_m1009_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersInternal(System.Object)");
	_il2cpp_icall_func(__this, ___characters);
}
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern "C" UICharInfoU5BU5D_t337* TextGenerator_GetCharactersArray_m1010 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	typedef UICharInfoU5BU5D_t337* (*TextGenerator_GetCharactersArray_m1010_ftn) (TextGenerator_t205 *);
	static TextGenerator_GetCharactersArray_m1010_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetCharactersArray_m1010_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetCharactersArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern "C" int32_t TextGenerator_get_lineCount_m1011 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_lineCount_m1011_ftn) (TextGenerator_t205 *);
	static TextGenerator_get_lineCount_m1011_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_lineCount_m1011_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_lineCount()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern "C" void TextGenerator_GetLinesInternal_m1012 (TextGenerator_t205 * __this, Object_t * ___lines, const MethodInfo* method)
{
	typedef void (*TextGenerator_GetLinesInternal_m1012_ftn) (TextGenerator_t205 *, Object_t *);
	static TextGenerator_GetLinesInternal_m1012_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesInternal_m1012_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesInternal(System.Object)");
	_il2cpp_icall_func(__this, ___lines);
}
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern "C" UILineInfoU5BU5D_t338* TextGenerator_GetLinesArray_m1013 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	typedef UILineInfoU5BU5D_t338* (*TextGenerator_GetLinesArray_m1013_ftn) (TextGenerator_t205 *);
	static TextGenerator_GetLinesArray_m1013_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_GetLinesArray_m1013_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::GetLinesArray()");
	return _il2cpp_icall_func(__this);
}
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern "C" int32_t TextGenerator_get_fontSizeUsedForBestFit_m1014 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	typedef int32_t (*TextGenerator_get_fontSizeUsedForBestFit_m1014_ftn) (TextGenerator_t205 *);
	static TextGenerator_get_fontSizeUsedForBestFit_m1014_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextGenerator_get_fontSizeUsedForBestFit_m1014_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()");
	return _il2cpp_icall_func(__this);
}
// System.Void UnityEngine.TextGenerator::Finalize()
extern TypeInfo* IDisposable_t368_il2cpp_TypeInfo_var;
extern "C" void TextGenerator_Finalize_m1015 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t118 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t118 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t368_il2cpp_TypeInfo_var, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t118 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m170(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t118 *)
	}

IL_0012:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern "C" TextGenerationSettings_t206  TextGenerator_ValidatedSettings_m1016 (TextGenerator_t205 * __this, TextGenerationSettings_t206  ___settings, const MethodInfo* method)
{
	{
		Font_t124 * L_0 = ((&___settings)->___font_0);
		bool L_1 = Object_op_Inequality_m850(NULL /*static, unused*/, L_0, (Object_t28 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Font_t124 * L_2 = ((&___settings)->___font_0);
		NullCheck(L_2);
		bool L_3 = Font_get_dynamic_m994(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		TextGenerationSettings_t206  L_4 = ___settings;
		return L_4;
	}

IL_0025:
	{
		int32_t L_5 = ((&___settings)->___fontSize_2);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_6 = ((&___settings)->___fontStyle_6);
		if (!L_6)
		{
			goto IL_0057;
		}
	}

IL_003d:
	{
		Debug_LogWarning_m800(NULL /*static, unused*/, (String_t*) &_stringLiteral149, /*hidden argument*/NULL);
		(&___settings)->___fontSize_2 = 0;
		(&___settings)->___fontStyle_6 = 0;
	}

IL_0057:
	{
		bool L_7 = ((&___settings)->___resizeTextForBestFit_8);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		Debug_LogWarning_m800(NULL /*static, unused*/, (String_t*) &_stringLiteral150, /*hidden argument*/NULL);
		(&___settings)->___resizeTextForBestFit_8 = 0;
	}

IL_0075:
	{
		TextGenerationSettings_t206  L_8 = ___settings;
		return L_8;
	}
}
// System.Void UnityEngine.TextGenerator::Invalidate()
extern "C" void TextGenerator_Invalidate_m1017 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	{
		__this->___m_HasGenerated_3 = 0;
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern "C" void TextGenerator_GetCharacters_m1018 (TextGenerator_t205 * __this, List_1_t203 * ___characters, const MethodInfo* method)
{
	{
		List_1_t203 * L_0 = ___characters;
		TextGenerator_GetCharactersInternal_m1009(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern "C" void TextGenerator_GetLines_m1019 (TextGenerator_t205 * __this, List_1_t204 * ___lines, const MethodInfo* method)
{
	{
		List_1_t204 * L_0 = ___lines;
		TextGenerator_GetLinesInternal_m1012(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void TextGenerator_GetVertices_m1020 (TextGenerator_t205 * __this, List_1_t202 * ___vertices, const MethodInfo* method)
{
	{
		List_1_t202 * L_0 = ___vertices;
		TextGenerator_GetVerticesInternal_m1005(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredWidth_m1021 (TextGenerator_t205 * __this, String_t* ___str, TextGenerationSettings_t206  ___settings, const MethodInfo* method)
{
	Rect_t32  V_0 = {0};
	{
		(&___settings)->___horizontalOverflow_13 = 1;
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t206  L_1 = ___settings;
		TextGenerator_Populate_m1023(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t32  L_2 = TextGenerator_get_rectExtents_m1003(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_width_m597((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern "C" float TextGenerator_GetPreferredHeight_m1022 (TextGenerator_t205 * __this, String_t* ___str, TextGenerationSettings_t206  ___settings, const MethodInfo* method)
{
	Rect_t32  V_0 = {0};
	{
		(&___settings)->___verticalOverflow_12 = 1;
		(&___settings)->___updateBounds_11 = 1;
		String_t* L_0 = ___str;
		TextGenerationSettings_t206  L_1 = ___settings;
		TextGenerator_Populate_m1023(__this, L_0, L_1, /*hidden argument*/NULL);
		Rect_t32  L_2 = TextGenerator_get_rectExtents_m1003(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_height_m599((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextGenerator_Populate_m1023 (TextGenerator_t205 * __this, String_t* ___str, TextGenerationSettings_t206  ___settings, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_HasGenerated_3);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = ___str;
		String_t* L_2 = (__this->___m_LastString_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m83(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		TextGenerationSettings_t206  L_4 = (__this->___m_LastSettings_2);
		bool L_5 = TextGenerationSettings_Equals_m1380((&___settings), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		bool L_6 = (__this->___m_LastValid_4);
		return L_6;
	}

IL_0035:
	{
		String_t* L_7 = ___str;
		TextGenerationSettings_t206  L_8 = ___settings;
		bool L_9 = TextGenerator_PopulateAlways_m1024(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern "C" bool TextGenerator_PopulateAlways_m1024 (TextGenerator_t205 * __this, String_t* ___str, TextGenerationSettings_t206  ___settings, const MethodInfo* method)
{
	TextGenerationSettings_t206  V_0 = {0};
	{
		String_t* L_0 = ___str;
		__this->___m_LastString_1 = L_0;
		__this->___m_HasGenerated_3 = 1;
		__this->___m_CachedVerts_8 = 0;
		__this->___m_CachedCharacters_9 = 0;
		__this->___m_CachedLines_10 = 0;
		TextGenerationSettings_t206  L_1 = ___settings;
		__this->___m_LastSettings_2 = L_1;
		TextGenerationSettings_t206  L_2 = ___settings;
		TextGenerationSettings_t206  L_3 = TextGenerator_ValidatedSettings_m1016(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___str;
		Font_t124 * L_5 = ((&V_0)->___font_0);
		Color_t36  L_6 = ((&V_0)->___color_1);
		int32_t L_7 = ((&V_0)->___fontSize_2);
		float L_8 = ((&V_0)->___scaleFactor_5);
		float L_9 = ((&V_0)->___lineSpacing_3);
		int32_t L_10 = ((&V_0)->___fontStyle_6);
		bool L_11 = ((&V_0)->___richText_4);
		bool L_12 = ((&V_0)->___resizeTextForBestFit_8);
		int32_t L_13 = ((&V_0)->___resizeTextMinSize_9);
		int32_t L_14 = ((&V_0)->___resizeTextMaxSize_10);
		int32_t L_15 = ((&V_0)->___verticalOverflow_12);
		int32_t L_16 = ((&V_0)->___horizontalOverflow_13);
		bool L_17 = ((&V_0)->___updateBounds_11);
		int32_t L_18 = ((&V_0)->___textAnchor_7);
		Vector2_t13  L_19 = ((&V_0)->___generationExtents_14);
		Vector2_t13  L_20 = ((&V_0)->___pivot_15);
		bool L_21 = ((&V_0)->___generateOutOfBounds_16);
		bool L_22 = TextGenerator_Populate_Internal_m1000(__this, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		__this->___m_LastValid_4 = L_22;
		bool L_23 = (__this->___m_LastValid_4);
		return L_23;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern "C" Object_t* TextGenerator_get_verts_m1025 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedVerts_8);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t202 * L_1 = (__this->___m_Verts_5);
		TextGenerator_GetVertices_m1020(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedVerts_8 = 1;
	}

IL_001e:
	{
		List_1_t202 * L_2 = (__this->___m_Verts_5);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern "C" Object_t* TextGenerator_get_characters_m1026 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedCharacters_9);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t203 * L_1 = (__this->___m_Characters_6);
		TextGenerator_GetCharacters_m1018(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedCharacters_9 = 1;
	}

IL_001e:
	{
		List_1_t203 * L_2 = (__this->___m_Characters_6);
		return L_2;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern "C" Object_t* TextGenerator_get_lines_m1027 (TextGenerator_t205 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CachedLines_10);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t204 * L_1 = (__this->___m_Lines_7);
		TextGenerator_GetLines_m1019(__this, L_1, /*hidden argument*/NULL);
		__this->___m_CachedLines_10 = 1;
	}

IL_001e:
	{
		List_1_t204 * L_2 = (__this->___m_Lines_7);
		return L_2;
	}
}
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"



// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern "C" void WillRenderCanvases__ctor_m1028 (WillRenderCanvases_t207 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern "C" void WillRenderCanvases_Invoke_m1029 (WillRenderCanvases_t207 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		WillRenderCanvases_Invoke_m1029((WillRenderCanvases_t207 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_WillRenderCanvases_t207(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * WillRenderCanvases_BeginInvoke_m1030 (WillRenderCanvases_t207 * __this, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern "C" void WillRenderCanvases_EndInvoke_m1031 (WillRenderCanvases_t207 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"



// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern TypeInfo* Canvas_t208_il2cpp_TypeInfo_var;
extern "C" void Canvas_SendWillRenderCanvases_m1032 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Canvas_t208_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(161);
		s_Il2CppMethodIntialized = true;
	}
	{
		WillRenderCanvases_t207 * L_0 = ((Canvas_t208_StaticFields*)Canvas_t208_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		WillRenderCanvases_t207 * L_1 = ((Canvas_t208_StaticFields*)Canvas_t208_il2cpp_TypeInfo_var->static_fields)->___willRenderCanvases_2;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke() */, L_1);
	}

IL_0014:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"

// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4MethodDeclarations.h"


// System.Void UnityEngine.UIVertex::.cctor()
extern TypeInfo* UIVertex_t209_il2cpp_TypeInfo_var;
extern "C" void UIVertex__cctor_m1033 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UIVertex_t209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(155);
		s_Il2CppMethodIntialized = true;
	}
	UIVertex_t209  V_0 = {0};
	{
		Color32_t86  L_0 = {0};
		Color32__ctor_m577(&L_0, ((int32_t)255), ((int32_t)255), ((int32_t)255), ((int32_t)255), /*hidden argument*/NULL);
		((UIVertex_t209_StaticFields*)UIVertex_t209_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6 = L_0;
		Vector4_t137  L_1 = {0};
		Vector4__ctor_m682(&L_1, (1.0f), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((UIVertex_t209_StaticFields*)UIVertex_t209_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7 = L_1;
		Initobj (UIVertex_t209_il2cpp_TypeInfo_var, (&V_0));
		Vector3_t26  L_2 = Vector3_get_zero_m148(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___position_0 = L_2;
		Vector3_t26  L_3 = Vector3_get_back_m564(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___normal_1 = L_3;
		Vector4_t137  L_4 = ((UIVertex_t209_StaticFields*)UIVertex_t209_il2cpp_TypeInfo_var->static_fields)->___s_DefaultTangent_7;
		(&V_0)->___tangent_5 = L_4;
		Color32_t86  L_5 = ((UIVertex_t209_StaticFields*)UIVertex_t209_il2cpp_TypeInfo_var->static_fields)->___s_DefaultColor_6;
		(&V_0)->___color_2 = L_5;
		Vector2_t13  L_6 = Vector2_get_zero_m89(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv0_3 = L_6;
		Vector2_t13  L_7 = Vector2_get_zero_m89(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->___uv1_4 = L_7;
		UIVertex_t209  L_8 = V_0;
		((UIVertex_t209_StaticFields*)UIVertex_t209_il2cpp_TypeInfo_var->static_fields)->___simpleVert_8 = L_8;
		return;
	}
}
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"

// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern "C" void Request__ctor_m1034 (Request_t210 * __this, const MethodInfo* method)
{
	{
		__this->___version_0 = 1;
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" uint64_t Request_get_sourceId_m1035 (Request_t210 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CsourceIdU3Ek__BackingField_1);
		return L_0;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::get_appId()
extern "C" uint64_t Request_get_appId_m1036 (Request_t210 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CappIdU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" int32_t Request_get_domain_m1037 (Request_t210 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CdomainU3Ek__BackingField_3);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.Request::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t228_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t227_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern "C" String_t* Request_ToString_m1038 (Request_t210 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		SourceID_t228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(162);
		AppID_t227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m1476(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		uint64_t L_3 = Request_get_sourceId_m1035(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(SourceID_t228_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m1477(L_5, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t40* L_7 = L_2;
		uint64_t L_8 = Request_get_appId_m1036(__this, /*hidden argument*/NULL);
		uint64_t L_9 = L_8;
		Object_t * L_10 = Box(AppID_t227_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m1477(L_10, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		ObjectU5BU5D_t40* L_12 = L_7;
		int32_t L_13 = Request_get_domain_m1037(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3)) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m762(NULL /*static, unused*/, (String_t*) &_stringLiteral151, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"

// System.FormatException
#include "mscorlib_System_FormatException.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.FormatException
#include "mscorlib_System_FormatExceptionMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern "C" void ResponseBase__ctor_m1039 (ResponseBase_t211 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.ResponseBase::Parse(System.Object)
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t339_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t380_il2cpp_TypeInfo_var;
extern "C" String_t* ResponseBase_ParseJSONString_m1040 (ResponseBase_t211 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t339_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		return ((String_t*)IsInst(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		String_t* L_4 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m73(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral153, /*hidden argument*/NULL);
		FormatException_t380 * L_6 = (FormatException_t380 *)il2cpp_codegen_object_new (FormatException_t380_il2cpp_TypeInfo_var);
		FormatException__ctor_m1478(L_6, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t339_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t381_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t380_il2cpp_TypeInfo_var;
extern "C" int32_t ResponseBase_ParseJSONInt32_m1041 (ResponseBase_t211 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		Convert_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t339_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t381_il2cpp_TypeInfo_var);
		int32_t L_4 = Convert_ToInt32_m1479(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m73(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral153, /*hidden argument*/NULL);
		FormatException_t380 * L_7 = (FormatException_t380 *)il2cpp_codegen_object_new (FormatException_t380_il2cpp_TypeInfo_var);
		FormatException__ctor_m1478(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t339_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t381_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t380_il2cpp_TypeInfo_var;
extern "C" uint16_t ResponseBase_ParseJSONUInt16_m1042 (ResponseBase_t211 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		Convert_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t339_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t381_il2cpp_TypeInfo_var);
		uint16_t L_4 = Convert_ToUInt16_m1480(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m73(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral153, /*hidden argument*/NULL);
		FormatException_t380 * L_7 = (FormatException_t380 *)il2cpp_codegen_object_new (FormatException_t380_il2cpp_TypeInfo_var);
		FormatException__ctor_m1478(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t339_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t381_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t380_il2cpp_TypeInfo_var;
extern "C" uint64_t ResponseBase_ParseJSONUInt64_m1043 (ResponseBase_t211 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		Convert_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t339_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t381_il2cpp_TypeInfo_var);
		uint64_t L_4 = Convert_ToUInt64_m1481(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m73(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral153, /*hidden argument*/NULL);
		FormatException_t380 * L_7 = (FormatException_t380 *)il2cpp_codegen_object_new (FormatException_t380_il2cpp_TypeInfo_var);
		FormatException__ctor_m1478(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern TypeInfo* IDictionary_2_t339_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t381_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t380_il2cpp_TypeInfo_var;
extern "C" bool ResponseBase_ParseJSONBool_m1044 (ResponseBase_t211 * __this, String_t* ___name, Object_t * ___obj, Object_t* ___dictJsonObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		Convert_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t* L_0 = ___dictJsonObj;
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)InterfaceFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t339_il2cpp_TypeInfo_var, L_0, L_1, (&___obj));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t381_il2cpp_TypeInfo_var);
		bool L_4 = Convert_ToBoolean_m1482(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m73(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral153, /*hidden argument*/NULL);
		FormatException_t380 * L_7 = (FormatException_t380 *)il2cpp_codegen_object_new (FormatException_t380_il2cpp_TypeInfo_var);
		FormatException__ctor_m1478(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern "C" void Response__ctor_m1045 (Response_t212 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m1039(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C" bool Response_get_success_m1046 (Response_t212 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CsuccessU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern "C" void Response_set_success_m1047 (Response_t212 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CsuccessU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C" String_t* Response_get_extendedInfo_m1048 (Response_t212 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CextendedInfoU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern "C" void Response_set_extendedInfo_m1049 (Response_t212 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CextendedInfoU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t53_il2cpp_TypeInfo_var;
extern "C" String_t* Response_ToString_m1050 (Response_t212 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Boolean_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Object_ToString_m1476(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		bool L_3 = Response_get_success_m1046(__this, /*hidden argument*/NULL);
		bool L_4 = L_3;
		Object_t * L_5 = Box(Boolean_t53_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t40* L_6 = L_2;
		String_t* L_7 = Response_get_extendedInfo_m1048(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m762(NULL /*static, unused*/, (String_t*) &_stringLiteral154, L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern TypeInfo* IDictionary_2_t339_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t380_il2cpp_TypeInfo_var;
extern "C" void Response_Parse_m1051 (Response_t212 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t339_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		bool L_4 = ResponseBase_ParseJSONBool_m1044(__this, (String_t*) &_stringLiteral155, L_2, L_3, /*hidden argument*/NULL);
		Response_set_success_m1047(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m1040(__this, (String_t*) &_stringLiteral156, L_5, L_6, /*hidden argument*/NULL);
		Response_set_extendedInfo_m1049(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = Response_get_success_m1046(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_9 = Response_get_extendedInfo_m1048(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m73(NULL /*static, unused*/, (String_t*) &_stringLiteral157, L_9, /*hidden argument*/NULL);
		FormatException_t380 * L_11 = (FormatException_t380 *)il2cpp_codegen_object_new (FormatException_t380_il2cpp_TypeInfo_var);
		FormatException__ctor_m1478(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0054:
	{
		return;
	}
}
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern "C" void BasicResponse__ctor_m1052 (BasicResponse_t213 * __this, const MethodInfo* method)
{
	{
		Response__ctor_m1045(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"


// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern "C" void CreateMatchRequest__ctor_m1053 (CreateMatchRequest_t215 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m1034(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C" String_t* CreateMatchRequest_get_name_m1054 (CreateMatchRequest_t215 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern "C" void CreateMatchRequest_set_name_m1055 (CreateMatchRequest_t215 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C" uint32_t CreateMatchRequest_get_size_m1056 (CreateMatchRequest_t215 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___U3CsizeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern "C" void CreateMatchRequest_set_size_m1057 (CreateMatchRequest_t215 * __this, uint32_t ___value, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___value;
		__this->___U3CsizeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C" bool CreateMatchRequest_get_advertise_m1058 (CreateMatchRequest_t215 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CadvertiseU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern "C" void CreateMatchRequest_set_advertise_m1059 (CreateMatchRequest_t215 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CadvertiseU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C" String_t* CreateMatchRequest_get_password_m1060 (CreateMatchRequest_t215 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern "C" void CreateMatchRequest_set_password_m1061 (CreateMatchRequest_t215 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C" Dictionary_2_t214 * CreateMatchRequest_get_matchAttributes_m1062 (CreateMatchRequest_t215 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t214 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t382_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t53_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern "C" String_t* CreateMatchRequest_ToString_m1063 (CreateMatchRequest_t215 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		UInt32_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		Boolean_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t40* G_B2_1 = {0};
	ObjectU5BU5D_t40* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t40* G_B1_1 = {0};
	ObjectU5BU5D_t40* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t40* G_B3_2 = {0};
	ObjectU5BU5D_t40* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t40* G_B5_1 = {0};
	ObjectU5BU5D_t40* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t40* G_B4_1 = {0};
	ObjectU5BU5D_t40* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t40* G_B6_2 = {0};
	ObjectU5BU5D_t40* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m1038(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		String_t* L_3 = CreateMatchRequest_get_name_m1054(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t40* L_4 = L_2;
		uint32_t L_5 = CreateMatchRequest_get_size_m1056(__this, /*hidden argument*/NULL);
		uint32_t L_6 = L_5;
		Object_t * L_7 = Box(UInt32_t382_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t40* L_8 = L_4;
		bool L_9 = CreateMatchRequest_get_advertise_m1058(__this, /*hidden argument*/NULL);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t53_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t40* L_12 = L_8;
		String_t* L_13 = CreateMatchRequest_get_password_m1060(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_15 = String_op_Equality_m83(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral158;
		if (!L_15)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral158;
			goto IL_005a;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral159;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_005f;
	}

IL_005a:
	{
		G_B3_0 = (String_t*) &_stringLiteral160;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_005f:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		ObjectU5BU5D_t40* L_16 = G_B3_3;
		Dictionary_2_t214 * L_17 = CreateMatchRequest_get_matchAttributes_m1062(__this, /*hidden argument*/NULL);
		G_B4_0 = 5;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = G_B3_4;
		if (L_17)
		{
			G_B5_0 = 5;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = G_B3_4;
			goto IL_0073;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007e;
	}

IL_0073:
	{
		Dictionary_2_t214 * L_18 = CreateMatchRequest_get_matchAttributes_m1062(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007e:
	{
		int32_t L_20 = G_B6_0;
		Object_t * L_21 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_20);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m762(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_22;
	}
}
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponseMethodDeclarations.h"

// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"


// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
extern "C" void CreateMatchResponse__ctor_m1064 (CreateMatchResponse_t216 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m1052(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern "C" String_t* CreateMatchResponse_get_address_m1065 (CreateMatchResponse_t216 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
extern "C" void CreateMatchResponse_set_address_m1066 (CreateMatchResponse_t216 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern "C" int32_t CreateMatchResponse_get_port_m1067 (CreateMatchResponse_t216 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
extern "C" void CreateMatchResponse_set_port_m1068 (CreateMatchResponse_t216 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern "C" uint64_t CreateMatchResponse_get_networkId_m1069 (CreateMatchResponse_t216 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void CreateMatchResponse_set_networkId_m1070 (CreateMatchResponse_t216 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern "C" String_t* CreateMatchResponse_get_accessTokenString_m1071 (CreateMatchResponse_t216 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern "C" void CreateMatchResponse_set_accessTokenString_m1072 (CreateMatchResponse_t216 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern "C" uint16_t CreateMatchResponse_get_nodeId_m1073 (CreateMatchResponse_t216 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void CreateMatchResponse_set_nodeId_m1074 (CreateMatchResponse_t216 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern "C" bool CreateMatchResponse_get_usingRelay_m1075 (CreateMatchResponse_t216 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
extern "C" void CreateMatchResponse_set_usingRelay_m1076 (CreateMatchResponse_t216 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t229_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t230_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t53_il2cpp_TypeInfo_var;
extern "C" String_t* CreateMatchResponse_ToString_m1077 (CreateMatchResponse_t216 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		NetworkID_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		NodeID_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		Boolean_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m1050(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		String_t* L_3 = CreateMatchResponse_get_address_m1065(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t40* L_4 = L_2;
		int32_t L_5 = CreateMatchResponse_get_port_m1067(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t40* L_8 = L_4;
		uint64_t L_9 = CreateMatchResponse_get_networkId_m1069(__this, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(NetworkID_t229_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m1477(L_11, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t40* L_13 = L_8;
		uint16_t L_14 = CreateMatchResponse_get_nodeId_m1073(__this, /*hidden argument*/NULL);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(NodeID_t230_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m1477(L_16, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t40* L_18 = L_13;
		bool L_19 = CreateMatchResponse_get_usingRelay_m1075(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		Object_t * L_21 = Box(Boolean_t53_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m762(NULL /*static, unused*/, (String_t*) &_stringLiteral161, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t339_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t380_il2cpp_TypeInfo_var;
extern "C" void CreateMatchResponse_Parse_m1078 (CreateMatchResponse_t216 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m1051(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t339_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m1040(__this, (String_t*) &_stringLiteral162, L_3, L_4, /*hidden argument*/NULL);
		CreateMatchResponse_set_address_m1066(__this, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m1041(__this, (String_t*) &_stringLiteral163, L_6, L_7, /*hidden argument*/NULL);
		CreateMatchResponse_set_port_m1068(__this, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m1043(__this, (String_t*) &_stringLiteral164, L_9, L_10, /*hidden argument*/NULL);
		CreateMatchResponse_set_networkId_m1070(__this, L_11, /*hidden argument*/NULL);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m1040(__this, (String_t*) &_stringLiteral165, L_12, L_13, /*hidden argument*/NULL);
		CreateMatchResponse_set_accessTokenString_m1072(__this, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m1042(__this, (String_t*) &_stringLiteral166, L_15, L_16, /*hidden argument*/NULL);
		CreateMatchResponse_set_nodeId_m1074(__this, L_17, /*hidden argument*/NULL);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m1044(__this, (String_t*) &_stringLiteral167, L_18, L_19, /*hidden argument*/NULL);
		CreateMatchResponse_set_usingRelay_m1076(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m73(NULL /*static, unused*/, (String_t*) &_stringLiteral168, L_22, /*hidden argument*/NULL);
		FormatException_t380 * L_24 = (FormatException_t380 *)il2cpp_codegen_object_new (FormatException_t380_il2cpp_TypeInfo_var);
		FormatException__ctor_m1478(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern "C" void JoinMatchRequest__ctor_m1079 (JoinMatchRequest_t217 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m1034(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" uint64_t JoinMatchRequest_get_networkId_m1080 (JoinMatchRequest_t217 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchRequest_set_networkId_m1081 (JoinMatchRequest_t217 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" String_t* JoinMatchRequest_get_password_m1082 (JoinMatchRequest_t217 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpasswordU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern "C" void JoinMatchRequest_set_password_m1083 (JoinMatchRequest_t217 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpasswordU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t229_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchRequest_ToString_m1084 (JoinMatchRequest_t217 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		NetworkID_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t40* G_B2_1 = {0};
	ObjectU5BU5D_t40* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t40* G_B1_1 = {0};
	ObjectU5BU5D_t40* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t40* G_B3_2 = {0};
	ObjectU5BU5D_t40* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m1038(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		uint64_t L_3 = JoinMatchRequest_get_networkId_m1080(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t229_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m1477(L_5, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t40* L_7 = L_2;
		String_t* L_8 = JoinMatchRequest_get_password_m1082(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_10 = String_op_Equality_m83(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		G_B1_0 = 2;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = (String_t*) &_stringLiteral169;
		if (!L_10)
		{
			G_B2_0 = 2;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = (String_t*) &_stringLiteral169;
			goto IL_004d;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral159;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0052;
	}

IL_004d:
	{
		G_B3_0 = (String_t*) &_stringLiteral160;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0052:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)G_B3_0;
		String_t* L_11 = UnityString_Format_m762(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponseMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
extern "C" void JoinMatchResponse__ctor_m1085 (JoinMatchResponse_t218 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m1052(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern "C" String_t* JoinMatchResponse_get_address_m1086 (JoinMatchResponse_t218 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
extern "C" void JoinMatchResponse_set_address_m1087 (JoinMatchResponse_t218 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern "C" int32_t JoinMatchResponse_get_port_m1088 (JoinMatchResponse_t218 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CportU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
extern "C" void JoinMatchResponse_set_port_m1089 (JoinMatchResponse_t218 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CportU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern "C" uint64_t JoinMatchResponse_get_networkId_m1090 (JoinMatchResponse_t218 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void JoinMatchResponse_set_networkId_m1091 (JoinMatchResponse_t218 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern "C" String_t* JoinMatchResponse_get_accessTokenString_m1092 (JoinMatchResponse_t218 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CaccessTokenStringU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern "C" void JoinMatchResponse_set_accessTokenString_m1093 (JoinMatchResponse_t218 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CaccessTokenStringU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern "C" uint16_t JoinMatchResponse_get_nodeId_m1094 (JoinMatchResponse_t218 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void JoinMatchResponse_set_nodeId_m1095 (JoinMatchResponse_t218 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern "C" bool JoinMatchResponse_get_usingRelay_m1096 (JoinMatchResponse_t218 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CusingRelayU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
extern "C" void JoinMatchResponse_set_usingRelay_m1097 (JoinMatchResponse_t218 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CusingRelayU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t229_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t230_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t53_il2cpp_TypeInfo_var;
extern "C" String_t* JoinMatchResponse_ToString_m1098 (JoinMatchResponse_t218 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		NetworkID_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		NodeID_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		Boolean_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Response_ToString_m1050(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		String_t* L_3 = JoinMatchResponse_get_address_m1086(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_3;
		ObjectU5BU5D_t40* L_4 = L_2;
		int32_t L_5 = JoinMatchResponse_get_port_m1088(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t40* L_8 = L_4;
		uint64_t L_9 = JoinMatchResponse_get_networkId_m1090(__this, /*hidden argument*/NULL);
		uint64_t L_10 = L_9;
		Object_t * L_11 = Box(NetworkID_t229_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_11);
		String_t* L_12 = Enum_ToString_m1477(L_11, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t40* L_13 = L_8;
		uint16_t L_14 = JoinMatchResponse_get_nodeId_m1094(__this, /*hidden argument*/NULL);
		uint16_t L_15 = L_14;
		Object_t * L_16 = Box(NodeID_t230_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_16);
		String_t* L_17 = Enum_ToString_m1477(L_16, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_17;
		ObjectU5BU5D_t40* L_18 = L_13;
		bool L_19 = JoinMatchResponse_get_usingRelay_m1096(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		Object_t * L_21 = Box(Boolean_t53_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 5);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 5)) = (Object_t *)L_21;
		String_t* L_22 = UnityString_Format_m762(NULL /*static, unused*/, (String_t*) &_stringLiteral161, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t339_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t380_il2cpp_TypeInfo_var;
extern "C" void JoinMatchResponse_Parse_m1099 (JoinMatchResponse_t218 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m1051(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t339_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008b;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m1040(__this, (String_t*) &_stringLiteral162, L_3, L_4, /*hidden argument*/NULL);
		JoinMatchResponse_set_address_m1087(__this, L_5, /*hidden argument*/NULL);
		Object_t * L_6 = ___obj;
		Object_t* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m1041(__this, (String_t*) &_stringLiteral163, L_6, L_7, /*hidden argument*/NULL);
		JoinMatchResponse_set_port_m1089(__this, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___obj;
		Object_t* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m1043(__this, (String_t*) &_stringLiteral164, L_9, L_10, /*hidden argument*/NULL);
		JoinMatchResponse_set_networkId_m1091(__this, L_11, /*hidden argument*/NULL);
		Object_t * L_12 = ___obj;
		Object_t* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m1040(__this, (String_t*) &_stringLiteral165, L_12, L_13, /*hidden argument*/NULL);
		JoinMatchResponse_set_accessTokenString_m1093(__this, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = ___obj;
		Object_t* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m1042(__this, (String_t*) &_stringLiteral166, L_15, L_16, /*hidden argument*/NULL);
		JoinMatchResponse_set_nodeId_m1095(__this, L_17, /*hidden argument*/NULL);
		Object_t * L_18 = ___obj;
		Object_t* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m1044(__this, (String_t*) &_stringLiteral167, L_18, L_19, /*hidden argument*/NULL);
		JoinMatchResponse_set_usingRelay_m1097(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_008b:
	{
		Object_t * L_21 = ___obj;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m73(NULL /*static, unused*/, (String_t*) &_stringLiteral168, L_22, /*hidden argument*/NULL);
		FormatException_t380 * L_24 = (FormatException_t380 *)il2cpp_codegen_object_new (FormatException_t380_il2cpp_TypeInfo_var);
		FormatException__ctor_m1478(L_24, L_23, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_00a1:
	{
		return;
	}
}
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern "C" void DestroyMatchRequest__ctor_m1100 (DestroyMatchRequest_t219 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m1034(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C" uint64_t DestroyMatchRequest_get_networkId_m1101 (DestroyMatchRequest_t219 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void DestroyMatchRequest_set_networkId_m1102 (DestroyMatchRequest_t219 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DestroyMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t229_il2cpp_TypeInfo_var;
extern "C" String_t* DestroyMatchRequest_ToString_m1103 (DestroyMatchRequest_t219 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		NetworkID_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Request_ToString_m1038(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		uint64_t L_3 = DestroyMatchRequest_get_networkId_m1101(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t229_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m1477(L_5, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m762(NULL /*static, unused*/, (String_t*) &_stringLiteral170, L_2, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionReque.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionRequeMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern "C" void DropConnectionRequest__ctor_m1104 (DropConnectionRequest_t220 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m1034(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C" uint64_t DropConnectionRequest_get_networkId_m1105 (DropConnectionRequest_t220 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void DropConnectionRequest_set_networkId_m1106 (DropConnectionRequest_t220 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C" uint16_t DropConnectionRequest_get_nodeId_m1107 (DropConnectionRequest_t220 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void DropConnectionRequest_set_nodeId_m1108 (DropConnectionRequest_t220 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t229_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t230_il2cpp_TypeInfo_var;
extern "C" String_t* DropConnectionRequest_ToString_m1109 (DropConnectionRequest_t220 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		NetworkID_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		NodeID_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = Request_ToString_m1038(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		uint64_t L_3 = DropConnectionRequest_get_networkId_m1105(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t229_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m1477(L_5, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t40* L_7 = L_2;
		uint16_t L_8 = DropConnectionRequest_get_nodeId_m1107(__this, /*hidden argument*/NULL);
		uint16_t L_9 = L_8;
		Object_t * L_10 = Box(NodeID_t230_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_10);
		String_t* L_11 = Enum_ToString_m1477(L_10, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m762(NULL /*static, unused*/, (String_t*) &_stringLiteral171, L_7, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequest.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequestMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C" void ListMatchRequest__ctor_m1110 (ListMatchRequest_t221 * __this, const MethodInfo* method)
{
	{
		Request__ctor_m1034(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" int32_t ListMatchRequest_get_pageSize_m1111 (ListMatchRequest_t221 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C" void ListMatchRequest_set_pageSize_m1112 (ListMatchRequest_t221 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" int32_t ListMatchRequest_get_pageNum_m1113 (ListMatchRequest_t221 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CpageNumU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C" void ListMatchRequest_set_pageNum_m1114 (ListMatchRequest_t221 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CpageNumU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" String_t* ListMatchRequest_get_nameFilter_m1115 (ListMatchRequest_t221 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameFilterU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C" void ListMatchRequest_set_nameFilter_m1116 (ListMatchRequest_t221 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameFilterU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" Dictionary_2_t214 * ListMatchRequest_get_matchAttributeFilterLessThan_m1117 (ListMatchRequest_t221 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t214 * L_0 = (__this->___U3CmatchAttributeFilterLessThanU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" Dictionary_2_t214 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m1118 (ListMatchRequest_t221 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t214 * L_0 = (__this->___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_8);
		return L_0;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern "C" String_t* ListMatchRequest_ToString_m1119 (ListMatchRequest_t221 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t40* G_B2_1 = {0};
	ObjectU5BU5D_t40* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t40* G_B1_1 = {0};
	ObjectU5BU5D_t40* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t40* G_B3_2 = {0};
	ObjectU5BU5D_t40* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t40* G_B5_1 = {0};
	ObjectU5BU5D_t40* G_B5_2 = {0};
	String_t* G_B5_3 = {0};
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t40* G_B4_1 = {0};
	ObjectU5BU5D_t40* G_B4_2 = {0};
	String_t* G_B4_3 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t40* G_B6_2 = {0};
	ObjectU5BU5D_t40* G_B6_3 = {0};
	String_t* G_B6_4 = {0};
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 6));
		String_t* L_1 = Request_ToString_m1038(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		int32_t L_3 = ListMatchRequest_get_pageSize_m1111(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t40* L_6 = L_2;
		int32_t L_7 = ListMatchRequest_get_pageNum_m1113(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t40* L_10 = L_6;
		String_t* L_11 = ListMatchRequest_get_nameFilter_m1115(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_11;
		ObjectU5BU5D_t40* L_12 = L_10;
		Dictionary_2_t214 * L_13 = ListMatchRequest_get_matchAttributeFilterLessThan_m1117(__this, /*hidden argument*/NULL);
		G_B1_0 = 4;
		G_B1_1 = L_12;
		G_B1_2 = L_12;
		G_B1_3 = (String_t*) &_stringLiteral172;
		if (L_13)
		{
			G_B2_0 = 4;
			G_B2_1 = L_12;
			G_B2_2 = L_12;
			G_B2_3 = (String_t*) &_stringLiteral172;
			goto IL_004c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0057;
	}

IL_004c:
	{
		Dictionary_2_t214 * L_14 = ListMatchRequest_get_matchAttributeFilterLessThan_m1117(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_14);
		G_B3_0 = L_15;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0057:
	{
		int32_t L_16 = G_B3_0;
		Object_t * L_17 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_16);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_17;
		ObjectU5BU5D_t40* L_18 = G_B3_3;
		Dictionary_2_t214 * L_19 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m1118(__this, /*hidden argument*/NULL);
		G_B4_0 = 5;
		G_B4_1 = L_18;
		G_B4_2 = L_18;
		G_B4_3 = G_B3_4;
		if (L_19)
		{
			G_B5_0 = 5;
			G_B5_1 = L_18;
			G_B5_2 = L_18;
			G_B5_3 = G_B3_4;
			goto IL_0070;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_007b;
	}

IL_0070:
	{
		Dictionary_2_t214 * L_20 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m1118(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_20);
		G_B6_0 = L_21;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_007b:
	{
		int32_t L_22 = G_B6_0;
		Object_t * L_23 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_22);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B6_2, G_B6_1)) = (Object_t *)L_23;
		String_t* L_24 = UnityString_Format_m762(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectIMethodDeclarations.h"



// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern "C" void MatchDirectConnectInfo__ctor_m1120 (MatchDirectConnectInfo_t222 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m1039(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C" uint16_t MatchDirectConnectInfo_get_nodeId_m1121 (MatchDirectConnectInfo_t222 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3CnodeIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" void MatchDirectConnectInfo_set_nodeId_m1122 (MatchDirectConnectInfo_t222 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		uint16_t L_0 = ___value;
		__this->___U3CnodeIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C" String_t* MatchDirectConnectInfo_get_publicAddress_m1123 (MatchDirectConnectInfo_t222 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CpublicAddressU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_publicAddress_m1124 (MatchDirectConnectInfo_t222 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CpublicAddressU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C" String_t* MatchDirectConnectInfo_get_privateAddress_m1125 (MatchDirectConnectInfo_t222 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CprivateAddressU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C" void MatchDirectConnectInfo_set_privateAddress_m1126 (MatchDirectConnectInfo_t222 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CprivateAddressU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t230_il2cpp_TypeInfo_var;
extern "C" String_t* MatchDirectConnectInfo_ToString_m1127 (MatchDirectConnectInfo_t222 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		NodeID_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 4));
		String_t* L_1 = Object_ToString_m1476(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		uint16_t L_3 = MatchDirectConnectInfo_get_nodeId_m1121(__this, /*hidden argument*/NULL);
		uint16_t L_4 = L_3;
		Object_t * L_5 = Box(NodeID_t230_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t40* L_6 = L_2;
		String_t* L_7 = MatchDirectConnectInfo_get_publicAddress_m1123(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t40* L_8 = L_6;
		String_t* L_9 = MatchDirectConnectInfo_get_privateAddress_m1125(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)L_9;
		String_t* L_10 = UnityString_Format_m762(NULL /*static, unused*/, (String_t*) &_stringLiteral173, L_8, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
extern TypeInfo* IDictionary_2_t339_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t380_il2cpp_TypeInfo_var;
extern "C" void MatchDirectConnectInfo_Parse_m1128 (MatchDirectConnectInfo_t222 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t339_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint16_t L_4 = ResponseBase_ParseJSONUInt16_m1042(__this, (String_t*) &_stringLiteral166, L_2, L_3, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_nodeId_m1122(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m1040(__this, (String_t*) &_stringLiteral174, L_5, L_6, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_publicAddress_m1124(__this, L_7, /*hidden argument*/NULL);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		String_t* L_10 = ResponseBase_ParseJSONString_m1040(__this, (String_t*) &_stringLiteral175, L_8, L_9, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_privateAddress_m1126(__this, L_10, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_004b:
	{
		Object_t * L_11 = ___obj;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m73(NULL /*static, unused*/, (String_t*) &_stringLiteral168, L_12, /*hidden argument*/NULL);
		FormatException_t380 * L_14 = (FormatException_t380 *)il2cpp_codegen_object_new (FormatException_t380_il2cpp_TypeInfo_var);
		FormatException__ctor_m1478(L_14, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0061:
	{
		return;
	}
}
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDescMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_9.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
#include "mscorlib_System_Collections_Generic_List_1_gen_9MethodDeclarations.h"
struct ResponseBase_t211;
struct List_1_t223;
struct String_t;
struct Object_t;
struct IDictionary_2_t339;
struct ResponseBase_t211;
struct List_1_t238;
struct String_t;
struct Object_t;
struct IDictionary_2_t339;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" List_1_t238 * ResponseBase_ParseJSONList_TisObject_t_m1484_gshared (ResponseBase_t211 * __this, String_t* p0, Object_t * p1, Object_t* p2, const MethodInfo* method);
#define ResponseBase_ParseJSONList_TisObject_t_m1484(__this, p0, p1, p2, method) (( List_1_t238 * (*) (ResponseBase_t211 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m1484_gshared)(__this, p0, p1, p2, method)
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t222_m1483(__this, p0, p1, p2, method) (( List_1_t223 * (*) (ResponseBase_t211 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m1484_gshared)(__this, p0, p1, p2, method)


// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern "C" void MatchDesc__ctor_m1129 (MatchDesc_t224 * __this, const MethodInfo* method)
{
	{
		ResponseBase__ctor_m1039(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C" uint64_t MatchDesc_get_networkId_m1130 (MatchDesc_t224 * __this, const MethodInfo* method)
{
	{
		uint64_t L_0 = (__this->___U3CnetworkIdU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" void MatchDesc_set_networkId_m1131 (MatchDesc_t224 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		__this->___U3CnetworkIdU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C" String_t* MatchDesc_get_name_m1132 (MatchDesc_t224 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CnameU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C" void MatchDesc_set_name_m1133 (MatchDesc_t224 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CnameU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C" int32_t MatchDesc_get_averageEloScore_m1134 (MatchDesc_t224 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CaverageEloScoreU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C" int32_t MatchDesc_get_maxSize_m1135 (MatchDesc_t224 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CmaxSizeU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C" void MatchDesc_set_maxSize_m1136 (MatchDesc_t224 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CmaxSizeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C" int32_t MatchDesc_get_currentSize_m1137 (MatchDesc_t224 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CcurrentSizeU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C" void MatchDesc_set_currentSize_m1138 (MatchDesc_t224 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CcurrentSizeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C" bool MatchDesc_get_isPrivate_m1139 (MatchDesc_t224 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CisPrivateU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C" void MatchDesc_set_isPrivate_m1140 (MatchDesc_t224 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CisPrivateU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C" Dictionary_2_t214 * MatchDesc_get_matchAttributes_m1141 (MatchDesc_t224 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t214 * L_0 = (__this->___U3CmatchAttributesU3Ek__BackingField_6);
		return L_0;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern "C" uint16_t MatchDesc_get_hostNodeId_m1142 (MatchDesc_t224 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = (__this->___U3ChostNodeIdU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C" List_1_t223 * MatchDesc_get_directConnectInfos_m1143 (MatchDesc_t224 * __this, const MethodInfo* method)
{
	{
		List_1_t223 * L_0 = (__this->___U3CdirectConnectInfosU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C" void MatchDesc_set_directConnectInfos_m1144 (MatchDesc_t224 * __this, List_1_t223 * ___value, const MethodInfo* method)
{
	{
		List_1_t223 * L_0 = ___value;
		__this->___U3CdirectConnectInfosU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t229_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t53_il2cpp_TypeInfo_var;
extern "C" String_t* MatchDesc_ToString_m1145 (MatchDesc_t224 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		NetworkID_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		Boolean_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t40* G_B2_1 = {0};
	ObjectU5BU5D_t40* G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t40* G_B1_1 = {0};
	ObjectU5BU5D_t40* G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t40* G_B3_2 = {0};
	ObjectU5BU5D_t40* G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = Object_ToString_m1476(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		uint64_t L_3 = MatchDesc_get_networkId_m1130(__this, /*hidden argument*/NULL);
		uint64_t L_4 = L_3;
		Object_t * L_5 = Box(NetworkID_t229_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_5);
		String_t* L_6 = Enum_ToString_m1477(L_5, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t40* L_7 = L_2;
		String_t* L_8 = MatchDesc_get_name_m1132(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_8;
		ObjectU5BU5D_t40* L_9 = L_7;
		int32_t L_10 = MatchDesc_get_averageEloScore_m1134(__this, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 3)) = (Object_t *)L_12;
		ObjectU5BU5D_t40* L_13 = L_9;
		int32_t L_14 = MatchDesc_get_maxSize_m1135(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 4)) = (Object_t *)L_16;
		ObjectU5BU5D_t40* L_17 = L_13;
		int32_t L_18 = MatchDesc_get_currentSize_m1137(__this, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 5);
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 5)) = (Object_t *)L_20;
		ObjectU5BU5D_t40* L_21 = L_17;
		bool L_22 = MatchDesc_get_isPrivate_m1139(__this, /*hidden argument*/NULL);
		bool L_23 = L_22;
		Object_t * L_24 = Box(Boolean_t53_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 6);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 6)) = (Object_t *)L_24;
		ObjectU5BU5D_t40* L_25 = L_21;
		Dictionary_2_t214 * L_26 = MatchDesc_get_matchAttributes_m1141(__this, /*hidden argument*/NULL);
		G_B1_0 = 7;
		G_B1_1 = L_25;
		G_B1_2 = L_25;
		G_B1_3 = (String_t*) &_stringLiteral176;
		if (L_26)
		{
			G_B2_0 = 7;
			G_B2_1 = L_25;
			G_B2_2 = L_25;
			G_B2_3 = (String_t*) &_stringLiteral176;
			goto IL_0081;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_008c;
	}

IL_0081:
	{
		Dictionary_2_t214 * L_27 = MatchDesc_get_matchAttributes_m1141(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count() */, L_27);
		G_B3_0 = L_28;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_008c:
	{
		int32_t L_29 = G_B3_0;
		Object_t * L_30 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_29);
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B3_2, G_B3_1)) = (Object_t *)L_30;
		ObjectU5BU5D_t40* L_31 = G_B3_3;
		List_1_t223 * L_32 = MatchDesc_get_directConnectInfos_m1143(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count() */, L_32);
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 8);
		ArrayElementTypeCheck (L_31, L_35);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 8)) = (Object_t *)L_35;
		String_t* L_36 = UnityString_Format_m762(NULL /*static, unused*/, G_B3_4, L_31, /*hidden argument*/NULL);
		return L_36;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern TypeInfo* IDictionary_2_t339_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t380_il2cpp_TypeInfo_var;
extern const MethodInfo* ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t222_m1483_MethodInfo_var;
extern "C" void MatchDesc_Parse_m1146 (MatchDesc_t224 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t222_m1483_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483685);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((Object_t*)IsInst(L_0, IDictionary_2_t339_il2cpp_TypeInfo_var));
		Object_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0084;
		}
	}
	{
		Object_t * L_2 = ___obj;
		Object_t* L_3 = V_0;
		uint64_t L_4 = ResponseBase_ParseJSONUInt64_m1043(__this, (String_t*) &_stringLiteral164, L_2, L_3, /*hidden argument*/NULL);
		MatchDesc_set_networkId_m1131(__this, L_4, /*hidden argument*/NULL);
		Object_t * L_5 = ___obj;
		Object_t* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m1040(__this, (String_t*) &_stringLiteral177, L_5, L_6, /*hidden argument*/NULL);
		MatchDesc_set_name_m1133(__this, L_7, /*hidden argument*/NULL);
		Object_t * L_8 = ___obj;
		Object_t* L_9 = V_0;
		int32_t L_10 = ResponseBase_ParseJSONInt32_m1041(__this, (String_t*) &_stringLiteral178, L_8, L_9, /*hidden argument*/NULL);
		MatchDesc_set_maxSize_m1136(__this, L_10, /*hidden argument*/NULL);
		Object_t * L_11 = ___obj;
		Object_t* L_12 = V_0;
		int32_t L_13 = ResponseBase_ParseJSONInt32_m1041(__this, (String_t*) &_stringLiteral179, L_11, L_12, /*hidden argument*/NULL);
		MatchDesc_set_currentSize_m1138(__this, L_13, /*hidden argument*/NULL);
		Object_t * L_14 = ___obj;
		Object_t* L_15 = V_0;
		bool L_16 = ResponseBase_ParseJSONBool_m1044(__this, (String_t*) &_stringLiteral180, L_14, L_15, /*hidden argument*/NULL);
		MatchDesc_set_isPrivate_m1140(__this, L_16, /*hidden argument*/NULL);
		Object_t * L_17 = ___obj;
		Object_t* L_18 = V_0;
		List_1_t223 * L_19 = ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t222_m1483(__this, (String_t*) &_stringLiteral181, L_17, L_18, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t222_m1483_MethodInfo_var);
		MatchDesc_set_directConnectInfos_m1144(__this, L_19, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_0084:
	{
		Object_t * L_20 = ___obj;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m73(NULL /*static, unused*/, (String_t*) &_stringLiteral168, L_21, /*hidden argument*/NULL);
		FormatException_t380 * L_23 = (FormatException_t380 *)il2cpp_codegen_object_new (FormatException_t380_il2cpp_TypeInfo_var);
		FormatException__ctor_m1478(L_23, L_22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_009a:
	{
		return;
	}
}
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponse.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponseMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_10.h"
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_10MethodDeclarations.h"
struct ResponseBase_t211;
struct List_1_t225;
struct String_t;
struct Object_t;
struct IDictionary_2_t339;
// Declaration System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
// System.Collections.Generic.List`1<!!0> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDesc_t224_m1485(__this, p0, p1, p2, method) (( List_1_t225 * (*) (ResponseBase_t211 *, String_t*, Object_t *, Object_t*, const MethodInfo*))ResponseBase_ParseJSONList_TisObject_t_m1484_gshared)(__this, p0, p1, p2, method)


// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern "C" void ListMatchResponse__ctor_m1147 (ListMatchResponse_t226 * __this, const MethodInfo* method)
{
	{
		BasicResponse__ctor_m1052(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C" List_1_t225 * ListMatchResponse_get_matches_m1148 (ListMatchResponse_t226 * __this, const MethodInfo* method)
{
	{
		List_1_t225 * L_0 = (__this->___U3CmatchesU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern "C" void ListMatchResponse_set_matches_m1149 (ListMatchResponse_t226 * __this, List_1_t225 * ___value, const MethodInfo* method)
{
	{
		List_1_t225 * L_0 = ___value;
		__this->___U3CmatchesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern "C" String_t* ListMatchResponse_ToString_m1150 (ListMatchResponse_t226 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 2));
		String_t* L_1 = Response_ToString_m1050(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		List_1_t225 * L_3 = ListMatchResponse_get_matches_m1148(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count() */, L_3);
		int32_t L_5 = L_4;
		Object_t * L_6 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_6;
		String_t* L_7 = UnityString_Format_m762(NULL /*static, unused*/, (String_t*) &_stringLiteral182, L_2, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
extern TypeInfo* IDictionary_2_t339_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FormatException_t380_il2cpp_TypeInfo_var;
extern const MethodInfo* ResponseBase_ParseJSONList_TisMatchDesc_t224_m1485_MethodInfo_var;
extern "C" void ListMatchResponse_Parse_m1151 (ListMatchResponse_t226 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_2_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		FormatException_t380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		ResponseBase_ParseJSONList_TisMatchDesc_t224_m1485_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483686);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		Response_Parse_m1051(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		V_0 = ((Object_t*)IsInst(L_1, IDictionary_2_t339_il2cpp_TypeInfo_var));
		Object_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Object_t * L_3 = ___obj;
		Object_t* L_4 = V_0;
		List_1_t225 * L_5 = ResponseBase_ParseJSONList_TisMatchDesc_t224_m1485(__this, (String_t*) &_stringLiteral183, L_3, L_4, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDesc_t224_m1485_MethodInfo_var);
		ListMatchResponse_set_matches_m1149(__this, L_5, /*hidden argument*/NULL);
		goto IL_0042;
	}

IL_002c:
	{
		Object_t * L_6 = ___obj;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m73(NULL /*static, unused*/, (String_t*) &_stringLiteral168, L_7, /*hidden argument*/NULL);
		FormatException_t380 * L_9 = (FormatException_t380 *)il2cpp_codegen_object_new (FormatException_t380_il2cpp_TypeInfo_var);
		FormatException__ctor_m1478(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0042:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkIDMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeIDMethodDeclarations.h"



// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessTokenMethodDeclarations.h"



// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern TypeInfo* ByteU5BU5D_t151_il2cpp_TypeInfo_var;
extern "C" void NetworkAccessToken__ctor_m1152 (NetworkAccessToken_t231 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		__this->___array_0 = ((ByteU5BU5D_t151*)SZArrayNew(ByteU5BU5D_t151_il2cpp_TypeInfo_var, ((int32_t)64)));
		return;
	}
}
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern TypeInfo* Convert_t381_il2cpp_TypeInfo_var;
extern "C" String_t* NetworkAccessToken_GetByteString_m1153 (NetworkAccessToken_t231 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t151* L_0 = (__this->___array_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t381_il2cpp_TypeInfo_var);
		String_t* L_1 = Convert_ToBase64String_m1486(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_Utility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_UtilityMethodDeclarations.h"

// System.Random
#include "mscorlib_System_Random.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Random
#include "mscorlib_System_RandomMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_3MethodDeclarations.h"
// UnityEngine.SystemInfo
#include "UnityEngine_UnityEngine_SystemInfoMethodDeclarations.h"


// System.Void UnityEngine.Networking.Utility::.cctor()
extern TypeInfo* Random_t232_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t233_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1489_MethodInfo_var;
extern "C" void Utility__cctor_m1154 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Random_t232_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		Utility_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		Dictionary_2_t233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		Dictionary_2__ctor_m1489_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483687);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Environment_get_TickCount_m1487(NULL /*static, unused*/, /*hidden argument*/NULL);
		Random_t232 * L_1 = (Random_t232 *)il2cpp_codegen_object_new (Random_t232_il2cpp_TypeInfo_var);
		Random__ctor_m1488(L_1, L_0, /*hidden argument*/NULL);
		((Utility_t234_StaticFields*)Utility_t234_il2cpp_TypeInfo_var->static_fields)->___s_randomGenerator_0 = L_1;
		((Utility_t234_StaticFields*)Utility_t234_il2cpp_TypeInfo_var->static_fields)->___s_useRandomSourceID_1 = 0;
		((Utility_t234_StaticFields*)Utility_t234_il2cpp_TypeInfo_var->static_fields)->___s_randomSourceComponent_2 = 0;
		((Utility_t234_StaticFields*)Utility_t234_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3 = (((int64_t)(-1)));
		Dictionary_2_t233 * L_2 = (Dictionary_2_t233 *)il2cpp_codegen_object_new (Dictionary_2_t233_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1489(L_2, /*hidden argument*/Dictionary_2__ctor_m1489_MethodInfo_var);
		((Utility_t234_StaticFields*)Utility_t234_il2cpp_TypeInfo_var->static_fields)->___s_dictTokens_4 = L_2;
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern TypeInfo* Utility_t234_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" uint64_t Utility_GetSourceID_m1155 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m189(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t234_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Utility_t234_StaticFields*)Utility_t234_il2cpp_TypeInfo_var->static_fields)->___s_randomSourceComponent_2;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m135(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_4);
		return (uint64_t)((((int64_t)L_5)));
	}
}
// System.Void UnityEngine.Networking.Utility::SetAppID(UnityEngine.Networking.Types.AppID)
extern TypeInfo* Utility_t234_il2cpp_TypeInfo_var;
extern "C" void Utility_SetAppID_m1156 (Object_t * __this /* static, unused */, uint64_t ___newAppID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = ___newAppID;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t234_il2cpp_TypeInfo_var);
		((Utility_t234_StaticFields*)Utility_t234_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3 = L_0;
		return;
	}
}
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern TypeInfo* Utility_t234_il2cpp_TypeInfo_var;
extern "C" uint64_t Utility_GetAppID_m1157 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t234_il2cpp_TypeInfo_var);
		uint64_t L_0 = ((Utility_t234_StaticFields*)Utility_t234_il2cpp_TypeInfo_var->static_fields)->___s_programAppID_3;
		return L_0;
	}
}
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern TypeInfo* Utility_t234_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkAccessToken_t231_il2cpp_TypeInfo_var;
extern "C" NetworkAccessToken_t231 * Utility_GetAccessTokenForNetwork_m1158 (Object_t * __this /* static, unused */, uint64_t ___netId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		NetworkAccessToken_t231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	NetworkAccessToken_t231 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t234_il2cpp_TypeInfo_var);
		Dictionary_2_t233 * L_0 = ((Utility_t234_StaticFields*)Utility_t234_il2cpp_TypeInfo_var->static_fields)->___s_dictTokens_4;
		uint64_t L_1 = ___netId;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, uint64_t, NetworkAccessToken_t231 ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(!0,!1&) */, L_0, L_1, (&V_0));
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		NetworkAccessToken_t231 * L_3 = (NetworkAccessToken_t231 *)il2cpp_codegen_object_new (NetworkAccessToken_t231_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m1152(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0018:
	{
		NetworkAccessToken_t231 * L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatchMethodDeclarations.h"

// System.Uri
#include "System_System_Uri.h"
// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_0.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_1.h"
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_2.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// System.UInt64
#include "mscorlib_System_UInt64MethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// System.UInt32
#include "mscorlib_System_UInt32MethodDeclarations.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"
struct NetworkMatch_t236;
struct IEnumerator_t328;
struct WWW_t148;
struct ResponseDelegate_1_t340;
struct NetworkMatch_t236;
struct IEnumerator_t328;
struct WWW_t148;
struct ResponseDelegate_1_t383;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
extern "C" Object_t * NetworkMatch_ProcessMatchResponse_TisObject_t_m1491_gshared (NetworkMatch_t236 * __this, WWW_t148 * p0, ResponseDelegate_1_t383 * p1, const MethodInfo* method);
#define NetworkMatch_ProcessMatchResponse_TisObject_t_m1491(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t236 *, WWW_t148 *, ResponseDelegate_1_t383 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m1491_gshared)(__this, p0, p1, method)
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t216_m1490(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t236 *, WWW_t148 *, ResponseDelegate_1_t340 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m1491_gshared)(__this, p0, p1, method)
struct NetworkMatch_t236;
struct IEnumerator_t328;
struct WWW_t148;
struct ResponseDelegate_1_t341;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t218_m1492(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t236 *, WWW_t148 *, ResponseDelegate_1_t341 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m1491_gshared)(__this, p0, p1, method)
struct NetworkMatch_t236;
struct IEnumerator_t328;
struct WWW_t148;
struct ResponseDelegate_1_t342;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisBasicResponse_t213_m1493(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t236 *, WWW_t148 *, ResponseDelegate_1_t342 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m1491_gshared)(__this, p0, p1, method)
struct NetworkMatch_t236;
struct IEnumerator_t328;
struct WWW_t148;
struct ResponseDelegate_1_t343;
// Declaration System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse>(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<!!0>)
#define NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t226_m1494(__this, p0, p1, method) (( Object_t * (*) (NetworkMatch_t236 *, WWW_t148 *, ResponseDelegate_1_t343 *, const MethodInfo*))NetworkMatch_ProcessMatchResponse_TisObject_t_m1491_gshared)(__this, p0, p1, method)


// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern TypeInfo* Uri_t235_il2cpp_TypeInfo_var;
extern "C" void NetworkMatch__ctor_m1159 (NetworkMatch_t236 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(176);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	uint64_t V_1 = 0;
	{
		Uri_t235 * L_0 = (Uri_t235 *)il2cpp_codegen_object_new (Uri_t235_il2cpp_TypeInfo_var);
		Uri__ctor_m1495(L_0, (String_t*) &_stringLiteral184, /*hidden argument*/NULL);
		__this->___m_BaseUri_3 = L_0;
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		String_t* L_1 = PlayerPrefs_GetString_m879(NULL /*static, unused*/, (String_t*) &_stringLiteral185, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = UInt64_TryParse_m1496(NULL /*static, unused*/, L_2, (&V_1), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_003d;
		}
	}
	{
		Debug_Log_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral186, /*hidden argument*/NULL);
		goto IL_0044;
	}

IL_003d:
	{
		uint64_t L_4 = V_1;
		NetworkMatch_SetProgramAppID_m1162(__this, L_4, /*hidden argument*/NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" Uri_t235 * NetworkMatch_get_baseUri_m1160 (NetworkMatch_t236 * __this, const MethodInfo* method)
{
	{
		Uri_t235 * L_0 = (__this->___m_BaseUri_3);
		return L_0;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C" void NetworkMatch_set_baseUri_m1161 (NetworkMatch_t236 * __this, Uri_t235 * ___value, const MethodInfo* method)
{
	{
		Uri_t235 * L_0 = ___value;
		__this->___m_BaseUri_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern TypeInfo* Utility_t234_il2cpp_TypeInfo_var;
extern "C" void NetworkMatch_SetProgramAppID_m1162 (NetworkMatch_t236 * __this, uint64_t ___programAppID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utility_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint64_t L_0 = ___programAppID;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t234_il2cpp_TypeInfo_var);
		Utility_SetAppID_m1156(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern TypeInfo* CreateMatchRequest_t215_il2cpp_TypeInfo_var;
extern "C" Coroutine_t68 * NetworkMatch_CreateMatch_m1163 (NetworkMatch_t236 * __this, String_t* ___matchName, uint32_t ___matchSize, bool ___matchAdvertise, String_t* ___matchPassword, ResponseDelegate_1_t340 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CreateMatchRequest_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		s_Il2CppMethodIntialized = true;
	}
	CreateMatchRequest_t215 * V_0 = {0};
	{
		CreateMatchRequest_t215 * L_0 = (CreateMatchRequest_t215 *)il2cpp_codegen_object_new (CreateMatchRequest_t215_il2cpp_TypeInfo_var);
		CreateMatchRequest__ctor_m1053(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CreateMatchRequest_t215 * L_1 = V_0;
		String_t* L_2 = ___matchName;
		NullCheck(L_1);
		CreateMatchRequest_set_name_m1055(L_1, L_2, /*hidden argument*/NULL);
		CreateMatchRequest_t215 * L_3 = V_0;
		uint32_t L_4 = ___matchSize;
		NullCheck(L_3);
		CreateMatchRequest_set_size_m1057(L_3, L_4, /*hidden argument*/NULL);
		CreateMatchRequest_t215 * L_5 = V_0;
		bool L_6 = ___matchAdvertise;
		NullCheck(L_5);
		CreateMatchRequest_set_advertise_m1059(L_5, L_6, /*hidden argument*/NULL);
		CreateMatchRequest_t215 * L_7 = V_0;
		String_t* L_8 = ___matchPassword;
		NullCheck(L_7);
		CreateMatchRequest_set_password_m1061(L_7, L_8, /*hidden argument*/NULL);
		CreateMatchRequest_t215 * L_9 = V_0;
		ResponseDelegate_1_t340 * L_10 = ___callback;
		Coroutine_t68 * L_11 = NetworkMatch_CreateMatch_m1164(__this, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern TypeInfo* Uri_t235_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t152_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t234_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t228_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t227_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t148_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t216_m1490_MethodInfo_var;
extern "C" Coroutine_t68 * NetworkMatch_CreateMatch_m1164 (NetworkMatch_t236 * __this, CreateMatchRequest_t215 * ___req, ResponseDelegate_1_t340 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(176);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		WWWForm_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Utility_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		SourceID_t228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(162);
		AppID_t227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		WWW_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t216_m1490_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483688);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t235 * V_0 = {0};
	WWWForm_t152 * V_1 = {0};
	WWW_t148 * V_2 = {0};
	uint32_t V_3 = 0;
	bool V_4 = false;
	{
		Uri_t235 * L_0 = NetworkMatch_get_baseUri_m1160(__this, /*hidden argument*/NULL);
		Uri_t235 * L_1 = (Uri_t235 *)il2cpp_codegen_object_new (Uri_t235_il2cpp_TypeInfo_var);
		Uri__ctor_m1497(L_1, L_0, (String_t*) &_stringLiteral187, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t235 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral188, L_2, /*hidden argument*/NULL);
		Debug_Log_m798(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t152 * L_4 = (WWWForm_t152 *)il2cpp_codegen_object_new (WWWForm_t152_il2cpp_TypeInfo_var);
		WWWForm__ctor_m748(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t152 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t234_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m1155(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t228_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m749(L_5, (String_t*) &_stringLiteral189, L_9, /*hidden argument*/NULL);
		WWWForm_t152 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m1157(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t227_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m749(L_10, (String_t*) &_stringLiteral190, L_14, /*hidden argument*/NULL);
		WWWForm_t152 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m751(L_15, (String_t*) &_stringLiteral165, 0, /*hidden argument*/NULL);
		WWWForm_t152 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m751(L_16, (String_t*) &_stringLiteral191, 0, /*hidden argument*/NULL);
		WWWForm_t152 * L_17 = V_1;
		CreateMatchRequest_t215 * L_18 = ___req;
		NullCheck(L_18);
		String_t* L_19 = CreateMatchRequest_get_name_m1054(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		WWWForm_AddField_m749(L_17, (String_t*) &_stringLiteral177, L_19, /*hidden argument*/NULL);
		WWWForm_t152 * L_20 = V_1;
		CreateMatchRequest_t215 * L_21 = ___req;
		NullCheck(L_21);
		uint32_t L_22 = CreateMatchRequest_get_size_m1056(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		String_t* L_23 = UInt32_ToString_m1498((&V_3), /*hidden argument*/NULL);
		NullCheck(L_20);
		WWWForm_AddField_m749(L_20, (String_t*) &_stringLiteral192, L_23, /*hidden argument*/NULL);
		WWWForm_t152 * L_24 = V_1;
		CreateMatchRequest_t215 * L_25 = ___req;
		NullCheck(L_25);
		bool L_26 = CreateMatchRequest_get_advertise_m1058(L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		String_t* L_27 = Boolean_ToString_m1499((&V_4), /*hidden argument*/NULL);
		NullCheck(L_24);
		WWWForm_AddField_m749(L_24, (String_t*) &_stringLiteral193, L_27, /*hidden argument*/NULL);
		WWWForm_t152 * L_28 = V_1;
		CreateMatchRequest_t215 * L_29 = ___req;
		NullCheck(L_29);
		String_t* L_30 = CreateMatchRequest_get_password_m1060(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		WWWForm_AddField_m749(L_28, (String_t*) &_stringLiteral194, L_30, /*hidden argument*/NULL);
		WWWForm_t152 * L_31 = V_1;
		NullCheck(L_31);
		Dictionary_2_t329 * L_32 = WWWForm_get_headers_m752(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_32, (String_t*) &_stringLiteral195, (String_t*) &_stringLiteral196);
		Uri_t235 * L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_33);
		WWWForm_t152 * L_35 = V_1;
		WWW_t148 * L_36 = (WWW_t148 *)il2cpp_codegen_object_new (WWW_t148_il2cpp_TypeInfo_var);
		WWW__ctor_m733(L_36, L_34, L_35, /*hidden argument*/NULL);
		V_2 = L_36;
		WWW_t148 * L_37 = V_2;
		ResponseDelegate_1_t340 * L_38 = ___callback;
		Object_t * L_39 = NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t216_m1490(__this, L_37, L_38, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t216_m1490_MethodInfo_var);
		Coroutine_t68 * L_40 = MonoBehaviour_StartCoroutine_m833(__this, L_39, /*hidden argument*/NULL);
		return L_40;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern TypeInfo* JoinMatchRequest_t217_il2cpp_TypeInfo_var;
extern "C" Coroutine_t68 * NetworkMatch_JoinMatch_m1165 (NetworkMatch_t236 * __this, uint64_t ___netId, String_t* ___matchPassword, ResponseDelegate_1_t341 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JoinMatchRequest_t217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		s_Il2CppMethodIntialized = true;
	}
	JoinMatchRequest_t217 * V_0 = {0};
	{
		JoinMatchRequest_t217 * L_0 = (JoinMatchRequest_t217 *)il2cpp_codegen_object_new (JoinMatchRequest_t217_il2cpp_TypeInfo_var);
		JoinMatchRequest__ctor_m1079(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JoinMatchRequest_t217 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		JoinMatchRequest_set_networkId_m1081(L_1, L_2, /*hidden argument*/NULL);
		JoinMatchRequest_t217 * L_3 = V_0;
		String_t* L_4 = ___matchPassword;
		NullCheck(L_3);
		JoinMatchRequest_set_password_m1083(L_3, L_4, /*hidden argument*/NULL);
		JoinMatchRequest_t217 * L_5 = V_0;
		ResponseDelegate_1_t341 * L_6 = ___callback;
		Coroutine_t68 * L_7 = NetworkMatch_JoinMatch_m1166(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern TypeInfo* Uri_t235_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t152_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t234_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t228_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t227_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t229_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t148_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t218_m1492_MethodInfo_var;
extern "C" Coroutine_t68 * NetworkMatch_JoinMatch_m1166 (NetworkMatch_t236 * __this, JoinMatchRequest_t217 * ___req, ResponseDelegate_1_t341 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(176);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		WWWForm_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Utility_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		SourceID_t228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(162);
		AppID_t227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		NetworkID_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		WWW_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t218_m1492_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483689);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t235 * V_0 = {0};
	WWWForm_t152 * V_1 = {0};
	WWW_t148 * V_2 = {0};
	{
		Uri_t235 * L_0 = NetworkMatch_get_baseUri_m1160(__this, /*hidden argument*/NULL);
		Uri_t235 * L_1 = (Uri_t235 *)il2cpp_codegen_object_new (Uri_t235_il2cpp_TypeInfo_var);
		Uri__ctor_m1497(L_1, L_0, (String_t*) &_stringLiteral197, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t235 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral198, L_2, /*hidden argument*/NULL);
		Debug_Log_m798(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t152 * L_4 = (WWWForm_t152 *)il2cpp_codegen_object_new (WWWForm_t152_il2cpp_TypeInfo_var);
		WWWForm__ctor_m748(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t152 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t234_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m1155(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t228_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m749(L_5, (String_t*) &_stringLiteral189, L_9, /*hidden argument*/NULL);
		WWWForm_t152 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m1157(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t227_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m749(L_10, (String_t*) &_stringLiteral190, L_14, /*hidden argument*/NULL);
		WWWForm_t152 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m751(L_15, (String_t*) &_stringLiteral165, 0, /*hidden argument*/NULL);
		WWWForm_t152 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m751(L_16, (String_t*) &_stringLiteral191, 0, /*hidden argument*/NULL);
		WWWForm_t152 * L_17 = V_1;
		JoinMatchRequest_t217 * L_18 = ___req;
		NullCheck(L_18);
		uint64_t L_19 = JoinMatchRequest_get_networkId_m1080(L_18, /*hidden argument*/NULL);
		uint64_t L_20 = L_19;
		Object_t * L_21 = Box(NetworkID_t229_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_21);
		NullCheck(L_17);
		WWWForm_AddField_m749(L_17, (String_t*) &_stringLiteral164, L_22, /*hidden argument*/NULL);
		WWWForm_t152 * L_23 = V_1;
		JoinMatchRequest_t217 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = JoinMatchRequest_get_password_m1082(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		WWWForm_AddField_m749(L_23, (String_t*) &_stringLiteral194, L_25, /*hidden argument*/NULL);
		WWWForm_t152 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t329 * L_27 = WWWForm_get_headers_m752(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral195, (String_t*) &_stringLiteral196);
		Uri_t235 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_28);
		WWWForm_t152 * L_30 = V_1;
		WWW_t148 * L_31 = (WWW_t148 *)il2cpp_codegen_object_new (WWW_t148_il2cpp_TypeInfo_var);
		WWW__ctor_m733(L_31, L_29, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		WWW_t148 * L_32 = V_2;
		ResponseDelegate_1_t341 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t218_m1492(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t218_m1492_MethodInfo_var);
		Coroutine_t68 * L_35 = MonoBehaviour_StartCoroutine_m833(__this, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* DestroyMatchRequest_t219_il2cpp_TypeInfo_var;
extern "C" Coroutine_t68 * NetworkMatch_DestroyMatch_m1167 (NetworkMatch_t236 * __this, uint64_t ___netId, ResponseDelegate_1_t342 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DestroyMatchRequest_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(183);
		s_Il2CppMethodIntialized = true;
	}
	DestroyMatchRequest_t219 * V_0 = {0};
	{
		DestroyMatchRequest_t219 * L_0 = (DestroyMatchRequest_t219 *)il2cpp_codegen_object_new (DestroyMatchRequest_t219_il2cpp_TypeInfo_var);
		DestroyMatchRequest__ctor_m1100(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DestroyMatchRequest_t219 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DestroyMatchRequest_set_networkId_m1102(L_1, L_2, /*hidden argument*/NULL);
		DestroyMatchRequest_t219 * L_3 = V_0;
		ResponseDelegate_1_t342 * L_4 = ___callback;
		Coroutine_t68 * L_5 = NetworkMatch_DestroyMatch_m1168(__this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* Uri_t235_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t152_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t234_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t228_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t227_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t229_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t148_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t213_m1493_MethodInfo_var;
extern "C" Coroutine_t68 * NetworkMatch_DestroyMatch_m1168 (NetworkMatch_t236 * __this, DestroyMatchRequest_t219 * ___req, ResponseDelegate_1_t342 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(176);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		WWWForm_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Utility_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		SourceID_t228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(162);
		AppID_t227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		NetworkID_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		WWW_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t213_m1493_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t235 * V_0 = {0};
	WWWForm_t152 * V_1 = {0};
	WWW_t148 * V_2 = {0};
	{
		Uri_t235 * L_0 = NetworkMatch_get_baseUri_m1160(__this, /*hidden argument*/NULL);
		Uri_t235 * L_1 = (Uri_t235 *)il2cpp_codegen_object_new (Uri_t235_il2cpp_TypeInfo_var);
		Uri__ctor_m1497(L_1, L_0, (String_t*) &_stringLiteral199, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t235 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m73(NULL /*static, unused*/, (String_t*) &_stringLiteral200, L_3, /*hidden argument*/NULL);
		Debug_Log_m798(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t152 * L_5 = (WWWForm_t152 *)il2cpp_codegen_object_new (WWWForm_t152_il2cpp_TypeInfo_var);
		WWWForm__ctor_m748(L_5, /*hidden argument*/NULL);
		V_1 = L_5;
		WWWForm_t152 * L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t234_il2cpp_TypeInfo_var);
		uint64_t L_7 = Utility_GetSourceID_m1155(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_8 = L_7;
		Object_t * L_9 = Box(SourceID_t228_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_9);
		NullCheck(L_6);
		WWWForm_AddField_m749(L_6, (String_t*) &_stringLiteral189, L_10, /*hidden argument*/NULL);
		WWWForm_t152 * L_11 = V_1;
		uint64_t L_12 = Utility_GetAppID_m1157(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_13 = L_12;
		Object_t * L_14 = Box(AppID_t227_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_14);
		NullCheck(L_11);
		WWWForm_AddField_m749(L_11, (String_t*) &_stringLiteral190, L_15, /*hidden argument*/NULL);
		WWWForm_t152 * L_16 = V_1;
		DestroyMatchRequest_t219 * L_17 = ___req;
		NullCheck(L_17);
		uint64_t L_18 = DestroyMatchRequest_get_networkId_m1101(L_17, /*hidden argument*/NULL);
		NetworkAccessToken_t231 * L_19 = Utility_GetAccessTokenForNetwork_m1158(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = NetworkAccessToken_GetByteString_m1153(L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		WWWForm_AddField_m749(L_16, (String_t*) &_stringLiteral165, L_20, /*hidden argument*/NULL);
		WWWForm_t152 * L_21 = V_1;
		NullCheck(L_21);
		WWWForm_AddField_m751(L_21, (String_t*) &_stringLiteral191, 0, /*hidden argument*/NULL);
		WWWForm_t152 * L_22 = V_1;
		DestroyMatchRequest_t219 * L_23 = ___req;
		NullCheck(L_23);
		uint64_t L_24 = DestroyMatchRequest_get_networkId_m1101(L_23, /*hidden argument*/NULL);
		uint64_t L_25 = L_24;
		Object_t * L_26 = Box(NetworkID_t229_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_26);
		NullCheck(L_22);
		WWWForm_AddField_m749(L_22, (String_t*) &_stringLiteral164, L_27, /*hidden argument*/NULL);
		WWWForm_t152 * L_28 = V_1;
		NullCheck(L_28);
		Dictionary_2_t329 * L_29 = WWWForm_get_headers_m752(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral195, (String_t*) &_stringLiteral196);
		Uri_t235 * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_30);
		WWWForm_t152 * L_32 = V_1;
		WWW_t148 * L_33 = (WWW_t148 *)il2cpp_codegen_object_new (WWW_t148_il2cpp_TypeInfo_var);
		WWW__ctor_m733(L_33, L_31, L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		WWW_t148 * L_34 = V_2;
		ResponseDelegate_1_t342 * L_35 = ___callback;
		Object_t * L_36 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t213_m1493(__this, L_34, L_35, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t213_m1493_MethodInfo_var);
		Coroutine_t68 * L_37 = MonoBehaviour_StartCoroutine_m833(__this, L_36, /*hidden argument*/NULL);
		return L_37;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* DropConnectionRequest_t220_il2cpp_TypeInfo_var;
extern "C" Coroutine_t68 * NetworkMatch_DropConnection_m1169 (NetworkMatch_t236 * __this, uint64_t ___netId, uint16_t ___dropNodeId, ResponseDelegate_1_t342 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DropConnectionRequest_t220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		s_Il2CppMethodIntialized = true;
	}
	DropConnectionRequest_t220 * V_0 = {0};
	{
		DropConnectionRequest_t220 * L_0 = (DropConnectionRequest_t220 *)il2cpp_codegen_object_new (DropConnectionRequest_t220_il2cpp_TypeInfo_var);
		DropConnectionRequest__ctor_m1104(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DropConnectionRequest_t220 * L_1 = V_0;
		uint64_t L_2 = ___netId;
		NullCheck(L_1);
		DropConnectionRequest_set_networkId_m1106(L_1, L_2, /*hidden argument*/NULL);
		DropConnectionRequest_t220 * L_3 = V_0;
		uint16_t L_4 = ___dropNodeId;
		NullCheck(L_3);
		DropConnectionRequest_set_nodeId_m1108(L_3, L_4, /*hidden argument*/NULL);
		DropConnectionRequest_t220 * L_5 = V_0;
		ResponseDelegate_1_t342 * L_6 = ___callback;
		Coroutine_t68 * L_7 = NetworkMatch_DropConnection_m1170(__this, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern TypeInfo* Uri_t235_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t152_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t234_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t228_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t227_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t229_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t230_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t148_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t213_m1493_MethodInfo_var;
extern "C" Coroutine_t68 * NetworkMatch_DropConnection_m1170 (NetworkMatch_t236 * __this, DropConnectionRequest_t220 * ___req, ResponseDelegate_1_t342 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(176);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		WWWForm_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Utility_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		SourceID_t228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(162);
		AppID_t227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		NetworkID_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		NodeID_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		WWW_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		NetworkMatch_ProcessMatchResponse_TisBasicResponse_t213_m1493_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483690);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t235 * V_0 = {0};
	WWWForm_t152 * V_1 = {0};
	WWW_t148 * V_2 = {0};
	{
		Uri_t235 * L_0 = NetworkMatch_get_baseUri_m1160(__this, /*hidden argument*/NULL);
		Uri_t235 * L_1 = (Uri_t235 *)il2cpp_codegen_object_new (Uri_t235_il2cpp_TypeInfo_var);
		Uri__ctor_m1497(L_1, L_0, (String_t*) &_stringLiteral201, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t235 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral202, L_2, /*hidden argument*/NULL);
		Debug_Log_m798(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t152 * L_4 = (WWWForm_t152 *)il2cpp_codegen_object_new (WWWForm_t152_il2cpp_TypeInfo_var);
		WWWForm__ctor_m748(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t152 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t234_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m1155(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t228_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m749(L_5, (String_t*) &_stringLiteral189, L_9, /*hidden argument*/NULL);
		WWWForm_t152 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m1157(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t227_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m749(L_10, (String_t*) &_stringLiteral190, L_14, /*hidden argument*/NULL);
		WWWForm_t152 * L_15 = V_1;
		DropConnectionRequest_t220 * L_16 = ___req;
		NullCheck(L_16);
		uint64_t L_17 = DropConnectionRequest_get_networkId_m1105(L_16, /*hidden argument*/NULL);
		NetworkAccessToken_t231 * L_18 = Utility_GetAccessTokenForNetwork_m1158(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = NetworkAccessToken_GetByteString_m1153(L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		WWWForm_AddField_m749(L_15, (String_t*) &_stringLiteral165, L_19, /*hidden argument*/NULL);
		WWWForm_t152 * L_20 = V_1;
		NullCheck(L_20);
		WWWForm_AddField_m751(L_20, (String_t*) &_stringLiteral191, 0, /*hidden argument*/NULL);
		WWWForm_t152 * L_21 = V_1;
		DropConnectionRequest_t220 * L_22 = ___req;
		NullCheck(L_22);
		uint64_t L_23 = DropConnectionRequest_get_networkId_m1105(L_22, /*hidden argument*/NULL);
		uint64_t L_24 = L_23;
		Object_t * L_25 = Box(NetworkID_t229_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_25);
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_25);
		NullCheck(L_21);
		WWWForm_AddField_m749(L_21, (String_t*) &_stringLiteral164, L_26, /*hidden argument*/NULL);
		WWWForm_t152 * L_27 = V_1;
		DropConnectionRequest_t220 * L_28 = ___req;
		NullCheck(L_28);
		uint16_t L_29 = DropConnectionRequest_get_nodeId_m1107(L_28, /*hidden argument*/NULL);
		uint16_t L_30 = L_29;
		Object_t * L_31 = Box(NodeID_t230_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_31);
		NullCheck(L_27);
		WWWForm_AddField_m749(L_27, (String_t*) &_stringLiteral166, L_32, /*hidden argument*/NULL);
		WWWForm_t152 * L_33 = V_1;
		NullCheck(L_33);
		Dictionary_2_t329 * L_34 = WWWForm_get_headers_m752(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_34, (String_t*) &_stringLiteral195, (String_t*) &_stringLiteral196);
		Uri_t235 * L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_35);
		WWWForm_t152 * L_37 = V_1;
		WWW_t148 * L_38 = (WWW_t148 *)il2cpp_codegen_object_new (WWW_t148_il2cpp_TypeInfo_var);
		WWW__ctor_m733(L_38, L_36, L_37, /*hidden argument*/NULL);
		V_2 = L_38;
		WWW_t148 * L_39 = V_2;
		ResponseDelegate_1_t342 * L_40 = ___callback;
		Object_t * L_41 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t213_m1493(__this, L_39, L_40, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t213_m1493_MethodInfo_var);
		Coroutine_t68 * L_42 = MonoBehaviour_StartCoroutine_m833(__this, L_41, /*hidden argument*/NULL);
		return L_42;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern TypeInfo* ListMatchRequest_t221_il2cpp_TypeInfo_var;
extern "C" Coroutine_t68 * NetworkMatch_ListMatches_m1171 (NetworkMatch_t236 * __this, int32_t ___startPageNumber, int32_t ___resultPageSize, String_t* ___matchNameFilter, ResponseDelegate_1_t343 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ListMatchRequest_t221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		s_Il2CppMethodIntialized = true;
	}
	ListMatchRequest_t221 * V_0 = {0};
	{
		ListMatchRequest_t221 * L_0 = (ListMatchRequest_t221 *)il2cpp_codegen_object_new (ListMatchRequest_t221_il2cpp_TypeInfo_var);
		ListMatchRequest__ctor_m1110(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ListMatchRequest_t221 * L_1 = V_0;
		int32_t L_2 = ___startPageNumber;
		NullCheck(L_1);
		ListMatchRequest_set_pageNum_m1114(L_1, L_2, /*hidden argument*/NULL);
		ListMatchRequest_t221 * L_3 = V_0;
		int32_t L_4 = ___resultPageSize;
		NullCheck(L_3);
		ListMatchRequest_set_pageSize_m1112(L_3, L_4, /*hidden argument*/NULL);
		ListMatchRequest_t221 * L_5 = V_0;
		String_t* L_6 = ___matchNameFilter;
		NullCheck(L_5);
		ListMatchRequest_set_nameFilter_m1116(L_5, L_6, /*hidden argument*/NULL);
		ListMatchRequest_t221 * L_7 = V_0;
		ResponseDelegate_1_t343 * L_8 = ___callback;
		Coroutine_t68 * L_9 = NetworkMatch_ListMatches_m1172(__this, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern TypeInfo* Uri_t235_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t152_il2cpp_TypeInfo_var;
extern TypeInfo* Utility_t234_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t228_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t227_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t148_il2cpp_TypeInfo_var;
extern const MethodInfo* NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t226_m1494_MethodInfo_var;
extern "C" Coroutine_t68 * NetworkMatch_ListMatches_m1172 (NetworkMatch_t236 * __this, ListMatchRequest_t221 * ___req, ResponseDelegate_1_t343 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Uri_t235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(176);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		WWWForm_t152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Utility_t234_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		SourceID_t228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(162);
		AppID_t227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		WWW_t148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t226_m1494_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483691);
		s_Il2CppMethodIntialized = true;
	}
	Uri_t235 * V_0 = {0};
	WWWForm_t152 * V_1 = {0};
	WWW_t148 * V_2 = {0};
	{
		Uri_t235 * L_0 = NetworkMatch_get_baseUri_m1160(__this, /*hidden argument*/NULL);
		Uri_t235 * L_1 = (Uri_t235 *)il2cpp_codegen_object_new (Uri_t235_il2cpp_TypeInfo_var);
		Uri__ctor_m1497(L_1, L_0, (String_t*) &_stringLiteral203, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t235 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral204, L_2, /*hidden argument*/NULL);
		Debug_Log_m798(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		WWWForm_t152 * L_4 = (WWWForm_t152 *)il2cpp_codegen_object_new (WWWForm_t152_il2cpp_TypeInfo_var);
		WWWForm__ctor_m748(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		WWWForm_t152 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t234_il2cpp_TypeInfo_var);
		uint64_t L_6 = Utility_GetSourceID_m1155(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_7 = L_6;
		Object_t * L_8 = Box(SourceID_t228_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_8);
		NullCheck(L_5);
		WWWForm_AddField_m749(L_5, (String_t*) &_stringLiteral189, L_9, /*hidden argument*/NULL);
		WWWForm_t152 * L_10 = V_1;
		uint64_t L_11 = Utility_GetAppID_m1157(NULL /*static, unused*/, /*hidden argument*/NULL);
		uint64_t L_12 = L_11;
		Object_t * L_13 = Box(AppID_t227_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_13);
		NullCheck(L_10);
		WWWForm_AddField_m749(L_10, (String_t*) &_stringLiteral190, L_14, /*hidden argument*/NULL);
		WWWForm_t152 * L_15 = V_1;
		NullCheck(L_15);
		WWWForm_AddField_m751(L_15, (String_t*) &_stringLiteral165, 0, /*hidden argument*/NULL);
		WWWForm_t152 * L_16 = V_1;
		NullCheck(L_16);
		WWWForm_AddField_m751(L_16, (String_t*) &_stringLiteral191, 0, /*hidden argument*/NULL);
		WWWForm_t152 * L_17 = V_1;
		ListMatchRequest_t221 * L_18 = ___req;
		NullCheck(L_18);
		int32_t L_19 = ListMatchRequest_get_pageSize_m1111(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		WWWForm_AddField_m751(L_17, (String_t*) &_stringLiteral205, L_19, /*hidden argument*/NULL);
		WWWForm_t152 * L_20 = V_1;
		ListMatchRequest_t221 * L_21 = ___req;
		NullCheck(L_21);
		int32_t L_22 = ListMatchRequest_get_pageNum_m1113(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		WWWForm_AddField_m751(L_20, (String_t*) &_stringLiteral206, L_22, /*hidden argument*/NULL);
		WWWForm_t152 * L_23 = V_1;
		ListMatchRequest_t221 * L_24 = ___req;
		NullCheck(L_24);
		String_t* L_25 = ListMatchRequest_get_nameFilter_m1115(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		WWWForm_AddField_m749(L_23, (String_t*) &_stringLiteral207, L_25, /*hidden argument*/NULL);
		WWWForm_t152 * L_26 = V_1;
		NullCheck(L_26);
		Dictionary_2_t329 * L_27 = WWWForm_get_headers_m752(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral195, (String_t*) &_stringLiteral196);
		Uri_t235 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Uri::ToString() */, L_28);
		WWWForm_t152 * L_30 = V_1;
		WWW_t148 * L_31 = (WWW_t148 *)il2cpp_codegen_object_new (WWW_t148_il2cpp_TypeInfo_var);
		WWW__ctor_m733(L_31, L_29, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		WWW_t148 * L_32 = V_2;
		ResponseDelegate_1_t343 * L_33 = ___callback;
		Object_t * L_34 = NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t226_m1494(__this, L_32, L_33, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t226_m1494_MethodInfo_var);
		Coroutine_t68 * L_35 = MonoBehaviour_StartCoroutine_m833(__this, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArray.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArrayMethodDeclarations.h"

// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"


// System.Void SimpleJson.JsonArray::.ctor()
extern TypeInfo* List_1_t238_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1500_MethodInfo_var;
extern "C" void JsonArray__ctor_m1173 (JsonArray_t237 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t238_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		List_1__ctor_m1500_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483692);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t238_il2cpp_TypeInfo_var);
		List_1__ctor_m1500(__this, /*hidden argument*/List_1__ctor_m1500_MethodInfo_var);
		return;
	}
}
// System.String SimpleJson.JsonArray::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* JsonArray_ToString_m1174 (JsonArray_t237 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B1_0 = {0};
	{
		String_t* L_0 = SimpleJson_SerializeObject_m1195(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B2_0 = L_2;
	}

IL_0012:
	{
		return G_B2_0;
	}
}
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObject.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObjectMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti.h"
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_4MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_genMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"


// System.Void SimpleJson.JsonObject::.ctor()
extern TypeInfo* Dictionary_2_t239_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1501_MethodInfo_var;
extern "C" void JsonObject__ctor_m1175 (JsonObject_t240 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(189);
		Dictionary_2__ctor_m1501_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483693);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		Dictionary_2_t239 * L_0 = (Dictionary_2_t239 *)il2cpp_codegen_object_new (Dictionary_2_t239_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1501(L_0, /*hidden argument*/Dictionary_2__ctor_m1501_MethodInfo_var);
		__this->____members_0 = L_0;
		return;
	}
}
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* Enumerator_t384_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m1502_MethodInfo_var;
extern "C" Object_t * JsonObject_System_Collections_IEnumerable_GetEnumerator_m1176 (JsonObject_t240 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		Dictionary_2_GetEnumerator_m1502_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t239 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t384  L_1 = Dictionary_2_GetEnumerator_m1502(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m1502_MethodInfo_var);
		Enumerator_t384  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t384_il2cpp_TypeInfo_var, &L_2);
		return (Object_t *)L_3;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern "C" void JsonObject_Add_m1177 (JsonObject_t240 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t239 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern const MethodInfo* Dictionary_2_get_Keys_m1503_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Keys_m1178 (JsonObject_t240 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_get_Keys_m1503_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483695);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t239 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		KeyCollection_t385 * L_1 = Dictionary_2_get_Keys_m1503(L_0, /*hidden argument*/Dictionary_2_get_Keys_m1503_MethodInfo_var);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.String)
extern "C" bool JsonObject_Remove_m1179 (JsonObject_t240 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t239 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern "C" bool JsonObject_TryGetValue_m1180 (JsonObject_t240 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t239 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t ** L_2 = ___value;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern const MethodInfo* Dictionary_2_get_Values_m1504_MethodInfo_var;
extern "C" Object_t* JsonObject_get_Values_m1181 (JsonObject_t240 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_get_Values_m1504_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483696);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t239 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		ValueCollection_t386 * L_1 = Dictionary_2_get_Values_m1504(L_0, /*hidden argument*/Dictionary_2_get_Values_m1504_MethodInfo_var);
		return L_1;
	}
}
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern "C" Object_t * JsonObject_get_Item_m1182 (JsonObject_t240 * __this, String_t* ___key, const MethodInfo* method)
{
	{
		Dictionary_2_t239 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern "C" void JsonObject_set_Item_m1183 (JsonObject_t240 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Dictionary_2_t239 * L_0 = (__this->____members_0);
		String_t* L_1 = ___key;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(21 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m1505_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m1506_MethodInfo_var;
extern "C" void JsonObject_Add_m1184 (JsonObject_t240 * __this, KeyValuePair_2_t347  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m1505_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483697);
		KeyValuePair_2_get_Value_m1506_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t239 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m1505((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m1505_MethodInfo_var);
		Object_t * L_2 = KeyValuePair_2_get_Value_m1506((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m1506_MethodInfo_var);
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(17 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void SimpleJson.JsonObject::Clear()
extern "C" void JsonObject_Clear_m1185 (JsonObject_t240 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t239 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear() */, L_0);
		return;
	}
}
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m1505_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m1506_MethodInfo_var;
extern "C" bool JsonObject_Contains_m1186 (JsonObject_t240 * __this, KeyValuePair_2_t347  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m1505_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483697);
		KeyValuePair_2_get_Value_m1506_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483698);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Dictionary_2_t239 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m1505((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m1505_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(31 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t239 * L_3 = (__this->____members_0);
		String_t* L_4 = KeyValuePair_2_get_Key_m1505((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m1505_MethodInfo_var);
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(20 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_3, L_4);
		Object_t * L_6 = KeyValuePair_2_get_Value_m1506((&___item), /*hidden argument*/KeyValuePair_2_get_Value_m1506_MethodInfo_var);
		G_B3_0 = ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B3_0 = 0;
	}

IL_0035:
	{
		return G_B3_0;
	}
}
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern TypeInfo* ArgumentNullException_t387_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t348_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t328_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t368_il2cpp_TypeInfo_var;
extern "C" void JsonObject_CopyTo_m1187 (JsonObject_t240 * __this, KeyValuePair_2U5BU5D_t346* ___array, int32_t ___arrayIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(191);
		IEnumerator_1_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		IEnumerator_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		IDisposable_t368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t347  V_1 = {0};
	Object_t* V_2 = {0};
	Exception_t118 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t118 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		KeyValuePair_2U5BU5D_t346* L_0 = ___array;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t387 * L_1 = (ArgumentNullException_t387 *)il2cpp_codegen_object_new (ArgumentNullException_t387_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1507(L_1, (String_t*) &_stringLiteral212, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 SimpleJson.JsonObject::get_Count() */, __this);
		V_0 = L_2;
		Object_t* L_3 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(11 /* System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator() */, __this);
		V_2 = L_3;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0024:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			KeyValuePair_2_t347  L_5 = (KeyValuePair_2_t347 )InterfaceFuncInvoker0< KeyValuePair_2_t347  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t348_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			KeyValuePair_2U5BU5D_t346* L_6 = ___array;
			int32_t L_7 = ___arrayIndex;
			int32_t L_8 = L_7;
			___arrayIndex = ((int32_t)((int32_t)L_8+(int32_t)1));
			NullCheck(L_6);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
			KeyValuePair_2_t347  L_9 = V_1;
			*((KeyValuePair_2_t347 *)(KeyValuePair_2_t347 *)SZArrayLdElema(L_6, L_8)) = L_9;
			int32_t L_10 = V_0;
			int32_t L_11 = ((int32_t)((int32_t)L_10-(int32_t)1));
			V_0 = L_11;
			if ((((int32_t)L_11) > ((int32_t)0)))
			{
				goto IL_004d;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}

IL_004d:
		{
			Object_t* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t328_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x68, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t118 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_14 = V_2;
			if (L_14)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0061:
		{
			Object_t* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t368_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t118 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Int32 SimpleJson.JsonObject::get_Count()
extern "C" int32_t JsonObject_get_Count_m1188 (JsonObject_t240 * __this, const MethodInfo* method)
{
	{
		Dictionary_2_t239 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern "C" bool JsonObject_get_IsReadOnly_m1189 (JsonObject_t240 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo* KeyValuePair_2_get_Key_m1505_MethodInfo_var;
extern "C" bool JsonObject_Remove_m1190 (JsonObject_t240 * __this, KeyValuePair_2_t347  ___item, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeyValuePair_2_get_Key_m1505_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483697);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t239 * L_0 = (__this->____members_0);
		String_t* L_1 = KeyValuePair_2_get_Key_m1505((&___item), /*hidden argument*/KeyValuePair_2_get_Key_m1505_MethodInfo_var);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(18 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern TypeInfo* Enumerator_t384_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m1502_MethodInfo_var;
extern "C" Object_t* JsonObject_GetEnumerator_m1191 (JsonObject_t240 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		Dictionary_2_GetEnumerator_m1502_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483694);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t239 * L_0 = (__this->____members_0);
		NullCheck(L_0);
		Enumerator_t384  L_1 = Dictionary_2_GetEnumerator_m1502(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m1502_MethodInfo_var);
		Enumerator_t384  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t384_il2cpp_TypeInfo_var, &L_2);
		return (Object_t*)L_3;
	}
}
// System.String SimpleJson.JsonObject::ToString()
extern "C" String_t* JsonObject_ToString_m1192 (JsonObject_t240 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = SimpleJson_SerializeObject_m1195(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJson.h"
#ifndef _MSC_VER
#else
#endif

// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategy.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategyMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"


// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern "C" bool SimpleJson_TryDeserializeObject_m1193 (Object_t * __this /* static, unused */, String_t* ___json, Object_t ** ___obj, const MethodInfo* method)
{
	bool V_0 = false;
	CharU5BU5D_t349* V_1 = {0};
	int32_t V_2 = 0;
	{
		V_0 = 1;
		String_t* L_0 = ___json;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_1 = ___json;
		NullCheck(L_1);
		CharU5BU5D_t349* L_2 = String_ToCharArray_m1508(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		V_2 = 0;
		Object_t ** L_3 = ___obj;
		CharU5BU5D_t349* L_4 = V_1;
		Object_t * L_5 = SimpleJson_ParseValue_m1198(NULL /*static, unused*/, L_4, (&V_2), (&V_0), /*hidden argument*/NULL);
		*((Object_t **)(L_3)) = (Object_t *)L_5;
		goto IL_0025;
	}

IL_0022:
	{
		Object_t ** L_6 = ___obj;
		*((Object_t **)(L_6)) = (Object_t *)NULL;
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern TypeInfo* StringBuilder_t350_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_SerializeObject_m1194 (Object_t * __this /* static, unused */, Object_t * ___json, Object_t * ___jsonSerializerStrategy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(195);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t350 * V_0 = {0};
	bool V_1 = false;
	String_t* G_B3_0 = {0};
	{
		StringBuilder_t350 * L_0 = (StringBuilder_t350 *)il2cpp_codegen_object_new (StringBuilder_t350_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1509(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = ___jsonSerializerStrategy;
		Object_t * L_2 = ___json;
		StringBuilder_t350 * L_3 = V_0;
		bool L_4 = SimpleJson_SerializeValue_m1206(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		StringBuilder_t350 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_6);
		G_B3_0 = L_7;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern "C" String_t* SimpleJson_SerializeObject_m1195 (Object_t * __this /* static, unused */, Object_t * ___json, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___json;
		Object_t * L_1 = SimpleJson_get_CurrentJsonSerializerStrategy_m1212(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = SimpleJson_SerializeObject_m1194(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* JsonObject_t240_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t339_il2cpp_TypeInfo_var;
extern "C" Object_t* SimpleJson_ParseObject_m1196 (Object_t * __this /* static, unused */, CharU5BU5D_t349* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonObject_t240_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(196);
		IDictionary_2_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = {0};
	Object_t * V_4 = {0};
	{
		JsonObject_t240 * L_0 = (JsonObject_t240 *)il2cpp_codegen_object_new (JsonObject_t240_il2cpp_TypeInfo_var);
		JsonObject__ctor_m1175(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t349* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m1205(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_0096;
	}

IL_0015:
	{
		CharU5BU5D_t349* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m1204(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t349* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m1205(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_0096;
	}

IL_003d:
	{
		int32_t L_11 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t349* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m1205(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Object_t* L_14 = V_0;
		return L_14;
	}

IL_004e:
	{
		CharU5BU5D_t349* L_15 = ___json;
		int32_t* L_16 = ___index;
		bool* L_17 = ___success;
		String_t* L_18 = SimpleJson_ParseString_m1199(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		bool* L_19 = ___success;
		if ((*((int8_t*)L_19)))
		{
			goto IL_0063;
		}
	}
	{
		bool* L_20 = ___success;
		*((int8_t*)(L_20)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0063:
	{
		CharU5BU5D_t349* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t L_23 = SimpleJson_NextToken_m1205(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)5)))
		{
			goto IL_0077;
		}
	}
	{
		bool* L_25 = ___success;
		*((int8_t*)(L_25)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_0077:
	{
		CharU5BU5D_t349* L_26 = ___json;
		int32_t* L_27 = ___index;
		bool* L_28 = ___success;
		Object_t * L_29 = SimpleJson_ParseValue_m1198(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		bool* L_30 = ___success;
		if ((*((int8_t*)L_30)))
		{
			goto IL_008d;
		}
	}
	{
		bool* L_31 = ___success;
		*((int8_t*)(L_31)) = (int8_t)0;
		return (Object_t*)NULL;
	}

IL_008d:
	{
		Object_t* L_32 = V_0;
		String_t* L_33 = V_3;
		Object_t * L_34 = V_4;
		NullCheck(L_32);
		InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(!0,!1) */, IDictionary_2_t339_il2cpp_TypeInfo_var, L_32, L_33, L_34);
	}

IL_0096:
	{
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0015;
		}
	}
	{
		Object_t* L_36 = V_0;
		return L_36;
	}
}
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* JsonArray_t237_il2cpp_TypeInfo_var;
extern "C" JsonArray_t237 * SimpleJson_ParseArray_m1197 (Object_t * __this /* static, unused */, CharU5BU5D_t349* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		JsonArray_t237_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(197);
		s_Il2CppMethodIntialized = true;
	}
	JsonArray_t237 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	{
		JsonArray_t237 * L_0 = (JsonArray_t237 *)il2cpp_codegen_object_new (JsonArray_t237_il2cpp_TypeInfo_var);
		JsonArray__ctor_m1173(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t349* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_NextToken_m1205(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_006a;
	}

IL_0015:
	{
		CharU5BU5D_t349* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = SimpleJson_LookAhead_m1204(NULL /*static, unused*/, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		bool* L_7 = ___success;
		*((int8_t*)(L_7)) = (int8_t)0;
		return (JsonArray_t237 *)NULL;
	}

IL_0029:
	{
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t349* L_9 = ___json;
		int32_t* L_10 = ___index;
		SimpleJson_NextToken_m1205(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_003d:
	{
		int32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) == ((uint32_t)4))))
		{
			goto IL_0051;
		}
	}
	{
		CharU5BU5D_t349* L_12 = ___json;
		int32_t* L_13 = ___index;
		SimpleJson_NextToken_m1205(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_0051:
	{
		CharU5BU5D_t349* L_14 = ___json;
		int32_t* L_15 = ___index;
		bool* L_16 = ___success;
		Object_t * L_17 = SimpleJson_ParseValue_m1198(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		bool* L_18 = ___success;
		if ((*((int8_t*)L_18)))
		{
			goto IL_0063;
		}
	}
	{
		return (JsonArray_t237 *)NULL;
	}

IL_0063:
	{
		JsonArray_t237 * L_19 = V_0;
		Object_t * L_20 = V_3;
		NullCheck(L_19);
		VirtActionInvoker1< Object_t * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_19, L_20);
	}

IL_006a:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_0015;
		}
	}

IL_0070:
	{
		JsonArray_t237 * L_22 = V_0;
		return L_22;
	}
}
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* Boolean_t53_il2cpp_TypeInfo_var;
extern "C" Object_t * SimpleJson_ParseValue_m1198 (Object_t * __this /* static, unused */, CharU5BU5D_t349* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t349* L_0 = ___json;
		int32_t* L_1 = ___index;
		int32_t L_2 = SimpleJson_LookAhead_m1204(NULL /*static, unused*/, L_0, (*((int32_t*)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_0090;
		}
		if (L_3 == 1)
		{
			goto IL_0056;
		}
		if (L_3 == 2)
		{
			goto IL_0095;
		}
		if (L_3 == 3)
		{
			goto IL_005f;
		}
		if (L_3 == 4)
		{
			goto IL_0095;
		}
		if (L_3 == 5)
		{
			goto IL_0095;
		}
		if (L_3 == 6)
		{
			goto IL_0095;
		}
		if (L_3 == 7)
		{
			goto IL_0044;
		}
		if (L_3 == 8)
		{
			goto IL_004d;
		}
		if (L_3 == 9)
		{
			goto IL_0068;
		}
		if (L_3 == 10)
		{
			goto IL_0077;
		}
		if (L_3 == 11)
		{
			goto IL_0086;
		}
	}
	{
		goto IL_0095;
	}

IL_0044:
	{
		CharU5BU5D_t349* L_4 = ___json;
		int32_t* L_5 = ___index;
		bool* L_6 = ___success;
		String_t* L_7 = SimpleJson_ParseString_m1199(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_004d:
	{
		CharU5BU5D_t349* L_8 = ___json;
		int32_t* L_9 = ___index;
		bool* L_10 = ___success;
		Object_t * L_11 = SimpleJson_ParseNumber_m1201(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0056:
	{
		CharU5BU5D_t349* L_12 = ___json;
		int32_t* L_13 = ___index;
		bool* L_14 = ___success;
		Object_t* L_15 = SimpleJson_ParseObject_m1196(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_005f:
	{
		CharU5BU5D_t349* L_16 = ___json;
		int32_t* L_17 = ___index;
		bool* L_18 = ___success;
		JsonArray_t237 * L_19 = SimpleJson_ParseArray_m1197(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_0068:
	{
		CharU5BU5D_t349* L_20 = ___json;
		int32_t* L_21 = ___index;
		SimpleJson_NextToken_m1205(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		bool L_22 = 1;
		Object_t * L_23 = Box(Boolean_t53_il2cpp_TypeInfo_var, &L_22);
		return L_23;
	}

IL_0077:
	{
		CharU5BU5D_t349* L_24 = ___json;
		int32_t* L_25 = ___index;
		SimpleJson_NextToken_m1205(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		bool L_26 = 0;
		Object_t * L_27 = Box(Boolean_t53_il2cpp_TypeInfo_var, &L_26);
		return L_27;
	}

IL_0086:
	{
		CharU5BU5D_t349* L_28 = ___json;
		int32_t* L_29 = ___index;
		SimpleJson_NextToken_m1205(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		return NULL;
	}

IL_0090:
	{
		goto IL_0095;
	}

IL_0095:
	{
		bool* L_30 = ___success;
		*((int8_t*)(L_30)) = (int8_t)0;
		return NULL;
	}
}
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* StringBuilder_t350_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t388_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_ParseString_m1199 (Object_t * __this /* static, unused */, CharU5BU5D_t349* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(195);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		CultureInfo_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t350 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		StringBuilder_t350 * L_0 = (StringBuilder_t350 *)il2cpp_codegen_object_new (StringBuilder_t350_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1509(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t349* L_1 = ___json;
		int32_t* L_2 = ___index;
		SimpleJson_EatWhitespace_m1203(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		CharU5BU5D_t349* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		int32_t L_6 = (*((int32_t*)L_5));
		V_6 = L_6;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_7);
		int32_t L_8 = L_7;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_8));
		V_2 = 0;
		goto IL_0239;
	}

IL_0027:
	{
		int32_t* L_9 = ___index;
		CharU5BU5D_t349* L_10 = ___json;
		NullCheck(L_10);
		if ((!(((uint32_t)(*((int32_t*)L_9))) == ((uint32_t)(((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_023f;
	}

IL_0036:
	{
		CharU5BU5D_t349* L_11 = ___json;
		int32_t* L_12 = ___index;
		int32_t* L_13 = ___index;
		int32_t L_14 = (*((int32_t*)L_13));
		V_6 = L_14;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
		int32_t L_15 = V_6;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_16));
		uint16_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0053;
		}
	}
	{
		V_2 = 1;
		goto IL_023f;
	}

IL_0053:
	{
		uint16_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0231;
		}
	}
	{
		int32_t* L_19 = ___index;
		CharU5BU5D_t349* L_20 = ___json;
		NullCheck(L_20);
		if ((!(((uint32_t)(*((int32_t*)L_19))) == ((uint32_t)(((int32_t)(((Array_t *)L_20)->max_length)))))))
		{
			goto IL_006a;
		}
	}
	{
		goto IL_023f;
	}

IL_006a:
	{
		CharU5BU5D_t349* L_21 = ___json;
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		int32_t L_24 = (*((int32_t*)L_23));
		V_6 = L_24;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)L_24+(int32_t)1));
		int32_t L_25 = V_6;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_25);
		int32_t L_26 = L_25;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_26));
		uint16_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_008e;
		}
	}
	{
		StringBuilder_t350 * L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_Append_m1510(L_28, ((int32_t)34), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_008e:
	{
		uint16_t L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a4;
		}
	}
	{
		StringBuilder_t350 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_Append_m1510(L_30, ((int32_t)92), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00a4:
	{
		uint16_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00ba;
		}
	}
	{
		StringBuilder_t350 * L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_Append_m1510(L_32, ((int32_t)47), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00ba:
	{
		uint16_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t350 * L_34 = V_0;
		NullCheck(L_34);
		StringBuilder_Append_m1510(L_34, 8, /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00cf:
	{
		uint16_t L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00e5;
		}
	}
	{
		StringBuilder_t350 * L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_Append_m1510(L_36, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00e5:
	{
		uint16_t L_37 = V_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00fb;
		}
	}
	{
		StringBuilder_t350 * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m1510(L_38, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_00fb:
	{
		uint16_t L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0111;
		}
	}
	{
		StringBuilder_t350 * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_Append_m1510(L_40, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_0111:
	{
		uint16_t L_41 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0127;
		}
	}
	{
		StringBuilder_t350 * L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_Append_m1510(L_42, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_022c;
	}

IL_0127:
	{
		uint16_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_022c;
		}
	}
	{
		CharU5BU5D_t349* L_44 = ___json;
		NullCheck(L_44);
		int32_t* L_45 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_44)->max_length)))-(int32_t)(*((int32_t*)L_45))));
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) < ((int32_t)4)))
		{
			goto IL_0227;
		}
	}
	{
		bool* L_47 = ___success;
		CharU5BU5D_t349* L_48 = ___json;
		int32_t* L_49 = ___index;
		String_t* L_50 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_50 = String_CreateString_m1511(L_50, L_48, (*((int32_t*)L_49)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t388_il2cpp_TypeInfo_var);
		CultureInfo_t388 * L_51 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_52 = UInt32_TryParse_m1513(NULL /*static, unused*/, L_50, ((int32_t)515), L_51, (&V_4), /*hidden argument*/NULL);
		bool L_53 = L_52;
		V_7 = L_53;
		*((int8_t*)(L_47)) = (int8_t)L_53;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_0169;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_55;
	}

IL_0169:
	{
		uint32_t L_56 = V_4;
		if ((!(((uint32_t)((int32_t)55296)) <= ((uint32_t)L_56))))
		{
			goto IL_020e;
		}
	}
	{
		uint32_t L_57 = V_4;
		if ((!(((uint32_t)L_57) <= ((uint32_t)((int32_t)56319)))))
		{
			goto IL_020e;
		}
	}
	{
		int32_t* L_58 = ___index;
		int32_t* L_59 = ___index;
		*((int32_t*)(L_58)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_59))+(int32_t)4));
		CharU5BU5D_t349* L_60 = ___json;
		NullCheck(L_60);
		int32_t* L_61 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_60)->max_length)))-(int32_t)(*((int32_t*)L_61))));
		int32_t L_62 = V_3;
		if ((((int32_t)L_62) < ((int32_t)6)))
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t349* L_63 = ___json;
		int32_t* L_64 = ___index;
		String_t* L_65 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_65 = String_CreateString_m1511(L_65, L_63, (*((int32_t*)L_64)), 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_66 = String_op_Equality_m83(NULL /*static, unused*/, L_65, (String_t*) &_stringLiteral213, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_0205;
		}
	}
	{
		CharU5BU5D_t349* L_67 = ___json;
		int32_t* L_68 = ___index;
		String_t* L_69 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_69 = String_CreateString_m1511(L_69, L_67, ((int32_t)((int32_t)(*((int32_t*)L_68))+(int32_t)2)), 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t388_il2cpp_TypeInfo_var);
		CultureInfo_t388 * L_70 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_71 = UInt32_TryParse_m1513(NULL /*static, unused*/, L_69, ((int32_t)515), L_70, (&V_5), /*hidden argument*/NULL);
		if (!L_71)
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_72 = V_5;
		if ((!(((uint32_t)((int32_t)56320)) <= ((uint32_t)L_72))))
		{
			goto IL_0205;
		}
	}
	{
		uint32_t L_73 = V_5;
		if ((!(((uint32_t)L_73) <= ((uint32_t)((int32_t)57343)))))
		{
			goto IL_0205;
		}
	}
	{
		StringBuilder_t350 * L_74 = V_0;
		uint32_t L_75 = V_4;
		NullCheck(L_74);
		StringBuilder_Append_m1510(L_74, (((uint16_t)L_75)), /*hidden argument*/NULL);
		StringBuilder_t350 * L_76 = V_0;
		uint32_t L_77 = V_5;
		NullCheck(L_76);
		StringBuilder_Append_m1510(L_76, (((uint16_t)L_77)), /*hidden argument*/NULL);
		int32_t* L_78 = ___index;
		int32_t* L_79 = ___index;
		*((int32_t*)(L_78)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_79))+(int32_t)6));
		goto IL_0239;
	}

IL_0205:
	{
		bool* L_80 = ___success;
		*((int8_t*)(L_80)) = (int8_t)0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_81 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_81;
	}

IL_020e:
	{
		StringBuilder_t350 * L_82 = V_0;
		uint32_t L_83 = V_4;
		String_t* L_84 = SimpleJson_ConvertFromUtf32_m1200(NULL /*static, unused*/, L_83, /*hidden argument*/NULL);
		NullCheck(L_82);
		StringBuilder_Append_m1514(L_82, L_84, /*hidden argument*/NULL);
		int32_t* L_85 = ___index;
		int32_t* L_86 = ___index;
		*((int32_t*)(L_85)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_86))+(int32_t)4));
		goto IL_022c;
	}

IL_0227:
	{
		goto IL_023f;
	}

IL_022c:
	{
		goto IL_0239;
	}

IL_0231:
	{
		StringBuilder_t350 * L_87 = V_0;
		uint16_t L_88 = V_1;
		NullCheck(L_87);
		StringBuilder_Append_m1510(L_87, L_88, /*hidden argument*/NULL);
	}

IL_0239:
	{
		bool L_89 = V_2;
		if (!L_89)
		{
			goto IL_0027;
		}
	}

IL_023f:
	{
		bool L_90 = V_2;
		if (L_90)
		{
			goto IL_024a;
		}
	}
	{
		bool* L_91 = ___success;
		*((int8_t*)(L_91)) = (int8_t)0;
		return (String_t*)NULL;
	}

IL_024a:
	{
		StringBuilder_t350 * L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_92);
		return L_93;
	}
}
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t389_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t349_il2cpp_TypeInfo_var;
extern "C" String_t* SimpleJson_ConvertFromUtf32_m1200 (Object_t * __this /* static, unused */, int32_t ___utf32, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t389_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(199);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		CharU5BU5D_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___utf32;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___utf32;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1114111))))
		{
			goto IL_0022;
		}
	}

IL_0012:
	{
		ArgumentOutOfRangeException_t389 * L_2 = (ArgumentOutOfRangeException_t389 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t389_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1515(L_2, (String_t*) &_stringLiteral214, (String_t*) &_stringLiteral215, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0022:
	{
		int32_t L_3 = ___utf32;
		if ((((int32_t)((int32_t)55296)) > ((int32_t)L_3)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_4 = ___utf32;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)57343))))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentOutOfRangeException_t389 * L_5 = (ArgumentOutOfRangeException_t389 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t389_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1515(L_5, (String_t*) &_stringLiteral214, (String_t*) &_stringLiteral216, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0048:
	{
		int32_t L_6 = ___utf32;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)65536))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = ___utf32;
		String_t* L_8 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_8 = String_CreateString_m1516(L_8, (((uint16_t)L_7)), 1, /*hidden argument*/NULL);
		return L_8;
	}

IL_005c:
	{
		int32_t L_9 = ___utf32;
		___utf32 = ((int32_t)((int32_t)L_9-(int32_t)((int32_t)65536)));
		CharU5BU5D_t349* L_10 = ((CharU5BU5D_t349*)SZArrayNew(CharU5BU5D_t349_il2cpp_TypeInfo_var, 2));
		int32_t L_11 = ___utf32;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 0)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)((int32_t)10)))+(int32_t)((int32_t)55296)))));
		CharU5BU5D_t349* L_12 = L_10;
		int32_t L_13 = ___utf32;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_12, 1)) = (uint16_t)(((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_13%(int32_t)((int32_t)1024)))+(int32_t)((int32_t)56320)))));
		String_t* L_14 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_14 = String_CreateString_m1517(L_14, L_12, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t388_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t390_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t391_il2cpp_TypeInfo_var;
extern "C" Object_t * SimpleJson_ParseNumber_m1201 (Object_t * __this /* static, unused */, CharU5BU5D_t349* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		CultureInfo_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		Double_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		Int64_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	String_t* V_3 = {0};
	double V_4 = 0.0;
	int64_t V_5 = 0;
	{
		CharU5BU5D_t349* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m1203(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		CharU5BU5D_t349* L_2 = ___json;
		int32_t* L_3 = ___index;
		int32_t L_4 = SimpleJson_GetLastIndexOfNumber_m1202(NULL /*static, unused*/, L_2, (*((int32_t*)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)(*((int32_t*)L_6))))+(int32_t)1));
		CharU5BU5D_t349* L_7 = ___json;
		int32_t* L_8 = ___index;
		int32_t L_9 = V_1;
		String_t* L_10 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_10 = String_CreateString_m1511(L_10, L_7, (*((int32_t*)L_8)), L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		String_t* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = String_IndexOf_m1442(L_11, (String_t*) &_stringLiteral12, 5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_13 = V_3;
		NullCheck(L_13);
		int32_t L_14 = String_IndexOf_m1442(L_13, (String_t*) &_stringLiteral217, 5, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}

IL_0045:
	{
		bool* L_15 = ___success;
		CharU5BU5D_t349* L_16 = ___json;
		int32_t* L_17 = ___index;
		int32_t L_18 = V_1;
		String_t* L_19 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_19 = String_CreateString_m1511(L_19, L_16, (*((int32_t*)L_17)), L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t388_il2cpp_TypeInfo_var);
		CultureInfo_t388 * L_20 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_21 = Double_TryParse_m1518(NULL /*static, unused*/, L_19, ((int32_t)511), L_20, (&V_4), /*hidden argument*/NULL);
		*((int8_t*)(L_15)) = (int8_t)L_21;
		double L_22 = V_4;
		double L_23 = L_22;
		Object_t * L_24 = Box(Double_t390_il2cpp_TypeInfo_var, &L_23);
		V_2 = L_24;
		goto IL_0092;
	}

IL_006e:
	{
		bool* L_25 = ___success;
		CharU5BU5D_t349* L_26 = ___json;
		int32_t* L_27 = ___index;
		int32_t L_28 = V_1;
		String_t* L_29 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_29 = String_CreateString_m1511(L_29, L_26, (*((int32_t*)L_27)), L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t388_il2cpp_TypeInfo_var);
		CultureInfo_t388 * L_30 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_31 = Int64_TryParse_m1519(NULL /*static, unused*/, L_29, ((int32_t)511), L_30, (&V_5), /*hidden argument*/NULL);
		*((int8_t*)(L_25)) = (int8_t)L_31;
		int64_t L_32 = V_5;
		int64_t L_33 = L_32;
		Object_t * L_34 = Box(Int64_t391_il2cpp_TypeInfo_var, &L_33);
		V_2 = L_34;
	}

IL_0092:
	{
		int32_t* L_35 = ___index;
		int32_t L_36 = V_0;
		*((int32_t*)(L_35)) = (int32_t)((int32_t)((int32_t)L_36+(int32_t)1));
		Object_t * L_37 = V_2;
		return L_37;
	}
}
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_GetLastIndexOfNumber_m1202 (Object_t * __this /* static, unused */, CharU5BU5D_t349* ___json, int32_t ___index, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t349* L_1 = ___json;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((String_t*) &_stringLiteral218);
		int32_t L_4 = String_IndexOf_m1447((String_t*) &_stringLiteral218, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		CharU5BU5D_t349* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)L_8-(int32_t)1));
	}
}
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern "C" void SimpleJson_EatWhitespace_m1203 (Object_t * __this /* static, unused */, CharU5BU5D_t349* ___json, int32_t* ___index, const MethodInfo* method)
{
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t349* L_0 = ___json;
		int32_t* L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*((int32_t*)L_1)));
		int32_t L_2 = (*((int32_t*)L_1));
		NullCheck((String_t*) &_stringLiteral219);
		int32_t L_3 = String_IndexOf_m1447((String_t*) &_stringLiteral219, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_5))+(int32_t)1));
	}

IL_0024:
	{
		int32_t* L_6 = ___index;
		CharU5BU5D_t349* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)(*((int32_t*)L_6))) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern "C" int32_t SimpleJson_LookAhead_m1204 (Object_t * __this /* static, unused */, CharU5BU5D_t349* ___json, int32_t ___index, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		CharU5BU5D_t349* L_1 = ___json;
		int32_t L_2 = SimpleJson_NextToken_m1205(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern "C" int32_t SimpleJson_NextToken_m1205 (Object_t * __this /* static, unused */, CharU5BU5D_t349* ___json, int32_t* ___index, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		CharU5BU5D_t349* L_0 = ___json;
		int32_t* L_1 = ___index;
		SimpleJson_EatWhitespace_m1203(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int32_t* L_2 = ___index;
		CharU5BU5D_t349* L_3 = ___json;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		CharU5BU5D_t349* L_4 = ___json;
		int32_t* L_5 = ___index;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, (*((int32_t*)L_5)));
		int32_t L_6 = (*((int32_t*)L_5));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		int32_t* L_7 = ___index;
		int32_t* L_8 = ___index;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)1));
		uint16_t L_9 = V_0;
		V_2 = L_9;
		uint16_t L_10 = V_2;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00c6;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00c4;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008d;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00ca;
		}
	}

IL_008d:
	{
		uint16_t L_11 = V_2;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a2;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00c2;
		}
	}

IL_00a2:
	{
		uint16_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00cc;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_00cc;
	}

IL_00bc:
	{
		return 1;
	}

IL_00be:
	{
		return 2;
	}

IL_00c0:
	{
		return 3;
	}

IL_00c2:
	{
		return 4;
	}

IL_00c4:
	{
		return 6;
	}

IL_00c6:
	{
		return 7;
	}

IL_00c8:
	{
		return 8;
	}

IL_00ca:
	{
		return 5;
	}

IL_00cc:
	{
		int32_t* L_13 = ___index;
		int32_t* L_14 = ___index;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))-(int32_t)1));
		CharU5BU5D_t349* L_15 = ___json;
		NullCheck(L_15);
		int32_t* L_16 = ___index;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_15)->max_length)))-(int32_t)(*((int32_t*)L_16))));
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t349* L_18 = ___json;
		int32_t* L_19 = ___index;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, (*((int32_t*)L_19)));
		int32_t L_20 = (*((int32_t*)L_19));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20))) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t349* L_21 = ___json;
		int32_t* L_22 = ___index;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1)));
		int32_t L_23 = ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23))) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t349* L_24 = ___json;
		int32_t* L_25 = ___index;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2)));
		int32_t L_26 = ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_26))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t349* L_27 = ___json;
		int32_t* L_28 = ___index;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3)));
		int32_t L_29 = ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29))) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0128;
		}
	}
	{
		CharU5BU5D_t349* L_30 = ___json;
		int32_t* L_31 = ___index;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4)));
		int32_t L_32 = ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0128;
		}
	}
	{
		int32_t* L_33 = ___index;
		int32_t* L_34 = ___index;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_34))+(int32_t)5));
		return ((int32_t)10);
	}

IL_0128:
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) < ((int32_t)4)))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t349* L_36 = ___json;
		int32_t* L_37 = ___index;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, (*((int32_t*)L_37)));
		int32_t L_38 = (*((int32_t*)L_37));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_36, L_38))) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t349* L_39 = ___json;
		int32_t* L_40 = ___index;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_41))) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t349* L_42 = ___json;
		int32_t* L_43 = ___index;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2)));
		int32_t L_44 = ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_42, L_44))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_016a;
		}
	}
	{
		CharU5BU5D_t349* L_45 = ___json;
		int32_t* L_46 = ___index;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3)));
		int32_t L_47 = ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_016a;
		}
	}
	{
		int32_t* L_48 = ___index;
		int32_t* L_49 = ___index;
		*((int32_t*)(L_48)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_49))+(int32_t)4));
		return ((int32_t)9);
	}

IL_016a:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) < ((int32_t)4)))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t349* L_51 = ___json;
		int32_t* L_52 = ___index;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, (*((int32_t*)L_52)));
		int32_t L_53 = (*((int32_t*)L_52));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_51, L_53))) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t349* L_54 = ___json;
		int32_t* L_55 = ___index;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1)));
		int32_t L_56 = ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_54, L_56))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t349* L_57 = ___json;
		int32_t* L_58 = ___index;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2)));
		int32_t L_59 = ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_59))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		CharU5BU5D_t349* L_60 = ___json;
		int32_t* L_61 = ___index;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3)));
		int32_t L_62 = ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ac;
		}
	}
	{
		int32_t* L_63 = ___index;
		int32_t* L_64 = ___index;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_64))+(int32_t)4));
		return ((int32_t)11);
	}

IL_01ac:
	{
		return 0;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t339_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t392_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t351_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t53_il2cpp_TypeInfo_var;
extern TypeInfo* IJsonSerializerStrategy_t241_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_SerializeValue_m1206 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___value, StringBuilder_t350 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		IDictionary_2_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		IDictionary_2_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(202);
		IEnumerable_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		Boolean_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		IJsonSerializerStrategy_t241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(204);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = {0};
	Object_t* V_2 = {0};
	Object_t* V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	StringBuilder_t350 * G_B13_0 = {0};
	StringBuilder_t350 * G_B12_0 = {0};
	String_t* G_B14_0 = {0};
	StringBuilder_t350 * G_B14_1 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___value;
		V_1 = ((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = V_1;
		StringBuilder_t350 * L_3 = ___builder;
		bool L_4 = SimpleJson_SerializeString_m1209(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0100;
	}

IL_001c:
	{
		Object_t * L_5 = ___value;
		V_2 = ((Object_t*)IsInst(L_5, IDictionary_2_t339_il2cpp_TypeInfo_var));
		Object_t* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		Object_t * L_7 = ___jsonSerializerStrategy;
		Object_t* L_8 = V_2;
		NullCheck(L_8);
		Object_t* L_9 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(5 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Keys() */, IDictionary_2_t339_il2cpp_TypeInfo_var, L_8);
		Object_t* L_10 = V_2;
		NullCheck(L_10);
		Object_t* L_11 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(6 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Values() */, IDictionary_2_t339_il2cpp_TypeInfo_var, L_10);
		StringBuilder_t350 * L_12 = ___builder;
		bool L_13 = SimpleJson_SerializeObject_m1207(NULL /*static, unused*/, L_7, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0100;
	}

IL_0042:
	{
		Object_t * L_14 = ___value;
		V_3 = ((Object_t*)IsInst(L_14, IDictionary_2_t392_il2cpp_TypeInfo_var));
		Object_t* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		Object_t * L_16 = ___jsonSerializerStrategy;
		Object_t* L_17 = V_3;
		NullCheck(L_17);
		Object_t* L_18 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(5 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Keys() */, IDictionary_2_t392_il2cpp_TypeInfo_var, L_17);
		Object_t* L_19 = V_3;
		NullCheck(L_19);
		Object_t* L_20 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(6 /* System.Collections.Generic.ICollection`1<!1> System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Values() */, IDictionary_2_t392_il2cpp_TypeInfo_var, L_19);
		StringBuilder_t350 * L_21 = ___builder;
		bool L_22 = SimpleJson_SerializeObject_m1207(NULL /*static, unused*/, L_16, L_18, L_20, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0100;
	}

IL_0068:
	{
		Object_t * L_23 = ___value;
		V_4 = ((Object_t *)IsInst(L_23, IEnumerable_t351_il2cpp_TypeInfo_var));
		Object_t * L_24 = V_4;
		if (!L_24)
		{
			goto IL_0086;
		}
	}
	{
		Object_t * L_25 = ___jsonSerializerStrategy;
		Object_t * L_26 = V_4;
		StringBuilder_t350 * L_27 = ___builder;
		bool L_28 = SimpleJson_SerializeArray_m1208(NULL /*static, unused*/, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		goto IL_0100;
	}

IL_0086:
	{
		Object_t * L_29 = ___value;
		bool L_30 = SimpleJson_IsNumeric_m1211(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_009e;
		}
	}
	{
		Object_t * L_31 = ___value;
		StringBuilder_t350 * L_32 = ___builder;
		bool L_33 = SimpleJson_SerializeNumber_m1210(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_0100;
	}

IL_009e:
	{
		Object_t * L_34 = ___value;
		if (!((Object_t *)IsInst(L_34, Boolean_t53_il2cpp_TypeInfo_var)))
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t350 * L_35 = ___builder;
		Object_t * L_36 = ___value;
		G_B12_0 = L_35;
		if (!((*(bool*)((bool*)UnBox (L_36, Boolean_t53_il2cpp_TypeInfo_var)))))
		{
			G_B13_0 = L_35;
			goto IL_00bf;
		}
	}
	{
		G_B14_0 = (String_t*) &_stringLiteral220;
		G_B14_1 = G_B12_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		G_B14_0 = (String_t*) &_stringLiteral221;
		G_B14_1 = G_B13_0;
	}

IL_00c4:
	{
		NullCheck(G_B14_1);
		StringBuilder_Append_m1514(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00cf:
	{
		Object_t * L_37 = ___value;
		if (L_37)
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t350 * L_38 = ___builder;
		NullCheck(L_38);
		StringBuilder_Append_m1514(L_38, (String_t*) &_stringLiteral222, /*hidden argument*/NULL);
		goto IL_0100;
	}

IL_00e6:
	{
		Object_t * L_39 = ___jsonSerializerStrategy;
		Object_t * L_40 = ___value;
		NullCheck(L_39);
		bool L_41 = (bool)InterfaceFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(0 /* System.Boolean SimpleJson.IJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&) */, IJsonSerializerStrategy_t241_il2cpp_TypeInfo_var, L_39, L_40, (&V_5));
		V_0 = L_41;
		bool L_42 = V_0;
		if (!L_42)
		{
			goto IL_0100;
		}
	}
	{
		Object_t * L_43 = ___jsonSerializerStrategy;
		Object_t * L_44 = V_5;
		StringBuilder_t350 * L_45 = ___builder;
		SimpleJson_SerializeValue_m1206(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/NULL);
	}

IL_0100:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern TypeInfo* IEnumerable_t351_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t328_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_SerializeObject_m1207 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___keys, Object_t * ___values, StringBuilder_t350 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		IEnumerator_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		StringBuilder_t350 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m1514(L_0, (String_t*) &_stringLiteral223, /*hidden argument*/NULL);
		Object_t * L_1 = ___keys;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t351_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
		Object_t * L_3 = ___values;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t351_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		V_2 = 1;
		goto IL_008d;
	}

IL_0021:
	{
		Object_t * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t328_il2cpp_TypeInfo_var, L_5);
		V_3 = L_6;
		Object_t * L_7 = V_1;
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t328_il2cpp_TypeInfo_var, L_7);
		V_4 = L_8;
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		StringBuilder_t350 * L_10 = ___builder;
		NullCheck(L_10);
		StringBuilder_Append_m1514(L_10, (String_t*) &_stringLiteral224, /*hidden argument*/NULL);
	}

IL_0042:
	{
		Object_t * L_11 = V_3;
		V_5 = ((String_t*)IsInst(L_11, String_t_il2cpp_TypeInfo_var));
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_13 = V_5;
		StringBuilder_t350 * L_14 = ___builder;
		SimpleJson_SerializeString_m1209(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		goto IL_006f;
	}

IL_005f:
	{
		Object_t * L_15 = ___jsonSerializerStrategy;
		Object_t * L_16 = V_4;
		StringBuilder_t350 * L_17 = ___builder;
		bool L_18 = SimpleJson_SerializeValue_m1206(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		return 0;
	}

IL_006f:
	{
		StringBuilder_t350 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m1514(L_19, (String_t*) &_stringLiteral30, /*hidden argument*/NULL);
		Object_t * L_20 = ___jsonSerializerStrategy;
		Object_t * L_21 = V_4;
		StringBuilder_t350 * L_22 = ___builder;
		bool L_23 = SimpleJson_SerializeValue_m1206(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_008b;
		}
	}
	{
		return 0;
	}

IL_008b:
	{
		V_2 = 0;
	}

IL_008d:
	{
		Object_t * L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t328_il2cpp_TypeInfo_var, L_24);
		if (!L_25)
		{
			goto IL_00a3;
		}
	}
	{
		Object_t * L_26 = V_1;
		NullCheck(L_26);
		bool L_27 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t328_il2cpp_TypeInfo_var, L_26);
		if (L_27)
		{
			goto IL_0021;
		}
	}

IL_00a3:
	{
		StringBuilder_t350 * L_28 = ___builder;
		NullCheck(L_28);
		StringBuilder_Append_m1514(L_28, (String_t*) &_stringLiteral64, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern TypeInfo* IEnumerable_t351_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t328_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t368_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_SerializeArray_m1208 (Object_t * __this /* static, unused */, Object_t * ___jsonSerializerStrategy, Object_t * ___anArray, StringBuilder_t350 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(203);
		IEnumerator_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		IDisposable_t368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	bool V_3 = false;
	Object_t * V_4 = {0};
	Exception_t118 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t118 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t350 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m1514(L_0, (String_t*) &_stringLiteral225, /*hidden argument*/NULL);
		V_0 = 1;
		Object_t * L_1 = ___anArray;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t351_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0049;
		}

IL_001a:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t328_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			StringBuilder_t350 * L_6 = ___builder;
			NullCheck(L_6);
			StringBuilder_Append_m1514(L_6, (String_t*) &_stringLiteral224, /*hidden argument*/NULL);
		}

IL_0033:
		{
			Object_t * L_7 = ___jsonSerializerStrategy;
			Object_t * L_8 = V_1;
			StringBuilder_t350 * L_9 = ___builder;
			bool L_10 = SimpleJson_SerializeValue_m1206(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			V_3 = 0;
			IL2CPP_LEAVE(0x7C, FINALLY_0059);
		}

IL_0047:
		{
			V_0 = 0;
		}

IL_0049:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t328_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_001a;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t118 *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_2;
			V_4 = ((Object_t *)IsInst(L_13, IDisposable_t368_il2cpp_TypeInfo_var));
			Object_t * L_14 = V_4;
			if (L_14)
			{
				goto IL_0066;
			}
		}

IL_0065:
		{
			IL2CPP_END_FINALLY(89)
		}

IL_0066:
		{
			Object_t * L_15 = V_4;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t368_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(89)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t118 *)
	}

IL_006e:
	{
		StringBuilder_t350 * L_16 = ___builder;
		NullCheck(L_16);
		StringBuilder_Append_m1514(L_16, (String_t*) &_stringLiteral226, /*hidden argument*/NULL);
		return 1;
	}

IL_007c:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern "C" bool SimpleJson_SerializeString_m1209 (Object_t * __this /* static, unused */, String_t* ___aString, StringBuilder_t350 * ___builder, const MethodInfo* method)
{
	CharU5BU5D_t349* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		StringBuilder_t350 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m1514(L_0, (String_t*) &_stringLiteral126, /*hidden argument*/NULL);
		String_t* L_1 = ___aString;
		NullCheck(L_1);
		CharU5BU5D_t349* L_2 = String_ToCharArray_m1508(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00d8;
	}

IL_001a:
	{
		CharU5BU5D_t349* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_5));
		uint16_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t350 * L_7 = ___builder;
		NullCheck(L_7);
		StringBuilder_Append_m1514(L_7, (String_t*) &_stringLiteral227, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0037:
	{
		uint16_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t350 * L_9 = ___builder;
		NullCheck(L_9);
		StringBuilder_Append_m1514(L_9, (String_t*) &_stringLiteral228, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0050:
	{
		uint16_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t350 * L_11 = ___builder;
		NullCheck(L_11);
		StringBuilder_Append_m1514(L_11, (String_t*) &_stringLiteral229, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0068:
	{
		uint16_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		StringBuilder_t350 * L_13 = ___builder;
		NullCheck(L_13);
		StringBuilder_Append_m1514(L_13, (String_t*) &_stringLiteral230, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_0081:
	{
		uint16_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t350 * L_15 = ___builder;
		NullCheck(L_15);
		StringBuilder_Append_m1514(L_15, (String_t*) &_stringLiteral231, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_009a:
	{
		uint16_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t350 * L_17 = ___builder;
		NullCheck(L_17);
		StringBuilder_Append_m1514(L_17, (String_t*) &_stringLiteral232, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00b3:
	{
		uint16_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		StringBuilder_t350 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m1514(L_19, (String_t*) &_stringLiteral233, /*hidden argument*/NULL);
		goto IL_00d4;
	}

IL_00cc:
	{
		StringBuilder_t350 * L_20 = ___builder;
		uint16_t L_21 = V_2;
		NullCheck(L_20);
		StringBuilder_Append_m1510(L_20, L_21, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_00d8:
	{
		int32_t L_23 = V_1;
		CharU5BU5D_t349* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t350 * L_25 = ___builder;
		NullCheck(L_25);
		StringBuilder_Append_m1514(L_25, (String_t*) &_stringLiteral126, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern TypeInfo* Int64_t391_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t388_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t394_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t382_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t393_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t39_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t381_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_SerializeNumber_m1210 (Object_t * __this /* static, unused */, Object_t * ___number, StringBuilder_t350 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		CultureInfo_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		UInt64_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(205);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		UInt32_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		Decimal_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(206);
		Single_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		Convert_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	Decimal_t393  V_4 = {0};
	float V_5 = 0.0f;
	double V_6 = 0.0;
	{
		Object_t * L_0 = ___number;
		if (!((Object_t *)IsInst(L_0, Int64_t391_il2cpp_TypeInfo_var)))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t350 * L_1 = ___builder;
		Object_t * L_2 = ___number;
		V_0 = ((*(int64_t*)((int64_t*)UnBox (L_2, Int64_t391_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t388_il2cpp_TypeInfo_var);
		CultureInfo_t388 * L_3 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_4 = Int64_ToString_m1520((&V_0), L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m1514(L_1, L_4, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_002a:
	{
		Object_t * L_5 = ___number;
		if (!((Object_t *)IsInst(L_5, UInt64_t394_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t350 * L_6 = ___builder;
		Object_t * L_7 = ___number;
		V_1 = ((*(uint64_t*)((uint64_t*)UnBox (L_7, UInt64_t394_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t388_il2cpp_TypeInfo_var);
		CultureInfo_t388 * L_8 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_9 = UInt64_ToString_m1521((&V_1), L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_m1514(L_6, L_9, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_0054:
	{
		Object_t * L_10 = ___number;
		if (!((Object_t *)IsInst(L_10, Int32_t41_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		StringBuilder_t350 * L_11 = ___builder;
		Object_t * L_12 = ___number;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_12, Int32_t41_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t388_il2cpp_TypeInfo_var);
		CultureInfo_t388 * L_13 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_14 = Int32_ToString_m1522((&V_2), L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_Append_m1514(L_11, L_14, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_007e:
	{
		Object_t * L_15 = ___number;
		if (!((Object_t *)IsInst(L_15, UInt32_t382_il2cpp_TypeInfo_var)))
		{
			goto IL_00a8;
		}
	}
	{
		StringBuilder_t350 * L_16 = ___builder;
		Object_t * L_17 = ___number;
		V_3 = ((*(uint32_t*)((uint32_t*)UnBox (L_17, UInt32_t382_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t388_il2cpp_TypeInfo_var);
		CultureInfo_t388 * L_18 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_19 = UInt32_ToString_m1523((&V_3), L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_m1514(L_16, L_19, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00a8:
	{
		Object_t * L_20 = ___number;
		if (!((Object_t *)IsInst(L_20, Decimal_t393_il2cpp_TypeInfo_var)))
		{
			goto IL_00d3;
		}
	}
	{
		StringBuilder_t350 * L_21 = ___builder;
		Object_t * L_22 = ___number;
		V_4 = ((*(Decimal_t393 *)((Decimal_t393 *)UnBox (L_22, Decimal_t393_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t388_il2cpp_TypeInfo_var);
		CultureInfo_t388 * L_23 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_24 = Decimal_ToString_m1524((&V_4), L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_Append_m1514(L_21, L_24, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00d3:
	{
		Object_t * L_25 = ___number;
		if (!((Object_t *)IsInst(L_25, Single_t39_il2cpp_TypeInfo_var)))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t350 * L_26 = ___builder;
		Object_t * L_27 = ___number;
		V_5 = ((*(float*)((float*)UnBox (L_27, Single_t39_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t388_il2cpp_TypeInfo_var);
		CultureInfo_t388 * L_28 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_29 = Single_ToString_m1525((&V_5), L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m1514(L_26, L_29, /*hidden argument*/NULL);
		goto IL_0123;
	}

IL_00fe:
	{
		StringBuilder_t350 * L_30 = ___builder;
		Object_t * L_31 = ___number;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t388_il2cpp_TypeInfo_var);
		CultureInfo_t388 * L_32 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t381_il2cpp_TypeInfo_var);
		double L_33 = Convert_ToDouble_m1526(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		CultureInfo_t388 * L_34 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_35 = Double_ToString_m1527((&V_6), (String_t*) &_stringLiteral234, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m1514(L_30, L_35, /*hidden argument*/NULL);
	}

IL_0123:
	{
		return 1;
	}
}
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern TypeInfo* SByte_t395_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t373_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t396_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t397_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t382_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t391_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t394_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t39_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t390_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t393_il2cpp_TypeInfo_var;
extern "C" bool SimpleJson_IsNumeric_m1211 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SByte_t395_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(207);
		Byte_t373_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(121);
		Int16_t396_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(208);
		UInt16_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		UInt32_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		Int64_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		UInt64_t394_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(205);
		Single_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		Double_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		Decimal_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(206);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInst(L_0, SByte_t395_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 1;
	}

IL_000d:
	{
		Object_t * L_1 = ___value;
		if (!((Object_t *)IsInst(L_1, Byte_t373_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		Object_t * L_2 = ___value;
		if (!((Object_t *)IsInst(L_2, Int16_t396_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		return 1;
	}

IL_0027:
	{
		Object_t * L_3 = ___value;
		if (!((Object_t *)IsInst(L_3, UInt16_t397_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		return 1;
	}

IL_0034:
	{
		Object_t * L_4 = ___value;
		if (!((Object_t *)IsInst(L_4, Int32_t41_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		return 1;
	}

IL_0041:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInst(L_5, UInt32_t382_il2cpp_TypeInfo_var)))
		{
			goto IL_004e;
		}
	}
	{
		return 1;
	}

IL_004e:
	{
		Object_t * L_6 = ___value;
		if (!((Object_t *)IsInst(L_6, Int64_t391_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		return 1;
	}

IL_005b:
	{
		Object_t * L_7 = ___value;
		if (!((Object_t *)IsInst(L_7, UInt64_t394_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		return 1;
	}

IL_0068:
	{
		Object_t * L_8 = ___value;
		if (!((Object_t *)IsInst(L_8, Single_t39_il2cpp_TypeInfo_var)))
		{
			goto IL_0075;
		}
	}
	{
		return 1;
	}

IL_0075:
	{
		Object_t * L_9 = ___value;
		if (!((Object_t *)IsInst(L_9, Double_t390_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		return 1;
	}

IL_0082:
	{
		Object_t * L_10 = ___value;
		if (!((Object_t *)IsInst(L_10, Decimal_t393_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		return 1;
	}

IL_008f:
	{
		return 0;
	}
}
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern TypeInfo* SimpleJson_t243_il2cpp_TypeInfo_var;
extern "C" Object_t * SimpleJson_get_CurrentJsonSerializerStrategy_m1212 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SimpleJson_t243_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * G_B2_0 = {0};
	Object_t * G_B1_0 = {0};
	{
		Object_t * L_0 = ((SimpleJson_t243_StaticFields*)SimpleJson_t243_il2cpp_TypeInfo_var->static_fields)->____currentJsonSerializerStrategy_0;
		Object_t * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t242 * L_2 = SimpleJson_get_PocoJsonSerializerStrategy_m1213(NULL /*static, unused*/, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t242 * L_3 = L_2;
		((SimpleJson_t243_StaticFields*)SimpleJson_t243_il2cpp_TypeInfo_var->static_fields)->____currentJsonSerializerStrategy_0 = L_3;
		G_B2_0 = ((Object_t *)(L_3));
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern TypeInfo* SimpleJson_t243_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var;
extern "C" PocoJsonSerializerStrategy_t242 * SimpleJson_get_PocoJsonSerializerStrategy_m1213 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SimpleJson_t243_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(210);
		PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	PocoJsonSerializerStrategy_t242 * G_B2_0 = {0};
	PocoJsonSerializerStrategy_t242 * G_B1_0 = {0};
	{
		PocoJsonSerializerStrategy_t242 * L_0 = ((SimpleJson_t243_StaticFields*)SimpleJson_t243_il2cpp_TypeInfo_var->static_fields)->____pocoJsonSerializerStrategy_1;
		PocoJsonSerializerStrategy_t242 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		PocoJsonSerializerStrategy_t242 * L_2 = (PocoJsonSerializerStrategy_t242 *)il2cpp_codegen_object_new (PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var);
		PocoJsonSerializerStrategy__ctor_m1214(L_2, /*hidden argument*/NULL);
		PocoJsonSerializerStrategy_t242 * L_3 = L_2;
		((SimpleJson_t243_StaticFields*)SimpleJson_t243_il2cpp_TypeInfo_var->static_fields)->____pocoJsonSerializerStrategy_1 = L_3;
		G_B2_0 = L_3;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_Constructo.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_5.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegat.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6.h"
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegat.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtilsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_5MethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_6MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffsetMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegatMethodDeclarations.h"


// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t398_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t399_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t400_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t401_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t402_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t403_il2cpp_TypeInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m1528_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m1529_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m1530_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m1531_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m1532_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m1533_MethodInfo_var;
extern "C" void PocoJsonSerializerStrategy__ctor_m1214 (PocoJsonSerializerStrategy_t242 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadSafeDictionaryValueFactory_2_t398_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		ThreadSafeDictionary_2_t399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(219);
		ThreadSafeDictionaryValueFactory_2_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(220);
		ThreadSafeDictionary_2_t401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(221);
		ThreadSafeDictionaryValueFactory_2_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(222);
		ThreadSafeDictionary_2_t403_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		ThreadSafeDictionaryValueFactory_2__ctor_m1528_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483699);
		ThreadSafeDictionary_2__ctor_m1529_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483700);
		ThreadSafeDictionaryValueFactory_2__ctor_m1530_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483701);
		ThreadSafeDictionary_2__ctor_m1531_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483702);
		ThreadSafeDictionaryValueFactory_2__ctor_m1532_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483703);
		ThreadSafeDictionary_2__ctor_m1533_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483704);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = { (void*)GetVirtualMethodInfo(__this, 6) };
		ThreadSafeDictionaryValueFactory_2_t398 * L_1 = (ThreadSafeDictionaryValueFactory_2_t398 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t398_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m1528(L_1, __this, L_0, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m1528_MethodInfo_var);
		ThreadSafeDictionary_2_t399 * L_2 = (ThreadSafeDictionary_2_t399 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t399_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m1529(L_2, L_1, /*hidden argument*/ThreadSafeDictionary_2__ctor_m1529_MethodInfo_var);
		__this->___ConstructorCache_0 = L_2;
		IntPtr_t L_3 = { (void*)GetVirtualMethodInfo(__this, 7) };
		ThreadSafeDictionaryValueFactory_2_t400 * L_4 = (ThreadSafeDictionaryValueFactory_2_t400 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t400_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m1530(L_4, __this, L_3, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m1530_MethodInfo_var);
		ThreadSafeDictionary_2_t401 * L_5 = (ThreadSafeDictionary_2_t401 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t401_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m1531(L_5, L_4, /*hidden argument*/ThreadSafeDictionary_2__ctor_m1531_MethodInfo_var);
		__this->___GetCache_1 = L_5;
		IntPtr_t L_6 = { (void*)GetVirtualMethodInfo(__this, 8) };
		ThreadSafeDictionaryValueFactory_2_t402 * L_7 = (ThreadSafeDictionaryValueFactory_2_t402 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t402_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m1532(L_7, __this, L_6, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m1532_MethodInfo_var);
		ThreadSafeDictionary_2_t403 * L_8 = (ThreadSafeDictionary_2_t403 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t403_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m1533(L_8, L_7, /*hidden argument*/ThreadSafeDictionary_2__ctor_m1533_MethodInfo_var);
		__this->___SetCache_2 = L_8;
		return;
	}
}
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern const Il2CppType* Int32_t41_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t247_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t44_il2cpp_TypeInfo_var;
extern "C" void PocoJsonSerializerStrategy__cctor_m1215 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t41_0_0_0_var = il2cpp_codegen_type_from_index(21);
		TypeU5BU5D_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(224);
		PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		StringU5BU5D_t44_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PocoJsonSerializerStrategy_t242_StaticFields*)PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3 = ((TypeU5BU5D_t247*)SZArrayNew(TypeU5BU5D_t247_il2cpp_TypeInfo_var, 0));
		TypeU5BU5D_t247* L_0 = ((TypeU5BU5D_t247*)SZArrayNew(TypeU5BU5D_t247_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, LoadTypeToken(Int32_t41_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_0, 0)) = (Type_t *)L_1;
		((PocoJsonSerializerStrategy_t242_StaticFields*)PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var->static_fields)->___ArrayConstructorParameterTypes_4 = L_0;
		StringU5BU5D_t44* L_2 = ((StringU5BU5D_t44*)SZArrayNew(StringU5BU5D_t44_il2cpp_TypeInfo_var, 3));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral235);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)(String_t*) &_stringLiteral235;
		StringU5BU5D_t44* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral236);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)(String_t*) &_stringLiteral236;
		StringU5BU5D_t44* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral237);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)(String_t*) &_stringLiteral237;
		((PocoJsonSerializerStrategy_t242_StaticFields*)PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5 = L_4;
		return;
	}
}
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C" String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m1216 (PocoJsonSerializerStrategy_t242 * __this, String_t* ___clrPropertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___clrPropertyName;
		return L_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern TypeInfo* PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t257_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t250 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m1217 (PocoJsonSerializerStrategy_t242 * __this, Type_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		ReflectionUtils_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * G_B2_0 = {0};
	Type_t * G_B1_0 = {0};
	TypeU5BU5D_t247* G_B3_0 = {0};
	Type_t * G_B3_1 = {0};
	{
		Type_t * L_0 = ___key;
		Type_t * L_1 = ___key;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_1);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var);
		TypeU5BU5D_t247* L_3 = ((PocoJsonSerializerStrategy_t242_StaticFields*)PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var->static_fields)->___ArrayConstructorParameterTypes_4;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var);
		TypeU5BU5D_t247* L_4 = ((PocoJsonSerializerStrategy_t242_StaticFields*)PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		ConstructorDelegate_t250 * L_5 = ReflectionUtils_GetContructor_m1253(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t404_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t257_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t356_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t405_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t352_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t328_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t368_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t357_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t406_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1534_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_GetterValueFactory_m1218 (PocoJsonSerializerStrategy_t242 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t404_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(226);
		ReflectionUtils_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		IEnumerable_1_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		IEnumerator_1_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		IDictionary_2_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		IEnumerator_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		IDisposable_t368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		IEnumerable_1_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		IEnumerator_1_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		Dictionary_2__ctor_m1534_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483705);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t118 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t118 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t404 * L_0 = (Dictionary_2_t404 *)il2cpp_codegen_object_new (Dictionary_2_t404_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1534(L_0, /*hidden argument*/Dictionary_2__ctor_m1534_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		Object_t* L_2 = ReflectionUtils_GetProperties_m1249(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t356_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t405_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_6);
			if (!L_7)
			{
				goto IL_0063;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetGetterMethodInfo_m1251(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_0063;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
			GetDelegate_t248 * L_19 = ReflectionUtils_GetGetMethod_m1256(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, GetDelegate_t248 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t352_il2cpp_TypeInfo_var, L_14, L_17, L_19);
		}

IL_0063:
		{
			Object_t* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t328_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0017;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t118 *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			Object_t* L_22 = V_2;
			if (L_22)
			{
				goto IL_0077;
			}
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(115)
		}

IL_0077:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t368_il2cpp_TypeInfo_var, L_23);
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t118 *)
	}

IL_007e:
	{
		Type_t * L_24 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		Object_t* L_25 = ReflectionUtils_GetFields_m1250(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Object_t* L_26 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t357_il2cpp_TypeInfo_var, L_25);
		V_5 = L_26;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d0;
		}

IL_0090:
		{
			Object_t* L_27 = V_5;
			NullCheck(L_27);
			FieldInfo_t * L_28 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t406_il2cpp_TypeInfo_var, L_27);
			V_4 = L_28;
			FieldInfo_t * L_29 = V_4;
			NullCheck(L_29);
			bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_29);
			if (L_30)
			{
				goto IL_00b1;
			}
		}

IL_00a5:
		{
			FieldInfo_t * L_31 = V_4;
			NullCheck(L_31);
			bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_31);
			if (L_32)
			{
				goto IL_00b6;
			}
		}

IL_00b1:
		{
			goto IL_00d0;
		}

IL_00b6:
		{
			Object_t* L_33 = V_0;
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
			String_t* L_36 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_35);
			FieldInfo_t * L_37 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
			GetDelegate_t248 * L_38 = ReflectionUtils_GetGetMethod_m1257(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
			NullCheck(L_33);
			InterfaceActionInvoker2< String_t*, GetDelegate_t248 * >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t352_il2cpp_TypeInfo_var, L_33, L_36, L_38);
		}

IL_00d0:
		{
			Object_t* L_39 = V_5;
			NullCheck(L_39);
			bool L_40 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t328_il2cpp_TypeInfo_var, L_39);
			if (L_40)
			{
				goto IL_0090;
			}
		}

IL_00dc:
		{
			IL2CPP_LEAVE(0xEE, FINALLY_00e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t118 *)e.ex;
		goto FINALLY_00e1;
	}

FINALLY_00e1:
	{ // begin finally (depth: 1)
		{
			Object_t* L_41 = V_5;
			if (L_41)
			{
				goto IL_00e6;
			}
		}

IL_00e5:
		{
			IL2CPP_END_FINALLY(225)
		}

IL_00e6:
		{
			Object_t* L_42 = V_5;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t368_il2cpp_TypeInfo_var, L_42);
			IL2CPP_END_FINALLY(225)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_JUMP_TBL(0xEE, IL_00ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t118 *)
	}

IL_00ee:
	{
		Object_t* L_43 = V_0;
		return L_43;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t407_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t257_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t356_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t405_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t353_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t328_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t368_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t357_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t406_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1535_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2__ctor_m1536_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_SetterValueFactory_m1219 (PocoJsonSerializerStrategy_t242 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t407_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		ReflectionUtils_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		IEnumerable_1_t356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(227);
		IEnumerator_1_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(229);
		IDictionary_2_t353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(215);
		IEnumerator_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		IDisposable_t368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		IEnumerable_1_t357_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(230);
		IEnumerator_1_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(232);
		Dictionary_2__ctor_m1535_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483706);
		KeyValuePair_2__ctor_m1536_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t118 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t118 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t407 * L_0 = (Dictionary_2_t407 *)il2cpp_codegen_object_new (Dictionary_2_t407_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1535(L_0, /*hidden argument*/Dictionary_2__ctor_m1535_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		Object_t* L_2 = ReflectionUtils_GetProperties_m1249(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t356_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t405_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_6);
			if (!L_7)
			{
				goto IL_006e;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetSetterMethodInfo_m1252(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_006e;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			NullCheck(L_18);
			Type_t * L_19 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_18);
			PropertyInfo_t * L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
			SetDelegate_t249 * L_21 = ReflectionUtils_GetSetMethod_m1260(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			KeyValuePair_2_t408  L_22 = {0};
			KeyValuePair_2__ctor_m1536(&L_22, L_19, L_21, /*hidden argument*/KeyValuePair_2__ctor_m1536_MethodInfo_var);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t408  >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t353_il2cpp_TypeInfo_var, L_14, L_17, L_22);
		}

IL_006e:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t328_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0017;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t118 *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			Object_t* L_25 = V_2;
			if (L_25)
			{
				goto IL_0082;
			}
		}

IL_0081:
		{
			IL2CPP_END_FINALLY(126)
		}

IL_0082:
		{
			Object_t* L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t368_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t118 *)
	}

IL_0089:
	{
		Type_t * L_27 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		Object_t* L_28 = ReflectionUtils_GetFields_m1250(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Object_t* L_29 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t357_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}

IL_0096:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f3;
		}

IL_009b:
		{
			Object_t* L_30 = V_5;
			NullCheck(L_30);
			FieldInfo_t * L_31 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t406_il2cpp_TypeInfo_var, L_30);
			V_4 = L_31;
			FieldInfo_t * L_32 = V_4;
			NullCheck(L_32);
			bool L_33 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.FieldInfo::get_IsInitOnly() */, L_32);
			if (L_33)
			{
				goto IL_00c8;
			}
		}

IL_00b0:
		{
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			bool L_35 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_34);
			if (L_35)
			{
				goto IL_00c8;
			}
		}

IL_00bc:
		{
			FieldInfo_t * L_36 = V_4;
			NullCheck(L_36);
			bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_36);
			if (L_37)
			{
				goto IL_00cd;
			}
		}

IL_00c8:
		{
			goto IL_00f3;
		}

IL_00cd:
		{
			Object_t* L_38 = V_0;
			FieldInfo_t * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
			String_t* L_41 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_40);
			FieldInfo_t * L_42 = V_4;
			NullCheck(L_42);
			Type_t * L_43 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_42);
			FieldInfo_t * L_44 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
			SetDelegate_t249 * L_45 = ReflectionUtils_GetSetMethod_m1261(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
			KeyValuePair_2_t408  L_46 = {0};
			KeyValuePair_2__ctor_m1536(&L_46, L_43, L_45, /*hidden argument*/KeyValuePair_2__ctor_m1536_MethodInfo_var);
			NullCheck(L_38);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t408  >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t353_il2cpp_TypeInfo_var, L_38, L_41, L_46);
		}

IL_00f3:
		{
			Object_t* L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t328_il2cpp_TypeInfo_var, L_47);
			if (L_48)
			{
				goto IL_009b;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x111, FINALLY_0104);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t118 *)e.ex;
		goto FINALLY_0104;
	}

FINALLY_0104:
	{ // begin finally (depth: 1)
		{
			Object_t* L_49 = V_5;
			if (L_49)
			{
				goto IL_0109;
			}
		}

IL_0108:
		{
			IL2CPP_END_FINALLY(260)
		}

IL_0109:
		{
			Object_t* L_50 = V_5;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t368_il2cpp_TypeInfo_var, L_50);
			IL2CPP_END_FINALLY(260)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(260)
	{
		IL2CPP_JUMP_TBL(0x111, IL_0111)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t118 *)
	}

IL_0111:
	{
		Object_t* L_51 = V_0;
		return L_51;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1220 (PocoJsonSerializerStrategy_t242 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Object_t * L_0 = ___input;
		Object_t ** L_1 = ___output;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(11 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&) */, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_3 = ___input;
		Object_t ** L_4 = ___output;
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(12 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&) */, __this, L_3, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern TypeInfo* CultureInfo_t388_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t381_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t390_il2cpp_TypeInfo_var;
extern "C" Object_t * PocoJsonSerializerStrategy_SerializeEnum_m1221 (PocoJsonSerializerStrategy_t242 * __this, Enum_t354 * ___p, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		Convert_t381_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		Double_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t354 * L_0 = ___p;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t388_il2cpp_TypeInfo_var);
		CultureInfo_t388 * L_1 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t381_il2cpp_TypeInfo_var);
		double L_2 = Convert_ToDouble_m1526(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		double L_3 = L_2;
		Object_t * L_4 = Box(Double_t390_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern TypeInfo* DateTime_t104_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t388_il2cpp_TypeInfo_var;
extern TypeInfo* DateTimeOffset_t409_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t410_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t235_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t354_il2cpp_TypeInfo_var;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1222 (PocoJsonSerializerStrategy_t242 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		CultureInfo_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		DateTimeOffset_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(234);
		Guid_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(235);
		Uri_t235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(176);
		Enum_t354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Enum_t354 * V_1 = {0};
	DateTime_t104  V_2 = {0};
	DateTime_t104  V_3 = {0};
	DateTimeOffset_t409  V_4 = {0};
	DateTimeOffset_t409  V_5 = {0};
	Guid_t410  V_6 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___input;
		if (!((Object_t *)IsInst(L_0, DateTime_t104_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		Object_t ** L_1 = ___output;
		Object_t * L_2 = ___input;
		V_2 = ((*(DateTime_t104 *)((DateTime_t104 *)UnBox (L_2, DateTime_t104_il2cpp_TypeInfo_var))));
		DateTime_t104  L_3 = DateTime_ToUniversalTime_m1537((&V_2), /*hidden argument*/NULL);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var);
		StringU5BU5D_t44* L_4 = ((PocoJsonSerializerStrategy_t242_StaticFields*)PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t388_il2cpp_TypeInfo_var);
		CultureInfo_t388 * L_6 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_7 = DateTime_ToString_m1538((&V_3), (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), L_6, /*hidden argument*/NULL);
		*((Object_t **)(L_1)) = (Object_t *)L_7;
		goto IL_00ca;
	}

IL_0036:
	{
		Object_t * L_8 = ___input;
		if (!((Object_t *)IsInst(L_8, DateTimeOffset_t409_il2cpp_TypeInfo_var)))
		{
			goto IL_006c;
		}
	}
	{
		Object_t ** L_9 = ___output;
		Object_t * L_10 = ___input;
		V_4 = ((*(DateTimeOffset_t409 *)((DateTimeOffset_t409 *)UnBox (L_10, DateTimeOffset_t409_il2cpp_TypeInfo_var))));
		DateTimeOffset_t409  L_11 = DateTimeOffset_ToUniversalTime_m1539((&V_4), /*hidden argument*/NULL);
		V_5 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var);
		StringU5BU5D_t44* L_12 = ((PocoJsonSerializerStrategy_t242_StaticFields*)PocoJsonSerializerStrategy_t242_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		int32_t L_13 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t388_il2cpp_TypeInfo_var);
		CultureInfo_t388 * L_14 = CultureInfo_get_InvariantCulture_m1512(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_15 = DateTimeOffset_ToString_m1540((&V_5), (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_13)), L_14, /*hidden argument*/NULL);
		*((Object_t **)(L_9)) = (Object_t *)L_15;
		goto IL_00ca;
	}

IL_006c:
	{
		Object_t * L_16 = ___input;
		if (!((Object_t *)IsInst(L_16, Guid_t410_il2cpp_TypeInfo_var)))
		{
			goto IL_0092;
		}
	}
	{
		Object_t ** L_17 = ___output;
		Object_t * L_18 = ___input;
		V_6 = ((*(Guid_t410 *)((Guid_t410 *)UnBox (L_18, Guid_t410_il2cpp_TypeInfo_var))));
		String_t* L_19 = Guid_ToString_m1541((&V_6), (String_t*) &_stringLiteral238, /*hidden argument*/NULL);
		*((Object_t **)(L_17)) = (Object_t *)L_19;
		goto IL_00ca;
	}

IL_0092:
	{
		Object_t * L_20 = ___input;
		if (!((Uri_t235 *)IsInst(L_20, Uri_t235_il2cpp_TypeInfo_var)))
		{
			goto IL_00aa;
		}
	}
	{
		Object_t ** L_21 = ___output;
		Object_t * L_22 = ___input;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		*((Object_t **)(L_21)) = (Object_t *)L_23;
		goto IL_00ca;
	}

IL_00aa:
	{
		Object_t * L_24 = ___input;
		V_1 = ((Enum_t354 *)IsInst(L_24, Enum_t354_il2cpp_TypeInfo_var));
		Enum_t354 * L_25 = V_1;
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		Object_t ** L_26 = ___output;
		Enum_t354 * L_27 = V_1;
		Object_t * L_28 = (Object_t *)VirtFuncInvoker1< Object_t *, Enum_t354 * >::Invoke(10 /* System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum) */, __this, L_27);
		*((Object_t **)(L_26)) = (Object_t *)L_28;
		goto IL_00ca;
	}

IL_00c5:
	{
		V_0 = 0;
		Object_t ** L_29 = ___output;
		*((Object_t **)(L_29)) = (Object_t *)NULL;
	}

IL_00ca:
	{
		bool L_30 = V_0;
		return L_30;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern TypeInfo* ArgumentNullException_t387_il2cpp_TypeInfo_var;
extern TypeInfo* JsonObject_t240_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t245_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t412_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t413_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t339_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t328_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t368_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m1542_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m1543_MethodInfo_var;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1223 (PocoJsonSerializerStrategy_t242 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(191);
		JsonObject_t240_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(196);
		IDictionary_2_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		IEnumerable_1_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(238);
		IEnumerator_1_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(240);
		IDictionary_2_t339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(164);
		IEnumerator_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		IDisposable_t368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		KeyValuePair_2_get_Value_m1542_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		KeyValuePair_2_get_Key_m1543_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483709);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	KeyValuePair_2_t411  V_3 = {0};
	Object_t* V_4 = {0};
	Exception_t118 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t118 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___input;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t387 * L_1 = (ArgumentNullException_t387 *)il2cpp_codegen_object_new (ArgumentNullException_t387_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1507(L_1, (String_t*) &_stringLiteral239, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t ** L_2 = ___output;
		*((Object_t **)(L_2)) = (Object_t *)NULL;
		Object_t * L_3 = ___input;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1430(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return 0;
	}

IL_0028:
	{
		JsonObject_t240 * L_7 = (JsonObject_t240 *)il2cpp_codegen_object_new (JsonObject_t240_il2cpp_TypeInfo_var);
		JsonObject__ctor_m1175(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		Object_t* L_8 = (__this->___GetCache_1);
		Type_t * L_9 = V_0;
		NullCheck(L_8);
		Object_t* L_10 = (Object_t*)InterfaceFuncInvoker1< Object_t*, Type_t * >::Invoke(3 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(!0) */, IDictionary_2_t245_il2cpp_TypeInfo_var, L_8, L_9);
		V_2 = L_10;
		Object_t* L_11 = V_2;
		NullCheck(L_11);
		Object_t* L_12 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator() */, IEnumerable_1_t412_il2cpp_TypeInfo_var, L_11);
		V_4 = L_12;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0048:
		{
			Object_t* L_13 = V_4;
			NullCheck(L_13);
			KeyValuePair_2_t411  L_14 = (KeyValuePair_2_t411 )InterfaceFuncInvoker0< KeyValuePair_2_t411  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Current() */, IEnumerator_1_t413_il2cpp_TypeInfo_var, L_13);
			V_3 = L_14;
			GetDelegate_t248 * L_15 = KeyValuePair_2_get_Value_m1542((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m1542_MethodInfo_var);
			if (!L_15)
			{
				goto IL_007c;
			}
		}

IL_005c:
		{
			Object_t* L_16 = V_1;
			String_t* L_17 = KeyValuePair_2_get_Key_m1543((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m1543_MethodInfo_var);
			String_t* L_18 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_17);
			GetDelegate_t248 * L_19 = KeyValuePair_2_get_Value_m1542((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m1542_MethodInfo_var);
			Object_t * L_20 = ___input;
			NullCheck(L_19);
			Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(10 /* System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object) */, L_19, L_20);
			NullCheck(L_16);
			InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_t339_il2cpp_TypeInfo_var, L_16, L_18, L_21);
		}

IL_007c:
		{
			Object_t* L_22 = V_4;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t328_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t118 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_24 = V_4;
			if (L_24)
			{
				goto IL_0092;
			}
		}

IL_0091:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0092:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t368_il2cpp_TypeInfo_var, L_25);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t118 *)
	}

IL_009a:
	{
		Object_t ** L_26 = ___output;
		Object_t* L_27 = V_1;
		*((Object_t **)(L_26)) = (Object_t *)L_27;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void GetDelegate__ctor_m1224 (GetDelegate_t248 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C" Object_t * GetDelegate_Invoke_m1225 (GetDelegate_t248 * __this, Object_t * ___source, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetDelegate_Invoke_m1225((GetDelegate_t248 *)__this->___prev_9,___source, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___source, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetDelegate_t248(Il2CppObject* delegate, Object_t * ___source)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * GetDelegate_BeginInvoke_m1226 (GetDelegate_t248 * __this, Object_t * ___source, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * GetDelegate_EndInvoke_m1227 (GetDelegate_t248 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegatMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void SetDelegate__ctor_m1228 (SetDelegate_t249 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern "C" void SetDelegate_Invoke_m1229 (SetDelegate_t249 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SetDelegate_Invoke_m1229((SetDelegate_t249 *)__this->___prev_9,___source, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SetDelegate_t249(Il2CppObject* delegate, Object_t * ___source, Object_t * ___value)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SetDelegate_BeginInvoke_m1230 (SetDelegate_t249 * __this, Object_t * ___source, Object_t * ___value, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SetDelegate_EndInvoke_m1231 (SetDelegate_t249 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ConstructoMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ConstructorDelegate__ctor_m1232 (ConstructorDelegate_t250 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern "C" Object_t * ConstructorDelegate_Invoke_m1233 (ConstructorDelegate_t250 * __this, ObjectU5BU5D_t40* ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ConstructorDelegate_Invoke_m1233((ConstructorDelegate_t250 *)__this->___prev_9,___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, ObjectU5BU5D_t40* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, ObjectU5BU5D_t40* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_ConstructorDelegate_t250(Il2CppObject* delegate, ObjectU5BU5D_t40* ___args)
{
	typedef Object_t * (STDCALL *native_function_ptr_type)(Object_t **);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___args' to native representation
	Object_t ** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_array<Object_t *>((Il2CppCodeGenArray*)___args);

	// Native function invocation and marshaling of return value back from native representation
	Object_t * _return_value = _il2cpp_pinvoke_func(____args_marshaled);
	Object_t * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling cleanup of parameter '___args' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern "C" Object_t * ConstructorDelegate_BeginInvoke_m1234 (ConstructorDelegate_t250 * __this, ObjectU5BU5D_t40* ___args, AsyncCallback_t100 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ConstructorDelegate_EndInvoke_m1235 (ConstructorDelegate_t250 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetCons.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetConsMethodDeclarations.h"

// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::.ctor()
extern "C" void U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m1236 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t252 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::<>m__0(System.Object[])
extern "C" Object_t * U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1237 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t252 * __this, ObjectU5BU5D_t40* ___args, const MethodInfo* method)
{
	{
		ConstructorInfo_t251 * L_0 = (__this->___constructorInfo_0);
		ObjectU5BU5D_t40* L_1 = ___args;
		NullCheck(L_0);
		Object_t * L_2 = ConstructorInfo_Invoke_m1544(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetMMethodDeclarations.h"

// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m1238 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t253 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::<>m__1(System.Object)
extern TypeInfo* ReflectionUtils_t257_il2cpp_TypeInfo_var;
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m1239 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t253 * __this, Object_t * ___source, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t40* L_2 = ((ReflectionUtils_t257_StaticFields*)ReflectionUtils_t257_il2cpp_TypeInfo_var->static_fields)->___EmptyObjects_0;
		NullCheck(L_0);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t40* >::Invoke(15 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, L_1, L_2);
		return L_3;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0MethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::.ctor()
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m1240 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t254 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::<>m__2(System.Object)
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m1241 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t254 * __this, Object_t * ___source, const MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetMMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m1242 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t255 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::<>m__3(System.Object,System.Object)
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m1243 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t255 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		ObjectU5BU5D_t40* L_2 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 1));
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		NullCheck(L_0);
		VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t40* >::Invoke(15 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, L_1, L_2);
		return;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0MethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::.ctor()
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m1244 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t256 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::<>m__4(System.Object,System.Object)
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m1245 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t256 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"


// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t257_il2cpp_TypeInfo_var;
extern "C" void ReflectionUtils__cctor_m1246 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		ReflectionUtils_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ReflectionUtils_t257_StaticFields*)ReflectionUtils_t257_il2cpp_TypeInfo_var->static_fields)->___EmptyObjects_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" Object_t* ReflectionUtils_GetConstructors_m1247 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t414* L_1 = (ConstructorInfoU5BU5D_t414*)VirtFuncInvoker0< ConstructorInfoU5BU5D_t414* >::Invoke(70 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors() */, L_0);
		return (Object_t*)L_1;
	}
}
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t257_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t355_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t417_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t328_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t368_il2cpp_TypeInfo_var;
extern "C" ConstructorInfo_t251 * ReflectionUtils_GetConstructorInfo_m1248 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t247* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		IEnumerable_1_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(241);
		IEnumerator_1_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		IEnumerator_t328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		IDisposable_t368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(85);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	ConstructorInfo_t251 * V_3 = {0};
	Object_t* V_4 = {0};
	ParameterInfoU5BU5D_t415* V_5 = {0};
	ParameterInfo_t416 * V_6 = {0};
	ParameterInfoU5BU5D_t415* V_7 = {0};
	int32_t V_8 = 0;
	ConstructorInfo_t251 * V_9 = {0};
	Exception_t118 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t118 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		Object_t* L_1 = ReflectionUtils_GetConstructors_m1247(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t* L_2 = V_0;
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_t355_il2cpp_TypeInfo_var, L_2);
		V_4 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_0014:
		{
			Object_t* L_4 = V_4;
			NullCheck(L_4);
			ConstructorInfo_t251 * L_5 = (ConstructorInfo_t251 *)InterfaceFuncInvoker0< ConstructorInfo_t251 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_t417_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			ConstructorInfo_t251 * L_6 = V_3;
			NullCheck(L_6);
			ParameterInfoU5BU5D_t415* L_7 = (ParameterInfoU5BU5D_t415*)VirtFuncInvoker0< ParameterInfoU5BU5D_t415* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
			V_5 = L_7;
			TypeU5BU5D_t247* L_8 = ___argsType;
			NullCheck(L_8);
			ParameterInfoU5BU5D_t415* L_9 = V_5;
			NullCheck(L_9);
			if ((((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			goto IL_0085;
		}

IL_0035:
		{
			V_1 = 0;
			V_2 = 1;
			ConstructorInfo_t251 * L_10 = V_3;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t415* L_11 = (ParameterInfoU5BU5D_t415*)VirtFuncInvoker0< ParameterInfoU5BU5D_t415* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
			V_7 = L_11;
			V_8 = 0;
			goto IL_006c;
		}

IL_0049:
		{
			ParameterInfoU5BU5D_t415* L_12 = V_7;
			int32_t L_13 = V_8;
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
			int32_t L_14 = L_13;
			V_6 = (*(ParameterInfo_t416 **)(ParameterInfo_t416 **)SZArrayLdElema(L_12, L_14));
			ParameterInfo_t416 * L_15 = V_6;
			NullCheck(L_15);
			Type_t * L_16 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_15);
			TypeU5BU5D_t247* L_17 = ___argsType;
			int32_t L_18 = V_1;
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
			int32_t L_19 = L_18;
			if ((((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_17, L_19)))))
			{
				goto IL_0066;
			}
		}

IL_005f:
		{
			V_2 = 0;
			goto IL_0077;
		}

IL_0066:
		{
			int32_t L_20 = V_8;
			V_8 = ((int32_t)((int32_t)L_20+(int32_t)1));
		}

IL_006c:
		{
			int32_t L_21 = V_8;
			ParameterInfoU5BU5D_t415* L_22 = V_7;
			NullCheck(L_22);
			if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
			{
				goto IL_0049;
			}
		}

IL_0077:
		{
			bool L_23 = V_2;
			if (!L_23)
			{
				goto IL_0085;
			}
		}

IL_007d:
		{
			ConstructorInfo_t251 * L_24 = V_3;
			V_9 = L_24;
			IL2CPP_LEAVE(0xA5, FINALLY_0096);
		}

IL_0085:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t328_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0014;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t118 *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		{
			Object_t* L_27 = V_4;
			if (L_27)
			{
				goto IL_009b;
			}
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(150)
		}

IL_009b:
		{
			Object_t* L_28 = V_4;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t368_il2cpp_TypeInfo_var, L_28);
			IL2CPP_END_FINALLY(150)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t118 *)
	}

IL_00a3:
	{
		return (ConstructorInfo_t251 *)NULL;
	}

IL_00a5:
	{
		ConstructorInfo_t251 * L_29 = V_9;
		return L_29;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" Object_t* ReflectionUtils_GetProperties_m1249 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t418* L_1 = (PropertyInfoU5BU5D_t418*)VirtFuncInvoker1< PropertyInfoU5BU5D_t418*, int32_t >::Invoke(52 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" Object_t* ReflectionUtils_GetFields_m1250 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		FieldInfoU5BU5D_t419* L_1 = (FieldInfoU5BU5D_t419*)VirtFuncInvoker1< FieldInfoU5BU5D_t419*, int32_t >::Invoke(45 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m1251 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, 1);
		return L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m1252 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_0, 1);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t257_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t250 * ReflectionUtils_GetContructor_m1253 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t247* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t247* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		ConstructorDelegate_t250 * L_2 = ReflectionUtils_GetConstructorByReflection_m1255(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern TypeInfo* U3CGetConstructorByReflectionU3Ec__AnonStorey1_t252_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructorDelegate_t250_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1237_MethodInfo_var;
extern "C" ConstructorDelegate_t250 * ReflectionUtils_GetConstructorByReflection_m1254 (Object_t * __this /* static, unused */, ConstructorInfo_t251 * ___constructorInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(244);
		ConstructorDelegate_t250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(212);
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1237_MethodInfo_var = il2cpp_codegen_method_info_from_index(62);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t252 * V_0 = {0};
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t252 * L_0 = (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t252 *)il2cpp_codegen_object_new (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t252_il2cpp_TypeInfo_var);
		U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m1236(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t252 * L_1 = V_0;
		ConstructorInfo_t251 * L_2 = ___constructorInfo;
		NullCheck(L_1);
		L_1->___constructorInfo_0 = L_2;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t252 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1237_MethodInfo_var };
		ConstructorDelegate_t250 * L_5 = (ConstructorDelegate_t250 *)il2cpp_codegen_object_new (ConstructorDelegate_t250_il2cpp_TypeInfo_var);
		ConstructorDelegate__ctor_m1232(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t257_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t250 * ReflectionUtils_GetConstructorByReflection_m1255 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t247* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorInfo_t251 * V_0 = {0};
	ConstructorDelegate_t250 * G_B3_0 = {0};
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t247* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		ConstructorInfo_t251 * L_2 = ReflectionUtils_GetConstructorInfo_m1248(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConstructorInfo_t251 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((ConstructorDelegate_t250 *)(NULL));
		goto IL_001a;
	}

IL_0014:
	{
		ConstructorInfo_t251 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		ConstructorDelegate_t250 * L_5 = ReflectionUtils_GetConstructorByReflection_m1254(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern TypeInfo* ReflectionUtils_t257_il2cpp_TypeInfo_var;
extern "C" GetDelegate_t248 * ReflectionUtils_GetGetMethod_m1256 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		GetDelegate_t248 * L_1 = ReflectionUtils_GetGetMethodByReflection_m1258(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern TypeInfo* ReflectionUtils_t257_il2cpp_TypeInfo_var;
extern "C" GetDelegate_t248 * ReflectionUtils_GetGetMethod_m1257 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		GetDelegate_t248 * L_1 = ReflectionUtils_GetGetMethodByReflection_m1259(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern TypeInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t253_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t257_il2cpp_TypeInfo_var;
extern TypeInfo* GetDelegate_t248_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m1239_MethodInfo_var;
extern "C" GetDelegate_t248 * ReflectionUtils_GetGetMethodByReflection_m1258 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(245);
		ReflectionUtils_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		GetDelegate_t248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m1239_MethodInfo_var = il2cpp_codegen_method_info_from_index(63);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t253 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t253 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t253 *)il2cpp_codegen_object_new (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t253_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m1238(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t253 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetGetterMethodInfo_m1251(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t253 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m1239_MethodInfo_var };
		GetDelegate_t248 * L_6 = (GetDelegate_t248 *)il2cpp_codegen_object_new (GetDelegate_t248_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m1224(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern TypeInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t254_il2cpp_TypeInfo_var;
extern TypeInfo* GetDelegate_t248_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m1241_MethodInfo_var;
extern "C" GetDelegate_t248 * ReflectionUtils_GetGetMethodByReflection_m1259 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		GetDelegate_t248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m1241_MethodInfo_var = il2cpp_codegen_method_info_from_index(64);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t254 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t254 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t254 *)il2cpp_codegen_object_new (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t254_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m1240(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t254 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t254 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m1241_MethodInfo_var };
		GetDelegate_t248 * L_5 = (GetDelegate_t248 *)il2cpp_codegen_object_new (GetDelegate_t248_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m1224(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern TypeInfo* ReflectionUtils_t257_il2cpp_TypeInfo_var;
extern "C" SetDelegate_t249 * ReflectionUtils_GetSetMethod_m1260 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		SetDelegate_t249 * L_1 = ReflectionUtils_GetSetMethodByReflection_m1262(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern TypeInfo* ReflectionUtils_t257_il2cpp_TypeInfo_var;
extern "C" SetDelegate_t249 * ReflectionUtils_GetSetMethod_m1261 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		s_Il2CppMethodIntialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		SetDelegate_t249 * L_1 = ReflectionUtils_GetSetMethodByReflection_m1263(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern TypeInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t255_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t257_il2cpp_TypeInfo_var;
extern TypeInfo* SetDelegate_t249_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m1243_MethodInfo_var;
extern "C" SetDelegate_t249 * ReflectionUtils_GetSetMethodByReflection_m1262 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		ReflectionUtils_t257_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(225);
		SetDelegate_t249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m1243_MethodInfo_var = il2cpp_codegen_method_info_from_index(65);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t255 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t255 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t255 *)il2cpp_codegen_object_new (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t255_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m1242(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t255 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t257_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetSetterMethodInfo_m1252(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t255 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m1243_MethodInfo_var };
		SetDelegate_t249 * L_6 = (SetDelegate_t249 *)il2cpp_codegen_object_new (SetDelegate_t249_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m1228(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern TypeInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t256_il2cpp_TypeInfo_var;
extern TypeInfo* SetDelegate_t249_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m1245_MethodInfo_var;
extern "C" SetDelegate_t249 * ReflectionUtils_GetSetMethodByReflection_m1263 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t256_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(248);
		SetDelegate_t249_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m1245_MethodInfo_var = il2cpp_codegen_method_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t256 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t256 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t256 *)il2cpp_codegen_object_new (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t256_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m1244(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t256 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t256 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m1245_MethodInfo_var };
		SetDelegate_t249 * L_5 = (SetDelegate_t249 *)il2cpp_codegen_object_new (SetDelegate_t249_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m1228(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern "C" void WrapperlessIcall__ctor_m1264 (WrapperlessIcall_t258 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1440(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"



// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m1265 (IL2CPPStructAlignmentAttribute_t259 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1440(__this, /*hidden argument*/NULL);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"

// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_11.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_11MethodDeclarations.h"


// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern TypeInfo* DisallowMultipleComponentU5BU5D_t260_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeHelperEngine_t263_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t261_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t262_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m1266 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisallowMultipleComponentU5BU5D_t260_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(249);
		AttributeHelperEngine_t263_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(251);
		ExecuteInEditModeU5BU5D_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(252);
		RequireComponentU5BU5D_t262_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AttributeHelperEngine_t263_StaticFields*)AttributeHelperEngine_t263_il2cpp_TypeInfo_var->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t260*)SZArrayNew(DisallowMultipleComponentU5BU5D_t260_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t263_StaticFields*)AttributeHelperEngine_t263_il2cpp_TypeInfo_var->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t261*)SZArrayNew(ExecuteInEditModeU5BU5D_t261_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t263_StaticFields*)AttributeHelperEngine_t263_il2cpp_TypeInfo_var->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t262*)SZArrayNew(RequireComponentU5BU5D_t262_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern const Il2CppType* MonoBehaviour_t3_0_0_0_var;
extern const Il2CppType* DisallowMultipleComponent_t264_0_0_0_var;
extern TypeInfo* Stack_1_t420_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m1545_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m1546_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m1547_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m1267 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoBehaviour_t3_0_0_0_var = il2cpp_codegen_type_from_index(35);
		DisallowMultipleComponent_t264_0_0_0_var = il2cpp_codegen_type_from_index(250);
		Stack_1_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(256);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Stack_1__ctor_m1545_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483715);
		Stack_1_Push_m1546_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483716);
		Stack_1_Pop_m1547_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483717);
		s_Il2CppMethodIntialized = true;
	}
	Stack_1_t420 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t40* V_2 = {0};
	{
		Stack_1_t420 * L_0 = (Stack_1_t420 *)il2cpp_codegen_object_new (Stack_1_t420_il2cpp_TypeInfo_var);
		Stack_1__ctor_m1545(L_0, /*hidden argument*/Stack_1__ctor_m1545_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t420 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m1546(L_1, L_2, /*hidden argument*/Stack_1_Push_m1546_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t3_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005a;
	}

IL_0037:
	{
		Stack_1_t420 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m1547(L_8, /*hidden argument*/Stack_1_Pop_m1547_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, LoadTypeToken(DisallowMultipleComponent_t264_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		ObjectU5BU5D_t40* L_12 = (ObjectU5BU5D_t40*)VirtFuncInvoker2< ObjectU5BU5D_t40*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t40* L_13 = V_2;
		NullCheck(L_13);
		if (!(((int32_t)(((Array_t *)L_13)->max_length))))
		{
			goto IL_005a;
		}
	}
	{
		Type_t * L_14 = V_1;
		return L_14;
	}

IL_005a:
	{
		Stack_1_t420 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Type>::get_Count() */, L_15);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern const Il2CppType* RequireComponent_t265_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t3_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponent_t265_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t247_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t421_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1548_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m1549_MethodInfo_var;
extern "C" TypeU5BU5D_t247* AttributeHelperEngine_GetRequiredComponents_m1268 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RequireComponent_t265_0_0_0_var = il2cpp_codegen_type_from_index(255);
		MonoBehaviour_t3_0_0_0_var = il2cpp_codegen_type_from_index(35);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		RequireComponent_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		TypeU5BU5D_t247_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(224);
		List_1_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(257);
		List_1__ctor_m1548_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483718);
		List_1_ToArray_m1549_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483719);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t421 * V_0 = {0};
	ObjectU5BU5D_t40* V_1 = {0};
	int32_t V_2 = 0;
	RequireComponent_t265 * V_3 = {0};
	TypeU5BU5D_t247* V_4 = {0};
	{
		V_0 = (List_1_t421 *)NULL;
		goto IL_00d9;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, LoadTypeToken(RequireComponent_t265_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t40* L_2 = (ObjectU5BU5D_t40*)VirtFuncInvoker2< ObjectU5BU5D_t40*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c8;
	}

IL_0020:
	{
		ObjectU5BU5D_t40* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = ((RequireComponent_t265 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)), RequireComponent_t265_il2cpp_TypeInfo_var));
		List_1_t421 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t40* L_7 = V_1;
		NullCheck(L_7);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Type_t * L_8 = ___klass;
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t3_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_9) == ((Object_t*)(Type_t *)L_10))))
		{
			goto IL_0073;
		}
	}
	{
		TypeU5BU5D_t247* L_11 = ((TypeU5BU5D_t247*)SZArrayNew(TypeU5BU5D_t247_il2cpp_TypeInfo_var, 3));
		RequireComponent_t265 * L_12 = V_3;
		NullCheck(L_12);
		Type_t * L_13 = (L_12->___m_Type0_0);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_13);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_13;
		TypeU5BU5D_t247* L_14 = L_11;
		RequireComponent_t265 * L_15 = V_3;
		NullCheck(L_15);
		Type_t * L_16 = (L_15->___m_Type1_1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		ArrayElementTypeCheck (L_14, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_14, 1)) = (Type_t *)L_16;
		TypeU5BU5D_t247* L_17 = L_14;
		RequireComponent_t265 * L_18 = V_3;
		NullCheck(L_18);
		Type_t * L_19 = (L_18->___m_Type2_2);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		ArrayElementTypeCheck (L_17, L_19);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 2)) = (Type_t *)L_19;
		V_4 = L_17;
		TypeU5BU5D_t247* L_20 = V_4;
		return L_20;
	}

IL_0073:
	{
		List_1_t421 * L_21 = V_0;
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		List_1_t421 * L_22 = (List_1_t421 *)il2cpp_codegen_object_new (List_1_t421_il2cpp_TypeInfo_var);
		List_1__ctor_m1548(L_22, /*hidden argument*/List_1__ctor_m1548_MethodInfo_var);
		V_0 = L_22;
	}

IL_007f:
	{
		RequireComponent_t265 * L_23 = V_3;
		NullCheck(L_23);
		Type_t * L_24 = (L_23->___m_Type0_0);
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		List_1_t421 * L_25 = V_0;
		RequireComponent_t265 * L_26 = V_3;
		NullCheck(L_26);
		Type_t * L_27 = (L_26->___m_Type0_0);
		NullCheck(L_25);
		VirtActionInvoker1< Type_t * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_25, L_27);
	}

IL_0096:
	{
		RequireComponent_t265 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type1_1);
		if (!L_29)
		{
			goto IL_00ad;
		}
	}
	{
		List_1_t421 * L_30 = V_0;
		RequireComponent_t265 * L_31 = V_3;
		NullCheck(L_31);
		Type_t * L_32 = (L_31->___m_Type1_1);
		NullCheck(L_30);
		VirtActionInvoker1< Type_t * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_30, L_32);
	}

IL_00ad:
	{
		RequireComponent_t265 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type2_2);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		List_1_t421 * L_35 = V_0;
		RequireComponent_t265 * L_36 = V_3;
		NullCheck(L_36);
		Type_t * L_37 = (L_36->___m_Type2_2);
		NullCheck(L_35);
		VirtActionInvoker1< Type_t * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_35, L_37);
	}

IL_00c4:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00c8:
	{
		int32_t L_39 = V_2;
		ObjectU5BU5D_t40* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		Type_t * L_41 = ___klass;
		NullCheck(L_41);
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_41);
		___klass = L_42;
	}

IL_00d9:
	{
		Type_t * L_43 = ___klass;
		if (!L_43)
		{
			goto IL_00ef;
		}
	}
	{
		Type_t * L_44 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t3_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_44) == ((Object_t*)(Type_t *)L_45))))
		{
			goto IL_0007;
		}
	}

IL_00ef:
	{
		List_1_t421 * L_46 = V_0;
		if (L_46)
		{
			goto IL_00f7;
		}
	}
	{
		return (TypeU5BU5D_t247*)NULL;
	}

IL_00f7:
	{
		List_1_t421 * L_47 = V_0;
		NullCheck(L_47);
		TypeU5BU5D_t247* L_48 = List_1_ToArray_m1549(L_47, /*hidden argument*/List_1_ToArray_m1549_MethodInfo_var);
		return L_48;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern const Il2CppType* ExecuteInEditMode_t267_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t3_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m1269 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t267_0_0_0_var = il2cpp_codegen_type_from_index(253);
		MonoBehaviour_t3_0_0_0_var = il2cpp_codegen_type_from_index(35);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t40* V_0 = {0};
	{
		goto IL_0029;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, LoadTypeToken(ExecuteInEditMode_t267_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t40* L_2 = (ObjectU5BU5D_t40*)VirtFuncInvoker2< ObjectU5BU5D_t40*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t40* L_3 = V_0;
		NullCheck(L_3);
		if (!(((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		Type_t * L_4 = ___klass;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_4);
		___klass = L_5;
	}

IL_0029:
	{
		Type_t * L_6 = ___klass;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Type_t * L_7 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1424(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t3_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8))))
		{
			goto IL_0005;
		}
	}

IL_003f:
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"



// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"



// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
extern "C" void AddComponentMenu__ctor_m1270 (AddComponentMenu_t266 * __this, String_t* ___menuName, const MethodInfo* method)
{
	{
		Attribute__ctor_m1440(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"



// System.Void UnityEngine.ExecuteInEditMode::.ctor()
extern "C" void ExecuteInEditMode__ctor_m1271 (ExecuteInEditMode_t267 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1440(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"

// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"


// System.Void UnityEngine.SetupCoroutine::.ctor()
extern "C" void SetupCoroutine__ctor_m1272 (SetupCoroutine_t268 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m1273 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t40* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t40*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t40* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m1430(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t40* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t422 *, Object_t *, ObjectU5BU5D_t40*, ParameterModifierU5BU5D_t423*, CultureInfo_t388 *, StringU5BU5D_t44* >::Invoke(72 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_4, L_5, ((int32_t)308), (Binder_t422 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t423*)(ParameterModifierU5BU5D_t423*)NULL, (CultureInfo_t388 *)NULL, (StringU5BU5D_t44*)(StringU5BU5D_t44*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m1274 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t40* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t40*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t40* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t40* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t422 *, Object_t *, ObjectU5BU5D_t40*, ParameterModifierU5BU5D_t423*, CultureInfo_t388 *, StringU5BU5D_t44* >::Invoke(72 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_3, L_4, ((int32_t)312), (Binder_t422 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t423*)(ParameterModifierU5BU5D_t423*)NULL, (CultureInfo_t388 *)NULL, (StringU5BU5D_t44*)(StringU5BU5D_t44*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"



// System.Void UnityEngine.WritableAttribute::.ctor()
extern "C" void WritableAttribute__ctor_m1275 (WritableAttribute_t269 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1440(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"



// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
extern "C" void AssemblyIsEditorAssembly__ctor_m1276 (AssemblyIsEditorAssembly_t270 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1440(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern TypeInfo* UserProfile_t282_il2cpp_TypeInfo_var;
extern "C" UserProfile_t282 * GcUserProfileData_ToUserProfile_m1277 (GcUserProfileData_t271 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfile_t282_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___userName_0);
		String_t* L_1 = (__this->___userID_1);
		int32_t L_2 = (__this->___isFriend_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_t11 * L_3 = (__this->___image_3);
		UserProfile_t282 * L_4 = (UserProfile_t282 *)il2cpp_codegen_object_new (UserProfile_t282_il2cpp_TypeInfo_var);
		UserProfile__ctor_m1295(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C" void GcUserProfileData_AddToArray_m1278 (GcUserProfileData_t271 * __this, UserProfileU5BU5D_t76** ___array, int32_t ___number, const MethodInfo* method)
{
	{
		UserProfileU5BU5D_t76** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t76**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t76**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		UserProfileU5BU5D_t76** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t282 * L_5 = GcUserProfileData_ToUserProfile_m1277(__this, /*hidden argument*/NULL);
		NullCheck((*((UserProfileU5BU5D_t76**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t76**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t76**)L_3)), L_5);
		*((UserProfile_t282 **)(UserProfile_t282 **)SZArrayLdElema((*((UserProfileU5BU5D_t76**)L_3)), L_4)) = (UserProfile_t282 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m798(NULL /*static, unused*/, (String_t*) &_stringLiteral240, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern TypeInfo* AchievementDescription_t284_il2cpp_TypeInfo_var;
extern "C" AchievementDescription_t284 * GcAchievementDescriptionData_ToAchievementDescription_m1279 (GcAchievementDescriptionData_t272 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescription_t284_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t11 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t11 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t11 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t11 * L_2 = (__this->___m_Image_2);
		String_t* L_3 = (__this->___m_AchievedDescription_3);
		String_t* L_4 = (__this->___m_UnachievedDescription_4);
		int32_t L_5 = (__this->___m_Hidden_5);
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0030:
	{
		int32_t L_6 = (__this->___m_Points_6);
		AchievementDescription_t284 * L_7 = (AchievementDescription_t284 *)il2cpp_codegen_object_new (AchievementDescription_t284_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m1315(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern TypeInfo* Achievement_t283_il2cpp_TypeInfo_var;
extern "C" Achievement_t283 * GcAchievementData_ToAchievement_m1280 (GcAchievementData_t273 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t283_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t104  V_0 = {0};
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = {0};
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = {0};
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		double L_1 = (__this->___m_PercentCompleted_1);
		int32_t L_2 = (__this->___m_Completed_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___m_Hidden_3);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0030:
	{
		DateTime__ctor_m1550((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t104  L_5 = DateTime_AddSeconds_m1551((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		Achievement_t283 * L_6 = (Achievement_t283 *)il2cpp_codegen_object_new (Achievement_t283_il2cpp_TypeInfo_var);
		Achievement__ctor_m1304(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t273_marshal(const GcAchievementData_t273& unmarshaled, GcAchievementData_t273_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
void GcAchievementData_t273_marshal_back(const GcAchievementData_t273_marshaled& marshaled, GcAchievementData_t273& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t273_marshal_cleanup(GcAchievementData_t273_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern TypeInfo* Score_t285_il2cpp_TypeInfo_var;
extern "C" Score_t285 * GcScoreData_ToScore_m1281 (GcScoreData_t274 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(80);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t104  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m1550((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t104  L_5 = DateTime_AddSeconds_m1551((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t285 * L_8 = (Score_t285 *)il2cpp_codegen_object_new (Score_t285_il2cpp_TypeInfo_var);
		Score__ctor_m1326(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t274_marshal(const GcScoreData_t274& unmarshaled, GcScoreData_t274_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
void GcScoreData_t274_marshal_back(const GcScoreData_t274_marshaled& marshaled, GcScoreData_t274& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	unmarshaled.___m_ValueLow_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueHigh_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_Date_3 = marshaled.___m_Date_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	unmarshaled.___m_Rank_6 = marshaled.___m_Rank_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t274_marshal_cleanup(GcScoreData_t274_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"



// System.Int32 UnityEngine.Resolution::get_width()
extern "C" int32_t Resolution_get_width_m1282 (Resolution_t275 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Width_0);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_width(System.Int32)
extern "C" void Resolution_set_width_m1283 (Resolution_t275 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Width_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_height()
extern "C" int32_t Resolution_get_height_m1284 (Resolution_t275 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Height_1);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern "C" void Resolution_set_height_m1285 (Resolution_t275 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Height_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern "C" int32_t Resolution_get_refreshRate_m1286 (Resolution_t275 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_RefreshRate_2);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern "C" void Resolution_set_refreshRate_m1287 (Resolution_t275 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_RefreshRate_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Resolution::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern "C" String_t* Resolution_ToString_m1288 (Resolution_t275 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = (__this->___m_Width_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t40* L_4 = L_0;
		int32_t L_5 = (__this->___m_Height_1);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t40* L_8 = L_4;
		int32_t L_9 = (__this->___m_RefreshRate_2);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m762(NULL /*static, unused*/, (String_t*) &_stringLiteral241, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"



// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"



// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientationMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
