#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t608;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t577;
// System.Byte[]
struct ByteU5BU5D_t151;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Key_0.h"
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
extern "C" void X509KeyUsageExtension__ctor_m2103 (X509KeyUsageExtension_t608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509KeyUsageExtension__ctor_m2104 (X509KeyUsageExtension_t608 * __this, AsnEncodedData_t577 * ___encodedKeyUsage, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
extern "C" void X509KeyUsageExtension__ctor_m2105 (X509KeyUsageExtension_t608 * __this, int32_t ___keyUsages, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
extern "C" int32_t X509KeyUsageExtension_get_KeyUsages_m2106 (X509KeyUsageExtension_t608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509KeyUsageExtension_CopyFrom_m2107 (X509KeyUsageExtension_t608 * __this, AsnEncodedData_t577 * ___encodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
extern "C" int32_t X509KeyUsageExtension_GetValidFlags_m2108 (X509KeyUsageExtension_t608 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
extern "C" int32_t X509KeyUsageExtension_Decode_m2109 (X509KeyUsageExtension_t608 * __this, ByteU5BU5D_t151* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
extern "C" ByteU5BU5D_t151* X509KeyUsageExtension_Encode_m2110 (X509KeyUsageExtension_t608 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
extern "C" String_t* X509KeyUsageExtension_ToString_m2111 (X509KeyUsageExtension_t608 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
