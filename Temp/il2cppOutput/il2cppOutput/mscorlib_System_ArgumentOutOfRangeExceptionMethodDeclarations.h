#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t389;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C" void ArgumentOutOfRangeException__ctor_m2766 (ArgumentOutOfRangeException_t389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" void ArgumentOutOfRangeException__ctor_m2633 (ArgumentOutOfRangeException_t389 * __this, String_t* ___paramName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" void ArgumentOutOfRangeException__ctor_m1515 (ArgumentOutOfRangeException_t389 * __this, String_t* ___paramName, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
extern "C" void ArgumentOutOfRangeException__ctor_m7542 (ArgumentOutOfRangeException_t389 * __this, String_t* ___paramName, Object_t * ___actualValue, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentOutOfRangeException__ctor_m7543 (ArgumentOutOfRangeException_t389 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentOutOfRangeException::get_Message()
extern "C" String_t* ArgumentOutOfRangeException_get_Message_m7544 (ArgumentOutOfRangeException_t389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentOutOfRangeException_GetObjectData_m7545 (ArgumentOutOfRangeException_t389 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
