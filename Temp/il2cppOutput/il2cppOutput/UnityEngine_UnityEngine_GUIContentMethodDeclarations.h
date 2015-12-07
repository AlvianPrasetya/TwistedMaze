#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIContent
struct GUIContent_t114;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t83;

// System.Void UnityEngine.GUIContent::.ctor()
extern "C" void GUIContent__ctor_m466 (GUIContent_t114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C" void GUIContent__ctor_m467 (GUIContent_t114 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
extern "C" void GUIContent__ctor_m468 (GUIContent_t114 * __this, GUIContent_t114 * ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.cctor()
extern "C" void GUIContent__cctor_m469 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
extern "C" GUIContent_t114 * GUIContent_Temp_m470 (Object_t * __this /* static, unused */, String_t* ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(UnityEngine.Texture)
extern "C" GUIContent_t114 * GUIContent_Temp_m471 (Object_t * __this /* static, unused */, Texture_t83 * ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern "C" void GUIContent_ClearStaticCache_m472 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
