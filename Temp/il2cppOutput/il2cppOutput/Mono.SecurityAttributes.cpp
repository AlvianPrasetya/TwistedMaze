#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
extern TypeInfo* AssemblyCopyrightAttribute_t742_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t746_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t743_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t748_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t739_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t744_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t747_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t51_il2cpp_TypeInfo_var;
extern TypeInfo* InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t752_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t751_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t738_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1191);
		AssemblyDescriptionAttribute_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1195);
		AssemblyProductAttribute_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1192);
		AssemblyTitleAttribute_t748_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1197);
		CLSCompliantAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		AssemblyCompanyAttribute_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1193);
		ComVisibleAttribute_t747_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1196);
		RuntimeCompatibilityAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		AssemblyKeyFileAttribute_t752_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1201);
		AssemblyDelaySignAttribute_t751_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1200);
		NeutralResourcesLanguageAttribute_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1187);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t742 * tmp;
		tmp = (AssemblyCopyrightAttribute_t742 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t742_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m2804(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t746 * tmp;
		tmp = (AssemblyDescriptionAttribute_t746 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t746_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m2808(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t743 * tmp;
		tmp = (AssemblyProductAttribute_t743 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t743_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m2805(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t748 * tmp;
		tmp = (AssemblyTitleAttribute_t748 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t748_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m2810(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t739 * tmp;
		tmp = (CLSCompliantAttribute_t739 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t739_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2801(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t744 * tmp;
		tmp = (AssemblyCompanyAttribute_t744 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t744_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m2806(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t747 * tmp;
		tmp = (ComVisibleAttribute_t747 *)il2cpp_codegen_object_new (ComVisibleAttribute_t747_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m2809(tmp, false, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t51 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t51 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t51_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m167(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m168(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t427 * tmp;
		tmp = (InternalsVisibleToAttribute_t427 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t427_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1574(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t752 * tmp;
		tmp = (AssemblyKeyFileAttribute_t752 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t752_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m2814(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t751 * tmp;
		tmp = (AssemblyDelaySignAttribute_t751 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t751_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m2813(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t738 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t738 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t738_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m2800(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t739_il2cpp_TypeInfo_var;
void BigInteger_t782_CustomAttributesCacheGenerator_BigInteger__ctor_m2944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t739 * tmp;
		tmp = (CLSCompliantAttribute_t739 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t739_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2801(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t739_il2cpp_TypeInfo_var;
void BigInteger_t782_CustomAttributesCacheGenerator_BigInteger__ctor_m2946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t739 * tmp;
		tmp = (CLSCompliantAttribute_t739 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t739_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2801(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t739_il2cpp_TypeInfo_var;
void BigInteger_t782_CustomAttributesCacheGenerator_BigInteger__ctor_m2948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t739 * tmp;
		tmp = (CLSCompliantAttribute_t739 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t739_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2801(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t739_il2cpp_TypeInfo_var;
void BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_SetBit_m2955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t739 * tmp;
		tmp = (CLSCompliantAttribute_t739 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t739_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2801(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t739_il2cpp_TypeInfo_var;
void BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_SetBit_m2956(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t739 * tmp;
		tmp = (CLSCompliantAttribute_t739 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t739_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2801(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t739_il2cpp_TypeInfo_var;
void BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_ToString_m2959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t739 * tmp;
		tmp = (CLSCompliantAttribute_t739 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t739_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2801(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t739_il2cpp_TypeInfo_var;
void BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_ToString_m2960(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t739 * tmp;
		tmp = (CLSCompliantAttribute_t739 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t739_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2801(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t739_il2cpp_TypeInfo_var;
void BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m2970(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t739 * tmp;
		tmp = (CLSCompliantAttribute_t739 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t739_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2801(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t739_il2cpp_TypeInfo_var;
void BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m2974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t739 * tmp;
		tmp = (CLSCompliantAttribute_t739 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t739_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2801(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t739_il2cpp_TypeInfo_var;
void BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_op_Equality_m2980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t739 * tmp;
		tmp = (CLSCompliantAttribute_t739 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t739_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2801(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t739_il2cpp_TypeInfo_var;
void BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m2981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t739 * tmp;
		tmp = (CLSCompliantAttribute_t739 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t739_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2801(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t739_il2cpp_TypeInfo_var;
void ModulusRing_t783_CustomAttributesCacheGenerator_ModulusRing_Pow_m2928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t739 * tmp;
		tmp = (CLSCompliantAttribute_t739 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t739_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2801(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
void ASN1_t702_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void PKCS12_t726_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
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
void PKCS12_t726_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
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
void PKCS12_t726_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
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
void PKCS12_t726_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
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
void X509Certificate_t587_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
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
void X509Certificate_t587_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
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
void X509Certificate_t587_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
void X509CertificateCollection_t727_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t432_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t814_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
void X509Crl_t704_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void X509Crl_t704_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
void X509ExtensionCollection_t730_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void ExtendedKeyUsageExtension_t817_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t432_il2cpp_TypeInfo_var;
void KeyUsages_t819_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t432_il2cpp_TypeInfo_var;
void CertTypes_t821_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t433_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t834_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void HttpsClientStream_t852_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
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
void HttpsClientStream_t852_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
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
void HttpsClientStream_t852_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3408(CustomAttributesCache* cache)
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
void HttpsClientStream_t852_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3409(CustomAttributesCache* cache)
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
void RSASslSignatureDeformatter_t858_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
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
void RSASslSignatureFormatter_t860_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t432_il2cpp_TypeInfo_var;
void SecurityProtocolType_t863_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t430_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t898_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern const CustomAttributesCacheGenerator g_Mono_Security_Assembly_AttributeGenerators[39] = 
{
	NULL,
	g_Mono_Security_Assembly_CustomAttributesCacheGenerator,
	BigInteger_t782_CustomAttributesCacheGenerator_BigInteger__ctor_m2944,
	BigInteger_t782_CustomAttributesCacheGenerator_BigInteger__ctor_m2946,
	BigInteger_t782_CustomAttributesCacheGenerator_BigInteger__ctor_m2948,
	BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_SetBit_m2955,
	BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_SetBit_m2956,
	BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_ToString_m2959,
	BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_ToString_m2960,
	BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m2970,
	BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m2974,
	BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_op_Equality_m2980,
	BigInteger_t782_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m2981,
	ModulusRing_t783_CustomAttributesCacheGenerator_ModulusRing_Pow_m2928,
	ASN1_t702_CustomAttributesCacheGenerator,
	PKCS12_t726_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t726_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t726_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t726_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	X509Certificate_t587_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t587_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t587_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t727_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t814_CustomAttributesCacheGenerator,
	X509Crl_t704_CustomAttributesCacheGenerator,
	X509Crl_t704_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t730_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t817_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t819_CustomAttributesCacheGenerator,
	CertTypes_t821_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t834_CustomAttributesCacheGenerator,
	HttpsClientStream_t852_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t852_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t852_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3408,
	HttpsClientStream_t852_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3409,
	RSASslSignatureDeformatter_t858_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t860_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t863_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t898_CustomAttributesCacheGenerator,
};
