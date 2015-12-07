#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Certificate
struct X509Certificate_t1004;
// System.Security.Cryptography.DSA
struct DSA_t700;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t151;
// Mono.Security.ASN1
struct ASN1_t997;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t359;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m5040 (X509Certificate_t1004 * __this, ByteU5BU5D_t151* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C" void X509Certificate__cctor_m5041 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" void X509Certificate_Parse_m5042 (X509Certificate_t1004 * __this, ByteU5BU5D_t151* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t151* X509Certificate_GetUnsignedBigInteger_m5043 (X509Certificate_t1004 * __this, ByteU5BU5D_t151* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C" DSA_t700 * X509Certificate_get_DSA_m5044 (X509Certificate_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C" String_t* X509Certificate_get_IssuerName_m5045 (X509Certificate_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C" ByteU5BU5D_t151* X509Certificate_get_KeyAlgorithmParameters_m5046 (X509Certificate_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C" ByteU5BU5D_t151* X509Certificate_get_PublicKey_m5047 (X509Certificate_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C" ByteU5BU5D_t151* X509Certificate_get_RawData_m5048 (X509Certificate_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C" String_t* X509Certificate_get_SubjectName_m5049 (X509Certificate_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C" DateTime_t104  X509Certificate_get_ValidFrom_m5050 (X509Certificate_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C" DateTime_t104  X509Certificate_get_ValidUntil_m5051 (X509Certificate_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C" ASN1_t997 * X509Certificate_GetIssuerName_m5052 (X509Certificate_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C" ASN1_t997 * X509Certificate_GetSubjectName_m5053 (X509Certificate_t1004 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_GetObjectData_m5054 (X509Certificate_t1004 * __this, SerializationInfo_t359 * ___info, StreamingContext_t360  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" ByteU5BU5D_t151* X509Certificate_PEM_m5055 (Object_t * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t151* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
