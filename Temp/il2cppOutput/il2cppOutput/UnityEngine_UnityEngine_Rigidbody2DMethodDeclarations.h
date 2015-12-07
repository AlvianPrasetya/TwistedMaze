#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t38;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RigidbodyConstraints2D
#include "UnityEngine_UnityEngine_RigidbodyConstraints2D.h"

// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_position(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_get_position_m900 (Rigidbody2D_t38 * __this, Vector2_t13 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
extern "C" Vector2_t13  Rigidbody2D_get_position_m115 (Rigidbody2D_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
extern "C" void Rigidbody2D_MovePosition_m120 (Rigidbody2D_t38 * __this, Vector2_t13  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_MovePosition(UnityEngine.Rigidbody2D,UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_CALL_MovePosition_m901 (Object_t * __this /* static, unused */, Rigidbody2D_t38 * ___self, Vector2_t13 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C" void Rigidbody2D_INTERNAL_set_velocity_m902 (Rigidbody2D_t38 * __this, Vector2_t13 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C" void Rigidbody2D_set_velocity_m146 (Rigidbody2D_t38 * __this, Vector2_t13  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_constraints(UnityEngine.RigidbodyConstraints2D)
extern "C" void Rigidbody2D_set_constraints_m147 (Rigidbody2D_t38 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
