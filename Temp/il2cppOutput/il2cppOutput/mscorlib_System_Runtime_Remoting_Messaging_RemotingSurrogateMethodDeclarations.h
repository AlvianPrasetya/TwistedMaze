#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct RemotingSurrogate_t1217;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1219;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
extern "C" void RemotingSurrogate__ctor_m6589 (RemotingSurrogate_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern "C" Object_t * RemotingSurrogate_SetObjectData_m6590 (RemotingSurrogate_t1217 * __this, Object_t * ___obj, SerializationInfo_t359 * ___si, StreamingContext_t360  ___sc, Object_t * ___selector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
