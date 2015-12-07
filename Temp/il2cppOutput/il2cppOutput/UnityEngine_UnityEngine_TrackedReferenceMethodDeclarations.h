#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TrackedReference
struct TrackedReference_t188;
struct TrackedReference_t188_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" bool TrackedReference_Equals_m1381 (TrackedReference_t188 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m1382 (TrackedReference_t188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m1383 (Object_t * __this /* static, unused */, TrackedReference_t188 * ___x, TrackedReference_t188 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void TrackedReference_t188_marshal(const TrackedReference_t188& unmarshaled, TrackedReference_t188_marshaled& marshaled);
void TrackedReference_t188_marshal_back(const TrackedReference_t188_marshaled& marshaled, TrackedReference_t188& unmarshaled);
void TrackedReference_t188_marshal_cleanup(TrackedReference_t188_marshaled& marshaled);
