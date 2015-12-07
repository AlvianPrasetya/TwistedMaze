#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.KeyBuilder
struct KeyBuilder_t984;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t786;
// System.Byte[]
struct ByteU5BU5D_t151;

// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
extern "C" RandomNumberGenerator_t786 * KeyBuilder_get_Rng_m4878 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
extern "C" ByteU5BU5D_t151* KeyBuilder_Key_m4879 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::IV(System.Int32)
extern "C" ByteU5BU5D_t151* KeyBuilder_IV_m4880 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
