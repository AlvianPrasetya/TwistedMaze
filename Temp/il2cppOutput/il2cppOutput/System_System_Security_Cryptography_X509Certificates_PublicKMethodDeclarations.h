#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t579;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t577;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t576;
// System.Security.Cryptography.Oid
struct Oid_t578;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t587;
// System.Byte[]
struct ByteU5BU5D_t151;
// System.Security.Cryptography.DSA
struct DSA_t700;
// System.Security.Cryptography.RSA
struct RSA_t701;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m1946 (PublicKey_t579 * __this, X509Certificate_t587 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t577 * PublicKey_get_EncodedKeyValue_m1947 (PublicKey_t579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t577 * PublicKey_get_EncodedParameters_m1948 (PublicKey_t579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t576 * PublicKey_get_Key_m1949 (PublicKey_t579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t578 * PublicKey_get_Oid_m1950 (PublicKey_t579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t151* PublicKey_GetUnsignedBigInteger_m1951 (Object_t * __this /* static, unused */, ByteU5BU5D_t151* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t700 * PublicKey_DecodeDSA_m1952 (Object_t * __this /* static, unused */, ByteU5BU5D_t151* ___rawPublicKey, ByteU5BU5D_t151* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t701 * PublicKey_DecodeRSA_m1953 (Object_t * __this /* static, unused */, ByteU5BU5D_t151* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
