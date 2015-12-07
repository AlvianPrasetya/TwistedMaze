#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.IOException
struct IOException_t918;
// System.String
struct String_t;
// System.Exception
struct Exception_t118;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.IOException::.ctor()
extern "C" void IOException__ctor_m5703 (IOException_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String)
extern "C" void IOException__ctor_m5704 (IOException_t918 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
extern "C" void IOException__ctor_m3808 (IOException_t918 * __this, String_t* ___message, Exception_t118 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IOException__ctor_m5705 (IOException_t918 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String,System.Int32)
extern "C" void IOException__ctor_m5706 (IOException_t918 * __this, String_t* ___message, int32_t ___hresult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
