#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"
extern TypeInfo* InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t51_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t428_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		RuntimeCompatibilityAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		ExtensionAttribute_t428_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t51 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t51 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t51_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m167(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m168(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t428 * tmp;
		tmp = (ExtensionAttribute_t428 *)il2cpp_codegen_object_new (ExtensionAttribute_t428_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m1575(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t55_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t55_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t320_il2cpp_TypeInfo_var;
void AssetBundle_t57_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t320 * tmp;
		tmp = (TypeInferenceRuleAttribute_t320 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t320_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1408(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t320_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void AssetBundle_t57_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m180(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t320 * tmp;
		tmp = (TypeInferenceRuleAttribute_t320 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t320_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1408(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void AssetBundle_t57_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m181(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void LayerMask_t61_CustomAttributesCacheGenerator_LayerMask_LayerToName_m184(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void LayerMask_t61_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m185(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t429_il2cpp_TypeInfo_var;
void LayerMask_t61_CustomAttributesCacheGenerator_LayerMask_t61_LayerMask_GetMask_m186_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t429 * tmp;
		tmp = (ParamArrayAttribute_t429 *)il2cpp_codegen_object_new (ParamArrayAttribute_t429_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1576(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void SystemInfo_t63_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m189(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Coroutine_t68_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m194(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void ScriptableObject_t69_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m197(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t269_il2cpp_TypeInfo_var;
void ScriptableObject_t69_CustomAttributesCacheGenerator_ScriptableObject_t69_ScriptableObject_Internal_CreateScriptableObject_m197_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t269 * tmp;
		tmp = (WritableAttribute_t269 *)il2cpp_codegen_object_new (WritableAttribute_t269_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1275(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void ScriptableObject_t69_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m198(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void ScriptableObject_t69_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m200(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m206(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m207(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m208(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m209(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m210(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m211(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m212(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m213(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m214(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m216(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m217(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GcLeaderboard_t81_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GcLeaderboard_t81_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m270(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GcLeaderboard_t81_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m271(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GcLeaderboard_t81_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Graphics_t87_CustomAttributesCacheGenerator_Graphics_DrawTexture_m293(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Screen_t88_CustomAttributesCacheGenerator_Screen_get_width_m93(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Screen_t88_CustomAttributesCacheGenerator_Screen_get_height_m94(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Screen_t88_CustomAttributesCacheGenerator_Screen_set_orientation_m157(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Texture_t83_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m295(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Texture_t83_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m296(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Texture2D_t11_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t269_il2cpp_TypeInfo_var;
void Texture2D_t11_CustomAttributesCacheGenerator_Texture2D_t11_Texture2D_Internal_Create_m300_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t269 * tmp;
		tmp = (WritableAttribute_t269 *)il2cpp_codegen_object_new (WritableAttribute_t269_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1275(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void RenderTexture_t89_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void RenderTexture_t89_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m302(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUILayer_t93_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m306(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Gradient_t96_CustomAttributesCacheGenerator_Gradient_Init_m310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Gradient_t96_CustomAttributesCacheGenerator_Gradient_Cleanup_m311(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void GUI_t33_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void GUI_t33_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void GUI_t33_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m319(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUI_t33_CustomAttributesCacheGenerator_GUI_INTERNAL_get_color_m321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUI_t33_CustomAttributesCacheGenerator_GUI_set_changed_m323(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUI_t33_CustomAttributesCacheGenerator_GUI_set_depth_m152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUI_t33_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m326(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var;
void GUI_t33_CustomAttributesCacheGenerator_GUI_DrawTexture_m153(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t317 * tmp;
		tmp = (ExcludeFromDocsAttribute_t317 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1406(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
void GUI_t33_CustomAttributesCacheGenerator_GUI_t33_GUI_DrawTexture_m327_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t316 * tmp;
		tmp = (DefaultValueAttribute_t316 *)il2cpp_codegen_object_new (DefaultValueAttribute_t316_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1402(tmp, il2cpp_codegen_string_new_wrapper("ScaleMode.StretchToFill"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
void GUI_t33_CustomAttributesCacheGenerator_GUI_t33_GUI_DrawTexture_m327_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t316 * tmp;
		tmp = (DefaultValueAttribute_t316 *)il2cpp_codegen_object_new (DefaultValueAttribute_t316_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1402(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
void GUI_t33_CustomAttributesCacheGenerator_GUI_t33_GUI_DrawTexture_m327_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t316 * tmp;
		tmp = (DefaultValueAttribute_t316 *)il2cpp_codegen_object_new (DefaultValueAttribute_t316_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1402(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUI_t33_CustomAttributesCacheGenerator_GUI_get_blendMaterial_m328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUI_t33_CustomAttributesCacheGenerator_GUI_get_blitMaterial_m329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUI_t33_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m333(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t429_il2cpp_TypeInfo_var;
void GUILayout_t105_CustomAttributesCacheGenerator_GUILayout_t105_GUILayout_Label_m139_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t429 * tmp;
		tmp = (ParamArrayAttribute_t429 *)il2cpp_codegen_object_new (ParamArrayAttribute_t429_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1576(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t429_il2cpp_TypeInfo_var;
void GUILayout_t105_CustomAttributesCacheGenerator_GUILayout_t105_GUILayout_Label_m107_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t429 * tmp;
		tmp = (ParamArrayAttribute_t429 *)il2cpp_codegen_object_new (ParamArrayAttribute_t429_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1576(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t429_il2cpp_TypeInfo_var;
void GUILayout_t105_CustomAttributesCacheGenerator_GUILayout_t105_GUILayout_Button_m108_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t429 * tmp;
		tmp = (ParamArrayAttribute_t429 *)il2cpp_codegen_object_new (ParamArrayAttribute_t429_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1576(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUILayoutUtility_t109_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUILayoutUtility_t109_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var;
void GUILayoutUtility_t109_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m354(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t431 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t431 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1579(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t429_il2cpp_TypeInfo_var;
void GUILayoutUtility_t109_CustomAttributesCacheGenerator_GUILayoutUtility_t109_GUILayoutUtility_GetRect_m356_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t429 * tmp;
		tmp = (ParamArrayAttribute_t429 *)il2cpp_codegen_object_new (ParamArrayAttribute_t429_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1576(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t429_il2cpp_TypeInfo_var;
void GUILayoutUtility_t109_CustomAttributesCacheGenerator_GUILayoutUtility_t109_GUILayoutUtility_GetRect_m358_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t429 * tmp;
		tmp = (ParamArrayAttribute_t429 *)il2cpp_codegen_object_new (ParamArrayAttribute_t429_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1576(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIUtility_t120_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m396(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIUtility_t120_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m398(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIUtility_t120_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m400(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIUtility_t120_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m404(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIUtility_t120_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m405(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIClip_t121_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m407(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIClip_t121_CustomAttributesCacheGenerator_GUIClip_Pop_m408(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISettings_t122_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISettings_t122_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISettings_t122_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISettings_t122_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISettings_t122_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t267_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t267_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(253);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t267 * tmp;
		tmp = (ExecuteInEditMode_t267 *)il2cpp_codegen_object_new (ExecuteInEditMode_t267_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m1271(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUISkin_t34_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUIContent_t114_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUIContent_t114_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void GUIContent_t114_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyleState_t35_CustomAttributesCacheGenerator_GUIStyleState_Init_m476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyleState_t35_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m477(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyleState_t35_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m478(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyleState_t35_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_Init_m484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_Cleanup_m485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_get_left_m486(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_set_left_m487(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_get_right_m488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_set_right_m489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_get_top_m490(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_set_top_m491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_get_bottom_m492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_set_bottom_m493(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m494(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_get_vertical_m495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_Init_m499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m500(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_get_name_m501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_set_name_m502(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m503(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m508(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m509(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m510(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m511(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m512(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m514(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_Draw_m515(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t317 * tmp;
		tmp = (ExcludeFromDocsAttribute_t317 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1406(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_t31_GUIStyle_Draw_m516_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t316 * tmp;
		tmp = (DefaultValueAttribute_t316 *)il2cpp_codegen_object_new (DefaultValueAttribute_t316_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1402(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m522(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m524(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m527(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t129_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m529(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Event_t130_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Event_t130_CustomAttributesCacheGenerator_Event_Init_m532(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Event_t130_CustomAttributesCacheGenerator_Event_Cleanup_m534(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Event_t130_CustomAttributesCacheGenerator_Event_get_rawType_m535(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Event_t130_CustomAttributesCacheGenerator_Event_get_type_m536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Event_t130_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m538(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Event_t130_CustomAttributesCacheGenerator_Event_get_modifiers_m539(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Event_t130_CustomAttributesCacheGenerator_Event_get_character_m540(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Event_t130_CustomAttributesCacheGenerator_Event_get_commandName_m541(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Event_t130_CustomAttributesCacheGenerator_Event_get_keyCode_m542(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Event_t130_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t432_il2cpp_TypeInfo_var;
void EventModifiers_t134_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t432_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t432 * tmp;
		tmp = (FlagsAttribute_t432 *)il2cpp_codegen_object_new (FlagsAttribute_t432_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m1580(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
void Vector2_t13_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t433 * tmp;
		tmp = (DefaultMemberAttribute_t433 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t433_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1581(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
void Vector3_t26_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t433 * tmp;
		tmp = (DefaultMemberAttribute_t433 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t433_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1581(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
void Color_t36_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t433 * tmp;
		tmp = (DefaultMemberAttribute_t433 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t433_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1581(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t259_il2cpp_TypeInfo_var;
void Color32_t86_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t259 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t259 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t259_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m1265(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
void Quaternion_t27_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t433 * tmp;
		tmp = (DefaultMemberAttribute_t433 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t433_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1581(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Quaternion_t27_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_AngleAxis_m581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Quaternion_t27_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Quaternion_t27_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
void Matrix4x4_t135_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t433 * tmp;
		tmp = (DefaultMemberAttribute_t433 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t433_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1581(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Matrix4x4_t135_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Matrix4x4_t135_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Matrix4x4_t135_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m621(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Matrix4x4_t135_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m624(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Matrix4x4_t135_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m637(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Matrix4x4_t135_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m640(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Matrix4x4_t135_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m641(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Bounds_t136_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m666(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Bounds_t136_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Bounds_t136_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Bounds_t136_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m676(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
void Vector4_t137_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t433 * tmp;
		tmp = (DefaultMemberAttribute_t433 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t433_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1581(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t320_il2cpp_TypeInfo_var;
void Resources_t143_CustomAttributesCacheGenerator_Resources_Load_m712(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		TypeInferenceRuleAttribute_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t320 * tmp;
		tmp = (TypeInferenceRuleAttribute_t320 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t320_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1408(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t434_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t144_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t434 * tmp;
		tmp = (ObsoleteAttribute_t434 *)il2cpp_codegen_object_new (ObsoleteAttribute_t434_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1582(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t147_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t433 * tmp;
		tmp = (DefaultMemberAttribute_t433 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t433_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1581(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t147_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m717(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t147_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m720(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t147_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void WWW_t148_CustomAttributesCacheGenerator_WWW_DestroyWWW_m736(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void WWW_t148_CustomAttributesCacheGenerator_WWW_InitWWW_m737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void WWW_t148_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m739(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void WWW_t148_CustomAttributesCacheGenerator_WWW_get_bytes_m743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void WWW_t148_CustomAttributesCacheGenerator_WWW_get_error_m744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void WWW_t148_CustomAttributesCacheGenerator_WWW_get_isDone_m745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var;
void WWWForm_t152_CustomAttributesCacheGenerator_WWWForm_AddField_m749(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t317 * tmp;
		tmp = (ExcludeFromDocsAttribute_t317 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1406(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
void WWWForm_t152_CustomAttributesCacheGenerator_WWWForm_t152_WWWForm_AddField_m750_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t316 * tmp;
		tmp = (DefaultValueAttribute_t316 *)il2cpp_codegen_object_new (DefaultValueAttribute_t316_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1402(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
void WWWTranscoder_t153_CustomAttributesCacheGenerator_WWWTranscoder_t153_WWWTranscoder_QPEncode_m757_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t316 * tmp;
		tmp = (DefaultValueAttribute_t316 *)il2cpp_codegen_object_new (DefaultValueAttribute_t316_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1402(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
void WWWTranscoder_t153_CustomAttributesCacheGenerator_WWWTranscoder_t153_WWWTranscoder_SevenBitClean_m760_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t316 * tmp;
		tmp = (DefaultValueAttribute_t316 *)il2cpp_codegen_object_new (DefaultValueAttribute_t316_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1402(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t434_il2cpp_TypeInfo_var;
void CacheIndex_t154_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t434 * tmp;
		tmp = (ObsoleteAttribute_t434 *)il2cpp_codegen_object_new (ObsoleteAttribute_t434_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1582(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t429_il2cpp_TypeInfo_var;
void UnityString_t155_CustomAttributesCacheGenerator_UnityString_t155_UnityString_Format_m762_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t429 * tmp;
		tmp = (ParamArrayAttribute_t429 *)il2cpp_codegen_object_new (ParamArrayAttribute_t429_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1576(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void AsyncOperation_t56_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m764(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Application_t157_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m770(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Camera_t158_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Camera_t158_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Camera_t158_CustomAttributesCacheGenerator_Camera_get_cullingMask_m779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Camera_t158_CustomAttributesCacheGenerator_Camera_get_eventMask_m780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Camera_t158_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Camera_t158_CustomAttributesCacheGenerator_Camera_get_targetTexture_m783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Camera_t158_CustomAttributesCacheGenerator_Camera_get_clearFlags_m784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Camera_t158_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Camera_t158_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Camera_t158_CustomAttributesCacheGenerator_Camera_GetAllCameras_m788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Camera_t158_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m793(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Camera_t158_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var;
void CameraCallback_t159_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t436 * tmp;
		tmp = (EditorBrowsableAttribute_t436 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1585(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var;
void Debug_t160_CustomAttributesCacheGenerator_Debug_DrawLine_m163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t317 * tmp;
		tmp = (ExcludeFromDocsAttribute_t317 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1406(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Debug_t160_CustomAttributesCacheGenerator_Debug_INTERNAL_CALL_DrawLine_m796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Debug_t160_CustomAttributesCacheGenerator_Debug_Internal_Log_m797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t269_il2cpp_TypeInfo_var;
void Debug_t160_CustomAttributesCacheGenerator_Debug_t160_Debug_Internal_Log_m797_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t269_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t269 * tmp;
		tmp = (WritableAttribute_t269 *)il2cpp_codegen_object_new (WritableAttribute_t269_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1275(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Display_t163_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m825(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Display_t163_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m826(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Display_t163_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Display_t163_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Display_t163_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Display_t163_CustomAttributesCacheGenerator_Display_SetParamsImpl_m830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Display_t163_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m831(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Display_t163_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void MonoBehaviour_t3_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Input_t30_CustomAttributesCacheGenerator_Input_GetKeyDownInt_m836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Input_t30_CustomAttributesCacheGenerator_Input_GetMouseButton_m837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Input_t30_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Input_t30_CustomAttributesCacheGenerator_Input_get_mousePosition_m839(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Input_t30_CustomAttributesCacheGenerator_Input_GetTouch_m159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Input_t30_CustomAttributesCacheGenerator_Input_get_touchCount_m158(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Object_t28_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Object_t28_CustomAttributesCacheGenerator_Object_Destroy_m843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
void Object_t28_CustomAttributesCacheGenerator_Object_t28_Object_Destroy_m843_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t316 * tmp;
		tmp = (DefaultValueAttribute_t316 *)il2cpp_codegen_object_new (DefaultValueAttribute_t316_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1402(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var;
void Object_t28_CustomAttributesCacheGenerator_Object_Destroy_m77(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t317 * tmp;
		tmp = (ExcludeFromDocsAttribute_t317 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1406(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Object_t28_CustomAttributesCacheGenerator_Object_get_name_m82(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Object_t28_CustomAttributesCacheGenerator_Object_ToString_m172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t320_il2cpp_TypeInfo_var;
void Object_t28_CustomAttributesCacheGenerator_Object_Instantiate_m71(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t320 * tmp;
		tmp = (TypeInferenceRuleAttribute_t320 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t320_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1408(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Component_t43_CustomAttributesCacheGenerator_Component_get_transform_m67(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Component_t43_CustomAttributesCacheGenerator_Component_get_gameObject_m76(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Component_t43_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var;
void Component_t43_CustomAttributesCacheGenerator_Component_GetComponent_m1586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t431 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t431 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1579(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_GetComponent_m1587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t431 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t431 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1579(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_get_transform_m87(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_SendMessage_m854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_t1_GameObject_SendMessage_m854_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t316 * tmp;
		tmp = (DefaultValueAttribute_t316 *)il2cpp_codegen_object_new (DefaultValueAttribute_t316_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1402(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_t1_GameObject_SendMessage_m854_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t316 * tmp;
		tmp = (DefaultValueAttribute_t316 *)il2cpp_codegen_object_new (DefaultValueAttribute_t316_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1402(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void GameObject_t1_CustomAttributesCacheGenerator_GameObject_Find_m114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m860(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m861(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m866(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var;
void Transform_t7_CustomAttributesCacheGenerator_Transform_Rotate_m151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t317 * tmp;
		tmp = (ExcludeFromDocsAttribute_t317 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1406(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
void Transform_t7_CustomAttributesCacheGenerator_Transform_t7_Transform_Rotate_m867_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t316 * tmp;
		tmp = (DefaultValueAttribute_t316 *)il2cpp_codegen_object_new (DefaultValueAttribute_t316_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1402(tmp, il2cpp_codegen_string_new_wrapper("Space.Self"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_RotateAroundInternal_m869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Transform_t7_CustomAttributesCacheGenerator_Transform_get_childCount_m870(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Transform_t7_CustomAttributesCacheGenerator_Transform_GetChild_m872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Time_t166_CustomAttributesCacheGenerator_Time_get_deltaTime_m154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Time_t166_CustomAttributesCacheGenerator_Time_get_fixedDeltaTime_m117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Time_t166_CustomAttributesCacheGenerator_Time_get_timeScale_m75(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Time_t166_CustomAttributesCacheGenerator_Time_set_timeScale_m91(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Random_t167_CustomAttributesCacheGenerator_Random_RandomRangeInt_m873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Random_t167_CustomAttributesCacheGenerator_Random_get_value_m66(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void PlayerPrefs_t169_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void PlayerPrefs_t169_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
void PlayerPrefs_t169_CustomAttributesCacheGenerator_PlayerPrefs_t169_PlayerPrefs_GetInt_m877_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t316 * tmp;
		tmp = (DefaultValueAttribute_t316 *)il2cpp_codegen_object_new (DefaultValueAttribute_t316_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1402(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var;
void PlayerPrefs_t169_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t317 * tmp;
		tmp = (ExcludeFromDocsAttribute_t317 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1406(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void PlayerPrefs_t169_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
void PlayerPrefs_t169_CustomAttributesCacheGenerator_PlayerPrefs_t169_PlayerPrefs_GetString_m878_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t316 * tmp;
		tmp = (DefaultValueAttribute_t316 *)il2cpp_codegen_object_new (DefaultValueAttribute_t316_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1402(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var;
void PlayerPrefs_t169_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t317 * tmp;
		tmp = (ExcludeFromDocsAttribute_t317 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1406(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var;
void Physics2D_t48_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t317 * tmp;
		tmp = (ExcludeFromDocsAttribute_t317 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1406(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Physics2D_t48_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m897(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var;
void Physics2D_t48_CustomAttributesCacheGenerator_Physics2D_OverlapCircleAll_m161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t317 * tmp;
		tmp = (ExcludeFromDocsAttribute_t317 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1406(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Physics2D_t48_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapCircleAll_m898(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t432_il2cpp_TypeInfo_var;
void RigidbodyConstraints2D_t172_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t432_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t432 * tmp;
		tmp = (FlagsAttribute_t432 *)il2cpp_codegen_object_new (FlagsAttribute_t432_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m1580(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Rigidbody2D_t38_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_get_position_m900(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Rigidbody2D_t38_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_MovePosition_m901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Rigidbody2D_t38_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Rigidbody2D_t38_CustomAttributesCacheGenerator_Rigidbody2D_set_constraints_m147(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Collider2D_t49_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m903(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void AudioSource_t17_CustomAttributesCacheGenerator_AudioSource_Play_m919(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
void AudioSource_t17_CustomAttributesCacheGenerator_AudioSource_t17_AudioSource_Play_m919_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t316 * tmp;
		tmp = (DefaultValueAttribute_t316 *)il2cpp_codegen_object_new (DefaultValueAttribute_t316_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1402(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var;
void AudioSource_t17_CustomAttributesCacheGenerator_AudioSource_Play_m145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t317 * tmp;
		tmp = (ExcludeFromDocsAttribute_t317 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t317_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1406(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void AudioSource_t17_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t434_il2cpp_TypeInfo_var;
void AnimationEvent_t183_CustomAttributesCacheGenerator_AnimationEvent_t183____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t434 * tmp;
		tmp = (ObsoleteAttribute_t434 *)il2cpp_codegen_object_new (ObsoleteAttribute_t434_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1582(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
void AnimationCurve_t187_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t433 * tmp;
		tmp = (DefaultMemberAttribute_t433 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t433_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1581(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t429_il2cpp_TypeInfo_var;
void AnimationCurve_t187_CustomAttributesCacheGenerator_AnimationCurve_t187_AnimationCurve__ctor_m945_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t429 * tmp;
		tmp = (ParamArrayAttribute_t429 *)il2cpp_codegen_object_new (ParamArrayAttribute_t429_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1576(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void AnimationCurve_t187_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m947(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void AnimationCurve_t187_CustomAttributesCacheGenerator_AnimationCurve_Init_m949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t434_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t184_CustomAttributesCacheGenerator_AnimatorStateInfo_t184____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t434 * tmp;
		tmp = (ObsoleteAttribute_t434 *)il2cpp_codegen_object_new (ObsoleteAttribute_t434_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1582(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Animator_t190_CustomAttributesCacheGenerator_Animator_StringToHash_m968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextMesh_t25_CustomAttributesCacheGenerator_TextMesh_set_text_m74(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t434_il2cpp_TypeInfo_var;
void CharacterInfo_t197_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t434 * tmp;
		tmp = (ObsoleteAttribute_t434 *)il2cpp_codegen_object_new (ObsoleteAttribute_t434_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1582(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t434_il2cpp_TypeInfo_var;
void CharacterInfo_t197_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t434 * tmp;
		tmp = (ObsoleteAttribute_t434 *)il2cpp_codegen_object_new (ObsoleteAttribute_t434_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1582(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t434_il2cpp_TypeInfo_var;
void CharacterInfo_t197_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t434 * tmp;
		tmp = (ObsoleteAttribute_t434 *)il2cpp_codegen_object_new (ObsoleteAttribute_t434_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1582(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t434_il2cpp_TypeInfo_var;
void CharacterInfo_t197_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t434 * tmp;
		tmp = (ObsoleteAttribute_t434 *)il2cpp_codegen_object_new (ObsoleteAttribute_t434_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1582(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void Font_t124_CustomAttributesCacheGenerator_Font_get_dynamic_m994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t198_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t436 * tmp;
		tmp = (EditorBrowsableAttribute_t436 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1585(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_Init_m998(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m999(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m1002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m1003(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m1004(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m1005(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m1006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m1007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m1009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m1010(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m1011(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m1012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m1013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t258_il2cpp_TypeInfo_var;
void TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m1014(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t258 * tmp;
		tmp = (WrapperlessIcall_t258 *)il2cpp_codegen_object_new (WrapperlessIcall_t258_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1264(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Request_t210_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Request_t210_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Request_t210_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Request_t210_CustomAttributesCacheGenerator_Request_get_sourceId_m1035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Request_t210_CustomAttributesCacheGenerator_Request_get_appId_m1036(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Request_t210_CustomAttributesCacheGenerator_Request_get_domain_m1037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Response_t212_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Response_t212_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Response_t212_CustomAttributesCacheGenerator_Response_get_success_m1046(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Response_t212_CustomAttributesCacheGenerator_Response_set_success_m1047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Response_t212_CustomAttributesCacheGenerator_Response_get_extendedInfo_m1048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Response_t212_CustomAttributesCacheGenerator_Response_set_extendedInfo_m1049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchRequest_t215_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchRequest_t215_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchRequest_t215_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchRequest_t215_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchRequest_t215_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m1054(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m1055(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m1056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m1057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m1058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m1059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m1060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m1061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m1062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m1065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m1066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m1067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m1068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m1069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m1070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m1071(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m1072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m1073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m1074(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m1075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m1076(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchRequest_t217_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchRequest_t217_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchRequest_t217_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m1080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchRequest_t217_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m1081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchRequest_t217_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m1082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchRequest_t217_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m1083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m1086(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m1087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m1088(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m1089(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m1090(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m1091(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m1092(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m1093(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m1094(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m1095(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m1096(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m1097(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t219_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t219_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m1101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t219_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m1102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void DropConnectionRequest_t220_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void DropConnectionRequest_t220_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void DropConnectionRequest_t220_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m1105(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void DropConnectionRequest_t220_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m1106(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void DropConnectionRequest_t220_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m1107(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void DropConnectionRequest_t220_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m1108(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchRequest_t221_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchRequest_t221_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchRequest_t221_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchRequest_t221_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchRequest_t221_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m1111(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m1112(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m1113(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m1114(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m1115(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m1116(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m1117(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m1118(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m1121(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m1122(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m1123(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m1124(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m1125(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m1126(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m1130(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m1131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_name_m1132(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_set_name_m1133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m1134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m1135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m1136(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m1137(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m1138(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m1139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m1140(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m1141(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m1142(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m1143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m1144(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchResponse_t226_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchResponse_t226_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m1148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ListMatchResponse_t226_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m1149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t438_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t227_il2cpp_TypeInfo_var;
void AppID_t227_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		AppID_t227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t438 * tmp;
		tmp = (DefaultValueAttribute_t438 *)il2cpp_codegen_object_new (DefaultValueAttribute_t438_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1590(tmp, Box(AppID_t227_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t438_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t228_il2cpp_TypeInfo_var;
void SourceID_t228_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		SourceID_t228_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(162);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t438 * tmp;
		tmp = (DefaultValueAttribute_t438 *)il2cpp_codegen_object_new (DefaultValueAttribute_t438_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1590(tmp, Box(SourceID_t228_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t438_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t229_il2cpp_TypeInfo_var;
void NetworkID_t229_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		NetworkID_t229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t438 * tmp;
		tmp = (DefaultValueAttribute_t438 *)il2cpp_codegen_object_new (DefaultValueAttribute_t438_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1590(tmp, Box(NetworkID_t229_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t438_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t230_il2cpp_TypeInfo_var;
void NodeID_t230_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		NodeID_t230_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(169);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t438 * tmp;
		tmp = (DefaultValueAttribute_t438 *)il2cpp_codegen_object_new (DefaultValueAttribute_t438_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1590(tmp, Box(NodeID_t230_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t439_il2cpp_TypeInfo_var;
void NetworkMatch_t236_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t439_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t439 * tmp;
		tmp = (DebuggerHiddenAttribute_t439 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t439_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1592(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t441_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t439_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t441_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t439_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t439 * tmp;
		tmp = (DebuggerHiddenAttribute_t439 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t439_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1592(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t439_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t441_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t439_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t439 * tmp;
		tmp = (DebuggerHiddenAttribute_t439 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t439_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1592(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t439_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t441_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1601(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t439_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t439 * tmp;
		tmp = (DebuggerHiddenAttribute_t439 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t439_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1592(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var;
void JsonArray_t237_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t436 * tmp;
		tmp = (EditorBrowsableAttribute_t436 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1585(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t442 * tmp;
		tmp = (GeneratedCodeAttribute_t442 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1602(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var;
void JsonObject_t240_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t433 * tmp;
		tmp = (DefaultMemberAttribute_t433 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t433_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1581(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t442 * tmp;
		tmp = (GeneratedCodeAttribute_t442 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1602(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t436 * tmp;
		tmp = (EditorBrowsableAttribute_t436 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1585(tmp, 1, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var;
void SimpleJson_t243_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t442 * tmp;
		tmp = (GeneratedCodeAttribute_t442 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1602(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t443_il2cpp_TypeInfo_var;
void SimpleJson_t243_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m1193(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t443 * tmp;
		tmp = (SuppressMessageAttribute_t443 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t443_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1603(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1604(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t443_il2cpp_TypeInfo_var;
void SimpleJson_t243_CustomAttributesCacheGenerator_SimpleJson_NextToken_m1205(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t443 * tmp;
		tmp = (SuppressMessageAttribute_t443 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t443_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1603(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var;
void SimpleJson_t243_CustomAttributesCacheGenerator_SimpleJson_t243____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t436 * tmp;
		tmp = (EditorBrowsableAttribute_t436 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t436_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1585(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t241_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t442 * tmp;
		tmp = (GeneratedCodeAttribute_t442 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1602(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t443_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t241_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t443 * tmp;
		tmp = (SuppressMessageAttribute_t443 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t443_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1603(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1604(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t242_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t442 * tmp;
		tmp = (GeneratedCodeAttribute_t442 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1602(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t443_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t242_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1222(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t443 * tmp;
		tmp = (SuppressMessageAttribute_t443 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t443_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1603(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1604(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t443_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t242_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1223(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t443 * tmp;
		tmp = (SuppressMessageAttribute_t443 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t443_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1603(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1604(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var;
void ReflectionUtils_t257_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t442 * tmp;
		tmp = (GeneratedCodeAttribute_t442 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t442_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1602(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t429_il2cpp_TypeInfo_var;
void ReflectionUtils_t257_CustomAttributesCacheGenerator_ReflectionUtils_t257_ReflectionUtils_GetConstructorInfo_m1248_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t429 * tmp;
		tmp = (ParamArrayAttribute_t429 *)il2cpp_codegen_object_new (ParamArrayAttribute_t429_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1576(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t429_il2cpp_TypeInfo_var;
void ReflectionUtils_t257_CustomAttributesCacheGenerator_ReflectionUtils_t257_ReflectionUtils_GetContructor_m1253_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t429 * tmp;
		tmp = (ParamArrayAttribute_t429 *)il2cpp_codegen_object_new (ParamArrayAttribute_t429_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1576(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t429_il2cpp_TypeInfo_var;
void ReflectionUtils_t257_CustomAttributesCacheGenerator_ReflectionUtils_t257_ReflectionUtils_GetConstructorByReflection_m1255_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t429 * tmp;
		tmp = (ParamArrayAttribute_t429 *)il2cpp_codegen_object_new (ParamArrayAttribute_t429_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1576(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t444_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t433 * tmp;
		tmp = (DefaultMemberAttribute_t433 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t433_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1581(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t429_il2cpp_TypeInfo_var;
void ConstructorDelegate_t250_CustomAttributesCacheGenerator_ConstructorDelegate_t250_ConstructorDelegate_Invoke_m1233_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t429 * tmp;
		tmp = (ParamArrayAttribute_t429 *)il2cpp_codegen_object_new (ParamArrayAttribute_t429_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1576(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t429_il2cpp_TypeInfo_var;
void ConstructorDelegate_t250_CustomAttributesCacheGenerator_ConstructorDelegate_t250_ConstructorDelegate_BeginInvoke_m1234_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t429 * tmp;
		tmp = (ParamArrayAttribute_t429 *)il2cpp_codegen_object_new (ParamArrayAttribute_t429_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1576(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t252_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t253_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t254_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t255_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t256_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t446_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t259_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(299);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t446 * tmp;
		tmp = (AttributeUsageAttribute_t446 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t446_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1629(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t446_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t264_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(299);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t446 * tmp;
		tmp = (AttributeUsageAttribute_t446 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t446_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1629(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m1630(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t446_il2cpp_TypeInfo_var;
void RequireComponent_t265_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(299);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t446 * tmp;
		tmp = (AttributeUsageAttribute_t446 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t446_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1629(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1631(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t446_il2cpp_TypeInfo_var;
void WritableAttribute_t269_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(299);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t446 * tmp;
		tmp = (AttributeUsageAttribute_t446 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t446_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1629(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1631(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t446_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t270_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(299);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t446 * tmp;
		tmp = (AttributeUsageAttribute_t446 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t446_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1629(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Achievement_t283_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Achievement_t283_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Achievement_t283_CustomAttributesCacheGenerator_Achievement_get_id_m1308(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Achievement_t283_CustomAttributesCacheGenerator_Achievement_set_id_m1309(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Achievement_t283_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1310(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Achievement_t283_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1311(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void AchievementDescription_t284_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void AchievementDescription_t284_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void AchievementDescription_t284_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1319(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Score_t285_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Score_t285_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Score_t285_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Score_t285_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1329(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Score_t285_CustomAttributesCacheGenerator_Score_get_value_m1330(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Score_t285_CustomAttributesCacheGenerator_Score_set_value_m1331(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Leaderboard_t80_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Leaderboard_t80_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Leaderboard_t80_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Leaderboard_t80_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_get_id_m1339(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_set_id_m1340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1341(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1342(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_get_range_m1343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_set_range_m1344(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1345(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t430 * tmp;
		tmp = (CompilerGeneratedAttribute_t430 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1578(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var;
void StackTraceUtility_t297_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1358(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t431 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t431 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1579(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var;
void StackTraceUtility_t297_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1361(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t431 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t431 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1579(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var;
void StackTraceUtility_t297_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1363(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t431 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t431 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t431_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1579(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t446_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t299_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(299);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t446 * tmp;
		tmp = (AttributeUsageAttribute_t446 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t446_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1629(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1631(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void ArgumentCache_t305_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(300);
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t318 * tmp;
		tmp = (FormerlySerializedAsAttribute_t318 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1407(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void PersistentCall_t308_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(300);
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t318 * tmp;
		tmp = (FormerlySerializedAsAttribute_t318 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1407(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void PersistentCall_t308_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(300);
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t318 * tmp;
		tmp = (FormerlySerializedAsAttribute_t318 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1407(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t318 * tmp;
		tmp = (FormerlySerializedAsAttribute_t318 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1407(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void PersistentCallGroup_t310_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(300);
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t318 * tmp;
		tmp = (FormerlySerializedAsAttribute_t318 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1407(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void UnityEventBase_t313_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(300);
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t318 * tmp;
		tmp = (FormerlySerializedAsAttribute_t318 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t318_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1407(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t146_il2cpp_TypeInfo_var;
void UnityEventBase_t313_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t146 * tmp;
		tmp = (SerializeField_t146 *)il2cpp_codegen_object_new (SerializeField_t146_il2cpp_TypeInfo_var);
		SerializeField__ctor_m714(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t266_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t315_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t266_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(301);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t266 * tmp;
		tmp = (AddComponentMenu_t266 *)il2cpp_codegen_object_new (AddComponentMenu_t266_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m1270(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t446_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t316_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(299);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t446 * tmp;
		tmp = (AttributeUsageAttribute_t446 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t446_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1629(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t446_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t317_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(299);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t446 * tmp;
		tmp = (AttributeUsageAttribute_t446 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t446_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1629(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t446_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t318_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(299);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t446 * tmp;
		tmp = (AttributeUsageAttribute_t446 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t446_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1629(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1631(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m1630(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t446_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t320_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t446_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(299);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t446 * tmp;
		tmp = (AttributeUsageAttribute_t446 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t446_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1629(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[528] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t55_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m174,
	AssetBundleCreateRequest_t55_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m175,
	AssetBundle_t57_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m179,
	AssetBundle_t57_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m180,
	AssetBundle_t57_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m181,
	LayerMask_t61_CustomAttributesCacheGenerator_LayerMask_LayerToName_m184,
	LayerMask_t61_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m185,
	LayerMask_t61_CustomAttributesCacheGenerator_LayerMask_t61_LayerMask_GetMask_m186_Arg0_ParameterInfo,
	SystemInfo_t63_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m189,
	Coroutine_t68_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m194,
	ScriptableObject_t69_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m197,
	ScriptableObject_t69_CustomAttributesCacheGenerator_ScriptableObject_t69_ScriptableObject_Internal_CreateScriptableObject_m197_Arg0_ParameterInfo,
	ScriptableObject_t69_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m198,
	ScriptableObject_t69_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m200,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m205,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m206,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m207,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m208,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m209,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m210,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m211,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m212,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m213,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m214,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m215,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m216,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m217,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m218,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m219,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m220,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m221,
	GameCenterPlatform_t79_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m225,
	GcLeaderboard_t81_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m269,
	GcLeaderboard_t81_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m270,
	GcLeaderboard_t81_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m271,
	GcLeaderboard_t81_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m272,
	Graphics_t87_CustomAttributesCacheGenerator_Graphics_DrawTexture_m293,
	Screen_t88_CustomAttributesCacheGenerator_Screen_get_width_m93,
	Screen_t88_CustomAttributesCacheGenerator_Screen_get_height_m94,
	Screen_t88_CustomAttributesCacheGenerator_Screen_set_orientation_m157,
	Texture_t83_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m295,
	Texture_t83_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m296,
	Texture2D_t11_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m300,
	Texture2D_t11_CustomAttributesCacheGenerator_Texture2D_t11_Texture2D_Internal_Create_m300_Arg0_ParameterInfo,
	RenderTexture_t89_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m301,
	RenderTexture_t89_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m302,
	GUILayer_t93_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m306,
	Gradient_t96_CustomAttributesCacheGenerator_Gradient_Init_m310,
	Gradient_t96_CustomAttributesCacheGenerator_Gradient_Cleanup_m311,
	GUI_t33_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t33_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t33_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m319,
	GUI_t33_CustomAttributesCacheGenerator_GUI_INTERNAL_get_color_m321,
	GUI_t33_CustomAttributesCacheGenerator_GUI_set_changed_m323,
	GUI_t33_CustomAttributesCacheGenerator_GUI_set_depth_m152,
	GUI_t33_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m326,
	GUI_t33_CustomAttributesCacheGenerator_GUI_DrawTexture_m153,
	GUI_t33_CustomAttributesCacheGenerator_GUI_t33_GUI_DrawTexture_m327_Arg2_ParameterInfo,
	GUI_t33_CustomAttributesCacheGenerator_GUI_t33_GUI_DrawTexture_m327_Arg3_ParameterInfo,
	GUI_t33_CustomAttributesCacheGenerator_GUI_t33_GUI_DrawTexture_m327_Arg4_ParameterInfo,
	GUI_t33_CustomAttributesCacheGenerator_GUI_get_blendMaterial_m328,
	GUI_t33_CustomAttributesCacheGenerator_GUI_get_blitMaterial_m329,
	GUI_t33_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoButton_m333,
	GUILayout_t105_CustomAttributesCacheGenerator_GUILayout_t105_GUILayout_Label_m139_Arg1_ParameterInfo,
	GUILayout_t105_CustomAttributesCacheGenerator_GUILayout_t105_GUILayout_Label_m107_Arg2_ParameterInfo,
	GUILayout_t105_CustomAttributesCacheGenerator_GUILayout_t105_GUILayout_Button_m108_Arg1_ParameterInfo,
	GUILayoutUtility_t109_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m351,
	GUILayoutUtility_t109_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m353,
	GUILayoutUtility_t109_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m354,
	GUILayoutUtility_t109_CustomAttributesCacheGenerator_GUILayoutUtility_t109_GUILayoutUtility_GetRect_m356_Arg2_ParameterInfo,
	GUILayoutUtility_t109_CustomAttributesCacheGenerator_GUILayoutUtility_t109_GUILayoutUtility_GetRect_m358_Arg3_ParameterInfo,
	GUIUtility_t120_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m396,
	GUIUtility_t120_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m398,
	GUIUtility_t120_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m400,
	GUIUtility_t120_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m404,
	GUIUtility_t120_CustomAttributesCacheGenerator_GUIUtility_set_mouseUsed_m405,
	GUIClip_t121_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m407,
	GUIClip_t121_CustomAttributesCacheGenerator_GUIClip_Pop_m408,
	GUISettings_t122_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t122_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t122_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t122_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t122_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t34_CustomAttributesCacheGenerator,
	GUISkin_t34_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t34_CustomAttributesCacheGenerator_m_box,
	GUISkin_t34_CustomAttributesCacheGenerator_m_button,
	GUISkin_t34_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t34_CustomAttributesCacheGenerator_m_label,
	GUISkin_t34_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t34_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t34_CustomAttributesCacheGenerator_m_window,
	GUISkin_t34_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t34_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t34_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t34_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t34_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t34_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t34_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t34_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t34_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t34_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t34_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t34_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t34_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t34_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t34_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t114_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t114_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t114_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t35_CustomAttributesCacheGenerator_GUIStyleState_Init_m476,
	GUIStyleState_t35_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m477,
	GUIStyleState_t35_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m478,
	GUIStyleState_t35_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m479,
	RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_Init_m484,
	RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_Cleanup_m485,
	RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_get_left_m486,
	RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_set_left_m487,
	RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_get_right_m488,
	RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_set_right_m489,
	RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_get_top_m490,
	RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_set_top_m491,
	RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_get_bottom_m492,
	RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_set_bottom_m493,
	RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m494,
	RectOffset_t112_CustomAttributesCacheGenerator_RectOffset_get_vertical_m495,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_Init_m499,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m500,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_get_name_m501,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_set_name_m502,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m503,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m506,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m507,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_set_alignment_m100,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m508,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m509,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m510,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m511,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m512,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m513,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m514,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m102,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_set_fontStyle_m103,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_Draw_m515,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_t31_GUIStyle_Draw_m516_Arg3_ParameterInfo,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m518,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m519,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m522,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m524,
	GUIStyle_t31_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m527,
	TouchScreenKeyboard_t129_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m529,
	Event_t130_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t130_CustomAttributesCacheGenerator_Event_Init_m532,
	Event_t130_CustomAttributesCacheGenerator_Event_Cleanup_m534,
	Event_t130_CustomAttributesCacheGenerator_Event_get_rawType_m535,
	Event_t130_CustomAttributesCacheGenerator_Event_get_type_m536,
	Event_t130_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m538,
	Event_t130_CustomAttributesCacheGenerator_Event_get_modifiers_m539,
	Event_t130_CustomAttributesCacheGenerator_Event_get_character_m540,
	Event_t130_CustomAttributesCacheGenerator_Event_get_commandName_m541,
	Event_t130_CustomAttributesCacheGenerator_Event_get_keyCode_m542,
	Event_t130_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m544,
	EventModifiers_t134_CustomAttributesCacheGenerator,
	Vector2_t13_CustomAttributesCacheGenerator,
	Vector3_t26_CustomAttributesCacheGenerator,
	Color_t36_CustomAttributesCacheGenerator,
	Color32_t86_CustomAttributesCacheGenerator,
	Quaternion_t27_CustomAttributesCacheGenerator,
	Quaternion_t27_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_AngleAxis_m581,
	Quaternion_t27_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Inverse_m583,
	Quaternion_t27_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m587,
	Matrix4x4_t135_CustomAttributesCacheGenerator,
	Matrix4x4_t135_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m617,
	Matrix4x4_t135_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m619,
	Matrix4x4_t135_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m621,
	Matrix4x4_t135_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m624,
	Matrix4x4_t135_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m637,
	Matrix4x4_t135_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m640,
	Matrix4x4_t135_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m641,
	Bounds_t136_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m666,
	Bounds_t136_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m669,
	Bounds_t136_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m672,
	Bounds_t136_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m676,
	Vector4_t137_CustomAttributesCacheGenerator,
	Resources_t143_CustomAttributesCacheGenerator_Resources_Load_m712,
	SerializePrivateVariables_t144_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t147_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t147_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m717,
	SphericalHarmonicsL2_t147_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m720,
	SphericalHarmonicsL2_t147_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m723,
	WWW_t148_CustomAttributesCacheGenerator_WWW_DestroyWWW_m736,
	WWW_t148_CustomAttributesCacheGenerator_WWW_InitWWW_m737,
	WWW_t148_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m739,
	WWW_t148_CustomAttributesCacheGenerator_WWW_get_bytes_m743,
	WWW_t148_CustomAttributesCacheGenerator_WWW_get_error_m744,
	WWW_t148_CustomAttributesCacheGenerator_WWW_get_isDone_m745,
	WWWForm_t152_CustomAttributesCacheGenerator_WWWForm_AddField_m749,
	WWWForm_t152_CustomAttributesCacheGenerator_WWWForm_t152_WWWForm_AddField_m750_Arg2_ParameterInfo,
	WWWTranscoder_t153_CustomAttributesCacheGenerator_WWWTranscoder_t153_WWWTranscoder_QPEncode_m757_Arg1_ParameterInfo,
	WWWTranscoder_t153_CustomAttributesCacheGenerator_WWWTranscoder_t153_WWWTranscoder_SevenBitClean_m760_Arg1_ParameterInfo,
	CacheIndex_t154_CustomAttributesCacheGenerator,
	UnityString_t155_CustomAttributesCacheGenerator_UnityString_t155_UnityString_Format_m762_Arg1_ParameterInfo,
	AsyncOperation_t56_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m764,
	Application_t157_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m770,
	Camera_t158_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m777,
	Camera_t158_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m778,
	Camera_t158_CustomAttributesCacheGenerator_Camera_get_cullingMask_m779,
	Camera_t158_CustomAttributesCacheGenerator_Camera_get_eventMask_m780,
	Camera_t158_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m781,
	Camera_t158_CustomAttributesCacheGenerator_Camera_get_targetTexture_m783,
	Camera_t158_CustomAttributesCacheGenerator_Camera_get_clearFlags_m784,
	Camera_t158_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m786,
	Camera_t158_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m787,
	Camera_t158_CustomAttributesCacheGenerator_Camera_GetAllCameras_m788,
	Camera_t158_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m793,
	Camera_t158_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m795,
	CameraCallback_t159_CustomAttributesCacheGenerator,
	Debug_t160_CustomAttributesCacheGenerator_Debug_DrawLine_m163,
	Debug_t160_CustomAttributesCacheGenerator_Debug_INTERNAL_CALL_DrawLine_m796,
	Debug_t160_CustomAttributesCacheGenerator_Debug_Internal_Log_m797,
	Debug_t160_CustomAttributesCacheGenerator_Debug_t160_Debug_Internal_Log_m797_Arg2_ParameterInfo,
	Display_t163_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m825,
	Display_t163_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m826,
	Display_t163_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m827,
	Display_t163_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m828,
	Display_t163_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m829,
	Display_t163_CustomAttributesCacheGenerator_Display_SetParamsImpl_m830,
	Display_t163_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m831,
	Display_t163_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m832,
	MonoBehaviour_t3_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m834,
	Input_t30_CustomAttributesCacheGenerator_Input_GetKeyDownInt_m836,
	Input_t30_CustomAttributesCacheGenerator_Input_GetMouseButton_m837,
	Input_t30_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m838,
	Input_t30_CustomAttributesCacheGenerator_Input_get_mousePosition_m839,
	Input_t30_CustomAttributesCacheGenerator_Input_GetTouch_m159,
	Input_t30_CustomAttributesCacheGenerator_Input_get_touchCount_m158,
	Object_t28_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m842,
	Object_t28_CustomAttributesCacheGenerator_Object_Destroy_m843,
	Object_t28_CustomAttributesCacheGenerator_Object_t28_Object_Destroy_m843_Arg1_ParameterInfo,
	Object_t28_CustomAttributesCacheGenerator_Object_Destroy_m77,
	Object_t28_CustomAttributesCacheGenerator_Object_get_name_m82,
	Object_t28_CustomAttributesCacheGenerator_Object_ToString_m172,
	Object_t28_CustomAttributesCacheGenerator_Object_Instantiate_m71,
	Component_t43_CustomAttributesCacheGenerator_Component_get_transform_m67,
	Component_t43_CustomAttributesCacheGenerator_Component_get_gameObject_m76,
	Component_t43_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m852,
	Component_t43_CustomAttributesCacheGenerator_Component_GetComponent_m1586,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m853,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_GetComponent_m1587,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_get_transform_m87,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_SendMessage_m854,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_t1_GameObject_SendMessage_m854_Arg1_ParameterInfo,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_t1_GameObject_SendMessage_m854_Arg2_ParameterInfo,
	GameObject_t1_CustomAttributesCacheGenerator_GameObject_Find_m114,
	Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m858,
	Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m859,
	Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m860,
	Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m861,
	Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m862,
	Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m863,
	Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m866,
	Transform_t7_CustomAttributesCacheGenerator_Transform_Rotate_m151,
	Transform_t7_CustomAttributesCacheGenerator_Transform_t7_Transform_Rotate_m867_Arg1_ParameterInfo,
	Transform_t7_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_RotateAroundInternal_m869,
	Transform_t7_CustomAttributesCacheGenerator_Transform_get_childCount_m870,
	Transform_t7_CustomAttributesCacheGenerator_Transform_GetChild_m872,
	Time_t166_CustomAttributesCacheGenerator_Time_get_deltaTime_m154,
	Time_t166_CustomAttributesCacheGenerator_Time_get_fixedDeltaTime_m117,
	Time_t166_CustomAttributesCacheGenerator_Time_get_timeScale_m75,
	Time_t166_CustomAttributesCacheGenerator_Time_set_timeScale_m91,
	Random_t167_CustomAttributesCacheGenerator_Random_RandomRangeInt_m873,
	Random_t167_CustomAttributesCacheGenerator_Random_get_value_m66,
	PlayerPrefs_t169_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m876,
	PlayerPrefs_t169_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m877,
	PlayerPrefs_t169_CustomAttributesCacheGenerator_PlayerPrefs_t169_PlayerPrefs_GetInt_m877_Arg1_ParameterInfo,
	PlayerPrefs_t169_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m136,
	PlayerPrefs_t169_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m878,
	PlayerPrefs_t169_CustomAttributesCacheGenerator_PlayerPrefs_t169_PlayerPrefs_GetString_m878_Arg1_ParameterInfo,
	PlayerPrefs_t169_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m879,
	Physics2D_t48_CustomAttributesCacheGenerator_Physics2D_RaycastAll_m162,
	Physics2D_t48_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_RaycastAll_m897,
	Physics2D_t48_CustomAttributesCacheGenerator_Physics2D_OverlapCircleAll_m161,
	Physics2D_t48_CustomAttributesCacheGenerator_Physics2D_INTERNAL_CALL_OverlapCircleAll_m898,
	RigidbodyConstraints2D_t172_CustomAttributesCacheGenerator,
	Rigidbody2D_t38_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_get_position_m900,
	Rigidbody2D_t38_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_CALL_MovePosition_m901,
	Rigidbody2D_t38_CustomAttributesCacheGenerator_Rigidbody2D_INTERNAL_set_velocity_m902,
	Rigidbody2D_t38_CustomAttributesCacheGenerator_Rigidbody2D_set_constraints_m147,
	Collider2D_t49_CustomAttributesCacheGenerator_Collider2D_get_attachedRigidbody_m903,
	AudioSource_t17_CustomAttributesCacheGenerator_AudioSource_Play_m919,
	AudioSource_t17_CustomAttributesCacheGenerator_AudioSource_t17_AudioSource_Play_m919_Arg0_ParameterInfo,
	AudioSource_t17_CustomAttributesCacheGenerator_AudioSource_Play_m145,
	AudioSource_t17_CustomAttributesCacheGenerator_AudioSource_get_isPlaying_m144,
	AnimationEvent_t183_CustomAttributesCacheGenerator_AnimationEvent_t183____data_PropertyInfo,
	AnimationCurve_t187_CustomAttributesCacheGenerator,
	AnimationCurve_t187_CustomAttributesCacheGenerator_AnimationCurve_t187_AnimationCurve__ctor_m945_Arg0_ParameterInfo,
	AnimationCurve_t187_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m947,
	AnimationCurve_t187_CustomAttributesCacheGenerator_AnimationCurve_Init_m949,
	AnimatorStateInfo_t184_CustomAttributesCacheGenerator_AnimatorStateInfo_t184____nameHash_PropertyInfo,
	Animator_t190_CustomAttributesCacheGenerator_Animator_StringToHash_m968,
	TextMesh_t25_CustomAttributesCacheGenerator_TextMesh_set_text_m74,
	CharacterInfo_t197_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t197_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t197_CustomAttributesCacheGenerator_width,
	CharacterInfo_t197_CustomAttributesCacheGenerator_flipped,
	Font_t124_CustomAttributesCacheGenerator_Font_get_dynamic_m994,
	FontTextureRebuildCallback_t198_CustomAttributesCacheGenerator,
	TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_Init_m998,
	TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m999,
	TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m1002,
	TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m1003,
	TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m1004,
	TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m1005,
	TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m1006,
	TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m1007,
	TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m1009,
	TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m1010,
	TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m1011,
	TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m1012,
	TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m1013,
	TextGenerator_t205_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m1014,
	Request_t210_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t210_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t210_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t210_CustomAttributesCacheGenerator_Request_get_sourceId_m1035,
	Request_t210_CustomAttributesCacheGenerator_Request_get_appId_m1036,
	Request_t210_CustomAttributesCacheGenerator_Request_get_domain_m1037,
	Response_t212_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t212_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t212_CustomAttributesCacheGenerator_Response_get_success_m1046,
	Response_t212_CustomAttributesCacheGenerator_Response_set_success_m1047,
	Response_t212_CustomAttributesCacheGenerator_Response_get_extendedInfo_m1048,
	Response_t212_CustomAttributesCacheGenerator_Response_set_extendedInfo_m1049,
	CreateMatchRequest_t215_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t215_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t215_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t215_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t215_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m1054,
	CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m1055,
	CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m1056,
	CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m1057,
	CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m1058,
	CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m1059,
	CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m1060,
	CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m1061,
	CreateMatchRequest_t215_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m1062,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m1065,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m1066,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m1067,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m1068,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m1069,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m1070,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m1071,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m1072,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m1073,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m1074,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m1075,
	CreateMatchResponse_t216_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m1076,
	JoinMatchRequest_t217_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t217_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t217_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m1080,
	JoinMatchRequest_t217_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m1081,
	JoinMatchRequest_t217_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m1082,
	JoinMatchRequest_t217_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m1083,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m1086,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m1087,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m1088,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m1089,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m1090,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m1091,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m1092,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m1093,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m1094,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m1095,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m1096,
	JoinMatchResponse_t218_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m1097,
	DestroyMatchRequest_t219_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t219_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m1101,
	DestroyMatchRequest_t219_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m1102,
	DropConnectionRequest_t220_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t220_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t220_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m1105,
	DropConnectionRequest_t220_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m1106,
	DropConnectionRequest_t220_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m1107,
	DropConnectionRequest_t220_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m1108,
	ListMatchRequest_t221_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t221_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t221_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t221_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t221_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m1111,
	ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m1112,
	ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m1113,
	ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m1114,
	ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m1115,
	ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m1116,
	ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m1117,
	ListMatchRequest_t221_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m1118,
	MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m1121,
	MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m1122,
	MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m1123,
	MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m1124,
	MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m1125,
	MatchDirectConnectInfo_t222_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m1126,
	MatchDesc_t224_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t224_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t224_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t224_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t224_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t224_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t224_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t224_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t224_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m1130,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m1131,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_name_m1132,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_set_name_m1133,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m1134,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m1135,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m1136,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m1137,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m1138,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m1139,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m1140,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m1141,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m1142,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m1143,
	MatchDesc_t224_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m1144,
	ListMatchResponse_t226_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t226_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m1148,
	ListMatchResponse_t226_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m1149,
	AppID_t227_CustomAttributesCacheGenerator,
	SourceID_t228_CustomAttributesCacheGenerator,
	NetworkID_t229_CustomAttributesCacheGenerator,
	NodeID_t230_CustomAttributesCacheGenerator,
	NetworkMatch_t236_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1591,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t441_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t441_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1598,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t441_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1599,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t441_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1601,
	JsonArray_t237_CustomAttributesCacheGenerator,
	JsonObject_t240_CustomAttributesCacheGenerator,
	SimpleJson_t243_CustomAttributesCacheGenerator,
	SimpleJson_t243_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m1193,
	SimpleJson_t243_CustomAttributesCacheGenerator_SimpleJson_NextToken_m1205,
	SimpleJson_t243_CustomAttributesCacheGenerator_SimpleJson_t243____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t241_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t241_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1605,
	PocoJsonSerializerStrategy_t242_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t242_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1222,
	PocoJsonSerializerStrategy_t242_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1223,
	ReflectionUtils_t257_CustomAttributesCacheGenerator,
	ReflectionUtils_t257_CustomAttributesCacheGenerator_ReflectionUtils_t257_ReflectionUtils_GetConstructorInfo_m1248_Arg1_ParameterInfo,
	ReflectionUtils_t257_CustomAttributesCacheGenerator_ReflectionUtils_t257_ReflectionUtils_GetContructor_m1253_Arg1_ParameterInfo,
	ReflectionUtils_t257_CustomAttributesCacheGenerator_ReflectionUtils_t257_ReflectionUtils_GetConstructorByReflection_m1255_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t444_CustomAttributesCacheGenerator,
	ConstructorDelegate_t250_CustomAttributesCacheGenerator_ConstructorDelegate_t250_ConstructorDelegate_Invoke_m1233_Arg0_ParameterInfo,
	ConstructorDelegate_t250_CustomAttributesCacheGenerator_ConstructorDelegate_t250_ConstructorDelegate_BeginInvoke_m1234_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t252_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t253_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t254_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t255_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t256_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t259_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t264_CustomAttributesCacheGenerator,
	RequireComponent_t265_CustomAttributesCacheGenerator,
	WritableAttribute_t269_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t270_CustomAttributesCacheGenerator,
	Achievement_t283_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t283_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t283_CustomAttributesCacheGenerator_Achievement_get_id_m1308,
	Achievement_t283_CustomAttributesCacheGenerator_Achievement_set_id_m1309,
	Achievement_t283_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1310,
	Achievement_t283_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1311,
	AchievementDescription_t284_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t284_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1318,
	AchievementDescription_t284_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1319,
	Score_t285_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t285_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t285_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1328,
	Score_t285_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1329,
	Score_t285_CustomAttributesCacheGenerator_Score_get_value_m1330,
	Score_t285_CustomAttributesCacheGenerator_Score_set_value_m1331,
	Leaderboard_t80_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t80_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t80_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t80_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_get_id_m1339,
	Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_set_id_m1340,
	Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1341,
	Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1342,
	Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_get_range_m1343,
	Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_set_range_m1344,
	Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1345,
	Leaderboard_t80_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1346,
	StackTraceUtility_t297_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1358,
	StackTraceUtility_t297_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1361,
	StackTraceUtility_t297_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1363,
	SharedBetweenAnimatorsAttribute_t299_CustomAttributesCacheGenerator,
	ArgumentCache_t305_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	PersistentCall_t308_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t308_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t310_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t313_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t313_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t315_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t316_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t317_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t318_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t320_CustomAttributesCacheGenerator,
};
