#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Debug
struct Debug_t160;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t28;
struct Object_t28_marshaled;
// System.Object
struct Object_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Debug_DrawLine_m163 (Object_t * __this /* static, unused */, Vector3_t26  ___start, Vector3_t26  ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
extern "C" void Debug_INTERNAL_CALL_DrawLine_m796 (Object_t * __this /* static, unused */, Vector3_t26 * ___start, Vector3_t26 * ___end, Color_t36 * ___color, float ___duration, bool ___depthTest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
extern "C" void Debug_Internal_Log_m797 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t28 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" void Debug_Log_m798 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" void Debug_LogError_m799 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m800 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
