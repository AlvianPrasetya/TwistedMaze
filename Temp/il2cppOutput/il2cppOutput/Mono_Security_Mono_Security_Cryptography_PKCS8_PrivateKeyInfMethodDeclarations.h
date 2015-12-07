#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t804;
// System.Byte[]
struct ByteU5BU5D_t151;
// System.Security.Cryptography.RSA
struct RSA_t701;
// System.Security.Cryptography.DSA
struct DSA_t700;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m3058 (PrivateKeyInfo_t804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m3059 (PrivateKeyInfo_t804 * __this, ByteU5BU5D_t151* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t151* PrivateKeyInfo_get_PrivateKey_m3060 (PrivateKeyInfo_t804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m3061 (PrivateKeyInfo_t804 * __this, ByteU5BU5D_t151* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t151* PrivateKeyInfo_RemoveLeadingZero_m3062 (Object_t * __this /* static, unused */, ByteU5BU5D_t151* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t151* PrivateKeyInfo_Normalize_m3063 (Object_t * __this /* static, unused */, ByteU5BU5D_t151* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t701 * PrivateKeyInfo_DecodeRSA_m3064 (Object_t * __this /* static, unused */, ByteU5BU5D_t151* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t700 * PrivateKeyInfo_DecodeDSA_m3065 (Object_t * __this /* static, unused */, ByteU5BU5D_t151* ___privateKey, DSAParameters_t723  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
