#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t69;
struct ScriptableObject_t69_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" void ScriptableObject__ctor_m196 (ScriptableObject_t69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m197 (Object_t * __this /* static, unused */, ScriptableObject_t69 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C" ScriptableObject_t69 * ScriptableObject_CreateInstance_m198 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" ScriptableObject_t69 * ScriptableObject_CreateInstance_m199 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t69 * ScriptableObject_CreateInstanceFromType_m200 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t69_marshal(const ScriptableObject_t69& unmarshaled, ScriptableObject_t69_marshaled& marshaled);
void ScriptableObject_t69_marshal_back(const ScriptableObject_t69_marshaled& marshaled, ScriptableObject_t69& unmarshaled);
void ScriptableObject_t69_marshal_cleanup(ScriptableObject_t69_marshaled& marshaled);
