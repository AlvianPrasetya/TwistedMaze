#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.RC4
struct RC4_t797;
// System.Byte[]
struct ByteU5BU5D_t151;

// System.Void Mono.Security.Cryptography.RC4::.ctor()
extern "C" void RC4__ctor_m3073 (RC4_t797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RC4::.cctor()
extern "C" void RC4__cctor_m3074 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RC4::get_IV()
extern "C" ByteU5BU5D_t151* RC4_get_IV_m3075 (RC4_t797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RC4::set_IV(System.Byte[])
extern "C" void RC4_set_IV_m3076 (RC4_t797 * __this, ByteU5BU5D_t151* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
