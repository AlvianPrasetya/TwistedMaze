#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Quaternion
struct Quaternion_t27;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m580 (Quaternion_t27 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t27  Quaternion_get_identity_m79 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" Quaternion_t27  Quaternion_AngleAxis_m122 (Object_t * __this /* static, unused */, float ___angle, Vector3_t26  ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)
extern "C" Quaternion_t27  Quaternion_INTERNAL_CALL_AngleAxis_m581 (Object_t * __this /* static, unused */, float ___angle, Vector3_t26 * ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t27  Quaternion_Inverse_m582 (Object_t * __this /* static, unused */, Quaternion_t27  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t27  Quaternion_INTERNAL_CALL_Inverse_m583 (Object_t * __this /* static, unused */, Quaternion_t27 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m584 (Quaternion_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" Quaternion_t27  Quaternion_Euler_m585 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t27  Quaternion_Internal_FromEulerRad_m586 (Object_t * __this /* static, unused */, Vector3_t26  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t27  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m587 (Object_t * __this /* static, unused */, Vector3_t26 * ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m588 (Quaternion_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m589 (Quaternion_t27 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t27  Quaternion_op_Multiply_m590 (Object_t * __this /* static, unused */, Quaternion_t27  ___lhs, Quaternion_t27  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t26  Quaternion_op_Multiply_m591 (Object_t * __this /* static, unused */, Quaternion_t27  ___rotation, Vector3_t26  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
