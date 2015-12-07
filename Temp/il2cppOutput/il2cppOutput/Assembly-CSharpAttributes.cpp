#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern TypeInfo* RuntimeCompatibilityAttribute_t51_il2cpp_TypeInfo_var;
void g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RuntimeCompatibilityAttribute_t51_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RuntimeCompatibilityAttribute_t51 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t51 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t51_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m167(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m168(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_Assembly_AttributeGenerators[2] = 
{
	NULL,
	g_AssemblyU2DCSharp_Assembly_CustomAttributesCacheGenerator,
};
