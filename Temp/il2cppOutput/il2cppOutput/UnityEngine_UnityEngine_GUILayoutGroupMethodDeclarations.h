#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t106;
// UnityEngine.RectOffset
struct RectOffset_t112;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t37;
// UnityEngine.GUIStyle
struct GUIStyle_t31;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t110;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutGroup::.ctor()
extern "C" void GUILayoutGroup__ctor_m374 (GUILayoutGroup_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
extern "C" RectOffset_t112 * GUILayoutGroup_get_margin_m375 (GUILayoutGroup_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C" void GUILayoutGroup_ApplyOptions_m376 (GUILayoutGroup_t106 * __this, GUILayoutOptionU5BU5D_t37* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C" void GUILayoutGroup_ApplyStyleSettings_m377 (GUILayoutGroup_t106 * __this, GUIStyle_t31 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
extern "C" void GUILayoutGroup_ResetCursor_m378 (GUILayoutGroup_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::GetNext()
extern "C" GUILayoutEntry_t110 * GUILayoutGroup_GetNext_m379 (GUILayoutGroup_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::Add(UnityEngine.GUILayoutEntry)
extern "C" void GUILayoutGroup_Add_m380 (GUILayoutGroup_t106 * __this, GUILayoutEntry_t110 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
extern "C" void GUILayoutGroup_CalcWidth_m381 (GUILayoutGroup_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
extern "C" void GUILayoutGroup_SetHorizontal_m382 (GUILayoutGroup_t106 * __this, float ___x, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
extern "C" void GUILayoutGroup_CalcHeight_m383 (GUILayoutGroup_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
extern "C" void GUILayoutGroup_SetVertical_m384 (GUILayoutGroup_t106 * __this, float ___y, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutGroup::ToString()
extern "C" String_t* GUILayoutGroup_ToString_m385 (GUILayoutGroup_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
