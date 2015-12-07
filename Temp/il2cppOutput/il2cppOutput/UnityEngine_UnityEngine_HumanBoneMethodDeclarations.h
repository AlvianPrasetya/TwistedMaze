#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t193;
struct HumanBone_t193_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m969 (HumanBone_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m970 (HumanBone_t193 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m971 (HumanBone_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m972 (HumanBone_t193 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t193_marshal(const HumanBone_t193& unmarshaled, HumanBone_t193_marshaled& marshaled);
void HumanBone_t193_marshal_back(const HumanBone_t193_marshaled& marshaled, HumanBone_t193& unmarshaled);
void HumanBone_t193_marshal_cleanup(HumanBone_t193_marshaled& marshaled);
