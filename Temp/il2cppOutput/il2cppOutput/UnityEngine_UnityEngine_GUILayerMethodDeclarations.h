#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayer
struct GUILayer_t93;
// UnityEngine.GUIElement
struct GUIElement_t92;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t92 * GUILayer_HitTest_m305 (GUILayer_t93 * __this, Vector3_t26  ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t92 * GUILayer_INTERNAL_CALL_HitTest_m306 (Object_t * __this /* static, unused */, GUILayer_t93 * ___self, Vector3_t26 * ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
