#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rect
struct Rect_t32;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Rect__ctor_m95 (Rect_t32 * __this, float ___left, float ___top, float ___width, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Rect::MinMaxRect(System.Single,System.Single,System.Single,System.Single)
extern "C" Rect_t32  Rect_MinMaxRect_m592 (Object_t * __this /* static, unused */, float ___left, float ___top, float ___right, float ___bottom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_x()
extern "C" float Rect_get_x_m593 (Rect_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_x(System.Single)
extern "C" void Rect_set_x_m594 (Rect_t32 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_y()
extern "C" float Rect_get_y_m595 (Rect_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_y(System.Single)
extern "C" void Rect_set_y_m596 (Rect_t32 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C" float Rect_get_width_m597 (Rect_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_width(System.Single)
extern "C" void Rect_set_width_m598 (Rect_t32 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C" float Rect_get_height_m599 (Rect_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_height(System.Single)
extern "C" void Rect_set_height_m600 (Rect_t32 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMin()
extern "C" float Rect_get_xMin_m601 (Rect_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMin()
extern "C" float Rect_get_yMin_m602 (Rect_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMax()
extern "C" float Rect_get_xMax_m603 (Rect_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMax()
extern "C" float Rect_get_yMax_m604 (Rect_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Rect::ToString()
extern "C" String_t* Rect_ToString_m605 (Rect_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
extern "C" bool Rect_Contains_m606 (Rect_t32 * __this, Vector2_t13  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
extern "C" bool Rect_Contains_m607 (Rect_t32 * __this, Vector3_t26  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Rect::GetHashCode()
extern "C" int32_t Rect_GetHashCode_m608 (Rect_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Equals(System.Object)
extern "C" bool Rect_Equals_m609 (Rect_t32 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
