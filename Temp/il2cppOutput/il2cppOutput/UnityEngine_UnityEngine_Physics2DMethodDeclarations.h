#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Physics2D
struct Physics2D_t48;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t47;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t46;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C" void Physics2D__cctor_m896 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" RaycastHit2DU5BU5D_t47* Physics2D_RaycastAll_m162 (Object_t * __this /* static, unused */, Vector2_t13  ___origin, Vector2_t13  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t47* Physics2D_INTERNAL_CALL_RaycastAll_m897 (Object_t * __this /* static, unused */, Vector2_t13 * ___origin, Vector2_t13 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single)
extern "C" Collider2DU5BU5D_t46* Physics2D_OverlapCircleAll_m161 (Object_t * __this /* static, unused */, Vector2_t13  ___point, float ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::INTERNAL_CALL_OverlapCircleAll(UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" Collider2DU5BU5D_t46* Physics2D_INTERNAL_CALL_OverlapCircleAll_m898 (Object_t * __this /* static, unused */, Vector2_t13 * ___point, float ___radius, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
