#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
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
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// BatteryController
#include "AssemblyU2DCSharp_BatteryController.h"
#ifndef _MSC_VER
#else
#endif
// BatteryController
#include "AssemblyU2DCSharp_BatteryControllerMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMesh.h"
// System.String
#include "mscorlib_System_String.h"
// BatterySpawner
#include "AssemblyU2DCSharp_BatterySpawner.h"
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2D.h"
// Controller
#include "AssemblyU2DCSharp_Controller.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMeshMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// System.Collections.Generic.List`1<UnityEngine.GameObject>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2DMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
struct GameObject_t1;
struct TextMesh_t25;
struct GameObject_t1;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m61_gshared (GameObject_t1 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m61(__this, method) (( Object_t * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m61_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.TextMesh>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.TextMesh>()
#define GameObject_GetComponent_TisTextMesh_t25_m60(__this, method) (( TextMesh_t25 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m61_gshared)(__this, method)
struct GameObject_t1;
struct BatterySpawner_t5;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BatterySpawner>()
// !!0 UnityEngine.GameObject::GetComponent<BatterySpawner>()
#define GameObject_GetComponent_TisBatterySpawner_t5_m62(__this, method) (( BatterySpawner_t5 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m61_gshared)(__this, method)
struct GameObject_t1;
struct Transform_t7;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
#define GameObject_GetComponent_TisTransform_t7_m63(__this, method) (( Transform_t7 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m61_gshared)(__this, method)
struct GameObject_t1;
struct Controller_t9;
// Declaration !!0 UnityEngine.GameObject::GetComponent<Controller>()
// !!0 UnityEngine.GameObject::GetComponent<Controller>()
#define GameObject_GetComponent_TisController_t9_m64(__this, method) (( Controller_t9 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m61_gshared)(__this, method)


// System.Void BatteryController::.ctor()
extern "C" void BatteryController__ctor_m0 (BatteryController_t2 * __this, const MethodInfo* method)
{
	{
		__this->___energyDecayRate_6 = (0.02f);
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BatteryController::Start()
extern TypeInfo* GameObject_t1_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTextMesh_t25_m60_MethodInfo_var;
extern "C" void BatteryController_Start_m1 (BatteryController_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GameObject_GetComponent_TisTextMesh_t25_m60_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t26  V_0 = {0};
	Vector3_t26  V_1 = {0};
	{
		float L_0 = Random_get_value_m66(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___energyCarried_5 = ((float)((float)((float)((float)L_0*(float)(30.0f)))+(float)(30.0f)));
		GameObject_t1 * L_1 = (__this->___energyLabel_4);
		Transform_t7 * L_2 = Component_get_transform_m67(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t26  L_3 = Transform_get_position_m68(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = ((&V_0)->___x_0);
		Transform_t7 * L_5 = Component_get_transform_m67(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t26  L_6 = Transform_get_position_m68(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = ((&V_1)->___y_1);
		Vector3_t26  L_8 = {0};
		Vector3__ctor_m69(&L_8, ((float)((float)L_4-(float)(0.35f))), ((float)((float)L_7+(float)(0.2f))), (-1.0f), /*hidden argument*/NULL);
		Transform_t7 * L_9 = Component_get_transform_m67(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t27  L_10 = Transform_get_rotation_m70(L_9, /*hidden argument*/NULL);
		Object_t28 * L_11 = Object_Instantiate_m71(NULL /*static, unused*/, L_1, L_8, L_10, /*hidden argument*/NULL);
		__this->___energyLabel_4 = ((GameObject_t1 *)Castclass(L_11, GameObject_t1_il2cpp_TypeInfo_var));
		GameObject_t1 * L_12 = (__this->___energyLabel_4);
		NullCheck(L_12);
		TextMesh_t25 * L_13 = GameObject_GetComponent_TisTextMesh_t25_m60(L_12, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t25_m60_MethodInfo_var);
		float* L_14 = &(__this->___energyCarried_5);
		String_t* L_15 = Single_ToString_m72(L_14, (String_t*) &_stringLiteral1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m73(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral2, /*hidden argument*/NULL);
		NullCheck(L_13);
		TextMesh_set_text_m74(L_13, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BatteryController::Update()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBatterySpawner_t5_m62_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTextMesh_t25_m60_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTransform_t7_m63_MethodInfo_var;
extern "C" void BatteryController_Update_m2 (BatteryController_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GameObject_GetComponent_TisBatterySpawner_t5_m62_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		GameObject_GetComponent_TisTextMesh_t25_m60_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		GameObject_GetComponent_TisTransform_t7_m63_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t26  V_0 = {0};
	Vector3_t26  V_1 = {0};
	{
		float L_0 = Time_get_timeScale_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		float L_1 = (__this->___energyCarried_5);
		float L_2 = (__this->___energyDecayRate_6);
		__this->___energyCarried_5 = ((float)((float)L_1-(float)L_2));
		float L_3 = (__this->___energyCarried_5);
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0082;
		}
	}
	{
		GameObject_t1 * L_4 = (__this->___parentSpawner_7);
		NullCheck(L_4);
		BatterySpawner_t5 * L_5 = GameObject_GetComponent_TisBatterySpawner_t5_m62(L_4, /*hidden argument*/GameObject_GetComponent_TisBatterySpawner_t5_m62_MethodInfo_var);
		NullCheck(L_5);
		List_1_t4 * L_6 = (L_5->___batteries_4);
		GameObject_t1 * L_7 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtFuncInvoker1< bool, GameObject_t1 * >::Invoke(23 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(!0) */, L_6, L_7);
		GameObject_t1 * L_8 = (__this->___parentSpawner_7);
		NullCheck(L_8);
		BatterySpawner_t5 * L_9 = GameObject_GetComponent_TisBatterySpawner_t5_m62(L_8, /*hidden argument*/GameObject_GetComponent_TisBatterySpawner_t5_m62_MethodInfo_var);
		BatterySpawner_t5 * L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___numBatteriesToRenew_7);
		NullCheck(L_10);
		L_10->___numBatteriesToRenew_7 = ((int32_t)((int32_t)L_11+(int32_t)1));
		GameObject_t1 * L_12 = (__this->___energyLabel_4);
		Object_Destroy_m77(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		GameObject_t1 * L_13 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		Object_Destroy_m77(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		goto IL_011d;
	}

IL_0082:
	{
		GameObject_t1 * L_14 = (__this->___energyLabel_4);
		NullCheck(L_14);
		TextMesh_t25 * L_15 = GameObject_GetComponent_TisTextMesh_t25_m60(L_14, /*hidden argument*/GameObject_GetComponent_TisTextMesh_t25_m60_MethodInfo_var);
		float* L_16 = &(__this->___energyCarried_5);
		String_t* L_17 = Single_ToString_m72(L_16, (String_t*) &_stringLiteral1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m73(NULL /*static, unused*/, L_17, (String_t*) &_stringLiteral2, /*hidden argument*/NULL);
		NullCheck(L_15);
		TextMesh_set_text_m74(L_15, L_18, /*hidden argument*/NULL);
		GameObject_t1 * L_19 = (__this->___energyLabel_4);
		NullCheck(L_19);
		Transform_t7 * L_20 = GameObject_GetComponent_TisTransform_t7_m63(L_19, /*hidden argument*/GameObject_GetComponent_TisTransform_t7_m63_MethodInfo_var);
		Transform_t7 * L_21 = Component_get_transform_m67(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t26  L_22 = Transform_get_position_m68(L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		float L_23 = ((&V_0)->___x_0);
		Transform_t7 * L_24 = Component_get_transform_m67(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t26  L_25 = Transform_get_position_m68(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		float L_26 = ((&V_1)->___y_1);
		Vector3_t26  L_27 = {0};
		Vector3__ctor_m69(&L_27, ((float)((float)L_23-(float)(0.35f))), ((float)((float)L_26+(float)(0.2f))), (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_m78(L_20, L_27, /*hidden argument*/NULL);
		Transform_t7 * L_28 = Component_get_transform_m67(__this, /*hidden argument*/NULL);
		Quaternion_t27  L_29 = Quaternion_get_identity_m79(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_rotation_m80(L_28, L_29, /*hidden argument*/NULL);
		GameObject_t1 * L_30 = (__this->___energyLabel_4);
		NullCheck(L_30);
		Transform_t7 * L_31 = GameObject_GetComponent_TisTransform_t7_m63(L_30, /*hidden argument*/GameObject_GetComponent_TisTransform_t7_m63_MethodInfo_var);
		Quaternion_t27  L_32 = Quaternion_get_identity_m79(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_rotation_m80(L_31, L_32, /*hidden argument*/NULL);
	}

IL_011d:
	{
		return;
	}
}
// System.Void BatteryController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t29_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisController_t9_m64_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBatterySpawner_t5_m62_MethodInfo_var;
extern "C" void BatteryController_OnCollisionEnter2D_m3 (BatteryController_t2 * __this, Collision2D_t24 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Mathf_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		GameObject_GetComponent_TisController_t9_m64_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		GameObject_GetComponent_TisBatterySpawner_t5_m62_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	Controller_t9 * V_0 = {0};
	{
		Collision2D_t24 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t1 * L_1 = Collision2D_get_gameObject_m81(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m82(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m83(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral3, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_008d;
		}
	}
	{
		Collision2D_t24 * L_4 = ___col;
		NullCheck(L_4);
		GameObject_t1 * L_5 = Collision2D_get_gameObject_m81(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Controller_t9 * L_6 = GameObject_GetComponent_TisController_t9_m64(L_5, /*hidden argument*/GameObject_GetComponent_TisController_t9_m64_MethodInfo_var);
		V_0 = L_6;
		Controller_t9 * L_7 = V_0;
		Controller_t9 * L_8 = V_0;
		NullCheck(L_8);
		float L_9 = (L_8->___energy_5);
		float L_10 = (__this->___energyCarried_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		float L_11 = Mathf_Min_m84(NULL /*static, unused*/, ((float)((float)L_9+(float)L_10)), (100.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->___energy_5 = L_11;
		GameObject_t1 * L_12 = (__this->___parentSpawner_7);
		NullCheck(L_12);
		BatterySpawner_t5 * L_13 = GameObject_GetComponent_TisBatterySpawner_t5_m62(L_12, /*hidden argument*/GameObject_GetComponent_TisBatterySpawner_t5_m62_MethodInfo_var);
		NullCheck(L_13);
		List_1_t4 * L_14 = (L_13->___batteries_4);
		GameObject_t1 * L_15 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtFuncInvoker1< bool, GameObject_t1 * >::Invoke(23 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(!0) */, L_14, L_15);
		GameObject_t1 * L_16 = (__this->___parentSpawner_7);
		NullCheck(L_16);
		BatterySpawner_t5 * L_17 = GameObject_GetComponent_TisBatterySpawner_t5_m62(L_16, /*hidden argument*/GameObject_GetComponent_TisBatterySpawner_t5_m62_MethodInfo_var);
		BatterySpawner_t5 * L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19 = (L_18->___numBatteriesToRenew_7);
		NullCheck(L_18);
		L_18->___numBatteriesToRenew_7 = ((int32_t)((int32_t)L_19+(int32_t)1));
		GameObject_t1 * L_20 = (__this->___energyLabel_4);
		Object_Destroy_m77(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		GameObject_t1 * L_21 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		Object_Destroy_m77(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
	}

IL_008d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// BatterySpawner
#include "AssemblyU2DCSharp_BatterySpawnerMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
struct GameObject_t1;
struct BatteryController_t2;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BatteryController>()
// !!0 UnityEngine.GameObject::GetComponent<BatteryController>()
#define GameObject_GetComponent_TisBatteryController_t2_m85(__this, method) (( BatteryController_t2 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m61_gshared)(__this, method)


// System.Void BatterySpawner::.ctor()
extern "C" void BatterySpawner__ctor_m4 (BatterySpawner_t5 * __this, const MethodInfo* method)
{
	{
		__this->___numBatteries_2 = ((int32_t)35);
		__this->___minSpawnRadius_5 = (5.0f);
		__this->___maxSpawnRadius_6 = (35.0f);
		__this->___mapRadius_8 = (35.0f);
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BatterySpawner::Start()
extern TypeInfo* GameObject_t1_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBatteryController_t2_m85_MethodInfo_var;
extern "C" void BatterySpawner_Start_m5 (BatterySpawner_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		GameObject_GetComponent_TisBatteryController_t2_m85_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t1 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		V_1 = 0;
		goto IL_00ad;
	}

IL_0007:
	{
		int32_t L_0 = Random_Range_m86(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)2))-(int32_t)1));
		int32_t L_1 = Random_Range_m86(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1*(int32_t)2))-(int32_t)1));
		int32_t L_2 = V_2;
		float L_3 = Random_get_value_m66(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = (__this->___maxSpawnRadius_6);
		float L_5 = (__this->___minSpawnRadius_5);
		float L_6 = (__this->___minSpawnRadius_5);
		V_4 = ((float)((float)(((float)L_2))*(float)((float)((float)((float)((float)L_3*(float)((float)((float)L_4-(float)L_5))))+(float)L_6))));
		int32_t L_7 = V_3;
		float L_8 = Random_get_value_m66(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = (__this->___maxSpawnRadius_6);
		float L_10 = (__this->___minSpawnRadius_5);
		float L_11 = (__this->___minSpawnRadius_5);
		V_5 = ((float)((float)(((float)L_7))*(float)((float)((float)((float)((float)L_8*(float)((float)((float)L_9-(float)L_10))))+(float)L_11))));
		GameObject_t1 * L_12 = (__this->___battery_3);
		float L_13 = V_4;
		float L_14 = V_5;
		Vector3_t26  L_15 = {0};
		Vector3__ctor_m69(&L_15, L_13, L_14, (0.0f), /*hidden argument*/NULL);
		GameObject_t1 * L_16 = (__this->___battery_3);
		NullCheck(L_16);
		Transform_t7 * L_17 = GameObject_get_transform_m87(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Quaternion_t27  L_18 = Transform_get_rotation_m70(L_17, /*hidden argument*/NULL);
		Object_t28 * L_19 = Object_Instantiate_m71(NULL /*static, unused*/, L_12, L_15, L_18, /*hidden argument*/NULL);
		V_0 = ((GameObject_t1 *)Castclass(L_19, GameObject_t1_il2cpp_TypeInfo_var));
		GameObject_t1 * L_20 = V_0;
		NullCheck(L_20);
		BatteryController_t2 * L_21 = GameObject_GetComponent_TisBatteryController_t2_m85(L_20, /*hidden argument*/GameObject_GetComponent_TisBatteryController_t2_m85_MethodInfo_var);
		GameObject_t1 * L_22 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->___parentSpawner_7 = L_22;
		List_1_t4 * L_23 = (__this->___batteries_4);
		GameObject_t1 * L_24 = V_0;
		NullCheck(L_23);
		VirtActionInvoker1< GameObject_t1 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0) */, L_23, L_24);
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_00ad:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = (__this->___numBatteries_2);
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void BatterySpawner::Update()
extern const MethodInfo* GameObject_GetComponent_TisBatteryController_t2_m85_MethodInfo_var;
extern "C" void BatterySpawner_Update_m6 (BatterySpawner_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBatteryController_t2_m85_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		float L_0 = Time_get_timeScale_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		List_1_t4 * L_1 = (__this->___batteries_4);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_1);
		V_0 = ((int32_t)((int32_t)L_2-(int32_t)1));
		goto IL_009f;
	}

IL_0023:
	{
		List_1_t4 * L_3 = (__this->___batteries_4);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		GameObject_t1 * L_5 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_3, L_4);
		NullCheck(L_5);
		Transform_t7 * L_6 = GameObject_get_transform_m87(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t26  L_7 = Transform_get_position_m68(L_6, /*hidden argument*/NULL);
		Vector2_t13  L_8 = Vector2_op_Implicit_m88(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Vector2_t13  L_9 = Vector2_get_zero_m89(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = Vector2_Distance_m90(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = V_1;
		float L_12 = (__this->___mapRadius_8);
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_009b;
		}
	}
	{
		List_1_t4 * L_13 = (__this->___batteries_4);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		GameObject_t1 * L_15 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_13, L_14);
		NullCheck(L_15);
		BatteryController_t2 * L_16 = GameObject_GetComponent_TisBatteryController_t2_m85(L_15, /*hidden argument*/GameObject_GetComponent_TisBatteryController_t2_m85_MethodInfo_var);
		NullCheck(L_16);
		GameObject_t1 * L_17 = (L_16->___energyLabel_4);
		Object_Destroy_m77(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		List_1_t4 * L_18 = (__this->___batteries_4);
		int32_t L_19 = V_0;
		NullCheck(L_18);
		GameObject_t1 * L_20 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_18, L_19);
		Object_Destroy_m77(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		List_1_t4 * L_21 = (__this->___batteries_4);
		int32_t L_22 = V_0;
		NullCheck(L_21);
		VirtActionInvoker1< int32_t >::Invoke(27 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32) */, L_21, L_22);
		int32_t L_23 = (__this->___numBatteriesToRenew_7);
		__this->___numBatteriesToRenew_7 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_009b:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)((int32_t)L_24-(int32_t)1));
	}

IL_009f:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		BatterySpawner_RenewBatteries_m7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BatterySpawner::RenewBatteries()
extern TypeInfo* GameObject_t1_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBatteryController_t2_m85_MethodInfo_var;
extern "C" void BatterySpawner_RenewBatteries_m7 (BatterySpawner_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		GameObject_GetComponent_TisBatteryController_t2_m85_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t1 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		V_1 = 0;
		goto IL_00ad;
	}

IL_0007:
	{
		int32_t L_0 = Random_Range_m86(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)2))-(int32_t)1));
		int32_t L_1 = Random_Range_m86(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1*(int32_t)2))-(int32_t)1));
		int32_t L_2 = V_2;
		float L_3 = Random_get_value_m66(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = (__this->___maxSpawnRadius_6);
		float L_5 = (__this->___minSpawnRadius_5);
		float L_6 = (__this->___minSpawnRadius_5);
		V_4 = ((float)((float)(((float)L_2))*(float)((float)((float)((float)((float)L_3*(float)((float)((float)L_4-(float)L_5))))+(float)L_6))));
		int32_t L_7 = V_3;
		float L_8 = Random_get_value_m66(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = (__this->___maxSpawnRadius_6);
		float L_10 = (__this->___minSpawnRadius_5);
		float L_11 = (__this->___minSpawnRadius_5);
		V_5 = ((float)((float)(((float)L_7))*(float)((float)((float)((float)((float)L_8*(float)((float)((float)L_9-(float)L_10))))+(float)L_11))));
		GameObject_t1 * L_12 = (__this->___battery_3);
		float L_13 = V_4;
		float L_14 = V_5;
		Vector3_t26  L_15 = {0};
		Vector3__ctor_m69(&L_15, L_13, L_14, (0.0f), /*hidden argument*/NULL);
		GameObject_t1 * L_16 = (__this->___battery_3);
		NullCheck(L_16);
		Transform_t7 * L_17 = GameObject_get_transform_m87(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Quaternion_t27  L_18 = Transform_get_rotation_m70(L_17, /*hidden argument*/NULL);
		Object_t28 * L_19 = Object_Instantiate_m71(NULL /*static, unused*/, L_12, L_15, L_18, /*hidden argument*/NULL);
		V_0 = ((GameObject_t1 *)Castclass(L_19, GameObject_t1_il2cpp_TypeInfo_var));
		GameObject_t1 * L_20 = V_0;
		NullCheck(L_20);
		BatteryController_t2 * L_21 = GameObject_GetComponent_TisBatteryController_t2_m85(L_20, /*hidden argument*/GameObject_GetComponent_TisBatteryController_t2_m85_MethodInfo_var);
		GameObject_t1 * L_22 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->___parentSpawner_7 = L_22;
		List_1_t4 * L_23 = (__this->___batteries_4);
		GameObject_t1 * L_24 = V_0;
		NullCheck(L_23);
		VirtActionInvoker1< GameObject_t1 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0) */, L_23, L_24);
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_00ad:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = (__this->___numBatteriesToRenew_7);
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0007;
		}
	}
	{
		__this->___numBatteriesToRenew_7 = 0;
		return;
	}
}
// BeginController
#include "AssemblyU2DCSharp_BeginController.h"
#ifndef _MSC_VER
#else
#endif
// BeginController
#include "AssemblyU2DCSharp_BeginControllerMethodDeclarations.h"

// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleState.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
// UnityEngine.GUIStyleState
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"


// System.Void BeginController::.ctor()
extern "C" void BeginController__ctor_m8 (BeginController_t6 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BeginController::Start()
extern "C" void BeginController_Start_m9 (BeginController_t6 * __this, const MethodInfo* method)
{
	{
		__this->___started_2 = 0;
		Time_set_timeScale_m91(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void BeginController::Update()
extern TypeInfo* Input_t30_il2cpp_TypeInfo_var;
extern "C" void BeginController_Update_m10 (BeginController_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___started_2);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m92(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Time_set_timeScale_m91(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		__this->___started_2 = 1;
	}

IL_0028:
	{
		return;
	}
}
// System.Void BeginController::OnGUI()
extern TypeInfo* GUI_t33_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t31_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var;
extern "C" void BeginController_OnGUI_m11 (BeginController_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		GUIStyle_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GUIStyle_t31 * V_2 = {0};
	GUIStyle_t31 * V_3 = {0};
	{
		bool L_0 = (__this->___started_2);
		if (L_0)
		{
			goto IL_0110;
		}
	}
	{
		Time_set_timeScale_m91(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_width_m93(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)((float)(((float)L_1))/(float)(2.0f)));
		int32_t L_2 = Screen_get_height_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)L_2))/(float)(2.0f)));
		float L_3 = V_0;
		float L_4 = V_1;
		Rect_t32  L_5 = {0};
		Rect__ctor_m95(&L_5, ((float)((float)L_3-(float)(200.0f))), ((float)((float)L_4-(float)(200.0f))), (400.0f), (400.0f), /*hidden argument*/NULL);
		GUILayout_BeginArea_m96(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		GUILayout_FlexibleSpace_m97(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t33_il2cpp_TypeInfo_var);
		GUISkin_t34 * L_6 = GUI_get_skin_m98(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIStyle_t31 * L_7 = GUISkin_get_label_m99(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GUIStyle_set_alignment_m100(L_7, 4, /*hidden argument*/NULL);
		GUIStyle_t31 * L_8 = (GUIStyle_t31 *)il2cpp_codegen_object_new (GUIStyle_t31_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m101(L_8, /*hidden argument*/NULL);
		V_2 = L_8;
		GUIStyle_t31 * L_9 = V_2;
		NullCheck(L_9);
		GUIStyle_set_fontSize_m102(L_9, ((int32_t)32), /*hidden argument*/NULL);
		GUIStyle_t31 * L_10 = V_2;
		NullCheck(L_10);
		GUIStyle_set_fontStyle_m103(L_10, 1, /*hidden argument*/NULL);
		GUIStyle_t31 * L_11 = V_2;
		NullCheck(L_11);
		GUIStyle_set_alignment_m100(L_11, 4, /*hidden argument*/NULL);
		GUIStyle_t31 * L_12 = V_2;
		NullCheck(L_12);
		GUIStyleState_t35 * L_13 = GUIStyle_get_normal_m104(L_12, /*hidden argument*/NULL);
		Color_t36  L_14 = Color_get_white_m105(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		GUIStyleState_set_textColor_m106(L_13, L_14, /*hidden argument*/NULL);
		GUIStyle_t31 * L_15 = V_2;
		GUILayout_Label_m107(NULL /*static, unused*/, (String_t*) &_stringLiteral4, L_15, ((GUILayoutOptionU5BU5D_t37*)SZArrayNew(GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUIStyle_t31 * L_16 = (GUIStyle_t31 *)il2cpp_codegen_object_new (GUIStyle_t31_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m101(L_16, /*hidden argument*/NULL);
		V_3 = L_16;
		GUIStyle_t31 * L_17 = V_3;
		NullCheck(L_17);
		GUIStyle_set_fontSize_m102(L_17, ((int32_t)16), /*hidden argument*/NULL);
		GUIStyle_t31 * L_18 = V_3;
		NullCheck(L_18);
		GUIStyle_set_fontStyle_m103(L_18, 1, /*hidden argument*/NULL);
		GUIStyle_t31 * L_19 = V_3;
		NullCheck(L_19);
		GUIStyle_set_alignment_m100(L_19, 4, /*hidden argument*/NULL);
		GUIStyle_t31 * L_20 = V_3;
		NullCheck(L_20);
		GUIStyleState_t35 * L_21 = GUIStyle_get_normal_m104(L_20, /*hidden argument*/NULL);
		Color_t36  L_22 = Color_get_white_m105(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		GUIStyleState_set_textColor_m106(L_21, L_22, /*hidden argument*/NULL);
		GUIStyle_t31 * L_23 = V_3;
		GUILayout_Label_m107(NULL /*static, unused*/, (String_t*) &_stringLiteral5, L_23, ((GUILayoutOptionU5BU5D_t37*)SZArrayNew(GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		bool L_24 = GUILayout_Button_m108(NULL /*static, unused*/, (String_t*) &_stringLiteral6, ((GUILayoutOptionU5BU5D_t37*)SZArrayNew(GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0106;
		}
	}
	{
		Time_set_timeScale_m91(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		__this->___started_2 = 1;
	}

IL_0106:
	{
		GUILayout_FlexibleSpace_m97(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_EndArea_m109(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0110:
	{
		return;
	}
}
// CameraFollower
#include "AssemblyU2DCSharp_CameraFollower.h"
#ifndef _MSC_VER
#else
#endif
// CameraFollower
#include "AssemblyU2DCSharp_CameraFollowerMethodDeclarations.h"



// System.Void CameraFollower::.ctor()
extern "C" void CameraFollower__ctor_m12 (CameraFollower_t8 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraFollower::Start()
extern "C" void CameraFollower_Start_m13 (CameraFollower_t8 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CameraFollower::Update()
extern "C" void CameraFollower_Update_m14 (CameraFollower_t8 * __this, const MethodInfo* method)
{
	Vector3_t26  V_0 = {0};
	Vector3_t26  V_1 = {0};
	Vector3_t26  V_2 = {0};
	{
		float L_0 = Time_get_timeScale_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		Transform_t7 * L_1 = Component_get_transform_m67(__this, /*hidden argument*/NULL);
		Transform_t7 * L_2 = (__this->___character_2);
		NullCheck(L_2);
		Vector3_t26  L_3 = Transform_get_position_m68(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = ((&V_0)->___x_0);
		Transform_t7 * L_5 = (__this->___character_2);
		NullCheck(L_5);
		Vector3_t26  L_6 = Transform_get_position_m68(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = ((&V_1)->___y_1);
		Transform_t7 * L_8 = (__this->___character_2);
		NullCheck(L_8);
		Vector3_t26  L_9 = Transform_get_position_m68(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = ((&V_2)->___z_2);
		Vector3_t26  L_11 = {0};
		Vector3__ctor_m69(&L_11, L_4, L_7, ((float)((float)L_10-(float)(5.0f))), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m78(L_1, L_11, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// Controller
#include "AssemblyU2DCSharp_ControllerMethodDeclarations.h"

// TimerController
#include "AssemblyU2DCSharp_TimerController.h"
// EndController
#include "AssemblyU2DCSharp_EndController.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// TouchController
#include "AssemblyU2DCSharp_TouchController.h"
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
// TouchController
#include "AssemblyU2DCSharp_TouchControllerMethodDeclarations.h"
struct GameObject_t1;
struct TimerController_t20;
// Declaration !!0 UnityEngine.GameObject::GetComponent<TimerController>()
// !!0 UnityEngine.GameObject::GetComponent<TimerController>()
#define GameObject_GetComponent_TisTimerController_t20_m110(__this, method) (( TimerController_t20 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m61_gshared)(__this, method)
struct GameObject_t1;
struct EndController_t10;
// Declaration !!0 UnityEngine.GameObject::GetComponent<EndController>()
// !!0 UnityEngine.GameObject::GetComponent<EndController>()
#define GameObject_GetComponent_TisEndController_t10_m111(__this, method) (( EndController_t10 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m61_gshared)(__this, method)
struct GameObject_t1;
struct Rigidbody2D_t38;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t38_m112(__this, method) (( Rigidbody2D_t38 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m61_gshared)(__this, method)


// System.Void Controller::.ctor()
extern "C" void Controller__ctor_m15 (Controller_t9 * __this, const MethodInfo* method)
{
	{
		__this->___moveSpeed_3 = (3.0f);
		__this->___energyDecayRate_6 = (0.02f);
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Controller::Start()
extern "C" void Controller_Start_m16 (Controller_t9 * __this, const MethodInfo* method)
{
	{
		__this->___energy_5 = (100.0f);
		__this->___isMoveAllowed_4 = 1;
		return;
	}
}
// System.Void Controller::Update()
extern TypeInfo* TouchController_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t39_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTimerController_t20_m110_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisEndController_t10_m111_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t38_m112_MethodInfo_var;
extern "C" void Controller_Update_m17 (Controller_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchController_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Mathf_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Single_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		GameObject_GetComponent_TisTimerController_t20_m110_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		GameObject_GetComponent_TisEndController_t10_m111_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		GameObject_GetComponent_TisRigidbody2D_t38_m112_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	TimerController_t20 * V_1 = {0};
	EndController_t10 * V_2 = {0};
	Rigidbody2D_t38 * V_3 = {0};
	float V_4 = 0.0f;
	{
		Vector2_t13  L_0 = Vector2_get_zero_m89(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameObject_t1 * L_1 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t7 * L_2 = GameObject_get_transform_m87(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t26  L_3 = Transform_get_position_m68(L_2, /*hidden argument*/NULL);
		Vector2_t13  L_4 = Vector2_op_Implicit_m88(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		float L_5 = Vector2_Distance_m90(NULL /*static, unused*/, L_0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = V_0;
		if ((!(((double)(((double)L_6))) > ((double)(37.5)))))
		{
			goto IL_0096;
		}
	}
	{
		GameObject_t1 * L_7 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t7 * L_8 = GameObject_get_transform_m87(L_7, /*hidden argument*/NULL);
		Vector2_t13  L_9 = Vector2_get_zero_m89(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t26  L_10 = Vector2_op_Implicit_m113(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_m78(L_8, L_10, /*hidden argument*/NULL);
		GameObject_t1 * L_11 = GameObject_Find_m114(NULL /*static, unused*/, (String_t*) &_stringLiteral7, /*hidden argument*/NULL);
		NullCheck(L_11);
		TimerController_t20 * L_12 = GameObject_GetComponent_TisTimerController_t20_m110(L_11, /*hidden argument*/GameObject_GetComponent_TisTimerController_t20_m110_MethodInfo_var);
		V_1 = L_12;
		GameObject_t1 * L_13 = GameObject_Find_m114(NULL /*static, unused*/, (String_t*) &_stringLiteral8, /*hidden argument*/NULL);
		NullCheck(L_13);
		EndController_t10 * L_14 = GameObject_GetComponent_TisEndController_t10_m111(L_13, /*hidden argument*/GameObject_GetComponent_TisEndController_t10_m111_MethodInfo_var);
		V_2 = L_14;
		EndController_t10 * L_15 = V_2;
		TimerController_t20 * L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = (L_16->___currentMinute_3);
		NullCheck(L_15);
		L_15->___minute_3 = L_17;
		EndController_t10 * L_18 = V_2;
		TimerController_t20 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = (L_19->___currentSecond_4);
		NullCheck(L_18);
		L_18->___second_4 = L_20;
		EndController_t10 * L_21 = V_2;
		TimerController_t20 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = (L_22->___currentMillisecond_5);
		NullCheck(L_21);
		L_21->___milliSecond_5 = L_23;
		EndController_t10 * L_24 = V_2;
		NullCheck(L_24);
		L_24->___ended_2 = 1;
		return;
	}

IL_0096:
	{
		float L_25 = Time_get_timeScale_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_25) == ((float)(0.0f)))))
		{
			goto IL_00a6;
		}
	}
	{
		return;
	}

IL_00a6:
	{
		bool L_26 = (__this->___isMoveAllowed_4);
		if (!L_26)
		{
			goto IL_0129;
		}
	}
	{
		GameObject_t1 * L_27 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Rigidbody2D_t38 * L_28 = GameObject_GetComponent_TisRigidbody2D_t38_m112(L_27, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t38_m112_MethodInfo_var);
		V_3 = L_28;
		Rigidbody2D_t38 * L_29 = V_3;
		Rigidbody2D_t38 * L_30 = V_3;
		NullCheck(L_30);
		Vector2_t13  L_31 = Rigidbody2D_get_position_m115(L_30, /*hidden argument*/NULL);
		float L_32 = ((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputX_2;
		float L_33 = (__this->___moveSpeed_3);
		float L_34 = ((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputY_3;
		float L_35 = (__this->___moveSpeed_3);
		Vector2_t13  L_36 = {0};
		Vector2__ctor_m116(&L_36, ((float)((float)L_32*(float)L_33)), ((float)((float)L_34*(float)L_35)), /*hidden argument*/NULL);
		float L_37 = Time_get_fixedDeltaTime_m117(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t13  L_38 = Vector2_op_Multiply_m118(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		Vector2_t13  L_39 = Vector2_op_Addition_m119(NULL /*static, unused*/, L_31, L_38, /*hidden argument*/NULL);
		NullCheck(L_29);
		Rigidbody2D_MovePosition_m120(L_29, L_39, /*hidden argument*/NULL);
		float L_40 = ((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputY_3;
		float L_41 = ((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputX_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		float L_42 = atan2f(L_40, L_41);
		V_4 = ((float)((float)L_42*(float)(57.29578f)));
		Transform_t7 * L_43 = Component_get_transform_m67(__this, /*hidden argument*/NULL);
		float L_44 = V_4;
		Vector3_t26  L_45 = Vector3_get_forward_m121(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t27  L_46 = Quaternion_AngleAxis_m122(NULL /*static, unused*/, ((float)((float)L_44-(float)(90.0f))), L_45, /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_set_rotation_m80(L_43, L_46, /*hidden argument*/NULL);
	}

IL_0129:
	{
		float L_47 = (__this->___energy_5);
		float L_48 = (__this->___energyDecayRate_6);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		float L_49 = Mathf_Max_m123(NULL /*static, unused*/, ((float)((float)L_47-(float)L_48)), (0.0f), /*hidden argument*/NULL);
		__this->___energy_5 = L_49;
		float L_50 = (__this->___energy_5);
		float L_51 = L_50;
		Object_t * L_52 = Box(Single_t39_il2cpp_TypeInfo_var, &L_51);
		MonoBehaviour_print_m124(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// EndController
#include "AssemblyU2DCSharp_EndControllerMethodDeclarations.h"

// HSController
#include "AssemblyU2DCSharp_HSController.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
struct GameObject_t1;
struct HSController_t15;
// Declaration !!0 UnityEngine.GameObject::GetComponent<HSController>()
// !!0 UnityEngine.GameObject::GetComponent<HSController>()
#define GameObject_GetComponent_TisHSController_t15_m125(__this, method) (( HSController_t15 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m61_gshared)(__this, method)


// System.Void EndController::.ctor()
extern "C" void EndController__ctor_m18 (EndController_t10 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EndController::Start()
extern "C" void EndController_Start_m19 (EndController_t10 * __this, const MethodInfo* method)
{
	{
		__this->___ended_2 = 0;
		return;
	}
}
// System.Void EndController::Update()
extern TypeInfo* Input_t30_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisHSController_t15_m125_MethodInfo_var;
extern "C" void EndController_Update_m20 (EndController_t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GameObject_GetComponent_TisHSController_t15_m125_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		s_Il2CppMethodIntialized = true;
	}
	HSController_t15 * V_0 = {0};
	{
		bool L_0 = (__this->___ended_2);
		if (!L_0)
		{
			goto IL_0076;
		}
	}
	{
		Time_set_timeScale_m91(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m92(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0064;
		}
	}
	{
		__this->___ended_2 = 0;
		GameObject_t1 * L_2 = GameObject_Find_m114(NULL /*static, unused*/, (String_t*) &_stringLiteral9, /*hidden argument*/NULL);
		NullCheck(L_2);
		HSController_t15 * L_3 = GameObject_GetComponent_TisHSController_t15_m125(L_2, /*hidden argument*/GameObject_GetComponent_TisHSController_t15_m125_MethodInfo_var);
		V_0 = L_3;
		HSController_t15 * L_4 = V_0;
		int32_t L_5 = (__this->___minute_3);
		NullCheck(L_4);
		L_4->___minute_3 = L_5;
		HSController_t15 * L_6 = V_0;
		int32_t L_7 = (__this->___second_4);
		NullCheck(L_6);
		L_6->___second_4 = L_7;
		HSController_t15 * L_8 = V_0;
		int32_t L_9 = (__this->___milliSecond_5);
		NullCheck(L_8);
		L_8->___milliSecond_5 = L_9;
		HSController_t15 * L_10 = V_0;
		NullCheck(L_10);
		L_10->___isViewing_2 = 1;
		return;
	}

IL_0064:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetKeyDown_m92(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0076;
		}
	}
	{
		Application_LoadLevel_m126(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_0076:
	{
		return;
	}
}
// System.Void EndController::OnGUI()
extern TypeInfo* GUI_t33_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t31_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisHSController_t15_m125_MethodInfo_var;
extern "C" void EndController_OnGUI_m21 (EndController_t10 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		GUIStyle_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		GameObject_GetComponent_TisHSController_t15_m125_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483657);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GUIStyle_t31 * V_2 = {0};
	HSController_t15 * V_3 = {0};
	{
		bool L_0 = (__this->___ended_2);
		if (!L_0)
		{
			goto IL_0166;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m93(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)((float)(((float)L_1))/(float)(2.0f)));
		int32_t L_2 = Screen_get_height_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)L_2))/(float)(2.0f)));
		float L_3 = V_0;
		float L_4 = V_1;
		Rect_t32  L_5 = {0};
		Rect__ctor_m95(&L_5, ((float)((float)L_3-(float)(150.0f))), ((float)((float)L_4-(float)(200.0f))), (300.0f), (400.0f), /*hidden argument*/NULL);
		GUILayout_BeginArea_m96(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		GUILayout_FlexibleSpace_m97(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t33_il2cpp_TypeInfo_var);
		GUISkin_t34 * L_6 = GUI_get_skin_m98(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIStyle_t31 * L_7 = GUISkin_get_label_m99(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GUIStyle_set_alignment_m100(L_7, 4, /*hidden argument*/NULL);
		GUIStyle_t31 * L_8 = (GUIStyle_t31 *)il2cpp_codegen_object_new (GUIStyle_t31_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m101(L_8, /*hidden argument*/NULL);
		V_2 = L_8;
		GUIStyle_t31 * L_9 = V_2;
		NullCheck(L_9);
		GUIStyle_set_fontSize_m102(L_9, ((int32_t)16), /*hidden argument*/NULL);
		GUIStyle_t31 * L_10 = V_2;
		NullCheck(L_10);
		GUIStyle_set_fontStyle_m103(L_10, 1, /*hidden argument*/NULL);
		GUIStyle_t31 * L_11 = V_2;
		NullCheck(L_11);
		GUIStyle_set_alignment_m100(L_11, 4, /*hidden argument*/NULL);
		GUIStyle_t31 * L_12 = V_2;
		NullCheck(L_12);
		GUIStyleState_t35 * L_13 = GUIStyle_get_normal_m104(L_12, /*hidden argument*/NULL);
		Color_t36  L_14 = Color_get_white_m105(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		GUIStyleState_set_textColor_m106(L_13, L_14, /*hidden argument*/NULL);
		ObjectU5BU5D_t40* L_15 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 7));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 0)) = (Object_t *)(String_t*) &_stringLiteral10;
		ObjectU5BU5D_t40* L_16 = L_15;
		int32_t L_17 = (__this->___minute_3);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 1)) = (Object_t *)L_19;
		ObjectU5BU5D_t40* L_20 = L_16;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 2);
		ArrayElementTypeCheck (L_20, (String_t*) &_stringLiteral11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 2)) = (Object_t *)(String_t*) &_stringLiteral11;
		ObjectU5BU5D_t40* L_21 = L_20;
		int32_t L_22 = (__this->___second_4);
		int32_t L_23 = L_22;
		Object_t * L_24 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 3)) = (Object_t *)L_24;
		ObjectU5BU5D_t40* L_25 = L_21;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 4);
		ArrayElementTypeCheck (L_25, (String_t*) &_stringLiteral12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 4)) = (Object_t *)(String_t*) &_stringLiteral12;
		ObjectU5BU5D_t40* L_26 = L_25;
		int32_t L_27 = (__this->___milliSecond_5);
		int32_t L_28 = L_27;
		Object_t * L_29 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 5);
		ArrayElementTypeCheck (L_26, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 5)) = (Object_t *)L_29;
		ObjectU5BU5D_t40* L_30 = L_26;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 6);
		ArrayElementTypeCheck (L_30, (String_t*) &_stringLiteral13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 6)) = (Object_t *)(String_t*) &_stringLiteral13;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = String_Concat_m127(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		GUIStyle_t31 * L_32 = V_2;
		GUILayout_Label_m107(NULL /*static, unused*/, L_31, L_32, ((GUILayoutOptionU5BU5D_t37*)SZArrayNew(GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		bool L_33 = GUILayout_Button_m108(NULL /*static, unused*/, (String_t*) &_stringLiteral14, ((GUILayoutOptionU5BU5D_t37*)SZArrayNew(GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0141;
		}
	}
	{
		__this->___ended_2 = 0;
		GameObject_t1 * L_34 = GameObject_Find_m114(NULL /*static, unused*/, (String_t*) &_stringLiteral9, /*hidden argument*/NULL);
		NullCheck(L_34);
		HSController_t15 * L_35 = GameObject_GetComponent_TisHSController_t15_m125(L_34, /*hidden argument*/GameObject_GetComponent_TisHSController_t15_m125_MethodInfo_var);
		V_3 = L_35;
		HSController_t15 * L_36 = V_3;
		int32_t L_37 = (__this->___minute_3);
		NullCheck(L_36);
		L_36->___minute_3 = L_37;
		HSController_t15 * L_38 = V_3;
		int32_t L_39 = (__this->___second_4);
		NullCheck(L_38);
		L_38->___second_4 = L_39;
		HSController_t15 * L_40 = V_3;
		int32_t L_41 = (__this->___milliSecond_5);
		NullCheck(L_40);
		L_40->___milliSecond_5 = L_41;
		HSController_t15 * L_42 = V_3;
		NullCheck(L_42);
		L_42->___isViewing_2 = 1;
		return;
	}

IL_0141:
	{
		bool L_43 = GUILayout_Button_m108(NULL /*static, unused*/, (String_t*) &_stringLiteral15, ((GUILayoutOptionU5BU5D_t37*)SZArrayNew(GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_015c;
		}
	}
	{
		Application_LoadLevel_m126(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_015c:
	{
		GUILayout_FlexibleSpace_m97(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_EndArea_m109(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0166:
	{
		return;
	}
}
// EnergyController
#include "AssemblyU2DCSharp_EnergyController.h"
#ifndef _MSC_VER
#else
#endif
// EnergyController
#include "AssemblyU2DCSharp_EnergyControllerMethodDeclarations.h"

// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"


// System.Void EnergyController::.ctor()
extern "C" void EnergyController__ctor_m22 (EnergyController_t12 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnergyController::Start()
extern const MethodInfo* GameObject_GetComponent_TisController_t9_m64_MethodInfo_var;
extern "C" void EnergyController_Start_m23 (EnergyController_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisController_t9_m64_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___energyValue_4 = (100.0f);
		__this->___offsetX_7 = (-30.0f);
		__this->___offsetY_8 = (20.0f);
		int32_t L_0 = Screen_get_width_m93(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___offsetX_7);
		int32_t L_2 = Screen_get_height_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___offsetY_8);
		Vector2_t13  L_4 = {0};
		Vector2__ctor_m116(&L_4, ((float)((float)((float)((float)(((float)L_0))/(float)(2.0f)))+(float)L_1)), ((float)((float)((float)((float)(((float)L_2))/(float)(2.0f)))+(float)L_3)), /*hidden argument*/NULL);
		__this->___pos_9 = L_4;
		Vector2_t13  L_5 = {0};
		Vector2__ctor_m116(&L_5, (60.0f), (20.0f), /*hidden argument*/NULL);
		__this->___size_10 = L_5;
		GameObject_t1 * L_6 = (__this->___player_2);
		NullCheck(L_6);
		Controller_t9 * L_7 = GameObject_GetComponent_TisController_t9_m64(L_6, /*hidden argument*/GameObject_GetComponent_TisController_t9_m64_MethodInfo_var);
		__this->___controller_3 = L_7;
		return;
	}
}
// System.Void EnergyController::Update()
extern "C" void EnergyController_Update_m24 (EnergyController_t12 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_timeScale_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		Controller_t9 * L_1 = (__this->___controller_3);
		NullCheck(L_1);
		float L_2 = (L_1->___energy_5);
		__this->___energyValue_4 = ((float)((float)L_2/(float)(100.0f)));
		return;
	}
}
// System.Void EnergyController::OnGUI()
extern TypeInfo* GUI_t33_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t31_il2cpp_TypeInfo_var;
extern "C" void EnergyController_OnGUI_m25 (EnergyController_t12 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		GUIStyle_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	GUIStyle_t31 * V_0 = {0};
	GUIStyle_t31 * V_1 = {0};
	{
		float L_0 = Time_get_timeScale_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t33_il2cpp_TypeInfo_var);
		GUISkin_t34 * L_1 = GUI_get_skin_m98(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		GUIStyle_t31 * L_2 = GUISkin_get_button_m128(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		GUIStyle_t31 * L_3 = (GUIStyle_t31 *)il2cpp_codegen_object_new (GUIStyle_t31_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m101(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		GUIStyle_t31 * L_4 = V_1;
		NullCheck(L_4);
		GUIStyle_set_fontSize_m102(L_4, ((int32_t)9), /*hidden argument*/NULL);
		GUIStyle_t31 * L_5 = V_1;
		NullCheck(L_5);
		GUIStyle_set_fontStyle_m103(L_5, 1, /*hidden argument*/NULL);
		GUIStyle_t31 * L_6 = V_1;
		NullCheck(L_6);
		GUIStyle_set_alignment_m100(L_6, 4, /*hidden argument*/NULL);
		GUIStyle_t31 * L_7 = V_1;
		NullCheck(L_7);
		GUIStyleState_t35 * L_8 = GUIStyle_get_normal_m104(L_7, /*hidden argument*/NULL);
		Color_t36  L_9 = Color_get_black_m129(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		GUIStyleState_set_textColor_m106(L_8, L_9, /*hidden argument*/NULL);
		Vector2_t13 * L_10 = &(__this->___pos_9);
		float L_11 = (L_10->___x_1);
		Vector2_t13 * L_12 = &(__this->___pos_9);
		float L_13 = (L_12->___y_2);
		Vector2_t13 * L_14 = &(__this->___size_10);
		float L_15 = (L_14->___x_1);
		Vector2_t13 * L_16 = &(__this->___size_10);
		float L_17 = (L_16->___y_2);
		Rect_t32  L_18 = {0};
		Rect__ctor_m95(&L_18, L_11, L_13, L_15, L_17, /*hidden argument*/NULL);
		GUIStyle_t31 * L_19 = V_0;
		GUI_BeginGroup_m130(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		Vector2_t13 * L_20 = &(__this->___size_10);
		float L_21 = (L_20->___x_1);
		Vector2_t13 * L_22 = &(__this->___size_10);
		float L_23 = (L_22->___y_2);
		Rect_t32  L_24 = {0};
		Rect__ctor_m95(&L_24, (0.0f), (0.0f), L_21, L_23, /*hidden argument*/NULL);
		Texture2D_t11 * L_25 = (__this->___energyBarEmpty_6);
		GUIStyle_t31 * L_26 = V_0;
		GUI_Box_m131(NULL /*static, unused*/, L_24, L_25, L_26, /*hidden argument*/NULL);
		Vector2_t13 * L_27 = &(__this->___size_10);
		float L_28 = (L_27->___x_1);
		float L_29 = (__this->___energyValue_4);
		Vector2_t13 * L_30 = &(__this->___size_10);
		float L_31 = (L_30->___y_2);
		Rect_t32  L_32 = {0};
		Rect__ctor_m95(&L_32, (0.0f), (0.0f), ((float)((float)L_28*(float)L_29)), L_31, /*hidden argument*/NULL);
		GUIStyle_t31 * L_33 = V_0;
		GUI_BeginGroup_m130(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		Vector2_t13 * L_34 = &(__this->___size_10);
		float L_35 = (L_34->___x_1);
		Vector2_t13 * L_36 = &(__this->___size_10);
		float L_37 = (L_36->___y_2);
		Rect_t32  L_38 = {0};
		Rect__ctor_m95(&L_38, (0.0f), (0.0f), L_35, L_37, /*hidden argument*/NULL);
		Texture2D_t11 * L_39 = (__this->___energyBarFull_5);
		GUIStyle_t31 * L_40 = V_0;
		GUI_Box_m131(NULL /*static, unused*/, L_38, L_39, L_40, /*hidden argument*/NULL);
		GUI_EndGroup_m132(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t13 * L_41 = &(__this->___size_10);
		float L_42 = (L_41->___x_1);
		Rect_t32  L_43 = {0};
		Rect__ctor_m95(&L_43, (0.0f), (4.0f), L_42, (12.0f), /*hidden argument*/NULL);
		float* L_44 = &(__this->___energyValue_4);
		String_t* L_45 = Single_ToString_m72(L_44, (String_t*) &_stringLiteral16, /*hidden argument*/NULL);
		GUIStyle_t31 * L_46 = V_1;
		GUI_Label_m133(NULL /*static, unused*/, L_43, L_45, L_46, /*hidden argument*/NULL);
		GUI_EndGroup_m132(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// FogController
#include "AssemblyU2DCSharp_FogController.h"
#ifndef _MSC_VER
#else
#endif
// FogController
#include "AssemblyU2DCSharp_FogControllerMethodDeclarations.h"



// System.Void FogController::.ctor()
extern "C" void FogController__ctor_m26 (FogController_t14 * __this, const MethodInfo* method)
{
	{
		__this->___maxScale_2 = (100.0f);
		__this->___minScale_3 = (30.0f);
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FogController::Start()
extern const MethodInfo* GameObject_GetComponent_TisController_t9_m64_MethodInfo_var;
extern "C" void FogController_Start_m27 (FogController_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisController_t9_m64_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t1 * L_0 = (__this->___player_4);
		NullCheck(L_0);
		Controller_t9 * L_1 = GameObject_GetComponent_TisController_t9_m64(L_0, /*hidden argument*/GameObject_GetComponent_TisController_t9_m64_MethodInfo_var);
		__this->___controller_5 = L_1;
		return;
	}
}
// System.Void FogController::Update()
extern "C" void FogController_Update_m28 (FogController_t14 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = Time_get_timeScale_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		Controller_t9 * L_1 = (__this->___controller_5);
		NullCheck(L_1);
		float L_2 = (L_1->___energy_5);
		V_0 = ((float)((float)L_2/(float)(100.0f)));
		float L_3 = (__this->___maxScale_2);
		float L_4 = (__this->___minScale_3);
		float L_5 = V_0;
		float L_6 = (__this->___minScale_3);
		V_1 = ((float)((float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5))+(float)L_6));
		Transform_t7 * L_7 = Component_get_transform_m67(__this, /*hidden argument*/NULL);
		float L_8 = V_1;
		float L_9 = V_1;
		Vector3_t26  L_10 = {0};
		Vector3__ctor_m69(&L_10, L_8, L_9, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localScale_m134(L_7, L_10, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// HSController
#include "AssemblyU2DCSharp_HSControllerMethodDeclarations.h"

// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"


// System.Void HSController::.ctor()
extern "C" void HSController__ctor_m29 (HSController_t15 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HSController::Start()
extern "C" void HSController_Start_m30 (HSController_t15 * __this, const MethodInfo* method)
{
	{
		__this->___isViewing_2 = 0;
		return;
	}
}
// System.Void HSController::Update()
extern TypeInfo* Single_t39_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Input_t30_il2cpp_TypeInfo_var;
extern "C" void HSController_Update_m31 (HSController_t15 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t39_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		Input_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = (__this->___isViewing_2);
		if (!L_0)
		{
			goto IL_0252;
		}
	}
	{
		int32_t L_1 = (__this->___minute_3);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = (__this->___second_4);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3 = (__this->___milliSecond_5);
		if (!L_3)
		{
			goto IL_0240;
		}
	}

IL_002c:
	{
		int32_t L_4 = (__this->___minute_3);
		int32_t L_5 = (__this->___second_4);
		int32_t L_6 = (__this->___milliSecond_5);
		V_0 = ((float)((float)((float)((float)((float)((float)(((float)L_4))*(float)(6000.0f)))+(float)((float)((float)(((float)L_5))*(float)(100.0f)))))+(float)(((float)L_6))));
		float L_7 = V_0;
		float L_8 = L_7;
		Object_t * L_9 = Box(Single_t39_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral17, L_9, /*hidden argument*/NULL);
		MonoBehaviour_print_m124(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_00ef;
	}

IL_006c:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral18, L_13, /*hidden argument*/NULL);
		int32_t L_15 = PlayerPrefs_GetInt_m136(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral19, L_18, /*hidden argument*/NULL);
		int32_t L_20 = PlayerPrefs_GetInt_m136(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		Object_t * L_23 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral20, L_23, /*hidden argument*/NULL);
		int32_t L_25 = PlayerPrefs_GetInt_m136(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		int32_t L_26 = V_2;
		if (L_26)
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_27 = V_3;
		if (L_27)
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_28 = V_4;
		if (L_28)
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00f6;
	}

IL_00c7:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		V_5 = ((float)((float)((float)((float)((float)((float)(((float)L_29))*(float)(6000.0f)))+(float)((float)((float)(((float)L_30))*(float)(100.0f)))))+(float)(((float)L_31))));
		float L_32 = V_5;
		float L_33 = V_0;
		if ((!(((float)L_32) > ((float)L_33))))
		{
			goto IL_00eb;
		}
	}
	{
		goto IL_00f6;
	}

IL_00eb:
	{
		int32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_00ef:
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) < ((int32_t)5)))
		{
			goto IL_006c;
		}
	}

IL_00f6:
	{
		int32_t L_36 = V_1;
		if ((((int32_t)L_36) >= ((int32_t)5)))
		{
			goto IL_022b;
		}
	}
	{
		V_6 = 4;
		goto IL_01bb;
	}

IL_0105:
	{
		int32_t L_37 = V_6;
		int32_t L_38 = ((int32_t)((int32_t)L_37-(int32_t)1));
		Object_t * L_39 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_38);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral18, L_39, /*hidden argument*/NULL);
		int32_t L_41 = PlayerPrefs_GetInt_m136(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		V_7 = L_41;
		int32_t L_42 = V_6;
		int32_t L_43 = ((int32_t)((int32_t)L_42-(int32_t)1));
		Object_t * L_44 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral19, L_44, /*hidden argument*/NULL);
		int32_t L_46 = PlayerPrefs_GetInt_m136(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		V_8 = L_46;
		int32_t L_47 = V_6;
		int32_t L_48 = ((int32_t)((int32_t)L_47-(int32_t)1));
		Object_t * L_49 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_48);
		String_t* L_50 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral20, L_49, /*hidden argument*/NULL);
		int32_t L_51 = PlayerPrefs_GetInt_m136(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		V_9 = L_51;
		int32_t L_52 = V_7;
		if (L_52)
		{
			goto IL_016d;
		}
	}
	{
		int32_t L_53 = V_8;
		if (L_53)
		{
			goto IL_016d;
		}
	}
	{
		int32_t L_54 = V_9;
		if (L_54)
		{
			goto IL_016d;
		}
	}
	{
		goto IL_01b5;
	}

IL_016d:
	{
		int32_t L_55 = V_6;
		int32_t L_56 = L_55;
		Object_t * L_57 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_56);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral18, L_57, /*hidden argument*/NULL);
		int32_t L_59 = V_7;
		PlayerPrefs_SetInt_m137(NULL /*static, unused*/, L_58, L_59, /*hidden argument*/NULL);
		int32_t L_60 = V_6;
		int32_t L_61 = L_60;
		Object_t * L_62 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_61);
		String_t* L_63 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral19, L_62, /*hidden argument*/NULL);
		int32_t L_64 = V_8;
		PlayerPrefs_SetInt_m137(NULL /*static, unused*/, L_63, L_64, /*hidden argument*/NULL);
		int32_t L_65 = V_6;
		int32_t L_66 = L_65;
		Object_t * L_67 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_66);
		String_t* L_68 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral20, L_67, /*hidden argument*/NULL);
		int32_t L_69 = V_9;
		PlayerPrefs_SetInt_m137(NULL /*static, unused*/, L_68, L_69, /*hidden argument*/NULL);
	}

IL_01b5:
	{
		int32_t L_70 = V_6;
		V_6 = ((int32_t)((int32_t)L_70-(int32_t)1));
	}

IL_01bb:
	{
		int32_t L_71 = V_6;
		int32_t L_72 = V_1;
		if ((((int32_t)L_71) >= ((int32_t)((int32_t)((int32_t)L_72+(int32_t)1)))))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_73 = V_1;
		int32_t L_74 = L_73;
		Object_t * L_75 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_74);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_76 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral18, L_75, /*hidden argument*/NULL);
		int32_t L_77 = (__this->___minute_3);
		PlayerPrefs_SetInt_m137(NULL /*static, unused*/, L_76, L_77, /*hidden argument*/NULL);
		int32_t L_78 = V_1;
		int32_t L_79 = L_78;
		Object_t * L_80 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_79);
		String_t* L_81 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral19, L_80, /*hidden argument*/NULL);
		int32_t L_82 = (__this->___second_4);
		PlayerPrefs_SetInt_m137(NULL /*static, unused*/, L_81, L_82, /*hidden argument*/NULL);
		int32_t L_83 = V_1;
		int32_t L_84 = L_83;
		Object_t * L_85 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_84);
		String_t* L_86 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral20, L_85, /*hidden argument*/NULL);
		int32_t L_87 = (__this->___milliSecond_5);
		PlayerPrefs_SetInt_m137(NULL /*static, unused*/, L_86, L_87, /*hidden argument*/NULL);
		int32_t L_88 = V_1;
		int32_t L_89 = L_88;
		Object_t * L_90 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_89);
		String_t* L_91 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral21, L_90, /*hidden argument*/NULL);
		MonoBehaviour_print_m124(NULL /*static, unused*/, L_91, /*hidden argument*/NULL);
	}

IL_022b:
	{
		__this->___minute_3 = 0;
		__this->___second_4 = 0;
		__this->___milliSecond_5 = 0;
	}

IL_0240:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		bool L_92 = Input_GetKeyDown_m92(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_0252;
		}
	}
	{
		Application_LoadLevel_m126(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_0252:
	{
		return;
	}
}
// System.Void HSController::OnGUI()
extern TypeInfo* GUI_t33_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern "C" void HSController_OnGUI_m32 (HSController_t15 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		bool L_0 = (__this->___isViewing_2);
		if (!L_0)
		{
			goto IL_0178;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m93(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)((float)(((float)L_1))/(float)(2.0f)));
		int32_t L_2 = Screen_get_height_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)L_2))/(float)(2.0f)));
		float L_3 = V_0;
		float L_4 = V_1;
		Rect_t32  L_5 = {0};
		Rect__ctor_m95(&L_5, ((float)((float)L_3-(float)(100.0f))), ((float)((float)L_4-(float)(200.0f))), (200.0f), (400.0f), /*hidden argument*/NULL);
		GUILayout_BeginArea_m96(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		GUILayout_FlexibleSpace_m97(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t33_il2cpp_TypeInfo_var);
		GUISkin_t34 * L_6 = GUI_get_skin_m98(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIStyle_t31 * L_7 = GUISkin_get_label_m99(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GUIStyle_set_alignment_m100(L_7, 4, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t37* L_8 = ((GUILayoutOptionU5BU5D_t37*)SZArrayNew(GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var, 1));
		GUILayoutOption_t42 * L_9 = GUILayout_Width_m138(NULL /*static, unused*/, (200.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((GUILayoutOption_t42 **)(GUILayoutOption_t42 **)SZArrayLdElema(L_8, 0)) = (GUILayoutOption_t42 *)L_9;
		GUILayout_Label_m139(NULL /*static, unused*/, (String_t*) &_stringLiteral22, L_8, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_014c;
	}

IL_0080:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral18, L_12, /*hidden argument*/NULL);
		int32_t L_14 = PlayerPrefs_GetInt_m136(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		Object_t * L_17 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral19, L_17, /*hidden argument*/NULL);
		int32_t L_19 = PlayerPrefs_GetInt_m136(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		int32_t L_20 = V_2;
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23 = String_Concat_m135(NULL /*static, unused*/, (String_t*) &_stringLiteral20, L_22, /*hidden argument*/NULL);
		int32_t L_24 = PlayerPrefs_GetInt_m136(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		int32_t L_25 = V_3;
		if (L_25)
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_26 = V_4;
		if (L_26)
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_27 = V_5;
		if (L_27)
		{
			goto IL_00dd;
		}
	}
	{
		goto IL_0153;
	}

IL_00dd:
	{
		ObjectU5BU5D_t40* L_28 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 8));
		int32_t L_29 = V_2;
		int32_t L_30 = ((int32_t)((int32_t)L_29+(int32_t)1));
		Object_t * L_31 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 0);
		ArrayElementTypeCheck (L_28, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, 0)) = (Object_t *)L_31;
		ObjectU5BU5D_t40* L_32 = L_28;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 1);
		ArrayElementTypeCheck (L_32, (String_t*) &_stringLiteral23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 1)) = (Object_t *)(String_t*) &_stringLiteral23;
		ObjectU5BU5D_t40* L_33 = L_32;
		int32_t L_34 = V_3;
		int32_t L_35 = L_34;
		Object_t * L_36 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 2);
		ArrayElementTypeCheck (L_33, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 2)) = (Object_t *)L_36;
		ObjectU5BU5D_t40* L_37 = L_33;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 3);
		ArrayElementTypeCheck (L_37, (String_t*) &_stringLiteral24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 3)) = (Object_t *)(String_t*) &_stringLiteral24;
		ObjectU5BU5D_t40* L_38 = L_37;
		int32_t L_39 = V_4;
		int32_t L_40 = L_39;
		Object_t * L_41 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 4);
		ArrayElementTypeCheck (L_38, L_41);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, 4)) = (Object_t *)L_41;
		ObjectU5BU5D_t40* L_42 = L_38;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 5);
		ArrayElementTypeCheck (L_42, (String_t*) &_stringLiteral12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 5)) = (Object_t *)(String_t*) &_stringLiteral12;
		ObjectU5BU5D_t40* L_43 = L_42;
		int32_t L_44 = V_5;
		int32_t L_45 = L_44;
		Object_t * L_46 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 6);
		ArrayElementTypeCheck (L_43, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, 6)) = (Object_t *)L_46;
		ObjectU5BU5D_t40* L_47 = L_43;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 7);
		ArrayElementTypeCheck (L_47, (String_t*) &_stringLiteral25);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_47, 7)) = (Object_t *)(String_t*) &_stringLiteral25;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m127(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t37* L_49 = ((GUILayoutOptionU5BU5D_t37*)SZArrayNew(GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var, 1));
		GUILayoutOption_t42 * L_50 = GUILayout_Width_m138(NULL /*static, unused*/, (200.0f), /*hidden argument*/NULL);
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 0);
		ArrayElementTypeCheck (L_49, L_50);
		*((GUILayoutOption_t42 **)(GUILayoutOption_t42 **)SZArrayLdElema(L_49, 0)) = (GUILayoutOption_t42 *)L_50;
		GUILayout_Label_m139(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
		int32_t L_51 = V_2;
		V_2 = ((int32_t)((int32_t)L_51+(int32_t)1));
	}

IL_014c:
	{
		int32_t L_52 = V_2;
		if ((((int32_t)L_52) < ((int32_t)5)))
		{
			goto IL_0080;
		}
	}

IL_0153:
	{
		bool L_53 = GUILayout_Button_m108(NULL /*static, unused*/, (String_t*) &_stringLiteral15, ((GUILayoutOptionU5BU5D_t37*)SZArrayNew(GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_016e;
		}
	}
	{
		Application_LoadLevel_m126(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_016e:
	{
		GUILayout_FlexibleSpace_m97(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_EndArea_m109(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0178:
	{
		return;
	}
}
// MazeRotator
#include "AssemblyU2DCSharp_MazeRotator.h"
#ifndef _MSC_VER
#else
#endif
// MazeRotator
#include "AssemblyU2DCSharp_MazeRotatorMethodDeclarations.h"

// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// ZombieSpawner
#include "AssemblyU2DCSharp_ZombieSpawner.h"
// UnityEngine.RigidbodyConstraints2D
#include "UnityEngine_UnityEngine_RigidbodyConstraints2D.h"
// ZombieAI
#include "AssemblyU2DCSharp_ZombieAI.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
struct Component_t43;
struct AudioSource_t17;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t43;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m141_gshared (Component_t43 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m141(__this, method) (( Object_t * (*) (Component_t43 *, const MethodInfo*))Component_GetComponent_TisObject_t_m141_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t17_m140(__this, method) (( AudioSource_t17 * (*) (Component_t43 *, const MethodInfo*))Component_GetComponent_TisObject_t_m141_gshared)(__this, method)
struct GameObject_t1;
struct ZombieSpawner_t23;
// Declaration !!0 UnityEngine.GameObject::GetComponent<ZombieSpawner>()
// !!0 UnityEngine.GameObject::GetComponent<ZombieSpawner>()
#define GameObject_GetComponent_TisZombieSpawner_t23_m142(__this, method) (( ZombieSpawner_t23 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m61_gshared)(__this, method)
struct GameObject_t1;
struct ZombieAI_t22;
// Declaration !!0 UnityEngine.GameObject::GetComponent<ZombieAI>()
// !!0 UnityEngine.GameObject::GetComponent<ZombieAI>()
#define GameObject_GetComponent_TisZombieAI_t22_m143(__this, method) (( ZombieAI_t22 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m61_gshared)(__this, method)


// System.Void MazeRotator::.ctor()
extern "C" void MazeRotator__ctor_m33 (MazeRotator_t18 * __this, const MethodInfo* method)
{
	{
		__this->___DEFAULT_COUNTER_2 = ((int32_t)300);
		__this->___DEFAULT_ROTATE_COUNTER_3 = ((int32_t)45);
		__this->___BLINK_RESET_COUNTER_4 = ((int32_t)10);
		__this->___UNBLINK_RESET_COUNTER_5 = ((int32_t)15);
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MazeRotator::Start()
extern const MethodInfo* Component_GetComponent_TisAudioSource_t17_m140_MethodInfo_var;
extern "C" void MazeRotator_Start_m34 (MazeRotator_t18 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAudioSource_t17_m140_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483658);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___isRotate_6 = 0;
		__this->___isDisplayWarning_7 = 0;
		__this->___isBlinking_8 = 0;
		__this->___blinkCounter_9 = 0;
		int32_t L_0 = Random_Range_m86(NULL /*static, unused*/, 1, 5, /*hidden argument*/NULL);
		int32_t L_1 = (__this->___DEFAULT_COUNTER_2);
		__this->___counter_10 = ((int32_t)((int32_t)L_0*(int32_t)L_1));
		__this->___rotateCounter_11 = 0;
		AudioSource_t17 * L_2 = Component_GetComponent_TisAudioSource_t17_m140(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t17_m140_MethodInfo_var);
		__this->___audio_20 = L_2;
		return;
	}
}
// System.Void MazeRotator::Update()
extern const MethodInfo* GameObject_GetComponent_TisZombieSpawner_t23_m142_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBatterySpawner_t5_m62_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisController_t9_m64_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t38_m112_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisZombieAI_t22_m143_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBatteryController_t2_m85_MethodInfo_var;
extern "C" void MazeRotator_Update_m35 (MazeRotator_t18 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisZombieSpawner_t23_m142_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483659);
		GameObject_GetComponent_TisBatterySpawner_t5_m62_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		GameObject_GetComponent_TisController_t9_m64_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		GameObject_GetComponent_TisRigidbody2D_t38_m112_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		GameObject_GetComponent_TisZombieAI_t22_m143_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483660);
		GameObject_GetComponent_TisBatteryController_t2_m85_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t4 * V_0 = {0};
	List_1_t4 * V_1 = {0};
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	{
		float L_0 = Time_get_timeScale_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		GameObject_t1 * L_1 = (__this->___zombieSpawner_16);
		NullCheck(L_1);
		ZombieSpawner_t23 * L_2 = GameObject_GetComponent_TisZombieSpawner_t23_m142(L_1, /*hidden argument*/GameObject_GetComponent_TisZombieSpawner_t23_m142_MethodInfo_var);
		NullCheck(L_2);
		List_1_t4 * L_3 = (L_2->___zombies_4);
		V_0 = L_3;
		GameObject_t1 * L_4 = (__this->___batterySpawner_17);
		NullCheck(L_4);
		BatterySpawner_t5 * L_5 = GameObject_GetComponent_TisBatterySpawner_t5_m62(L_4, /*hidden argument*/GameObject_GetComponent_TisBatterySpawner_t5_m62_MethodInfo_var);
		NullCheck(L_5);
		List_1_t4 * L_6 = (L_5->___batteries_4);
		V_1 = L_6;
		int32_t L_7 = (__this->___counter_10);
		if (L_7)
		{
			goto IL_006c;
		}
	}
	{
		bool L_8 = (__this->___isRotate_6);
		if (L_8)
		{
			goto IL_006c;
		}
	}
	{
		__this->___isRotate_6 = 1;
		int32_t L_9 = (__this->___DEFAULT_ROTATE_COUNTER_3);
		__this->___rotateCounter_11 = L_9;
		int32_t L_10 = Random_Range_m86(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		__this->___rotateDirection_14 = ((int32_t)((int32_t)((int32_t)((int32_t)L_10*(int32_t)2))-(int32_t)1));
	}

IL_006c:
	{
		int32_t L_11 = (__this->___rotateCounter_11);
		if (L_11)
		{
			goto IL_009d;
		}
	}
	{
		bool L_12 = (__this->___isRotate_6);
		if (!L_12)
		{
			goto IL_009d;
		}
	}
	{
		__this->___isRotate_6 = 0;
		int32_t L_13 = Random_Range_m86(NULL /*static, unused*/, 1, 5, /*hidden argument*/NULL);
		int32_t L_14 = (__this->___DEFAULT_COUNTER_2);
		__this->___counter_10 = ((int32_t)((int32_t)L_13*(int32_t)L_14));
	}

IL_009d:
	{
		bool L_15 = (__this->___isRotate_6);
		if (!L_15)
		{
			goto IL_034f;
		}
	}
	{
		Vector2_t13  L_16 = {0};
		Vector2__ctor_m116(&L_16, (0.0f), (0.0f), /*hidden argument*/NULL);
		GameObject_t1 * L_17 = (__this->___character_15);
		NullCheck(L_17);
		Transform_t7 * L_18 = GameObject_get_transform_m87(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t26  L_19 = Transform_get_position_m68(L_18, /*hidden argument*/NULL);
		Vector2_t13  L_20 = Vector2_op_Implicit_m88(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		float L_21 = Vector2_Distance_m90(NULL /*static, unused*/, L_16, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		float L_22 = V_2;
		float L_23 = (__this->___innerRadius_12);
		if ((!(((float)L_22) >= ((float)L_23))))
		{
			goto IL_016a;
		}
	}
	{
		float L_24 = V_2;
		float L_25 = (__this->___outerRadius_13);
		if ((!(((float)L_24) < ((float)L_25))))
		{
			goto IL_016a;
		}
	}
	{
		__this->___isDisplayWarning_7 = 1;
		AudioSource_t17 * L_26 = (__this->___audio_20);
		NullCheck(L_26);
		bool L_27 = AudioSource_get_isPlaying_m144(L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_010c;
		}
	}
	{
		AudioSource_t17 * L_28 = (__this->___audio_20);
		NullCheck(L_28);
		AudioSource_Play_m145(L_28, /*hidden argument*/NULL);
	}

IL_010c:
	{
		GameObject_t1 * L_29 = (__this->___character_15);
		NullCheck(L_29);
		Controller_t9 * L_30 = GameObject_GetComponent_TisController_t9_m64(L_29, /*hidden argument*/GameObject_GetComponent_TisController_t9_m64_MethodInfo_var);
		NullCheck(L_30);
		L_30->___isMoveAllowed_4 = 0;
		GameObject_t1 * L_31 = (__this->___character_15);
		NullCheck(L_31);
		Rigidbody2D_t38 * L_32 = GameObject_GetComponent_TisRigidbody2D_t38_m112(L_31, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t38_m112_MethodInfo_var);
		Vector2_t13  L_33 = Vector2_get_zero_m89(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_32);
		Rigidbody2D_set_velocity_m146(L_32, L_33, /*hidden argument*/NULL);
		GameObject_t1 * L_34 = (__this->___character_15);
		NullCheck(L_34);
		Rigidbody2D_t38 * L_35 = GameObject_GetComponent_TisRigidbody2D_t38_m112(L_34, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t38_m112_MethodInfo_var);
		NullCheck(L_35);
		Rigidbody2D_set_constraints_m147(L_35, 4, /*hidden argument*/NULL);
		GameObject_t1 * L_36 = (__this->___character_15);
		NullCheck(L_36);
		Transform_t7 * L_37 = GameObject_get_transform_m87(L_36, /*hidden argument*/NULL);
		Vector3_t26  L_38 = Vector3_get_zero_m148(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t26  L_39 = Vector3_get_forward_m121(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_40 = (__this->___rotateDirection_14);
		NullCheck(L_37);
		Transform_RotateAround_m149(L_37, L_38, L_39, ((float)((float)(((float)L_40))*(float)(1.0f))), /*hidden argument*/NULL);
	}

IL_016a:
	{
		V_3 = 0;
		goto IL_021f;
	}

IL_0171:
	{
		List_1_t4 * L_41 = V_0;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		GameObject_t1 * L_43 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_41, L_42);
		bool L_44 = Object_op_Equality_m150(NULL /*static, unused*/, L_43, (Object_t28 *)NULL, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0188;
		}
	}
	{
		goto IL_022b;
	}

IL_0188:
	{
		Vector2_t13  L_45 = {0};
		Vector2__ctor_m116(&L_45, (0.0f), (0.0f), /*hidden argument*/NULL);
		List_1_t4 * L_46 = V_0;
		int32_t L_47 = V_3;
		NullCheck(L_46);
		GameObject_t1 * L_48 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_46, L_47);
		NullCheck(L_48);
		Transform_t7 * L_49 = GameObject_get_transform_m87(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_t26  L_50 = Transform_get_position_m68(L_49, /*hidden argument*/NULL);
		Vector2_t13  L_51 = Vector2_op_Implicit_m88(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		float L_52 = Vector2_Distance_m90(NULL /*static, unused*/, L_45, L_51, /*hidden argument*/NULL);
		V_2 = L_52;
		float L_53 = V_2;
		float L_54 = (__this->___innerRadius_12);
		if ((!(((float)L_53) >= ((float)L_54))))
		{
			goto IL_021b;
		}
	}
	{
		float L_55 = V_2;
		float L_56 = (__this->___outerRadius_13);
		if ((!(((float)L_55) < ((float)L_56))))
		{
			goto IL_021b;
		}
	}
	{
		List_1_t4 * L_57 = V_0;
		int32_t L_58 = V_3;
		NullCheck(L_57);
		GameObject_t1 * L_59 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_57, L_58);
		NullCheck(L_59);
		ZombieAI_t22 * L_60 = GameObject_GetComponent_TisZombieAI_t22_m143(L_59, /*hidden argument*/GameObject_GetComponent_TisZombieAI_t22_m143_MethodInfo_var);
		NullCheck(L_60);
		L_60->___isMoveAllowed_8 = 0;
		List_1_t4 * L_61 = V_0;
		int32_t L_62 = V_3;
		NullCheck(L_61);
		GameObject_t1 * L_63 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_61, L_62);
		NullCheck(L_63);
		Rigidbody2D_t38 * L_64 = GameObject_GetComponent_TisRigidbody2D_t38_m112(L_63, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t38_m112_MethodInfo_var);
		Vector2_t13  L_65 = Vector2_get_zero_m89(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_64);
		Rigidbody2D_set_velocity_m146(L_64, L_65, /*hidden argument*/NULL);
		List_1_t4 * L_66 = V_0;
		int32_t L_67 = V_3;
		NullCheck(L_66);
		GameObject_t1 * L_68 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_66, L_67);
		NullCheck(L_68);
		Transform_t7 * L_69 = GameObject_get_transform_m87(L_68, /*hidden argument*/NULL);
		Vector3_t26  L_70 = Vector3_get_zero_m148(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t26  L_71 = Vector3_get_forward_m121(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_72 = (__this->___rotateDirection_14);
		NullCheck(L_69);
		Transform_RotateAround_m149(L_69, L_70, L_71, ((float)((float)(((float)L_72))*(float)(1.0f))), /*hidden argument*/NULL);
	}

IL_021b:
	{
		int32_t L_73 = V_3;
		V_3 = ((int32_t)((int32_t)L_73+(int32_t)1));
	}

IL_021f:
	{
		int32_t L_74 = V_3;
		List_1_t4 * L_75 = V_0;
		NullCheck(L_75);
		int32_t L_76 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_75);
		if ((((int32_t)L_74) < ((int32_t)L_76)))
		{
			goto IL_0171;
		}
	}

IL_022b:
	{
		V_4 = 0;
		goto IL_0308;
	}

IL_0233:
	{
		List_1_t4 * L_77 = V_1;
		int32_t L_78 = V_4;
		NullCheck(L_77);
		GameObject_t1 * L_79 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_77, L_78);
		bool L_80 = Object_op_Equality_m150(NULL /*static, unused*/, L_79, (Object_t28 *)NULL, /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_024b;
		}
	}
	{
		goto IL_0315;
	}

IL_024b:
	{
		Vector2_t13  L_81 = {0};
		Vector2__ctor_m116(&L_81, (0.0f), (0.0f), /*hidden argument*/NULL);
		List_1_t4 * L_82 = V_1;
		int32_t L_83 = V_4;
		NullCheck(L_82);
		GameObject_t1 * L_84 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_82, L_83);
		NullCheck(L_84);
		Transform_t7 * L_85 = GameObject_get_transform_m87(L_84, /*hidden argument*/NULL);
		NullCheck(L_85);
		Vector3_t26  L_86 = Transform_get_position_m68(L_85, /*hidden argument*/NULL);
		Vector2_t13  L_87 = Vector2_op_Implicit_m88(NULL /*static, unused*/, L_86, /*hidden argument*/NULL);
		float L_88 = Vector2_Distance_m90(NULL /*static, unused*/, L_81, L_87, /*hidden argument*/NULL);
		V_2 = L_88;
		float L_89 = V_2;
		float L_90 = (__this->___innerRadius_12);
		if ((!(((float)L_89) >= ((float)L_90))))
		{
			goto IL_0302;
		}
	}
	{
		float L_91 = V_2;
		float L_92 = (__this->___outerRadius_13);
		if ((!(((float)L_91) < ((float)L_92))))
		{
			goto IL_0302;
		}
	}
	{
		List_1_t4 * L_93 = V_1;
		int32_t L_94 = V_4;
		NullCheck(L_93);
		GameObject_t1 * L_95 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_93, L_94);
		NullCheck(L_95);
		Rigidbody2D_t38 * L_96 = GameObject_GetComponent_TisRigidbody2D_t38_m112(L_95, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t38_m112_MethodInfo_var);
		Vector2_t13  L_97 = Vector2_get_zero_m89(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_96);
		Rigidbody2D_set_velocity_m146(L_96, L_97, /*hidden argument*/NULL);
		List_1_t4 * L_98 = V_1;
		int32_t L_99 = V_4;
		NullCheck(L_98);
		GameObject_t1 * L_100 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_98, L_99);
		NullCheck(L_100);
		Transform_t7 * L_101 = GameObject_get_transform_m87(L_100, /*hidden argument*/NULL);
		Vector3_t26  L_102 = Vector3_get_zero_m148(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t26  L_103 = Vector3_get_forward_m121(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_104 = (__this->___rotateDirection_14);
		NullCheck(L_101);
		Transform_RotateAround_m149(L_101, L_102, L_103, ((float)((float)(((float)L_104))*(float)(1.0f))), /*hidden argument*/NULL);
		List_1_t4 * L_105 = V_1;
		int32_t L_106 = V_4;
		NullCheck(L_105);
		GameObject_t1 * L_107 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_105, L_106);
		NullCheck(L_107);
		BatteryController_t2 * L_108 = GameObject_GetComponent_TisBatteryController_t2_m85(L_107, /*hidden argument*/GameObject_GetComponent_TisBatteryController_t2_m85_MethodInfo_var);
		NullCheck(L_108);
		GameObject_t1 * L_109 = (L_108->___energyLabel_4);
		NullCheck(L_109);
		Transform_t7 * L_110 = GameObject_get_transform_m87(L_109, /*hidden argument*/NULL);
		Vector3_t26  L_111 = Vector3_get_zero_m148(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t26  L_112 = Vector3_get_forward_m121(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_113 = (__this->___rotateDirection_14);
		NullCheck(L_110);
		Transform_RotateAround_m149(L_110, L_111, L_112, ((float)((float)(((float)L_113))*(float)(1.0f))), /*hidden argument*/NULL);
	}

IL_0302:
	{
		int32_t L_114 = V_4;
		V_4 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_0308:
	{
		int32_t L_115 = V_4;
		List_1_t4 * L_116 = V_1;
		NullCheck(L_116);
		int32_t L_117 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_116);
		if ((((int32_t)L_115) < ((int32_t)L_117)))
		{
			goto IL_0233;
		}
	}

IL_0315:
	{
		Transform_t7 * L_118 = Component_get_transform_m67(__this, /*hidden argument*/NULL);
		int32_t L_119 = (__this->___rotateDirection_14);
		Vector3_t26  L_120 = {0};
		Vector3__ctor_m69(&L_120, (0.0f), (0.0f), ((float)((float)(((float)L_119))*(float)(1.0f))), /*hidden argument*/NULL);
		NullCheck(L_118);
		Transform_Rotate_m151(L_118, L_120, /*hidden argument*/NULL);
		int32_t L_121 = (__this->___rotateCounter_11);
		__this->___rotateCounter_11 = ((int32_t)((int32_t)L_121-(int32_t)1));
		goto IL_0458;
	}

IL_034f:
	{
		Vector2_t13  L_122 = {0};
		Vector2__ctor_m116(&L_122, (0.0f), (0.0f), /*hidden argument*/NULL);
		GameObject_t1 * L_123 = (__this->___character_15);
		NullCheck(L_123);
		Transform_t7 * L_124 = GameObject_get_transform_m87(L_123, /*hidden argument*/NULL);
		NullCheck(L_124);
		Vector3_t26  L_125 = Transform_get_position_m68(L_124, /*hidden argument*/NULL);
		Vector2_t13  L_126 = Vector2_op_Implicit_m88(NULL /*static, unused*/, L_125, /*hidden argument*/NULL);
		float L_127 = Vector2_Distance_m90(NULL /*static, unused*/, L_122, L_126, /*hidden argument*/NULL);
		V_5 = L_127;
		float L_128 = V_5;
		float L_129 = (__this->___innerRadius_12);
		if ((!(((float)L_128) >= ((float)L_129))))
		{
			goto IL_03bd;
		}
	}
	{
		float L_130 = V_5;
		float L_131 = (__this->___outerRadius_13);
		if ((!(((float)L_130) < ((float)L_131))))
		{
			goto IL_03bd;
		}
	}
	{
		__this->___isDisplayWarning_7 = 0;
		GameObject_t1 * L_132 = (__this->___character_15);
		NullCheck(L_132);
		Controller_t9 * L_133 = GameObject_GetComponent_TisController_t9_m64(L_132, /*hidden argument*/GameObject_GetComponent_TisController_t9_m64_MethodInfo_var);
		NullCheck(L_133);
		L_133->___isMoveAllowed_4 = 1;
		GameObject_t1 * L_134 = (__this->___character_15);
		NullCheck(L_134);
		Rigidbody2D_t38 * L_135 = GameObject_GetComponent_TisRigidbody2D_t38_m112(L_134, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t38_m112_MethodInfo_var);
		NullCheck(L_135);
		Rigidbody2D_set_constraints_m147(L_135, 0, /*hidden argument*/NULL);
	}

IL_03bd:
	{
		V_6 = 0;
		goto IL_043d;
	}

IL_03c5:
	{
		List_1_t4 * L_136 = V_0;
		int32_t L_137 = V_6;
		NullCheck(L_136);
		GameObject_t1 * L_138 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_136, L_137);
		bool L_139 = Object_op_Equality_m150(NULL /*static, unused*/, L_138, (Object_t28 *)NULL, /*hidden argument*/NULL);
		if (!L_139)
		{
			goto IL_03dd;
		}
	}
	{
		goto IL_044a;
	}

IL_03dd:
	{
		Vector2_t13  L_140 = {0};
		Vector2__ctor_m116(&L_140, (0.0f), (0.0f), /*hidden argument*/NULL);
		List_1_t4 * L_141 = V_0;
		int32_t L_142 = V_6;
		NullCheck(L_141);
		GameObject_t1 * L_143 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_141, L_142);
		NullCheck(L_143);
		Transform_t7 * L_144 = GameObject_get_transform_m87(L_143, /*hidden argument*/NULL);
		NullCheck(L_144);
		Vector3_t26  L_145 = Transform_get_position_m68(L_144, /*hidden argument*/NULL);
		Vector2_t13  L_146 = Vector2_op_Implicit_m88(NULL /*static, unused*/, L_145, /*hidden argument*/NULL);
		float L_147 = Vector2_Distance_m90(NULL /*static, unused*/, L_140, L_146, /*hidden argument*/NULL);
		V_5 = L_147;
		float L_148 = V_5;
		float L_149 = (__this->___innerRadius_12);
		if ((!(((float)L_148) >= ((float)L_149))))
		{
			goto IL_0437;
		}
	}
	{
		float L_150 = V_5;
		float L_151 = (__this->___outerRadius_13);
		if ((!(((float)L_150) < ((float)L_151))))
		{
			goto IL_0437;
		}
	}
	{
		List_1_t4 * L_152 = V_0;
		int32_t L_153 = V_6;
		NullCheck(L_152);
		GameObject_t1 * L_154 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_152, L_153);
		NullCheck(L_154);
		ZombieAI_t22 * L_155 = GameObject_GetComponent_TisZombieAI_t22_m143(L_154, /*hidden argument*/GameObject_GetComponent_TisZombieAI_t22_m143_MethodInfo_var);
		NullCheck(L_155);
		L_155->___isMoveAllowed_8 = 1;
	}

IL_0437:
	{
		int32_t L_156 = V_6;
		V_6 = ((int32_t)((int32_t)L_156+(int32_t)1));
	}

IL_043d:
	{
		int32_t L_157 = V_6;
		List_1_t4 * L_158 = V_0;
		NullCheck(L_158);
		int32_t L_159 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_158);
		if ((((int32_t)L_157) < ((int32_t)L_159)))
		{
			goto IL_03c5;
		}
	}

IL_044a:
	{
		int32_t L_160 = (__this->___counter_10);
		__this->___counter_10 = ((int32_t)((int32_t)L_160-(int32_t)1));
	}

IL_0458:
	{
		return;
	}
}
// System.Void MazeRotator::FixedUpdate()
extern "C" void MazeRotator_FixedUpdate_m36 (MazeRotator_t18 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isBlinking_8);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_1 = (__this->___blinkCounter_9);
		int32_t L_2 = (__this->___BLINK_RESET_COUNTER_4);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_002a;
		}
	}
	{
		__this->___isBlinking_8 = 0;
		__this->___blinkCounter_9 = 0;
	}

IL_002a:
	{
		bool L_3 = (__this->___isBlinking_8);
		if (L_3)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_4 = (__this->___blinkCounter_9);
		int32_t L_5 = (__this->___UNBLINK_RESET_COUNTER_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0054;
		}
	}
	{
		__this->___isBlinking_8 = 1;
		__this->___blinkCounter_9 = 0;
	}

IL_0054:
	{
		int32_t L_6 = (__this->___blinkCounter_9);
		__this->___blinkCounter_9 = ((int32_t)((int32_t)L_6+(int32_t)1));
		return;
	}
}
// System.Void MazeRotator::OnGUI()
extern TypeInfo* GUI_t33_il2cpp_TypeInfo_var;
extern "C" void MazeRotator_OnGUI_m37 (MazeRotator_t18 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = Time_get_timeScale_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		bool L_1 = (__this->___isDisplayWarning_7);
		if (!L_1)
		{
			goto IL_006c;
		}
	}
	{
		bool L_2 = (__this->___isBlinking_8);
		if (L_2)
		{
			goto IL_006c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t33_il2cpp_TypeInfo_var);
		GUI_set_depth_m152(NULL /*static, unused*/, ((int32_t)-10), /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m93(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t32  L_5 = {0};
		Rect__ctor_m95(&L_5, ((float)((float)((float)((float)(((float)L_3))/(float)(2.0f)))-(float)(100.0f))), ((float)((float)((float)((float)(((float)L_4))/(float)(2.0f)))-(float)(50.0f))), (200.0f), (100.0f), /*hidden argument*/NULL);
		Texture2D_t11 * L_6 = (__this->___warningTexture_19);
		GUI_DrawTexture_m153(NULL /*static, unused*/, L_5, L_6, 2, /*hidden argument*/NULL);
	}

IL_006c:
	{
		return;
	}
}
// PauseController
#include "AssemblyU2DCSharp_PauseController.h"
#ifndef _MSC_VER
#else
#endif
// PauseController
#include "AssemblyU2DCSharp_PauseControllerMethodDeclarations.h"



// System.Void PauseController::.ctor()
extern "C" void PauseController__ctor_m38 (PauseController_t19 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseController::Start()
extern "C" void PauseController_Start_m39 (PauseController_t19 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PauseController::Update()
extern TypeInfo* Input_t30_il2cpp_TypeInfo_var;
extern "C" void PauseController_Update_m40 (PauseController_t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m92(NULL /*static, unused*/, ((int32_t)112), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = PauseController_TogglePause_m42(__this, /*hidden argument*/NULL);
		__this->___paused_2 = L_1;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m92(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		Application_LoadLevel_m126(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void PauseController::OnGUI()
extern TypeInfo* GUI_t33_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var;
extern "C" void PauseController_OnGUI_m41 (PauseController_t19 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		bool L_0 = (__this->___paused_2);
		if (!L_0)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m93(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)((float)(((float)L_1))/(float)(2.0f)));
		int32_t L_2 = Screen_get_height_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)L_2))/(float)(2.0f)));
		float L_3 = V_0;
		float L_4 = V_1;
		Rect_t32  L_5 = {0};
		Rect__ctor_m95(&L_5, ((float)((float)L_3-(float)(100.0f))), ((float)((float)L_4-(float)(100.0f))), (200.0f), (200.0f), /*hidden argument*/NULL);
		GUILayout_BeginArea_m96(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		GUILayout_FlexibleSpace_m97(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t33_il2cpp_TypeInfo_var);
		GUISkin_t34 * L_6 = GUI_get_skin_m98(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIStyle_t31 * L_7 = GUISkin_get_label_m99(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GUIStyle_set_alignment_m100(L_7, 4, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t37* L_8 = ((GUILayoutOptionU5BU5D_t37*)SZArrayNew(GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var, 1));
		GUILayoutOption_t42 * L_9 = GUILayout_Width_m138(NULL /*static, unused*/, (200.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		ArrayElementTypeCheck (L_8, L_9);
		*((GUILayoutOption_t42 **)(GUILayoutOption_t42 **)SZArrayLdElema(L_8, 0)) = (GUILayoutOption_t42 *)L_9;
		GUILayout_Label_m139(NULL /*static, unused*/, (String_t*) &_stringLiteral26, L_8, /*hidden argument*/NULL);
		bool L_10 = GUILayout_Button_m108(NULL /*static, unused*/, (String_t*) &_stringLiteral27, ((GUILayoutOptionU5BU5D_t37*)SZArrayNew(GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_009a;
		}
	}
	{
		bool L_11 = PauseController_TogglePause_m42(__this, /*hidden argument*/NULL);
		__this->___paused_2 = L_11;
	}

IL_009a:
	{
		bool L_12 = GUILayout_Button_m108(NULL /*static, unused*/, (String_t*) &_stringLiteral28, ((GUILayoutOptionU5BU5D_t37*)SZArrayNew(GUILayoutOptionU5BU5D_t37_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00b5;
		}
	}
	{
		Application_LoadLevel_m126(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		GUILayout_FlexibleSpace_m97(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_EndArea_m109(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		return;
	}
}
// System.Boolean PauseController::TogglePause()
extern "C" bool PauseController_TogglePause_m42 (PauseController_t19 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_timeScale_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_001b;
		}
	}
	{
		Time_set_timeScale_m91(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		return 0;
	}

IL_001b:
	{
		Time_set_timeScale_m91(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif
// TimerController
#include "AssemblyU2DCSharp_TimerControllerMethodDeclarations.h"

// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void TimerController::.ctor()
extern "C" void TimerController__ctor_m43 (TimerController_t20 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimerController::Start()
extern "C" void TimerController_Start_m44 (TimerController_t20 * __this, const MethodInfo* method)
{
	{
		__this->___currentTime_2 = (0.0f);
		__this->___currentMinute_3 = 0;
		__this->___currentSecond_4 = 0;
		__this->___currentMillisecond_5 = 0;
		return;
	}
}
// System.Void TimerController::Update()
extern TypeInfo* Mathf_t29_il2cpp_TypeInfo_var;
extern "C" void TimerController_Update_m45 (TimerController_t20 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_timeScale_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		float L_1 = (__this->___currentTime_2);
		float L_2 = Time_get_deltaTime_m154(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___currentTime_2 = ((float)((float)L_1+(float)L_2));
		float L_3 = (__this->___currentTime_2);
		V_0 = L_3;
		float L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		float L_5 = floorf(((float)((float)L_4/(float)(60.0f))));
		__this->___currentMinute_3 = (((int32_t)L_5));
		float L_6 = V_0;
		int32_t L_7 = (__this->___currentMinute_3);
		V_0 = ((float)((float)L_6-(float)((float)((float)(((float)L_7))*(float)(60.0f)))));
		float L_8 = V_0;
		float L_9 = floorf(L_8);
		__this->___currentSecond_4 = (((int32_t)L_9));
		float L_10 = V_0;
		int32_t L_11 = (__this->___currentSecond_4);
		V_0 = ((float)((float)L_10-(float)(((float)L_11))));
		float L_12 = V_0;
		float L_13 = floorf(((float)((float)L_12*(float)(100.0f))));
		__this->___currentMillisecond_5 = (((int32_t)L_13));
		return;
	}
}
// System.Void TimerController::OnGUI()
extern TypeInfo* GUIStyle_t31_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t44_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t33_il2cpp_TypeInfo_var;
extern "C" void TimerController_OnGUI_m46 (TimerController_t20 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStyle_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		StringU5BU5D_t44_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		GUI_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	GUIStyle_t31 * V_0 = {0};
	{
		float L_0 = Time_get_timeScale_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		GUIStyle_t31 * L_1 = (GUIStyle_t31 *)il2cpp_codegen_object_new (GUIStyle_t31_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m101(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		GUIStyle_t31 * L_2 = V_0;
		NullCheck(L_2);
		GUIStyle_set_fontSize_m102(L_2, ((int32_t)18), /*hidden argument*/NULL);
		GUIStyle_t31 * L_3 = V_0;
		NullCheck(L_3);
		GUIStyle_set_fontStyle_m103(L_3, 1, /*hidden argument*/NULL);
		GUIStyle_t31 * L_4 = V_0;
		NullCheck(L_4);
		GUIStyle_set_alignment_m100(L_4, 4, /*hidden argument*/NULL);
		GUIStyle_t31 * L_5 = V_0;
		NullCheck(L_5);
		GUIStyleState_t35 * L_6 = GUIStyle_get_normal_m104(L_5, /*hidden argument*/NULL);
		Color_t36  L_7 = Color_get_white_m105(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		GUIStyleState_set_textColor_m106(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_width_m93(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t32  L_9 = {0};
		Rect__ctor_m95(&L_9, ((float)((float)((float)((float)(((float)L_8))/(float)(2.0f)))-(float)(50.0f))), (20.0f), (100.0f), (50.0f), /*hidden argument*/NULL);
		StringU5BU5D_t44* L_10 = ((StringU5BU5D_t44*)SZArrayNew(StringU5BU5D_t44_il2cpp_TypeInfo_var, 5));
		int32_t* L_11 = &(__this->___currentMinute_3);
		String_t* L_12 = Int32_ToString_m155(L_11, (String_t*) &_stringLiteral29, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_12);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, 0)) = (String_t*)L_12;
		StringU5BU5D_t44* L_13 = L_10;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral30);
		*((String_t**)(String_t**)SZArrayLdElema(L_13, 1)) = (String_t*)(String_t*) &_stringLiteral30;
		StringU5BU5D_t44* L_14 = L_13;
		int32_t* L_15 = &(__this->___currentSecond_4);
		String_t* L_16 = Int32_ToString_m155(L_15, (String_t*) &_stringLiteral29, /*hidden argument*/NULL);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
		ArrayElementTypeCheck (L_14, L_16);
		*((String_t**)(String_t**)SZArrayLdElema(L_14, 2)) = (String_t*)L_16;
		StringU5BU5D_t44* L_17 = L_14;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 3);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral12);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, 3)) = (String_t*)(String_t*) &_stringLiteral12;
		StringU5BU5D_t44* L_18 = L_17;
		int32_t* L_19 = &(__this->___currentMillisecond_5);
		String_t* L_20 = Int32_ToString_m155(L_19, (String_t*) &_stringLiteral29, /*hidden argument*/NULL);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 4);
		ArrayElementTypeCheck (L_18, L_20);
		*((String_t**)(String_t**)SZArrayLdElema(L_18, 4)) = (String_t*)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m156(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		GUIStyle_t31 * L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t33_il2cpp_TypeInfo_var);
		GUI_Label_m133(NULL /*static, unused*/, L_9, L_21, L_22, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"


// System.Void TouchController::.ctor()
extern "C" void TouchController__ctor_m47 (TouchController_t21 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchController::Awake()
extern "C" void TouchController_Awake_m48 (TouchController_t21 * __this, const MethodInfo* method)
{
	{
		Screen_set_orientation_m157(NULL /*static, unused*/, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TouchController::Start()
extern TypeInfo* TouchController_t21_il2cpp_TypeInfo_var;
extern "C" void TouchController_Start_m49 (TouchController_t21 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TouchController_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputX_2 = (0.0f);
		((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputY_3 = (0.0f);
		return;
	}
}
// System.Void TouchController::Update()
extern "C" void TouchController_Update_m50 (TouchController_t21 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void TouchController::FixedUpdate()
extern TypeInfo* Input_t30_il2cpp_TypeInfo_var;
extern TypeInfo* TouchController_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t29_il2cpp_TypeInfo_var;
extern "C" void TouchController_FixedUpdate_m51 (TouchController_t21 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		TouchController_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Mathf_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Touch_t45  V_2 = {0};
	Vector2_t13  V_3 = {0};
	Touch_t45  V_4 = {0};
	Vector2_t13  V_5 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m158(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		Touch_t45  L_1 = Input_GetTouch_m159(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_1;
		Vector2_t13  L_2 = Touch_get_position_m160((&V_2), /*hidden argument*/NULL);
		V_3 = L_2;
		float L_3 = ((&V_3)->___y_2);
		int32_t L_4 = Screen_get_height_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputY_3 = ((float)((float)((float)((float)L_3-(float)((float)((float)(((float)L_4))/(float)(2.0f)))))/(float)((float)((float)(((float)L_5))/(float)(2.0f)))));
		Touch_t45  L_6 = Input_GetTouch_m159(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_4 = L_6;
		Vector2_t13  L_7 = Touch_get_position_m160((&V_4), /*hidden argument*/NULL);
		V_5 = L_7;
		float L_8 = ((&V_5)->___x_1);
		int32_t L_9 = Screen_get_width_m93(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_10 = Screen_get_width_m93(NULL /*static, unused*/, /*hidden argument*/NULL);
		((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputX_2 = ((float)((float)((float)((float)L_8-(float)((float)((float)(((float)L_9))/(float)(2.0f)))))/(float)((float)((float)(((float)L_10))/(float)(2.0f)))));
		float L_11 = ((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputY_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		float L_12 = fabsf(L_11);
		float L_13 = ((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputX_2;
		float L_14 = fabsf(L_13);
		if ((!(((float)L_12) > ((float)L_14))))
		{
			goto IL_00be;
		}
	}
	{
		float L_15 = ((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputY_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		float L_16 = fabsf(L_15);
		V_0 = ((float)((float)(1.0f)/(float)L_16));
		float L_17 = ((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputY_3;
		float L_18 = V_0;
		((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputY_3 = ((float)((float)L_17*(float)L_18));
		float L_19 = ((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputX_2;
		float L_20 = V_0;
		((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputX_2 = ((float)((float)L_19*(float)L_20));
		goto IL_00e7;
	}

IL_00be:
	{
		float L_21 = ((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputX_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		float L_22 = fabsf(L_21);
		V_1 = ((float)((float)(1.0f)/(float)L_22));
		float L_23 = ((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputY_3;
		float L_24 = V_1;
		((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputY_3 = ((float)((float)L_23*(float)L_24));
		float L_25 = ((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputX_2;
		float L_26 = V_1;
		((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputX_2 = ((float)((float)L_25*(float)L_26));
	}

IL_00e7:
	{
		goto IL_0100;
	}

IL_00ec:
	{
		((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputX_2 = (0.0f);
		((TouchController_t21_StaticFields*)TouchController_t21_il2cpp_TypeInfo_var->static_fields)->___inputY_3 = (0.0f);
	}

IL_0100:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// ZombieAI
#include "AssemblyU2DCSharp_ZombieAIMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.RaycastHit2D
#include "UnityEngine_UnityEngine_RaycastHit2DMethodDeclarations.h"


// System.Void ZombieAI::.ctor()
extern "C" void ZombieAI__ctor_m52 (ZombieAI_t22 * __this, const MethodInfo* method)
{
	{
		__this->___moveSpeed_2 = (1.5f);
		__this->___detectionRadius_7 = (5.0f);
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZombieAI::Start()
extern "C" void ZombieAI_Start_m53 (ZombieAI_t22 * __this, const MethodInfo* method)
{
	{
		__this->___isPlayerDetected_3 = 0;
		__this->___moveCounter_5 = 0;
		__this->___isMoveAllowed_8 = 0;
		return;
	}
}
// System.Void ZombieAI::Update()
extern TypeInfo* Physics2D_t48_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t29_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t38_m112_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTransform_t7_m63_MethodInfo_var;
extern "C" void ZombieAI_Update_m54 (ZombieAI_t22 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(26);
		Mathf_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		GameObject_GetComponent_TisRigidbody2D_t38_m112_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		GameObject_GetComponent_TisTransform_t7_m63_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	Rigidbody2D_t38 * V_0 = {0};
	Transform_t7 * V_1 = {0};
	Collider2DU5BU5D_t46* V_2 = {0};
	int32_t V_3 = 0;
	Vector2_t13  V_4 = {0};
	RaycastHit2DU5BU5D_t47* V_5 = {0};
	Vector2_t13  V_6 = {0};
	float V_7 = 0.0f;
	Vector3_t26  V_8 = {0};
	Vector2_t13  V_9 = {0};
	Vector3_t26  V_10 = {0};
	Vector2_t13  V_11 = {0};
	{
		float L_0 = Time_get_timeScale_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		GameObject_t1 * L_1 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody2D_t38 * L_2 = GameObject_GetComponent_TisRigidbody2D_t38_m112(L_1, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t38_m112_MethodInfo_var);
		V_0 = L_2;
		GameObject_t1 * L_3 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t7 * L_4 = GameObject_GetComponent_TisTransform_t7_m63(L_3, /*hidden argument*/GameObject_GetComponent_TisTransform_t7_m63_MethodInfo_var);
		V_1 = L_4;
		__this->___isPlayerDetected_3 = 0;
		Rigidbody2D_t38 * L_5 = V_0;
		NullCheck(L_5);
		Vector2_t13  L_6 = Rigidbody2D_get_position_m115(L_5, /*hidden argument*/NULL);
		float L_7 = (__this->___detectionRadius_7);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t48_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t46* L_8 = Physics2D_OverlapCircleAll_m161(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		V_3 = 0;
		goto IL_013d;
	}

IL_0048:
	{
		Collider2DU5BU5D_t46* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(Collider2D_t49 **)(Collider2D_t49 **)SZArrayLdElema(L_9, L_11)));
		String_t* L_12 = Object_get_name_m82((*(Collider2D_t49 **)(Collider2D_t49 **)SZArrayLdElema(L_9, L_11)), /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_12, (String_t*) &_stringLiteral3);
		if (!L_13)
		{
			goto IL_0139;
		}
	}
	{
		Collider2DU5BU5D_t46* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((*(Collider2D_t49 **)(Collider2D_t49 **)SZArrayLdElema(L_14, L_16)));
		Transform_t7 * L_17 = Component_get_transform_m67((*(Collider2D_t49 **)(Collider2D_t49 **)SZArrayLdElema(L_14, L_16)), /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t26  L_18 = Transform_get_position_m68(L_17, /*hidden argument*/NULL);
		V_8 = L_18;
		float L_19 = ((&V_8)->___x_0);
		Rigidbody2D_t38 * L_20 = V_0;
		NullCheck(L_20);
		Vector2_t13  L_21 = Rigidbody2D_get_position_m115(L_20, /*hidden argument*/NULL);
		V_9 = L_21;
		float L_22 = ((&V_9)->___x_1);
		Collider2DU5BU5D_t46* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(Collider2D_t49 **)(Collider2D_t49 **)SZArrayLdElema(L_23, L_25)));
		Transform_t7 * L_26 = Component_get_transform_m67((*(Collider2D_t49 **)(Collider2D_t49 **)SZArrayLdElema(L_23, L_25)), /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t26  L_27 = Transform_get_position_m68(L_26, /*hidden argument*/NULL);
		V_10 = L_27;
		float L_28 = ((&V_10)->___y_1);
		Rigidbody2D_t38 * L_29 = V_0;
		NullCheck(L_29);
		Vector2_t13  L_30 = Rigidbody2D_get_position_m115(L_29, /*hidden argument*/NULL);
		V_11 = L_30;
		float L_31 = ((&V_11)->___y_2);
		Vector2__ctor_m116((&V_4), ((float)((float)L_19-(float)L_22)), ((float)((float)L_28-(float)L_31)), /*hidden argument*/NULL);
		Rigidbody2D_t38 * L_32 = V_0;
		NullCheck(L_32);
		Vector2_t13  L_33 = Rigidbody2D_get_position_m115(L_32, /*hidden argument*/NULL);
		Vector2_t13  L_34 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t48_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t47* L_35 = Physics2D_RaycastAll_m162(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		V_5 = L_35;
		Rigidbody2D_t38 * L_36 = V_0;
		NullCheck(L_36);
		Vector2_t13  L_37 = Rigidbody2D_get_position_m115(L_36, /*hidden argument*/NULL);
		Vector3_t26  L_38 = Vector2_op_Implicit_m113(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		Collider2DU5BU5D_t46* L_39 = V_2;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = L_40;
		NullCheck((*(Collider2D_t49 **)(Collider2D_t49 **)SZArrayLdElema(L_39, L_41)));
		Transform_t7 * L_42 = Component_get_transform_m67((*(Collider2D_t49 **)(Collider2D_t49 **)SZArrayLdElema(L_39, L_41)), /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector3_t26  L_43 = Transform_get_position_m68(L_42, /*hidden argument*/NULL);
		Debug_DrawLine_m163(NULL /*static, unused*/, L_38, L_43, /*hidden argument*/NULL);
		RaycastHit2DU5BU5D_t47* L_44 = V_5;
		NullCheck(L_44);
		if ((((int32_t)(((int32_t)(((Array_t *)L_44)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0134;
		}
	}
	{
		RaycastHit2DU5BU5D_t47* L_45 = V_5;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 1);
		Collider2D_t49 * L_46 = RaycastHit2D_get_collider_m164(((RaycastHit2D_t50 *)(RaycastHit2D_t50 *)SZArrayLdElema(L_45, 1)), /*hidden argument*/NULL);
		NullCheck(L_46);
		String_t* L_47 = Object_get_name_m82(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		bool L_48 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_47, (String_t*) &_stringLiteral3);
		if (!L_48)
		{
			goto IL_0134;
		}
	}
	{
		__this->___isPlayerDetected_3 = 1;
		__this->___moveCounter_5 = 0;
		RaycastHit2DU5BU5D_t47* L_49 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 1);
		Transform_t7 * L_50 = RaycastHit2D_get_transform_m165(((RaycastHit2D_t50 *)(RaycastHit2D_t50 *)SZArrayLdElema(L_49, 1)), /*hidden argument*/NULL);
		NullCheck(L_50);
		Vector3_t26  L_51 = Transform_get_position_m68(L_50, /*hidden argument*/NULL);
		Vector2_t13  L_52 = Vector2_op_Implicit_m88(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		__this->___targetPosition_6 = L_52;
	}

IL_0134:
	{
		goto IL_0146;
	}

IL_0139:
	{
		int32_t L_53 = V_3;
		V_3 = ((int32_t)((int32_t)L_53+(int32_t)1));
	}

IL_013d:
	{
		int32_t L_54 = V_3;
		Collider2DU5BU5D_t46* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)(((int32_t)(((Array_t *)L_55)->max_length))))))
		{
			goto IL_0048;
		}
	}

IL_0146:
	{
		bool L_56 = (__this->___isMoveAllowed_8);
		if (!L_56)
		{
			goto IL_036b;
		}
	}
	{
		bool L_57 = (__this->___isPlayerDetected_3);
		if (L_57)
		{
			goto IL_02d2;
		}
	}
	{
		int32_t L_58 = (__this->___moveCounter_5);
		if (L_58)
		{
			goto IL_018b;
		}
	}
	{
		int32_t L_59 = Random_Range_m86(NULL /*static, unused*/, 0, 4, /*hidden argument*/NULL);
		__this->___direction_4 = L_59;
		float L_60 = Random_get_value_m66(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___moveCounter_5 = (((int32_t)((float)((float)L_60*(float)(100.0f)))));
		goto IL_02cd;
	}

IL_018b:
	{
		int32_t L_61 = (__this->___direction_4);
		if (L_61)
		{
			goto IL_01db;
		}
	}
	{
		Rigidbody2D_t38 * L_62 = V_0;
		Rigidbody2D_t38 * L_63 = V_0;
		NullCheck(L_63);
		Vector2_t13  L_64 = Rigidbody2D_get_position_m115(L_63, /*hidden argument*/NULL);
		float L_65 = (__this->___moveSpeed_2);
		Vector2_t13  L_66 = {0};
		Vector2__ctor_m116(&L_66, L_65, (0.0f), /*hidden argument*/NULL);
		float L_67 = Time_get_fixedDeltaTime_m117(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t13  L_68 = Vector2_op_Multiply_m118(NULL /*static, unused*/, L_66, L_67, /*hidden argument*/NULL);
		Vector2_t13  L_69 = Vector2_op_Addition_m119(NULL /*static, unused*/, L_64, L_68, /*hidden argument*/NULL);
		NullCheck(L_62);
		Rigidbody2D_MovePosition_m120(L_62, L_69, /*hidden argument*/NULL);
		Transform_t7 * L_70 = V_1;
		Vector3_t26  L_71 = Vector3_get_forward_m121(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t27  L_72 = Quaternion_AngleAxis_m122(NULL /*static, unused*/, (-90.0f), L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		Transform_set_rotation_m80(L_70, L_72, /*hidden argument*/NULL);
		goto IL_02bf;
	}

IL_01db:
	{
		int32_t L_73 = (__this->___direction_4);
		if ((!(((uint32_t)L_73) == ((uint32_t)1))))
		{
			goto IL_022d;
		}
	}
	{
		Rigidbody2D_t38 * L_74 = V_0;
		Rigidbody2D_t38 * L_75 = V_0;
		NullCheck(L_75);
		Vector2_t13  L_76 = Rigidbody2D_get_position_m115(L_75, /*hidden argument*/NULL);
		float L_77 = (__this->___moveSpeed_2);
		Vector2_t13  L_78 = {0};
		Vector2__ctor_m116(&L_78, (0.0f), ((-L_77)), /*hidden argument*/NULL);
		float L_79 = Time_get_fixedDeltaTime_m117(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t13  L_80 = Vector2_op_Multiply_m118(NULL /*static, unused*/, L_78, L_79, /*hidden argument*/NULL);
		Vector2_t13  L_81 = Vector2_op_Addition_m119(NULL /*static, unused*/, L_76, L_80, /*hidden argument*/NULL);
		NullCheck(L_74);
		Rigidbody2D_MovePosition_m120(L_74, L_81, /*hidden argument*/NULL);
		Transform_t7 * L_82 = V_1;
		Vector3_t26  L_83 = Vector3_get_forward_m121(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t27  L_84 = Quaternion_AngleAxis_m122(NULL /*static, unused*/, (180.0f), L_83, /*hidden argument*/NULL);
		NullCheck(L_82);
		Transform_set_rotation_m80(L_82, L_84, /*hidden argument*/NULL);
		goto IL_02bf;
	}

IL_022d:
	{
		int32_t L_85 = (__this->___direction_4);
		if ((!(((uint32_t)L_85) == ((uint32_t)2))))
		{
			goto IL_027f;
		}
	}
	{
		Rigidbody2D_t38 * L_86 = V_0;
		Rigidbody2D_t38 * L_87 = V_0;
		NullCheck(L_87);
		Vector2_t13  L_88 = Rigidbody2D_get_position_m115(L_87, /*hidden argument*/NULL);
		float L_89 = (__this->___moveSpeed_2);
		Vector2_t13  L_90 = {0};
		Vector2__ctor_m116(&L_90, ((-L_89)), (0.0f), /*hidden argument*/NULL);
		float L_91 = Time_get_fixedDeltaTime_m117(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t13  L_92 = Vector2_op_Multiply_m118(NULL /*static, unused*/, L_90, L_91, /*hidden argument*/NULL);
		Vector2_t13  L_93 = Vector2_op_Addition_m119(NULL /*static, unused*/, L_88, L_92, /*hidden argument*/NULL);
		NullCheck(L_86);
		Rigidbody2D_MovePosition_m120(L_86, L_93, /*hidden argument*/NULL);
		Transform_t7 * L_94 = V_1;
		Vector3_t26  L_95 = Vector3_get_forward_m121(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t27  L_96 = Quaternion_AngleAxis_m122(NULL /*static, unused*/, (90.0f), L_95, /*hidden argument*/NULL);
		NullCheck(L_94);
		Transform_set_rotation_m80(L_94, L_96, /*hidden argument*/NULL);
		goto IL_02bf;
	}

IL_027f:
	{
		Rigidbody2D_t38 * L_97 = V_0;
		Rigidbody2D_t38 * L_98 = V_0;
		NullCheck(L_98);
		Vector2_t13  L_99 = Rigidbody2D_get_position_m115(L_98, /*hidden argument*/NULL);
		float L_100 = (__this->___moveSpeed_2);
		Vector2_t13  L_101 = {0};
		Vector2__ctor_m116(&L_101, (0.0f), L_100, /*hidden argument*/NULL);
		float L_102 = Time_get_fixedDeltaTime_m117(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t13  L_103 = Vector2_op_Multiply_m118(NULL /*static, unused*/, L_101, L_102, /*hidden argument*/NULL);
		Vector2_t13  L_104 = Vector2_op_Addition_m119(NULL /*static, unused*/, L_99, L_103, /*hidden argument*/NULL);
		NullCheck(L_97);
		Rigidbody2D_MovePosition_m120(L_97, L_104, /*hidden argument*/NULL);
		Transform_t7 * L_105 = V_1;
		Vector3_t26  L_106 = Vector3_get_forward_m121(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t27  L_107 = Quaternion_AngleAxis_m122(NULL /*static, unused*/, (0.0f), L_106, /*hidden argument*/NULL);
		NullCheck(L_105);
		Transform_set_rotation_m80(L_105, L_107, /*hidden argument*/NULL);
	}

IL_02bf:
	{
		int32_t L_108 = (__this->___moveCounter_5);
		__this->___moveCounter_5 = ((int32_t)((int32_t)L_108-(int32_t)1));
	}

IL_02cd:
	{
		goto IL_036b;
	}

IL_02d2:
	{
		Vector2_t13  L_109 = (__this->___targetPosition_6);
		Rigidbody2D_t38 * L_110 = V_0;
		NullCheck(L_110);
		Vector2_t13  L_111 = Rigidbody2D_get_position_m115(L_110, /*hidden argument*/NULL);
		Vector2_t13  L_112 = Vector2_op_Subtraction_m166(NULL /*static, unused*/, L_109, L_111, /*hidden argument*/NULL);
		V_6 = L_112;
		Rigidbody2D_t38 * L_113 = V_0;
		Rigidbody2D_t38 * L_114 = V_0;
		NullCheck(L_114);
		Vector2_t13  L_115 = Rigidbody2D_get_position_m115(L_114, /*hidden argument*/NULL);
		float L_116 = ((&V_6)->___x_1);
		float L_117 = ((&V_6)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		float L_118 = fabsf(L_117);
		float L_119 = ((&V_6)->___y_2);
		float L_120 = ((&V_6)->___y_2);
		float L_121 = fabsf(L_120);
		Vector2_t13  L_122 = {0};
		Vector2__ctor_m116(&L_122, ((float)((float)L_116/(float)L_118)), ((float)((float)L_119/(float)L_121)), /*hidden argument*/NULL);
		float L_123 = (__this->___moveSpeed_2);
		Vector2_t13  L_124 = Vector2_op_Multiply_m118(NULL /*static, unused*/, L_122, L_123, /*hidden argument*/NULL);
		float L_125 = Time_get_fixedDeltaTime_m117(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t13  L_126 = Vector2_op_Multiply_m118(NULL /*static, unused*/, L_124, L_125, /*hidden argument*/NULL);
		Vector2_t13  L_127 = Vector2_op_Addition_m119(NULL /*static, unused*/, L_115, L_126, /*hidden argument*/NULL);
		NullCheck(L_113);
		Rigidbody2D_MovePosition_m120(L_113, L_127, /*hidden argument*/NULL);
		float L_128 = ((&V_6)->___y_2);
		float L_129 = ((&V_6)->___x_1);
		float L_130 = atan2f(L_128, L_129);
		V_7 = ((float)((float)L_130*(float)(57.29578f)));
		Transform_t7 * L_131 = V_1;
		float L_132 = V_7;
		Vector3_t26  L_133 = Vector3_get_forward_m121(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t27  L_134 = Quaternion_AngleAxis_m122(NULL /*static, unused*/, ((float)((float)L_132-(float)(90.0f))), L_133, /*hidden argument*/NULL);
		NullCheck(L_131);
		Transform_set_rotation_m80(L_131, L_134, /*hidden argument*/NULL);
	}

IL_036b:
	{
		return;
	}
}
// System.Void ZombieAI::OnCollisionEnter2D(UnityEngine.Collision2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t29_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisController_t9_m64_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisZombieSpawner_t23_m142_MethodInfo_var;
extern "C" void ZombieAI_OnCollisionEnter2D_m55 (ZombieAI_t22 * __this, Collision2D_t24 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Mathf_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		GameObject_GetComponent_TisController_t9_m64_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		GameObject_GetComponent_TisZombieSpawner_t23_m142_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483659);
		s_Il2CppMethodIntialized = true;
	}
	Controller_t9 * V_0 = {0};
	{
		Collision2D_t24 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t1 * L_1 = Collision2D_get_gameObject_m81(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_m82(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m83(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral3, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0081;
		}
	}
	{
		Collision2D_t24 * L_4 = ___col;
		NullCheck(L_4);
		GameObject_t1 * L_5 = Collision2D_get_gameObject_m81(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Controller_t9 * L_6 = GameObject_GetComponent_TisController_t9_m64(L_5, /*hidden argument*/GameObject_GetComponent_TisController_t9_m64_MethodInfo_var);
		V_0 = L_6;
		Controller_t9 * L_7 = V_0;
		Controller_t9 * L_8 = V_0;
		NullCheck(L_8);
		float L_9 = (L_8->___energy_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Max_m123(NULL /*static, unused*/, ((float)((float)L_9-(float)(10.0f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->___energy_5 = L_10;
		GameObject_t1 * L_11 = (__this->___parentSpawner_9);
		NullCheck(L_11);
		ZombieSpawner_t23 * L_12 = GameObject_GetComponent_TisZombieSpawner_t23_m142(L_11, /*hidden argument*/GameObject_GetComponent_TisZombieSpawner_t23_m142_MethodInfo_var);
		NullCheck(L_12);
		List_1_t4 * L_13 = (L_12->___zombies_4);
		GameObject_t1 * L_14 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtFuncInvoker1< bool, GameObject_t1 * >::Invoke(23 /* System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(!0) */, L_13, L_14);
		GameObject_t1 * L_15 = (__this->___parentSpawner_9);
		NullCheck(L_15);
		ZombieSpawner_t23 * L_16 = GameObject_GetComponent_TisZombieSpawner_t23_m142(L_15, /*hidden argument*/GameObject_GetComponent_TisZombieSpawner_t23_m142_MethodInfo_var);
		ZombieSpawner_t23 * L_17 = L_16;
		NullCheck(L_17);
		int32_t L_18 = (L_17->___numZombiesToRenew_8);
		NullCheck(L_17);
		L_17->___numZombiesToRenew_8 = ((int32_t)((int32_t)L_18+(int32_t)1));
		GameObject_t1 * L_19 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		Object_Destroy_m77(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
	}

IL_0081:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// ZombieSpawner
#include "AssemblyU2DCSharp_ZombieSpawnerMethodDeclarations.h"



// System.Void ZombieSpawner::.ctor()
extern "C" void ZombieSpawner__ctor_m56 (ZombieSpawner_t23 * __this, const MethodInfo* method)
{
	{
		__this->___numZombies_2 = ((int32_t)35);
		__this->___minSpawnRadius_5 = (5.0f);
		__this->___maxSpawnRadius_6 = (35.0f);
		__this->___mapRadius_7 = (37.5f);
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZombieSpawner::Start()
extern TypeInfo* GameObject_t1_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisZombieAI_t22_m143_MethodInfo_var;
extern "C" void ZombieSpawner_Start_m57 (ZombieSpawner_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		GameObject_GetComponent_TisZombieAI_t22_m143_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483660);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t1 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		V_1 = 0;
		goto IL_00ad;
	}

IL_0007:
	{
		int32_t L_0 = Random_Range_m86(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)2))-(int32_t)1));
		int32_t L_1 = Random_Range_m86(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1*(int32_t)2))-(int32_t)1));
		int32_t L_2 = V_2;
		float L_3 = Random_get_value_m66(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = (__this->___maxSpawnRadius_6);
		float L_5 = (__this->___minSpawnRadius_5);
		float L_6 = (__this->___minSpawnRadius_5);
		V_4 = ((float)((float)(((float)L_2))*(float)((float)((float)((float)((float)L_3*(float)((float)((float)L_4-(float)L_5))))+(float)L_6))));
		int32_t L_7 = V_3;
		float L_8 = Random_get_value_m66(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = (__this->___maxSpawnRadius_6);
		float L_10 = (__this->___minSpawnRadius_5);
		float L_11 = (__this->___minSpawnRadius_5);
		V_5 = ((float)((float)(((float)L_7))*(float)((float)((float)((float)((float)L_8*(float)((float)((float)L_9-(float)L_10))))+(float)L_11))));
		GameObject_t1 * L_12 = (__this->___zombie_3);
		float L_13 = V_4;
		float L_14 = V_5;
		Vector3_t26  L_15 = {0};
		Vector3__ctor_m69(&L_15, L_13, L_14, (0.0f), /*hidden argument*/NULL);
		GameObject_t1 * L_16 = (__this->___zombie_3);
		NullCheck(L_16);
		Transform_t7 * L_17 = GameObject_get_transform_m87(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Quaternion_t27  L_18 = Transform_get_rotation_m70(L_17, /*hidden argument*/NULL);
		Object_t28 * L_19 = Object_Instantiate_m71(NULL /*static, unused*/, L_12, L_15, L_18, /*hidden argument*/NULL);
		V_0 = ((GameObject_t1 *)Castclass(L_19, GameObject_t1_il2cpp_TypeInfo_var));
		GameObject_t1 * L_20 = V_0;
		NullCheck(L_20);
		ZombieAI_t22 * L_21 = GameObject_GetComponent_TisZombieAI_t22_m143(L_20, /*hidden argument*/GameObject_GetComponent_TisZombieAI_t22_m143_MethodInfo_var);
		GameObject_t1 * L_22 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->___parentSpawner_9 = L_22;
		List_1_t4 * L_23 = (__this->___zombies_4);
		GameObject_t1 * L_24 = V_0;
		NullCheck(L_23);
		VirtActionInvoker1< GameObject_t1 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0) */, L_23, L_24);
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_00ad:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = (__this->___numZombies_2);
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ZombieSpawner::Update()
extern "C" void ZombieSpawner_Update_m58 (ZombieSpawner_t23 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		float L_0 = Time_get_timeScale_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		List_1_t4 * L_1 = (__this->___zombies_4);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count() */, L_1);
		V_0 = ((int32_t)((int32_t)L_2-(int32_t)1));
		goto IL_0084;
	}

IL_0023:
	{
		List_1_t4 * L_3 = (__this->___zombies_4);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		GameObject_t1 * L_5 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_3, L_4);
		NullCheck(L_5);
		Transform_t7 * L_6 = GameObject_get_transform_m87(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t26  L_7 = Transform_get_position_m68(L_6, /*hidden argument*/NULL);
		Vector2_t13  L_8 = Vector2_op_Implicit_m88(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Vector2_t13  L_9 = Vector2_get_zero_m89(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = Vector2_Distance_m90(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = V_1;
		float L_12 = (__this->___mapRadius_7);
		if ((!(((float)L_11) > ((float)L_12))))
		{
			goto IL_0080;
		}
	}
	{
		List_1_t4 * L_13 = (__this->___zombies_4);
		int32_t L_14 = V_0;
		NullCheck(L_13);
		GameObject_t1 * L_15 = (GameObject_t1 *)VirtFuncInvoker1< GameObject_t1 *, int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32) */, L_13, L_14);
		Object_Destroy_m77(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		List_1_t4 * L_16 = (__this->___zombies_4);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		VirtActionInvoker1< int32_t >::Invoke(27 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32) */, L_16, L_17);
		int32_t L_18 = (__this->___numZombiesToRenew_8);
		__this->___numZombiesToRenew_8 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0080:
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_0084:
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ZombieSpawner_renewZombies_m59(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZombieSpawner::renewZombies()
extern TypeInfo* GameObject_t1_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisZombieAI_t22_m143_MethodInfo_var;
extern "C" void ZombieSpawner_renewZombies_m59 (ZombieSpawner_t23 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		GameObject_GetComponent_TisZombieAI_t22_m143_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483660);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t1 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		V_1 = 0;
		goto IL_00ad;
	}

IL_0007:
	{
		int32_t L_0 = Random_Range_m86(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0*(int32_t)2))-(int32_t)1));
		int32_t L_1 = Random_Range_m86(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1*(int32_t)2))-(int32_t)1));
		int32_t L_2 = V_2;
		float L_3 = Random_get_value_m66(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = (__this->___maxSpawnRadius_6);
		float L_5 = (__this->___minSpawnRadius_5);
		float L_6 = (__this->___minSpawnRadius_5);
		V_4 = ((float)((float)(((float)L_2))*(float)((float)((float)((float)((float)L_3*(float)((float)((float)L_4-(float)L_5))))+(float)L_6))));
		int32_t L_7 = V_3;
		float L_8 = Random_get_value_m66(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = (__this->___maxSpawnRadius_6);
		float L_10 = (__this->___minSpawnRadius_5);
		float L_11 = (__this->___minSpawnRadius_5);
		V_5 = ((float)((float)(((float)L_7))*(float)((float)((float)((float)((float)L_8*(float)((float)((float)L_9-(float)L_10))))+(float)L_11))));
		GameObject_t1 * L_12 = (__this->___zombie_3);
		float L_13 = V_4;
		float L_14 = V_5;
		Vector3_t26  L_15 = {0};
		Vector3__ctor_m69(&L_15, L_13, L_14, (0.0f), /*hidden argument*/NULL);
		GameObject_t1 * L_16 = (__this->___zombie_3);
		NullCheck(L_16);
		Transform_t7 * L_17 = GameObject_get_transform_m87(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Quaternion_t27  L_18 = Transform_get_rotation_m70(L_17, /*hidden argument*/NULL);
		Object_t28 * L_19 = Object_Instantiate_m71(NULL /*static, unused*/, L_12, L_15, L_18, /*hidden argument*/NULL);
		V_0 = ((GameObject_t1 *)Castclass(L_19, GameObject_t1_il2cpp_TypeInfo_var));
		GameObject_t1 * L_20 = V_0;
		NullCheck(L_20);
		ZombieAI_t22 * L_21 = GameObject_GetComponent_TisZombieAI_t22_m143(L_20, /*hidden argument*/GameObject_GetComponent_TisZombieAI_t22_m143_MethodInfo_var);
		GameObject_t1 * L_22 = Component_get_gameObject_m76(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->___parentSpawner_9 = L_22;
		List_1_t4 * L_23 = (__this->___zombies_4);
		GameObject_t1 * L_24 = V_0;
		NullCheck(L_23);
		VirtActionInvoker1< GameObject_t1 * >::Invoke(19 /* System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0) */, L_23, L_24);
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_00ad:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = (__this->___numZombiesToRenew_8);
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0007;
		}
	}
	{
		__this->___numZombiesToRenew_8 = 0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
