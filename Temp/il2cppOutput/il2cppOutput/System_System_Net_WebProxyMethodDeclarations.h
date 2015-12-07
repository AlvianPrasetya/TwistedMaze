#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t573;
// System.Uri
struct Uri_t235;
// System.String[]
struct StringU5BU5D_t44;
// System.Net.ICredentials
struct ICredentials_t572;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m1927 (WebProxy_t573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m1928 (WebProxy_t573 * __this, Uri_t235 * ___address, bool ___bypassOnLocal, StringU5BU5D_t44* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m1929 (WebProxy_t573 * __this, SerializationInfo_t359 * ___serializationInfo, StreamingContext_t360  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m1930 (WebProxy_t573 * __this, SerializationInfo_t359 * ___serializationInfo, StreamingContext_t360  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m1931 (WebProxy_t573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t235 * WebProxy_GetProxy_m1932 (WebProxy_t573 * __this, Uri_t235 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m1933 (WebProxy_t573 * __this, Uri_t235 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m1934 (WebProxy_t573 * __this, SerializationInfo_t359 * ___serializationInfo, StreamingContext_t360  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m1935 (WebProxy_t573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
