﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void System.Object::.ctor()
extern "C" void Object__ctor_m1415 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::Equals(System.Object)
extern "C" bool Object_Equals_m1643 (Object_t * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::Equals(System.Object,System.Object)
extern "C" bool Object_Equals_m2798 (Object_t * __this /* static, unused */, Object_t * ___objA, Object_t * ___objB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C" void Object_Finalize_m170 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Object::GetHashCode()
extern "C" int32_t Object_GetHashCode_m1644 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C" Type_t * Object_GetType_m1430 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Object::MemberwiseClone()
extern "C" Object_t * Object_MemberwiseClone_m3867 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Object::ToString()
extern "C" String_t* Object_ToString_m1476 (Object_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::ReferenceEquals(System.Object,System.Object)
extern "C" bool Object_ReferenceEquals_m1437 (Object_t * __this /* static, unused */, Object_t * ___objA, Object_t * ___objB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Object::InternalGetHashCode(System.Object)
extern "C" int32_t Object_InternalGetHashCode_m3868 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
