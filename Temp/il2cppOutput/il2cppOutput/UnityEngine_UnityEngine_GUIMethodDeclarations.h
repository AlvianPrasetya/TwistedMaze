#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t33;
// UnityEngine.GUISkin
struct GUISkin_t34;
// UnityEngine.Material
struct Material_t84;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t31;
// UnityEngine.GUIContent
struct GUIContent_t114;
// UnityEngine.Texture
struct Texture_t83;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t101;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m318 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m319 (Object_t * __this /* static, unused */, DateTime_t104  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m320 (Object_t * __this /* static, unused */, GUISkin_t34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t34 * GUI_get_skin_m98 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_get_color_m321 (Object_t * __this /* static, unused */, Color_t36 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C" Color_t36  GUI_get_color_m322 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m323 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_depth(System.Int32)
extern "C" void GUI_set_depth_m152 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m133 (Object_t * __this /* static, unused */, Rect_t32  ___position, String_t* ___text, GUIStyle_t31 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m324 (Object_t * __this /* static, unused */, Rect_t32  ___position, GUIContent_t114 * ___content, GUIStyle_t31 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m325 (Object_t * __this /* static, unused */, Rect_t32  ___position, GUIContent_t114 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m326 (Object_t * __this /* static, unused */, Rect_t32 * ___position, GUIContent_t114 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
extern "C" void GUI_DrawTexture_m153 (Object_t * __this /* static, unused */, Rect_t32  ___position, Texture_t83 * ___image, int32_t ___scaleMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C" void GUI_DrawTexture_m327 (Object_t * __this /* static, unused */, Rect_t32  ___position, Texture_t83 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C" Material_t84 * GUI_get_blendMaterial_m328 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C" Material_t84 * GUI_get_blitMaterial_m329 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m131 (Object_t * __this /* static, unused */, Rect_t32  ___position, Texture_t83 * ___image, GUIStyle_t31 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m330 (Object_t * __this /* static, unused */, Rect_t32  ___position, GUIContent_t114 * ___content, GUIStyle_t31 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m331 (Object_t * __this /* static, unused */, Rect_t32  ___position, GUIContent_t114 * ___content, GUIStyle_t31 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m332 (Object_t * __this /* static, unused */, Rect_t32  ___position, GUIContent_t114 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m333 (Object_t * __this /* static, unused */, Rect_t32 * ___position, GUIContent_t114 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C" void GUI_BeginGroup_m130 (Object_t * __this /* static, unused */, Rect_t32  ___position, GUIStyle_t31 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_BeginGroup_m334 (Object_t * __this /* static, unused */, Rect_t32  ___position, GUIContent_t114 * ___content, GUIStyle_t31 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndGroup()
extern "C" void GUI_EndGroup_m132 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m335 (Object_t * __this /* static, unused */, WindowFunction_t101 * ___func, int32_t ___id, GUISkin_t34 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t31 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
