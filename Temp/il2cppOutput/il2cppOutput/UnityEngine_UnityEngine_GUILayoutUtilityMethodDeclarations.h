#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_t109;
// UnityEngine.GUIStyle
struct GUIStyle_t31;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t107;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t37;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t106;
// System.Type
struct Type_t;
// UnityEngine.GUIContent
struct GUIContent_t114;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
extern "C" void GUILayoutUtility__cctor_m343 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
extern "C" LayoutCache_t107 * GUILayoutUtility_SelectIDList_m344 (Object_t * __this /* static, unused */, int32_t ___instanceID, bool ___isWindow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
extern "C" void GUILayoutUtility_Begin_m345 (Object_t * __this /* static, unused */, int32_t ___instanceID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutUtility_BeginWindow_m346 (Object_t * __this /* static, unused */, int32_t ___windowID, GUIStyle_t31 * ___style, GUILayoutOptionU5BU5D_t37* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
extern "C" void GUILayoutUtility_Layout_m347 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
extern "C" void GUILayoutUtility_LayoutFromEditorWindow_m348 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutFreeGroup_m349 (Object_t * __this /* static, unused */, GUILayoutGroup_t106 * ___toplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
extern "C" void GUILayoutUtility_LayoutSingleGroup_m350 (Object_t * __this /* static, unused */, GUILayoutGroup_t106 * ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
extern "C" Rect_t32  GUILayoutUtility_Internal_GetWindowRect_m351 (Object_t * __this /* static, unused */, int32_t ___windowID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
extern "C" void GUILayoutUtility_Internal_MoveWindow_m352 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t32  ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
extern "C" void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m353 (Object_t * __this /* static, unused */, int32_t ___windowID, Rect_t32 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::CreateGUILayoutGroupInstanceOfType(System.Type)
extern "C" GUILayoutGroup_t106 * GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m354 (Object_t * __this /* static, unused */, Type_t * ___LayoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutArea(UnityEngine.GUIStyle,System.Type)
extern "C" GUILayoutGroup_t106 * GUILayoutUtility_BeginLayoutArea_m355 (Object_t * __this /* static, unused */, GUIStyle_t31 * ___style, Type_t * ___LayoutType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t32  GUILayoutUtility_GetRect_m356 (Object_t * __this /* static, unused */, GUIContent_t114 * ___content, GUIStyle_t31 * ___style, GUILayoutOptionU5BU5D_t37* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t32  GUILayoutUtility_DoGetRect_m357 (Object_t * __this /* static, unused */, GUIContent_t114 * ___content, GUIStyle_t31 * ___style, GUILayoutOptionU5BU5D_t37* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t32  GUILayoutUtility_GetRect_m358 (Object_t * __this /* static, unused */, float ___width, float ___height, GUIStyle_t31 * ___style, GUILayoutOptionU5BU5D_t37* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t32  GUILayoutUtility_DoGetRect_m359 (Object_t * __this /* static, unused */, float ___minWidth, float ___maxWidth, float ___minHeight, float ___maxHeight, GUIStyle_t31 * ___style, GUILayoutOptionU5BU5D_t37* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
extern "C" GUIStyle_t31 * GUILayoutUtility_get_spaceStyle_m360 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
