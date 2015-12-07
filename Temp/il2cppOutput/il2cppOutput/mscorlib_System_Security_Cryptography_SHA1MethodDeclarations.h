#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA1
struct SHA1_t733;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.SHA1::.ctor()
extern "C" void SHA1__ctor_m7049 (SHA1_t733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SHA1 System.Security.Cryptography.SHA1::Create()
extern "C" SHA1_t733 * SHA1_Create_m2763 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SHA1 System.Security.Cryptography.SHA1::Create(System.String)
extern "C" SHA1_t733 * SHA1_Create_m7050 (Object_t * __this /* static, unused */, String_t* ___hashName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
