#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.AmbiguousMatchException
struct AmbiguousMatchException_t1118;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.AmbiguousMatchException::.ctor()
extern "C" void AmbiguousMatchException__ctor_m6118 (AmbiguousMatchException_t1118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AmbiguousMatchException::.ctor(System.String)
extern "C" void AmbiguousMatchException__ctor_m6119 (AmbiguousMatchException_t1118 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AmbiguousMatchException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void AmbiguousMatchException__ctor_m6120 (AmbiguousMatchException_t1118 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
