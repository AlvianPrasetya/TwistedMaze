﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t840;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t151;
// Mono.Security.Protocol.Tls.Context
struct Context_t831;

// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.ctor(System.String,System.Byte[])
extern "C" void ClientSessionInfo__ctor_m3325 (ClientSessionInfo_t840 * __this, String_t* ___hostname, ByteU5BU5D_t151* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.cctor()
extern "C" void ClientSessionInfo__cctor_m3326 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Finalize()
extern "C" void ClientSessionInfo_Finalize_m3327 (ClientSessionInfo_t840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::get_HostName()
extern "C" String_t* ClientSessionInfo_get_HostName_m3328 (ClientSessionInfo_t840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::get_Id()
extern "C" ByteU5BU5D_t151* ClientSessionInfo_get_Id_m3329 (ClientSessionInfo_t840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::get_Valid()
extern "C" bool ClientSessionInfo_get_Valid_m3330 (ClientSessionInfo_t840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::GetContext(Mono.Security.Protocol.Tls.Context)
extern "C" void ClientSessionInfo_GetContext_m3331 (ClientSessionInfo_t840 * __this, Context_t831 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::SetContext(Mono.Security.Protocol.Tls.Context)
extern "C" void ClientSessionInfo_SetContext_m3332 (ClientSessionInfo_t840 * __this, Context_t831 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::KeepAlive()
extern "C" void ClientSessionInfo_KeepAlive_m3333 (ClientSessionInfo_t840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose()
extern "C" void ClientSessionInfo_Dispose_m3334 (ClientSessionInfo_t840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose(System.Boolean)
extern "C" void ClientSessionInfo_Dispose_m3335 (ClientSessionInfo_t840 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::CheckDisposed()
extern "C" void ClientSessionInfo_CheckDisposed_m3336 (ClientSessionInfo_t840 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
