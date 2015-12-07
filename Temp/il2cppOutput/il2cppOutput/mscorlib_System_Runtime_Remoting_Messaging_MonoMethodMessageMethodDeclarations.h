#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t1201;
// System.Object[]
struct ObjectU5BU5D_t40;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1212;
// System.Reflection.MethodBase
struct MethodBase_t425;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t118;

// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C" ObjectU5BU5D_t40* MonoMethodMessage_get_Args_m6577 (MonoMethodMessage_t1201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t1212 * MonoMethodMessage_get_LogicalCallContext_m6578 (MonoMethodMessage_t1201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C" MethodBase_t425 * MonoMethodMessage_get_MethodBase_m6579 (MonoMethodMessage_t1201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern "C" String_t* MonoMethodMessage_get_MethodName_m6580 (MonoMethodMessage_t1201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m6581 (MonoMethodMessage_t1201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern "C" String_t* MonoMethodMessage_get_TypeName_m6582 (MonoMethodMessage_t1201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern "C" String_t* MonoMethodMessage_get_Uri_m6583 (MonoMethodMessage_t1201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern "C" void MonoMethodMessage_set_Uri_m6584 (MonoMethodMessage_t1201 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C" Exception_t118 * MonoMethodMessage_get_Exception_m6585 (MonoMethodMessage_t1201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m6586 (MonoMethodMessage_t1201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern "C" ObjectU5BU5D_t40* MonoMethodMessage_get_OutArgs_m6587 (MonoMethodMessage_t1201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m6588 (MonoMethodMessage_t1201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
