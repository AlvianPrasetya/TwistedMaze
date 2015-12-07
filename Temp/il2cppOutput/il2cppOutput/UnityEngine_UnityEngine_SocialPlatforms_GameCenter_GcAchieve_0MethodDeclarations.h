#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t273;
struct GcAchievementData_t273_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t283;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t283 * GcAchievementData_ToAchievement_m1280 (GcAchievementData_t273 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t273_marshal(const GcAchievementData_t273& unmarshaled, GcAchievementData_t273_marshaled& marshaled);
void GcAchievementData_t273_marshal_back(const GcAchievementData_t273_marshaled& marshaled, GcAchievementData_t273& unmarshaled);
void GcAchievementData_t273_marshal_cleanup(GcAchievementData_t273_marshaled& marshaled);
