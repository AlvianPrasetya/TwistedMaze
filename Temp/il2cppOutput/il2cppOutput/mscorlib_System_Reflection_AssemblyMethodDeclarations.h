#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Assembly
struct Assembly_t717;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t40;
// System.Reflection.Module
struct Module_t1111;
// System.Reflection.AssemblyName
struct AssemblyName_t1123;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1478;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.Assembly::.ctor()
extern "C" void Assembly__ctor_m6122 (Assembly_t717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
extern "C" String_t* Assembly_get_fullname_m6123 (Assembly_t717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
extern "C" String_t* Assembly_get_location_m6124 (Assembly_t717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
extern "C" String_t* Assembly_get_FullName_m6125 (Assembly_t717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
extern "C" String_t* Assembly_get_Location_m6126 (Assembly_t717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern "C" bool Assembly_IsDefined_m6127 (Assembly_t717 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t40* Assembly_GetCustomAttributes_m6128 (Assembly_t717 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern "C" IntPtr_t Assembly_GetManifestResourceInternal_m6129 (Assembly_t717 * __this, String_t* ___name, int32_t* ___size, Module_t1111 ** ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern "C" Type_t * Assembly_GetType_m6130 (Assembly_t717 * __this, String_t* ___name, bool ___throwOnError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
extern "C" Type_t * Assembly_GetType_m6131 (Assembly_t717 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_InternalGetType_m6132 (Assembly_t717 * __this, Module_t1111 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_GetType_m6133 (Assembly_t717 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C" void Assembly_FillName_m6134 (Object_t * __this /* static, unused */, Assembly_t717 * ___ass, AssemblyName_t1123 * ___aname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern "C" AssemblyName_t1123 * Assembly_UnprotectedGetName_m6135 (Assembly_t717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
extern "C" String_t* Assembly_ToString_m6136 (Assembly_t717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C" Assembly_t717 * Assembly_Load_m6137 (Object_t * __this /* static, unused */, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C" Module_t1111 * Assembly_GetModule_m6138 (Assembly_t717 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C" ModuleU5BU5D_t1478* Assembly_GetModulesInternal_m6139 (Assembly_t717 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern "C" ModuleU5BU5D_t1478* Assembly_GetModules_m6140 (Assembly_t717 * __this, bool ___getResourceModules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern "C" Assembly_t717 * Assembly_GetExecutingAssembly_m6141 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
