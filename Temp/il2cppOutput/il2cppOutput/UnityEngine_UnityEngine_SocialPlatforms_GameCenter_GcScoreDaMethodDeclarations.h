#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t274;
struct GcScoreData_t274_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t285;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t285 * GcScoreData_ToScore_m1281 (GcScoreData_t274 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t274_marshal(const GcScoreData_t274& unmarshaled, GcScoreData_t274_marshaled& marshaled);
void GcScoreData_t274_marshal_back(const GcScoreData_t274_marshaled& marshaled, GcScoreData_t274& unmarshaled);
void GcScoreData_t274_marshal_cleanup(GcScoreData_t274_marshaled& marshaled);
