#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t50;
// UnityEngine.Collider2D
struct Collider2D_t49;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t38;
// UnityEngine.Transform
struct Transform_t7;

// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t49 * RaycastHit2D_get_collider_m164 (RaycastHit2D_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t38 * RaycastHit2D_get_rigidbody_m899 (RaycastHit2D_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t7 * RaycastHit2D_get_transform_m165 (RaycastHit2D_t50 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
