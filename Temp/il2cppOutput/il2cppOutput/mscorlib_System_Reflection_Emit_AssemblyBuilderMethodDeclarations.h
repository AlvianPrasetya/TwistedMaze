#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1100;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t1478;
// System.Exception
struct Exception_t118;
// System.Reflection.AssemblyName
struct AssemblyName_t1123;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m5900 (AssemblyBuilder_t1100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C" ModuleU5BU5D_t1478* AssemblyBuilder_GetModulesInternal_m5901 (AssemblyBuilder_t1100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m5902 (AssemblyBuilder_t1100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t118 * AssemblyBuilder_not_supported_m5903 (AssemblyBuilder_t1100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1123 * AssemblyBuilder_UnprotectedGetName_m5904 (AssemblyBuilder_t1100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
