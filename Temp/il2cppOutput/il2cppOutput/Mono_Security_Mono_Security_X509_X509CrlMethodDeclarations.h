#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t704;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t730;
// System.Byte[]
struct ByteU5BU5D_t151;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t706;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t587;
// System.Security.Cryptography.DSA
struct DSA_t700;
// System.Security.Cryptography.RSA
struct RSA_t701;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t576;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m3175 (X509Crl_t704 * __this, ByteU5BU5D_t151* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m3176 (X509Crl_t704 * __this, ByteU5BU5D_t151* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t730 * X509Crl_get_Extensions_m2740 (X509Crl_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t151* X509Crl_get_Hash_m3177 (X509Crl_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m2748 (X509Crl_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t104  X509Crl_get_NextUpdate_m2746 (X509Crl_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m3178 (X509Crl_t704 * __this, ByteU5BU5D_t151* ___array1, ByteU5BU5D_t151* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t706 * X509Crl_GetCrlEntry_m2744 (X509Crl_t704 * __this, X509Certificate_t587 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t706 * X509Crl_GetCrlEntry_m3179 (X509Crl_t704 * __this, ByteU5BU5D_t151* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m3180 (X509Crl_t704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m3181 (X509Crl_t704 * __this, DSA_t700 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m3182 (X509Crl_t704 * __this, RSA_t701 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m2743 (X509Crl_t704 * __this, AsymmetricAlgorithm_t576 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
