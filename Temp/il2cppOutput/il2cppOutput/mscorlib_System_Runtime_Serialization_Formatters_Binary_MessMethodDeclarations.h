#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct MessageFormatter_t1252;
// System.Object
struct Object_t;
// System.IO.BinaryReader
struct BinaryReader_t1067;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t1449;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t1239;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t1484;
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0.h"

// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" Object_t * MessageFormatter_ReadMethodCall_m6716 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t1067 * ___reader, bool ___hasHeaders, HeaderHandler_t1449 * ___headerHandler, BinaryFormatter_t1239 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" Object_t * MessageFormatter_ReadMethodResponse_m6717 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t1067 * ___reader, bool ___hasHeaders, HeaderHandler_t1449 * ___headerHandler, Object_t * ___methodCallMessage, BinaryFormatter_t1239 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
