#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t794;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t793;
// System.Byte[]
struct ByteU5BU5D_t151;
// Mono.Security.ASN1
struct ASN1_t702;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m3017 (EncryptedData_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m3018 (EncryptedData_t794 * __this, ASN1_t702 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t793 * EncryptedData_get_EncryptionAlgorithm_m3019 (EncryptedData_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t151* EncryptedData_get_EncryptedContent_m3020 (EncryptedData_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
