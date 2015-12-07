#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t187;
struct AnimationCurve_t187_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t332;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m945 (AnimationCurve_t187 * __this, KeyframeU5BU5D_t332* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m946 (AnimationCurve_t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m947 (AnimationCurve_t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m948 (AnimationCurve_t187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m949 (AnimationCurve_t187 * __this, KeyframeU5BU5D_t332* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t187_marshal(const AnimationCurve_t187& unmarshaled, AnimationCurve_t187_marshaled& marshaled);
void AnimationCurve_t187_marshal_back(const AnimationCurve_t187_marshaled& marshaled, AnimationCurve_t187& unmarshaled);
void AnimationCurve_t187_marshal_cleanup(AnimationCurve_t187_marshaled& marshaled);
