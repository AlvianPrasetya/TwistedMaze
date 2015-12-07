#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayout
struct GUILayout_t105;
// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t37;
// UnityEngine.GUIStyle
struct GUIStyle_t31;
// UnityEngine.GUIContent
struct GUIContent_t114;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t42;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m139 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t37* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m107 (Object_t * __this /* static, unused */, String_t* ___text, GUIStyle_t31 * ___style, GUILayoutOptionU5BU5D_t37* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoLabel_m336 (Object_t * __this /* static, unused */, GUIContent_t114 * ___content, GUIStyle_t31 * ___style, GUILayoutOptionU5BU5D_t37* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Button_m108 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t37* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoButton_m337 (Object_t * __this /* static, unused */, GUIContent_t114 * ___content, GUIStyle_t31 * ___style, GUILayoutOptionU5BU5D_t37* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C" void GUILayout_FlexibleSpace_m97 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C" void GUILayout_BeginArea_m96 (Object_t * __this /* static, unused */, Rect_t32  ___screenRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUILayout_BeginArea_m338 (Object_t * __this /* static, unused */, Rect_t32  ___screenRect, GUIContent_t114 * ___content, GUIStyle_t31 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C" void GUILayout_EndArea_m109 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t42 * GUILayout_Width_m138 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t42 * GUILayout_Height_m339 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C" GUILayoutOption_t42 * GUILayout_ExpandWidth_m340 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C" GUILayoutOption_t42 * GUILayout_ExpandHeight_m341 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
