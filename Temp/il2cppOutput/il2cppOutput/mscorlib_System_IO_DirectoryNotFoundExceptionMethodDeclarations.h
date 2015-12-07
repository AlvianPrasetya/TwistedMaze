#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.DirectoryNotFoundException
struct DirectoryNotFoundException_t1071;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.DirectoryNotFoundException::.ctor()
extern "C" void DirectoryNotFoundException__ctor_m5632 (DirectoryNotFoundException_t1071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryNotFoundException::.ctor(System.String)
extern "C" void DirectoryNotFoundException__ctor_m5633 (DirectoryNotFoundException_t1071 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DirectoryNotFoundException__ctor_m5634 (DirectoryNotFoundException_t1071 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
