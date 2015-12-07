#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t77;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t281;

// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern "C" void LocalUser__ctor_m1289 (LocalUser_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C" void LocalUser_SetFriends_m1290 (LocalUser_t77 * __this, IUserProfileU5BU5D_t281* ___friends, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C" void LocalUser_SetAuthenticated_m1291 (LocalUser_t77 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" void LocalUser_SetUnderage_m1292 (LocalUser_t77 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C" bool LocalUser_get_authenticated_m1293 (LocalUser_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
