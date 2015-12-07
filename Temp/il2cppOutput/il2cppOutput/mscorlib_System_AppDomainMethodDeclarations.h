#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t1373;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t717;
// System.Security.Policy.Evidence
struct Evidence_t1120;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1194;

// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m7517 (AppDomain_t1373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t1373 * AppDomain_getCurDomain_m7518 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t1373 * AppDomain_get_CurrentDomain_m7519 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t717 * AppDomain_LoadAssembly_m7520 (AppDomain_t1373 * __this, String_t* ___assemblyRef, Evidence_t1120 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t717 * AppDomain_Load_m7521 (AppDomain_t1373 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t717 * AppDomain_Load_m7522 (AppDomain_t1373 * __this, String_t* ___assemblyString, Evidence_t1120 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t1194 * AppDomain_InternalGetContext_m7523 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t1194 * AppDomain_InternalGetDefaultContext_m7524 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m7525 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m7526 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m7527 (AppDomain_t1373 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
