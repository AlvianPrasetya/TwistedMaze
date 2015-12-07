#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Vector3
struct Vector3_t26;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" void Vector3__ctor_m69 (Vector3_t26 * __this, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C" int32_t Vector3_GetHashCode_m557 (Vector3_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C" bool Vector3_Equals_m558 (Vector3_t26 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
extern "C" String_t* Vector3_ToString_m559 (Vector3_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString(System.String)
extern "C" String_t* Vector3_ToString_m560 (Vector3_t26 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" float Vector3_SqrMagnitude_m561 (Object_t * __this /* static, unused */, Vector3_t26  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t26  Vector3_Min_m562 (Object_t * __this /* static, unused */, Vector3_t26  ___lhs, Vector3_t26  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t26  Vector3_Max_m563 (Object_t * __this /* static, unused */, Vector3_t26  ___lhs, Vector3_t26  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" Vector3_t26  Vector3_get_zero_m148 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" Vector3_t26  Vector3_get_forward_m121 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" Vector3_t26  Vector3_get_back_m564 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t26  Vector3_op_Addition_m565 (Object_t * __this /* static, unused */, Vector3_t26  ___a, Vector3_t26  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t26  Vector3_op_Subtraction_m566 (Object_t * __this /* static, unused */, Vector3_t26  ___a, Vector3_t26  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t26  Vector3_op_Multiply_m567 (Object_t * __this /* static, unused */, Vector3_t26  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool Vector3_op_Equality_m568 (Object_t * __this /* static, unused */, Vector3_t26  ___lhs, Vector3_t26  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
