#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"



// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Void
#include "mscorlib_System_Void.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern TypeInfo* UserProfileU5BU5D_t76_il2cpp_TypeInfo_var;
extern "C" void LocalUser__ctor_m1289 (LocalUser_t77 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t76_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(74);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfile__ctor_m1294(__this, /*hidden argument*/NULL);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t281*)((UserProfileU5BU5D_t76*)SZArrayNew(UserProfileU5BU5D_t76_il2cpp_TypeInfo_var, 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C" void LocalUser_SetFriends_m1290 (LocalUser_t77 * __this, IUserProfileU5BU5D_t281* ___friends, const MethodInfo* method)
{
	{
		IUserProfileU5BU5D_t281* L_0 = ___friends;
		__this->___m_Friends_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C" void LocalUser_SetAuthenticated_m1291 (LocalUser_t77 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Authenticated_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" void LocalUser_SetUnderage_m1292 (LocalUser_t77 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Underage_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C" bool LocalUser_get_authenticated_m1293 (LocalUser_t77 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.String
#include "mscorlib_System_String.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// System.Int32
#include "mscorlib_System_Int32.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern TypeInfo* Texture2D_t11_il2cpp_TypeInfo_var;
extern "C" void UserProfile__ctor_m1294 (UserProfile_t282 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		__this->___m_UserName_0 = (String_t*) &_stringLiteral242;
		__this->___m_ID_1 = (String_t*) &_stringLiteral1;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t11 * L_0 = (Texture2D_t11 *)il2cpp_codegen_object_new (Texture2D_t11_il2cpp_TypeInfo_var);
		Texture2D__ctor_m299(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C" void UserProfile__ctor_m1295 (UserProfile_t282 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t11 * ___image, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		String_t* L_1 = ___id;
		__this->___m_ID_1 = L_1;
		bool L_2 = ___friend;
		__this->___m_IsFriend_2 = L_2;
		int32_t L_3 = ___state;
		__this->___m_State_3 = L_3;
		Texture2D_t11 * L_4 = ___image;
		__this->___m_Image_4 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t53_il2cpp_TypeInfo_var;
extern TypeInfo* UserState_t293_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UserProfile_ToString_m1296 (UserProfile_t282 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Boolean_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		UserState_t293_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(258);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral243);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral243;
		ObjectU5BU5D_t40* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t40* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral243);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral243;
		ObjectU5BU5D_t40* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend() */, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(Boolean_t53_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t40* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral243);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)(String_t*) &_stringLiteral243;
		ObjectU5BU5D_t40* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state() */, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(UserState_t293_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m127(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C" void UserProfile_SetUserName_m1297 (UserProfile_t282 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C" void UserProfile_SetUserID_m1298 (UserProfile_t282 * __this, String_t* ___id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___id;
		__this->___m_ID_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C" void UserProfile_SetImage_m1299 (UserProfile_t282 * __this, Texture2D_t11 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t11 * L_0 = ___image;
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" String_t* UserProfile_get_userName_m1300 (UserProfile_t282 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" String_t* UserProfile_get_id_m1301 (UserProfile_t282 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" bool UserProfile_get_isFriend_m1302 (UserProfile_t282 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" int32_t UserProfile_get_state_m1303 (UserProfile_t282 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C" void Achievement__ctor_m1304 (Achievement_t283 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t104  ___lastReportedDate, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t104  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern TypeInfo* DateTime_t104_il2cpp_TypeInfo_var;
extern "C" void Achievement__ctor_m1305 (Achievement_t283 * __this, String_t* ___id, double ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t104_il2cpp_TypeInfo_var);
		DateTime_t104  L_2 = ((DateTime_t104_StaticFields*)DateTime_t104_il2cpp_TypeInfo_var->static_fields)->___MinValue_3;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern "C" void Achievement__ctor_m1306 (Achievement_t283 * __this, const MethodInfo* method)
{
	{
		Achievement__ctor_m1305(__this, (String_t*) &_stringLiteral244, (0.0), /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t390_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t53_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t104_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Achievement_ToString_m1307 (Achievement_t283 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Double_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(200);
		Boolean_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		DateTime_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral243);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral243;
		ObjectU5BU5D_t40* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(6 /* System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted() */, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(Double_t390_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_6;
		ObjectU5BU5D_t40* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral243);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)(String_t*) &_stringLiteral243;
		ObjectU5BU5D_t40* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed() */, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t53_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		ObjectU5BU5D_t40* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral243);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5)) = (Object_t *)(String_t*) &_stringLiteral243;
		ObjectU5BU5D_t40* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden() */, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(Boolean_t53_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)L_16;
		ObjectU5BU5D_t40* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral243);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7)) = (Object_t *)(String_t*) &_stringLiteral243;
		ObjectU5BU5D_t40* L_18 = L_17;
		DateTime_t104  L_19 = (DateTime_t104 )VirtFuncInvoker0< DateTime_t104  >::Invoke(10 /* System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate() */, __this);
		DateTime_t104  L_20 = L_19;
		Object_t * L_21 = Box(DateTime_t104_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8)) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m127(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m1308 (Achievement_t283 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m1309 (Achievement_t283 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m1310 (Achievement_t283 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m1311 (Achievement_t283 * __this, double ___value, const MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m1312 (Achievement_t283 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m1313 (Achievement_t283 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t104  Achievement_get_lastReportedDate_m1314 (Achievement_t283 * __this, const MethodInfo* method)
{
	{
		DateTime_t104  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"



// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" void AchievementDescription__ctor_m1315 (AchievementDescription_t284 * __this, String_t* ___id, String_t* ___title, Texture2D_t11 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String) */, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t11 * L_2 = ___image;
		__this->___m_Image_1 = L_2;
		String_t* L_3 = ___achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		String_t* L_4 = ___unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		bool L_5 = ___hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t53_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AchievementDescription_ToString_m1316 (AchievementDescription_t284 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		Boolean_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t40* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral243);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral243;
		ObjectU5BU5D_t40* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t40* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral243);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral243;
		ObjectU5BU5D_t40* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription() */, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_7;
		ObjectU5BU5D_t40* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral243);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5)) = (Object_t *)(String_t*) &_stringLiteral243;
		ObjectU5BU5D_t40* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription() */, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6)) = (Object_t *)L_10;
		ObjectU5BU5D_t40* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral243);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7)) = (Object_t *)(String_t*) &_stringLiteral243;
		ObjectU5BU5D_t40* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points() */, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8)) = (Object_t *)L_15;
		ObjectU5BU5D_t40* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral243);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9))) = (Object_t *)(String_t*) &_stringLiteral243;
		ObjectU5BU5D_t40* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden() */, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(Boolean_t53_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m127(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C" void AchievementDescription_SetImage_m1317 (AchievementDescription_t284 * __this, Texture2D_t11 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t11 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m1318 (AchievementDescription_t284 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m1319 (AchievementDescription_t284 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m1320 (AchievementDescription_t284 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m1321 (AchievementDescription_t284 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m1322 (AchievementDescription_t284 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m1323 (AchievementDescription_t284 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m1324 (AchievementDescription_t284 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"

// System.Int64
#include "mscorlib_System_Int64.h"


// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern TypeInfo* DateTime_t104_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Score__ctor_m1325 (Score_t285 * __this, String_t* ___leaderboardID, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t104_il2cpp_TypeInfo_var);
		DateTime_t104  L_2 = DateTime_get_Now_m1423(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		Score__ctor_m1326(__this, L_0, L_1, (String_t*) &_stringLiteral1, L_2, L_3, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m1326 (Score_t285 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t104  ___date, String_t* ___formattedValue, int32_t ___rank, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String) */, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64) */, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t104  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t391_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t104_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Score_ToString_m1327 (Score_t285 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		Int64_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(201);
		DateTime_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral245);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral245;
		ObjectU5BU5D_t40* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t40* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral246);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral246;
		ObjectU5BU5D_t40* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value() */, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(Int64_t391_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t40* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral247);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)(String_t*) &_stringLiteral247;
		ObjectU5BU5D_t40* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID() */, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_12;
		ObjectU5BU5D_t40* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral248);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)(String_t*) &_stringLiteral248;
		ObjectU5BU5D_t40* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7)) = (Object_t *)L_15;
		ObjectU5BU5D_t40* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral249);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8)) = (Object_t *)(String_t*) &_stringLiteral249;
		ObjectU5BU5D_t40* L_17 = L_16;
		DateTime_t104  L_18 = (__this->___m_Date_0);
		DateTime_t104  L_19 = L_18;
		Object_t * L_20 = Box(DateTime_t104_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m127(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m1328 (Score_t285 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m1329 (Score_t285 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m1330 (Score_t285 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m1331 (Score_t285 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"

// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern TypeInfo* Score_t285_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t366_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t44_il2cpp_TypeInfo_var;
extern "C" void Leaderboard__ctor_m1332 (Leaderboard_t80 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t285_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(80);
		ScoreU5BU5D_t366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(79);
		StringU5BU5D_t44_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(25);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String) */, __this, (String_t*) &_stringLiteral250);
		Range_t288  L_0 = {0};
		Range__ctor_m1353(&L_0, 1, ((int32_t)10), /*hidden argument*/NULL);
		VirtActionInvoker1< Range_t288  >::Invoke(10 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range) */, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope) */, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope) */, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t285 * L_1 = (Score_t285 *)il2cpp_codegen_object_new (Score_t285_il2cpp_TypeInfo_var);
		Score__ctor_m1325(L_1, (String_t*) &_stringLiteral250, (((int64_t)0)), /*hidden argument*/NULL);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t287*)((ScoreU5BU5D_t366*)SZArrayNew(ScoreU5BU5D_t366_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = (String_t*) &_stringLiteral250;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t44*)SZArrayNew(StringU5BU5D_t44_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t53_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t41_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t382_il2cpp_TypeInfo_var;
extern TypeInfo* UserScope_t294_il2cpp_TypeInfo_var;
extern TypeInfo* TimeScope_t295_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Leaderboard_ToString_m1333 (Leaderboard_t80 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Boolean_t53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		Int32_t41_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		UInt32_t382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		UserScope_t294_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(259);
		TimeScope_t295_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	Range_t288  V_0 = {0};
	Range_t288  V_1 = {0};
	{
		ObjectU5BU5D_t40* L_0 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral251);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral251;
		ObjectU5BU5D_t40* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id() */, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t40* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral252);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)(String_t*) &_stringLiteral252;
		ObjectU5BU5D_t40* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t40* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral253);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)(String_t*) &_stringLiteral253;
		ObjectU5BU5D_t40* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t53_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_10;
		ObjectU5BU5D_t40* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral254);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)(String_t*) &_stringLiteral254;
		ObjectU5BU5D_t40* L_12 = L_11;
		Range_t288  L_13 = (Range_t288 )VirtFuncInvoker0< Range_t288  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7)) = (Object_t *)L_16;
		ObjectU5BU5D_t40* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral224);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8)) = (Object_t *)(String_t*) &_stringLiteral224;
		ObjectU5BU5D_t40* L_18 = L_17;
		Range_t288  L_19 = (Range_t288 )VirtFuncInvoker0< Range_t288  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9))) = (Object_t *)L_22;
		ObjectU5BU5D_t40* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral255);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10))) = (Object_t *)(String_t*) &_stringLiteral255;
		ObjectU5BU5D_t40* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(UInt32_t382_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11))) = (Object_t *)L_27;
		ObjectU5BU5D_t40* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, (String_t*) &_stringLiteral256);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12))) = (Object_t *)(String_t*) &_stringLiteral256;
		ObjectU5BU5D_t40* L_29 = L_28;
		IScoreU5BU5D_t287* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13))) = (Object_t *)L_32;
		ObjectU5BU5D_t40* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, (String_t*) &_stringLiteral257);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14))) = (Object_t *)(String_t*) &_stringLiteral257;
		ObjectU5BU5D_t40* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope() */, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(UserScope_t294_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15))) = (Object_t *)L_37;
		ObjectU5BU5D_t40* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, (String_t*) &_stringLiteral258);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16))) = (Object_t *)(String_t*) &_stringLiteral258;
		ObjectU5BU5D_t40* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope() */, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(TimeScope_t295_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17))) = (Object_t *)L_42;
		ObjectU5BU5D_t40* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, (String_t*) &_stringLiteral259);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18))) = (Object_t *)(String_t*) &_stringLiteral259;
		ObjectU5BU5D_t40* L_44 = L_43;
		StringU5BU5D_t44* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(Int32_t41_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m127(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C" void Leaderboard_SetLocalUserScore_m1334 (Leaderboard_t80 * __this, Object_t * ___score, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C" void Leaderboard_SetMaxRange_m1335 (Leaderboard_t80 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C" void Leaderboard_SetScores_m1336 (Leaderboard_t80 * __this, IScoreU5BU5D_t287* ___scores, const MethodInfo* method)
{
	{
		IScoreU5BU5D_t287* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C" void Leaderboard_SetTitle_m1337 (Leaderboard_t80 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C" StringU5BU5D_t44* Leaderboard_GetUserFilter_m1338 (Leaderboard_t80 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t44* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m1339 (Leaderboard_t80 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m1340 (Leaderboard_t80 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m1341 (Leaderboard_t80 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m1342 (Leaderboard_t80 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t288  Leaderboard_get_range_m1343 (Leaderboard_t80 * __this, const MethodInfo* method)
{
	{
		Range_t288  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m1344 (Leaderboard_t80 * __this, Range_t288  ___value, const MethodInfo* method)
{
	{
		Range_t288  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m1345 (Leaderboard_t80 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m1346 (Leaderboard_t80 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"


// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern "C" void HitInfo_SendMessage_m1347 (HitInfo_t289 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		GameObject_t1 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m854(L_0, L_1, NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_Compare_m1348 (Object_t * __this /* static, unused */, HitInfo_t289  ___lhs, HitInfo_t289  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t1 * L_0 = ((&___lhs)->___target_0);
		GameObject_t1 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m150(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t158 * L_3 = ((&___lhs)->___camera_1);
		Camera_t158 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m150(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_op_Implicit_m1349 (Object_t * __this /* static, unused */, HitInfo_t289  ___exists, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t1 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m850(NULL /*static, unused*/, L_0, (Object_t28 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t158 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m850(NULL /*static, unused*/, L_2, (Object_t28 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
struct Component_t43;
struct GUILayer_t93;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t43;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m141_gshared (Component_t43 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m141(__this, method) (( Object_t * (*) (Component_t43 *, const MethodInfo*))Component_GetComponent_TisObject_t_m141_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t93_m1552(__this, method) (( GUILayer_t93 * (*) (Component_t43 *, const MethodInfo*))Component_GetComponent_TisObject_t_m141_gshared)(__this, method)


// System.Void UnityEngine.SendMouseEvents::.cctor()
extern TypeInfo* HitInfoU5BU5D_t290_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t289_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t292_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m1350 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HitInfoU5BU5D_t290_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(261);
		HitInfo_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		SendMouseEvents_t292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(263);
		s_Il2CppMethodIntialized = true;
	}
	HitInfo_t289  V_0 = {0};
	HitInfo_t289  V_1 = {0};
	HitInfo_t289  V_2 = {0};
	HitInfo_t289  V_3 = {0};
	HitInfo_t289  V_4 = {0};
	HitInfo_t289  V_5 = {0};
	HitInfo_t289  V_6 = {0};
	HitInfo_t289  V_7 = {0};
	HitInfo_t289  V_8 = {0};
	{
		HitInfoU5BU5D_t290* L_0 = ((HitInfoU5BU5D_t290*)SZArrayNew(HitInfoU5BU5D_t290_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (HitInfo_t289_il2cpp_TypeInfo_var, (&V_0));
		HitInfo_t289  L_1 = V_0;
		*((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_0, 0)) = L_1;
		HitInfoU5BU5D_t290* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (HitInfo_t289_il2cpp_TypeInfo_var, (&V_1));
		HitInfo_t289  L_3 = V_1;
		*((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_2, 1)) = L_3;
		HitInfoU5BU5D_t290* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (HitInfo_t289_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t289  L_5 = V_2;
		*((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_4, 2)) = L_5;
		((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3 = L_4;
		HitInfoU5BU5D_t290* L_6 = ((HitInfoU5BU5D_t290*)SZArrayNew(HitInfoU5BU5D_t290_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (HitInfo_t289_il2cpp_TypeInfo_var, (&V_3));
		HitInfo_t289  L_7 = V_3;
		*((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_6, 0)) = L_7;
		HitInfoU5BU5D_t290* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (HitInfo_t289_il2cpp_TypeInfo_var, (&V_4));
		HitInfo_t289  L_9 = V_4;
		*((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_8, 1)) = L_9;
		HitInfoU5BU5D_t290* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (HitInfo_t289_il2cpp_TypeInfo_var, (&V_5));
		HitInfo_t289  L_11 = V_5;
		*((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_10, 2)) = L_11;
		((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4 = L_10;
		HitInfoU5BU5D_t290* L_12 = ((HitInfoU5BU5D_t290*)SZArrayNew(HitInfoU5BU5D_t290_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (HitInfo_t289_il2cpp_TypeInfo_var, (&V_6));
		HitInfo_t289  L_13 = V_6;
		*((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_12, 0)) = L_13;
		HitInfoU5BU5D_t290* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (HitInfo_t289_il2cpp_TypeInfo_var, (&V_7));
		HitInfo_t289  L_15 = V_7;
		*((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_14, 1)) = L_15;
		HitInfoU5BU5D_t290* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (HitInfo_t289_il2cpp_TypeInfo_var, (&V_8));
		HitInfo_t289  L_17 = V_8;
		*((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_16, 2)) = L_17;
		((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern TypeInfo* Input_t30_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t292_il2cpp_TypeInfo_var;
extern TypeInfo* CameraU5BU5D_t291_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t289_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t29_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUILayer_t93_m1552_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m1351 (Object_t * __this /* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		SendMouseEvents_t292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(263);
		CameraU5BU5D_t291_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		HitInfo_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		Mathf_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Component_GetComponent_TisGUILayer_t93_m1552_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483720);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t26  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t158 * V_3 = {0};
	CameraU5BU5D_t291* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t32  V_6 = {0};
	GUILayer_t93 * V_7 = {0};
	GUIElement_t92 * V_8 = {0};
	Ray_t138  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t1 * V_12 = {0};
	GameObject_t1 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t289  V_15 = {0};
	Vector3_t26  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		Vector3_t26  L_0 = Input_get_mousePosition_m839(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m787(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		CameraU5BU5D_t291* L_2 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		CameraU5BU5D_t291* L_3 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6 = ((CameraU5BU5D_t291*)SZArrayNew(CameraU5BU5D_t291_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		CameraU5BU5D_t291* L_6 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		Camera_GetAllCameras_m788(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_7 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (HitInfo_t289_il2cpp_TypeInfo_var, (&V_15));
		HitInfo_t289  L_9 = V_15;
		*((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_7, L_8)) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_12 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_13 = ___mouseUsed;
		if (L_13)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		CameraU5BU5D_t291* L_14 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		CameraU5BU5D_t291* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t158 **)(Camera_t158 **)SZArrayLdElema(L_15, L_17));
		Camera_t158 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m150(NULL /*static, unused*/, L_18, (Object_t28 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_20 = ___skipRTCameras;
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		Camera_t158 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t89 * L_22 = Camera_get_targetTexture_m783(L_21, /*hidden argument*/NULL);
		bool L_23 = Object_op_Inequality_m850(NULL /*static, unused*/, L_22, (Object_t28 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}

IL_00a9:
	{
		goto IL_02ae;
	}

IL_00ae:
	{
		Camera_t158 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t32  L_25 = Camera_get_pixelRect_m782(L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		Vector3_t26  L_26 = V_0;
		bool L_27 = Rect_Contains_m607((&V_6), L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_02ae;
	}

IL_00c8:
	{
		Camera_t158 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t93 * L_29 = Component_GetComponent_TisGUILayer_t93_m1552(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t93_m1552_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t93 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m849(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		GUILayer_t93 * L_32 = V_7;
		Vector3_t26  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t92 * L_34 = GUILayer_HitTest_m305(L_32, L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		GUIElement_t92 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m849(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_37 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t92 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t1 * L_39 = Component_get_gameObject_m76(L_38, /*hidden argument*/NULL);
		((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_37, 0))->___target_0 = L_39;
		HitInfoU5BU5D_t290* L_40 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t158 * L_41 = V_3;
		((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_40, 0))->___camera_1 = L_41;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_42 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_42, 0))->___target_0 = (GameObject_t1 *)NULL;
		HitInfoU5BU5D_t290* L_43 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_43, 0))->___camera_1 = (Camera_t158 *)NULL;
	}

IL_0141:
	{
		Camera_t158 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m780(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_02ae;
	}

IL_0151:
	{
		Camera_t158 * L_46 = V_3;
		Vector3_t26  L_47 = V_0;
		NullCheck(L_46);
		Ray_t138  L_48 = Camera_ScreenPointToRay_m785(L_46, L_47, /*hidden argument*/NULL);
		V_9 = L_48;
		Vector3_t26  L_49 = Ray_get_direction_m690((&V_9), /*hidden argument*/NULL);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_2);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		bool L_52 = Mathf_Approximately_m704(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0187;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_019c;
	}

IL_0187:
	{
		Camera_t158 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m778(L_53, /*hidden argument*/NULL);
		Camera_t158 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m777(L_55, /*hidden argument*/NULL);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		Camera_t158 * L_59 = V_3;
		Ray_t138  L_60 = V_9;
		float L_61 = V_11;
		Camera_t158 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m779(L_62, /*hidden argument*/NULL);
		Camera_t158 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m780(L_64, /*hidden argument*/NULL);
		NullCheck(L_59);
		GameObject_t1 * L_66 = Camera_RaycastTry_m792(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/NULL);
		V_12 = L_66;
		GameObject_t1 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m850(NULL /*static, unused*/, L_67, (Object_t28 *)NULL, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_69 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t1 * L_70 = V_12;
		((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_69, 1))->___target_0 = L_70;
		HitInfoU5BU5D_t290* L_71 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t158 * L_72 = V_3;
		((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_71, 1))->___camera_1 = L_72;
		goto IL_0226;
	}

IL_01ec:
	{
		Camera_t158 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m784(L_73, /*hidden argument*/NULL);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		Camera_t158 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m784(L_75, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_77 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_77, 1))->___target_0 = (GameObject_t1 *)NULL;
		HitInfoU5BU5D_t290* L_78 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_78, 1))->___camera_1 = (Camera_t158 *)NULL;
	}

IL_0226:
	{
		Camera_t158 * L_79 = V_3;
		Ray_t138  L_80 = V_9;
		float L_81 = V_11;
		Camera_t158 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m779(L_82, /*hidden argument*/NULL);
		Camera_t158 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m780(L_84, /*hidden argument*/NULL);
		NullCheck(L_79);
		GameObject_t1 * L_86 = Camera_RaycastTry2D_m794(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/NULL);
		V_13 = L_86;
		GameObject_t1 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m850(NULL /*static, unused*/, L_87, (Object_t28 *)NULL, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_89 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t1 * L_90 = V_13;
		((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_89, 2))->___target_0 = L_90;
		HitInfoU5BU5D_t290* L_91 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t158 * L_92 = V_3;
		((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_91, 2))->___camera_1 = L_92;
		goto IL_02ae;
	}

IL_0274:
	{
		Camera_t158 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m784(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		Camera_t158 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m784(L_95, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_97 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_97, 2))->___target_0 = (GameObject_t1 *)NULL;
		HitInfoU5BU5D_t290* L_98 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_98, 2))->___camera_1 = (Camera_t158 *)NULL;
	}

IL_02ae:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b4:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t291* L_101 = V_4;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((Array_t *)L_101)->max_length))))))
		{
			goto IL_0080;
		}
	}

IL_02bf:
	{
		V_14 = 0;
		goto IL_02e5;
	}

IL_02c7:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_103 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m1352(NULL /*static, unused*/, L_102, (*(HitInfo_t289 *)((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_103, L_104))), /*hidden argument*/NULL);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e5:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_107 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)(((Array_t *)L_107)->max_length))))))
		{
			goto IL_02c7;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern TypeInfo* Input_t30_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t292_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t289_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents_SendEvents_m1352 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t289  ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		SendMouseEvents_t292_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(263);
		HitInfo_t289_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(262);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t289  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m838(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m837(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t289  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m1349(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_5 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t289  L_7 = ___hit;
		*((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_5, L_6)) = L_7;
		HitInfoU5BU5D_t290* L_8 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m1347(((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_8, L_9)), (String_t*) &_stringLiteral260, /*hidden argument*/NULL);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_11 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m1349(NULL /*static, unused*/, (*(HitInfo_t289 *)((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_11, L_12))), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t289  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_15 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m1348(NULL /*static, unused*/, L_14, (*(HitInfo_t289 *)((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_15, L_16))), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_18 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m1347(((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_18, L_19)), (String_t*) &_stringLiteral261, /*hidden argument*/NULL);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_20 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m1347(((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_20, L_21)), (String_t*) &_stringLiteral262, /*hidden argument*/NULL);
		HitInfoU5BU5D_t290* L_22 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (HitInfo_t289_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t289  L_24 = V_2;
		*((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_22, L_23)) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_25 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m1349(NULL /*static, unused*/, (*(HitInfo_t289 *)((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_25, L_26))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_28 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m1347(((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_28, L_29)), (String_t*) &_stringLiteral263, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		HitInfo_t289  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_31 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m1348(NULL /*static, unused*/, L_30, (*(HitInfo_t289 *)((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_31, L_32))), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t289  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m1349(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m1347((&___hit), (String_t*) &_stringLiteral264, /*hidden argument*/NULL);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_36 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m1349(NULL /*static, unused*/, (*(HitInfo_t289 *)((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_36, L_37))), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_39 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m1347(((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_39, L_40)), (String_t*) &_stringLiteral265, /*hidden argument*/NULL);
	}

IL_0162:
	{
		HitInfo_t289  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m1349(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m1347((&___hit), (String_t*) &_stringLiteral266, /*hidden argument*/NULL);
		HitInfo_SendMessage_m1347((&___hit), (String_t*) &_stringLiteral264, /*hidden argument*/NULL);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t292_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t290* L_43 = ((SendMouseEvents_t292_StaticFields*)SendMouseEvents_t292_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t289  L_45 = ___hit;
		*((HitInfo_t289 *)(HitInfo_t289 *)SZArrayLdElema(L_43, L_44)) = L_45;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" void Range__ctor_m1353 (Range_t288 * __this, int32_t ___fromValue, int32_t ___valueCount, const MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderStateMethodDeclarations.h"



// System.Void UnityEngine.SliderState::.ctor()
extern "C" void SliderState__ctor_m1354 (SliderState_t296 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"

// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void UnityEngine.StackTraceUtility::.ctor()
extern "C" void StackTraceUtility__ctor_m1355 (StackTraceUtility_t297 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t297_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility__cctor_m1356 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		StackTraceUtility_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((StackTraceUtility_t297_StaticFields*)StackTraceUtility_t297_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern TypeInfo* StackTraceUtility_t297_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_SetProjectFolder_m1357 (Object_t * __this /* static, unused */, String_t* ___folder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTraceUtility_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t297_il2cpp_TypeInfo_var);
		((StackTraceUtility_t297_StaticFields*)StackTraceUtility_t297_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern TypeInfo* StackTrace_t358_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t297_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m1358 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(267);
		StackTraceUtility_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	StackTrace_t358 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t358 * L_0 = (StackTrace_t358 *)il2cpp_codegen_object_new (StackTrace_t358_il2cpp_TypeInfo_var);
		StackTrace__ctor_m1553(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t358 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t297_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m1363(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_2);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m1359 (Object_t * __this /* static, unused */, Object_t * ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m1458(L_1, (String_t*) &_stringLiteral267, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m1458(L_3, (String_t*) &_stringLiteral268, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m1458(L_5, (String_t*) &_stringLiteral269, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m1458(L_7, (String_t*) &_stringLiteral270, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m1458(L_9, (String_t*) &_stringLiteral271, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m1458(L_11, (String_t*) &_stringLiteral272, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t297_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m1360 (Object_t * __this /* static, unused */, Object_t * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		StackTraceUtility_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t297_il2cpp_TypeInfo_var);
		StackTraceUtility_ExtractStringFromExceptionInternal_m1361(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m1432(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral63, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern TypeInfo* ArgumentException_t362_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t118_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t350_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTrace_t358_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t297_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m1361 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(69);
		Exception_t118_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(134);
		StringBuilder_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(195);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		StackTrace_t358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(267);
		StackTraceUtility_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t118 * V_0 = {0};
	StringBuilder_t350 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t358 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t362 * L_1 = (ArgumentException_t362 *)il2cpp_codegen_object_new (ArgumentException_t362_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1414(L_1, (String_t*) &_stringLiteral273, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t118 *)IsInst(L_2, Exception_t118_il2cpp_TypeInfo_var));
		Exception_t118 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t362 * L_4 = (ArgumentException_t362 *)il2cpp_codegen_object_new (ArgumentException_t362_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1414(L_4, (String_t*) &_stringLiteral274, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Exception_t118 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t118 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m1413(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t350 * L_10 = (StringBuilder_t350 *)il2cpp_codegen_object_new (StringBuilder_t350_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1509(L_10, G_B7_0, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1413(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t118 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t118 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m1432(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral63, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t118 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t118 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t118 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m1445(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m1413(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m73(NULL /*static, unused*/, L_33, (String_t*) &_stringLiteral123, /*hidden argument*/NULL);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m73(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t118 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t118 * L_41 = (Exception_t118 *)VirtFuncInvoker0< Exception_t118 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m1554(NULL /*static, unused*/, (String_t*) &_stringLiteral275, L_42, (String_t*) &_stringLiteral63, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t118 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t118 * L_46 = (Exception_t118 *)VirtFuncInvoker0< Exception_t118 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t118 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t350 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Concat_m73(NULL /*static, unused*/, L_49, (String_t*) &_stringLiteral63, /*hidden argument*/NULL);
		NullCheck(L_48);
		StringBuilder_Append_m1514(L_48, L_50, /*hidden argument*/NULL);
		StackTrace_t358 * L_51 = (StackTrace_t358 *)il2cpp_codegen_object_new (StackTrace_t358_il2cpp_TypeInfo_var);
		StackTrace__ctor_m1553(L_51, 1, 1, /*hidden argument*/NULL);
		V_5 = L_51;
		StringBuilder_t350 * L_52 = V_1;
		StackTrace_t358 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t297_il2cpp_TypeInfo_var);
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m1363(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		StringBuilder_Append_m1514(L_52, L_54, /*hidden argument*/NULL);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t350 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_56);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t349_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t350_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t297_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m1362 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		CharU5BU5D_t349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		StringBuilder_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(195);
		StackTraceUtility_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t44* V_0 = {0};
	StringBuilder_t350 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t349* L_3 = ((CharU5BU5D_t349*)SZArrayNew(CharU5BU5D_t349_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t44* L_4 = String_Split_m1555(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m1413(L_5, /*hidden argument*/NULL);
		StringBuilder_t350 * L_7 = (StringBuilder_t350 *)il2cpp_codegen_object_new (StringBuilder_t350_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1509(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t44* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t44* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)));
		String_t* L_13 = String_Trim_m1445((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9)) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t44* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t44* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m1413(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m1556(L_22, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m1458(L_24, (String_t*) &_stringLiteral276, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m1458(L_27, (String_t*) &_stringLiteral277, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t44* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t297_il2cpp_TypeInfo_var);
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m1359(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t44* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t297_il2cpp_TypeInfo_var);
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m1359(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36)), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m1459(L_38, (String_t*) &_stringLiteral278, /*hidden argument*/NULL);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m1448(L_41, 0, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m1459(L_44, (String_t*) &_stringLiteral279, /*hidden argument*/NULL);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m1459(L_46, (String_t*) &_stringLiteral280, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m1459(L_48, (String_t*) &_stringLiteral281, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m1458(L_51, (String_t*) &_stringLiteral225, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m1557(L_53, (String_t*) &_stringLiteral226, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m1458(L_55, (String_t*) &_stringLiteral282, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m1558(L_57, 0, 3, /*hidden argument*/NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m1459(L_59, (String_t*) &_stringLiteral283, /*hidden argument*/NULL);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m1559(L_62, (String_t*) &_stringLiteral226, L_63, /*hidden argument*/NULL);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m1558(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m1560(L_73, (String_t*) &_stringLiteral284, L_74, /*hidden argument*/NULL);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t297_il2cpp_TypeInfo_var);
		String_t* L_77 = ((StackTraceUtility_t297_StaticFields*)StackTraceUtility_t297_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m1560(L_76, L_77, L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m1561(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m1562(L_82, (String_t*) &_stringLiteral285, /*hidden argument*/NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m1558(L_85, L_86, 5, /*hidden argument*/NULL);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m1563(L_88, L_89, (String_t*) &_stringLiteral286, /*hidden argument*/NULL);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m1413(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m1563(L_91, L_93, (String_t*) &_stringLiteral287, /*hidden argument*/NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t350 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_97 = String_Concat_m73(NULL /*static, unused*/, L_96, (String_t*) &_stringLiteral63, /*hidden argument*/NULL);
		NullCheck(L_95);
		StringBuilder_Append_m1514(L_95, L_97, /*hidden argument*/NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t44* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)(((Array_t *)L_100)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t350 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_101);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern TypeInfo* StringBuilder_t350_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t297_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m1363 (Object_t * __this /* static, unused */, StackTrace_t358 * ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(195);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		StackTraceUtility_t297_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t350 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t424 * V_2 = {0};
	MethodBase_t425 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t415* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t350 * L_0 = (StringBuilder_t350 *)il2cpp_codegen_object_new (StringBuilder_t350_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1509(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t358 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t424 * L_3 = (StackFrame_t424 *)VirtFuncInvoker1< StackFrame_t424 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t424 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t425 * L_5 = (MethodBase_t425 *)VirtFuncInvoker0< MethodBase_t425 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t425 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t425 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m1413(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t350 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m1514(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t350 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m1514(L_17, (String_t*) &_stringLiteral12, /*hidden argument*/NULL);
	}

IL_0071:
	{
		StringBuilder_t350 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m1514(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t350 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m1514(L_21, (String_t*) &_stringLiteral30, /*hidden argument*/NULL);
		StringBuilder_t350 * L_22 = V_0;
		MethodBase_t425 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m1514(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t350 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m1514(L_25, (String_t*) &_stringLiteral288, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t425 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t415* L_27 = (ParameterInfoU5BU5D_t415*)VirtFuncInvoker0< ParameterInfoU5BU5D_t415* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t350 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m1514(L_29, (String_t*) &_stringLiteral289, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t350 * L_30 = V_0;
		ParameterInfoU5BU5D_t415* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t416 **)(ParameterInfo_t416 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t416 **)(ParameterInfo_t416 **)SZArrayLdElema(L_31, L_33)));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m1514(L_30, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t415* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)(((Array_t *)L_38)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t350 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m1514(L_39, (String_t*) &_stringLiteral287, /*hidden argument*/NULL);
		StackFrame_t424 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m83(NULL /*static, unused*/, L_44, (String_t*) &_stringLiteral290, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m83(NULL /*static, unused*/, L_47, (String_t*) &_stringLiteral291, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t350 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m1514(L_49, (String_t*) &_stringLiteral286, /*hidden argument*/NULL);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t297_il2cpp_TypeInfo_var);
		String_t* L_51 = ((StackTraceUtility_t297_StaticFields*)StackTraceUtility_t297_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m1458(L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t297_il2cpp_TypeInfo_var);
		String_t* L_54 = ((StackTraceUtility_t297_StaticFields*)StackTraceUtility_t297_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m1413(L_54, /*hidden argument*/NULL);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m1413(L_56, /*hidden argument*/NULL);
		String_t* L_58 = ((StackTraceUtility_t297_StaticFields*)StackTraceUtility_t297_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m1413(L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m1448(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/NULL);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t350 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m1514(L_61, L_62, /*hidden argument*/NULL);
		StringBuilder_t350 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m1514(L_63, (String_t*) &_stringLiteral30, /*hidden argument*/NULL);
		StringBuilder_t350 * L_64 = V_0;
		StackFrame_t424 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m1463((&V_10), /*hidden argument*/NULL);
		NullCheck(L_64);
		StringBuilder_Append_m1514(L_64, L_67, /*hidden argument*/NULL);
		StringBuilder_t350 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m1514(L_68, (String_t*) &_stringLiteral287, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		StringBuilder_t350 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m1514(L_69, (String_t*) &_stringLiteral63, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t358 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t350 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_74);
		return L_75;
	}
}
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"


// System.Void UnityEngine.UnityException::.ctor()
extern "C" void UnityException__ctor_m1364 (UnityException_t298 * __this, const MethodInfo* method)
{
	{
		Exception__ctor_m1470(__this, (String_t*) &_stringLiteral292, /*hidden argument*/NULL);
		Exception_set_HResult_m1564(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m1365 (UnityException_t298 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m1470(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m1564(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m1366 (UnityException_t298 * __this, String_t* ___message, Exception_t118 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t118 * L_1 = ___innerException;
		Exception__ctor_m1565(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m1564(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnityException__ctor_m1367 (UnityException_t298 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t359 * L_0 = ___info;
		StreamingContext_t360  L_1 = ___context;
		Exception__ctor_m1566(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m1368 (SharedBetweenAnimatorsAttribute_t299 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1440(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"


// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m1369 (StateMachineBehaviour_t300 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m196(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateEnter_m1370 (StateMachineBehaviour_t300 * __this, Animator_t190 * ___animator, AnimatorStateInfo_t184  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateUpdate_m1371 (StateMachineBehaviour_t300 * __this, Animator_t190 * ___animator, AnimatorStateInfo_t184  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateExit_m1372 (StateMachineBehaviour_t300 * __this, Animator_t190 * ___animator, AnimatorStateInfo_t184  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMove_m1373 (StateMachineBehaviour_t300 * __this, Animator_t190 * ___animator, AnimatorStateInfo_t184  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateIK_m1374 (StateMachineBehaviour_t300 * __this, Animator_t190 * ___animator, AnimatorStateInfo_t184  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m1375 (StateMachineBehaviour_t300 * __this, Animator_t190 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineExit_m1376 (StateMachineBehaviour_t300 * __this, Animator_t190 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappingMethodDeclarations.h"



// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOpMethodDeclarations.h"



// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditor.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditorMethodDeclarations.h"

// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"


// System.Void UnityEngine.TextEditor::.ctor()
extern TypeInfo* GUIContent_t114_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t31_il2cpp_TypeInfo_var;
extern "C" void TextEditor__ctor_m1377 (TextEditor_t304 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		GUIStyle_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t114 * L_0 = (GUIContent_t114 *)il2cpp_codegen_object_new (GUIContent_t114_il2cpp_TypeInfo_var);
		GUIContent__ctor_m466(L_0, /*hidden argument*/NULL);
		__this->___content_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t31_il2cpp_TypeInfo_var);
		GUIStyle_t31 * L_1 = GUIStyle_get_none_m520(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___style_5 = L_1;
		Vector2_t13  L_2 = Vector2_get_zero_m89(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollOffset_11 = L_2;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"


// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern TypeInfo* Color32_t86_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareColors_m1378 (TextGenerationSettings_t206 * __this, Color_t36  ___left, Color_t36  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t86_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	Color32_t86  V_0 = {0};
	Color32_t86  V_1 = {0};
	{
		Color_t36  L_0 = ___left;
		Color32_t86  L_1 = Color32_op_Implicit_m579(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Color_t36  L_2 = ___right;
		Color32_t86  L_3 = Color32_op_Implicit_m579(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Color32_t86  L_4 = V_0;
		Color32_t86  L_5 = L_4;
		Object_t * L_6 = Box(Color32_t86_il2cpp_TypeInfo_var, &L_5);
		Color32_t86  L_7 = V_1;
		Color32_t86  L_8 = L_7;
		Object_t * L_9 = Box(Color32_t86_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, L_6, L_9);
		return L_10;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern TypeInfo* Mathf_t29_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareVector2_m1379 (TextGenerationSettings_t206 * __this, Vector2_t13  ___left, Vector2_t13  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m704(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m704(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern TypeInfo* Mathf_t29_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_Equals_m1380 (TextGenerationSettings_t206 * __this, TextGenerationSettings_t206  ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B20_0 = 0;
	{
		Color_t36  L_0 = (__this->___color_1);
		Color_t36  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m1378(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0174;
		}
	}
	{
		float L_5 = (__this->___scaleFactor_5);
		float L_6 = ((&___other)->___scaleFactor_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		bool L_7 = Mathf_Approximately_m704(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_8 = (__this->___resizeTextMinSize_9);
		int32_t L_9 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_10 = (__this->___resizeTextMaxSize_10);
		int32_t L_11 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0174;
		}
	}
	{
		float L_12 = (__this->___lineSpacing_3);
		float L_13 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t29_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m704(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_15 = (__this->___fontStyle_6);
		int32_t L_16 = ((&___other)->___fontStyle_6);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_17 = (__this->___richText_4);
		bool L_18 = ((&___other)->___richText_4);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_19 = (__this->___textAnchor_7);
		int32_t L_20 = ((&___other)->___textAnchor_7);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_21 = (__this->___resizeTextForBestFit_8);
		bool L_22 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->___resizeTextMinSize_9);
		int32_t L_24 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_25 = (__this->___resizeTextMaxSize_10);
		int32_t L_26 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_27 = (__this->___resizeTextForBestFit_8);
		bool L_28 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_29 = (__this->___updateBounds_11);
		bool L_30 = ((&___other)->___updateBounds_11);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_31 = (__this->___horizontalOverflow_13);
		int32_t L_32 = ((&___other)->___horizontalOverflow_13);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = (__this->___verticalOverflow_12);
		int32_t L_34 = ((&___other)->___verticalOverflow_12);
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t13  L_35 = (__this->___generationExtents_14);
		Vector2_t13  L_36 = ((&___other)->___generationExtents_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m1379(__this, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t13  L_38 = (__this->___pivot_15);
		Vector2_t13  L_39 = ((&___other)->___pivot_15);
		bool L_40 = TextGenerationSettings_CompareVector2_m1379(__this, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0174;
		}
	}
	{
		Font_t124 * L_41 = (__this->___font_0);
		Font_t124 * L_42 = ((&___other)->___font_0);
		bool L_43 = Object_op_Equality_m150(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		G_B20_0 = ((int32_t)(L_43));
		goto IL_0175;
	}

IL_0174:
	{
		G_B20_0 = 0;
	}

IL_0175:
	{
		return G_B20_0;
	}
}
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern TypeInfo* TrackedReference_t188_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_Equals_m1381 (TrackedReference_t188 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TrackedReference_t188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m1383(NULL /*static, unused*/, ((TrackedReference_t188 *)IsInst(L_0, TrackedReference_t188_il2cpp_TypeInfo_var)), __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m1382 (TrackedReference_t188 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m1567(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_op_Equality_m1383 (Object_t * __this /* static, unused */, TrackedReference_t188 * ___x, TrackedReference_t188 * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t188 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t188 * L_1 = ___y;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		TrackedReference_t188 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m1568(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		Object_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		TrackedReference_t188 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m1568(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t188 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t188 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m1568(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void TrackedReference_t188_marshal(const TrackedReference_t188& unmarshaled, TrackedReference_t188_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void TrackedReference_t188_marshal_back(const TrackedReference_t188_marshaled& marshaled, TrackedReference_t188& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void TrackedReference_t188_marshal_cleanup(TrackedReference_t188_marshaled& marshaled)
{
}
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"

// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"


// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern "C" void ArgumentCache__ctor_m1384 (ArgumentCache_t305 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t426_il2cpp_TypeInfo_var;
extern "C" void ArgumentCache_TidyAssemblyTypeName_m1385 (ArgumentCache_t305 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Regex_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1475(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		String_t* L_2 = (__this->___m_ObjectArgumentAssemblyTypeName_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t426_il2cpp_TypeInfo_var);
		String_t* L_4 = Regex_Replace_m1569(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral293, L_3, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_0 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_0);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m1569(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral294, L_6, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_0 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_0);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m1569(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral295, L_9, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_0 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern "C" void ArgumentCache_OnBeforeSerialize_m1386 (ArgumentCache_t305 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m1385(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C" void ArgumentCache_OnAfterDeserialize_m1387 (ArgumentCache_t305 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m1385(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"



// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"



// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"



// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern TypeInfo* ArgumentCache_t305_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m1388 (PersistentCall_t308 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t305 * L_0 = (ArgumentCache_t305 *)il2cpp_codegen_object_new (ArgumentCache_t305_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m1384(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_0 = L_0;
		__this->___m_CallState_1 = 2;
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_12.h"
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_12MethodDeclarations.h"


// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern TypeInfo* List_1_t309_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1570_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m1389 (PersistentCallGroup_t310 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		List_1__ctor_m1570_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483721);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		List_1_t309 * L_0 = (List_1_t309 *)il2cpp_codegen_object_new (List_1_t309_il2cpp_TypeInfo_var);
		List_1__ctor_m1570(L_0, /*hidden argument*/List_1__ctor_m1570_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_13.h"
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_13MethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern TypeInfo* List_1_t311_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1571_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m1390 (InvokableCallList_t312 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		List_1__ctor_m1571_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t311 * L_0 = (List_1_t311 *)il2cpp_codegen_object_new (List_1_t311_il2cpp_TypeInfo_var);
		List_1__ctor_m1571(L_0, /*hidden argument*/List_1__ctor_m1571_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t311 * L_1 = (List_1_t311 *)il2cpp_codegen_object_new (List_1_t311_il2cpp_TypeInfo_var);
		List_1__ctor_m1571(L_1, /*hidden argument*/List_1__ctor_m1571_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t311 * L_2 = (List_1_t311 *)il2cpp_codegen_object_new (List_1_t311_il2cpp_TypeInfo_var);
		List_1__ctor_m1571(L_2, /*hidden argument*/List_1__ctor_m1571_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m1391 (InvokableCallList_t312 * __this, const MethodInfo* method)
{
	{
		List_1_t311 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(20 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		return;
	}
}
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern TypeInfo* InvokableCallList_t312_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t310_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m1392 (UnityEventBase_t313 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
		PersistentCallGroup_t310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m1415(__this, /*hidden argument*/NULL);
		InvokableCallList_t312 * L_0 = (InvokableCallList_t312 *)il2cpp_codegen_object_new (InvokableCallList_t312_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m1390(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t310 * L_1 = (PersistentCallGroup_t310 *)il2cpp_codegen_object_new (PersistentCallGroup_t310_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m1389(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m1430(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1393 (UnityEventBase_t313 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1394 (UnityEventBase_t313 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m1395(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m1430(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m1395 (UnityEventBase_t313 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t312 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m1391(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UnityEventBase_ToString_m1396 (UnityEventBase_t313 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m1476(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m1430(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1432(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral50, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern TypeInfo* ObjectU5BU5D_t40_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m1397 (UnityEvent_t314 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t40_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t40*)SZArrayNew(ObjectU5BU5D_t40_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m1392(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialog.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialogMethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"


// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
extern "C" void UserAuthorizationDialog__ctor_m1398 (UserAuthorizationDialog_t315 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m65(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::Start()
extern "C" void UserAuthorizationDialog_Start_m1399 (UserAuthorizationDialog_t315 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
extern "C" void UserAuthorizationDialog_OnGUI_m1400 (UserAuthorizationDialog_t315 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
extern "C" void UserAuthorizationDialog_DoUserAuthorizationDialog_m1401 (UserAuthorizationDialog_t315 * __this, int32_t ___windowID, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_Attribute.h"


// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m1402 (DefaultValueAttribute_t316 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m1440(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m1403 (DefaultValueAttribute_t316 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern TypeInfo* DefaultValueAttribute_t316_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m1404 (DefaultValueAttribute_t316 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t316 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t316 *)IsInst(L_0, DefaultValueAttribute_t316_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t316 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t316 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m1403(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t316 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m1403(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m1405 (DefaultValueAttribute_t316 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m1572(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"



// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern "C" void ExcludeFromDocsAttribute__ctor_m1406 (ExcludeFromDocsAttribute_t317 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1440(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"



// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C" void FormerlySerializedAsAttribute__ctor_m1407 (FormerlySerializedAsAttribute_t318 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m1440(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"



// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"

// System.Enum
#include "mscorlib_System_Enum.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t319_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m1408 (TypeInferenceRuleAttribute_t320 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t319_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t319_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m1409(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m1409 (TypeInferenceRuleAttribute_t320 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m1440(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m1410 (TypeInferenceRuleAttribute_t320 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"

// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"


// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" void GenericStack__ctor_m1411 (GenericStack_t103 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m1573(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
