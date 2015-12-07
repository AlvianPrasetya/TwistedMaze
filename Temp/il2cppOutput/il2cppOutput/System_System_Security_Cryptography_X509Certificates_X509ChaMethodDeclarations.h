#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t600;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t595;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t599;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t590;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t588;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t598;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t576;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl
struct X509Crl_t704;
// Mono.Security.X509.X509Extension
struct X509Extension_t705;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t706;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_1.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
extern "C" void X509Chain__ctor_m2018 (X509Chain_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
extern "C" void X509Chain__ctor_m2019 (X509Chain_t600 * __this, bool ___useMachineContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.cctor()
extern "C" void X509Chain__cctor_m2020 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
extern "C" X509ChainPolicy_t595 * X509Chain_get_ChainPolicy_m2021 (X509Chain_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Chain_Build_m2022 (X509Chain_t600 * __this, X509Certificate2_t588 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Reset()
extern "C" void X509Chain_Reset_m2023 (X509Chain_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_Roots()
extern "C" X509Store_t599 * X509Chain_get_Roots_m2024 (X509Chain_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateAuthorities()
extern "C" X509Store_t599 * X509Chain_get_CertificateAuthorities_m2025 (X509Chain_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateCollection()
extern "C" X509Certificate2Collection_t590 * X509Chain_get_CertificateCollection_m2026 (X509Chain_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::BuildChainFrom(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" int32_t X509Chain_BuildChainFrom_m2027 (X509Chain_t600 * __this, X509Certificate2_t588 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::SelectBestFromCollection(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" X509Certificate2_t588 * X509Chain_SelectBestFromCollection_m2028 (X509Chain_t600 * __this, X509Certificate2_t588 * ___child, X509Certificate2Collection_t590 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::FindParent(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" X509Certificate2_t588 * X509Chain_FindParent_m2029 (X509Chain_t600 * __this, X509Certificate2_t588 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsChainComplete(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Chain_IsChainComplete_m2030 (X509Chain_t600 * __this, X509Certificate2_t588 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSelfIssued(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool X509Chain_IsSelfIssued_m2031 (X509Chain_t600 * __this, X509Certificate2_t588 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ValidateChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" void X509Chain_ValidateChain_m2032 (X509Chain_t600 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Process(System.Int32)
extern "C" void X509Chain_Process_m2033 (X509Chain_t600 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::PrepareForNextCertificate(System.Int32)
extern "C" void X509Chain_PrepareForNextCertificate_m2034 (X509Chain_t600 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::WrapUp()
extern "C" void X509Chain_WrapUp_m2035 (X509Chain_t600 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ProcessCertificateExtensions(System.Security.Cryptography.X509Certificates.X509ChainElement)
extern "C" void X509Chain_ProcessCertificateExtensions_m2036 (X509Chain_t600 * __this, X509ChainElement_t598 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSignedWith(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Chain_IsSignedWith_m2037 (X509Chain_t600 * __this, X509Certificate2_t588 * ___signed, AsymmetricAlgorithm_t576 * ___pubkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetSubjectKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" String_t* X509Chain_GetSubjectKeyIdentifier_m2038 (X509Chain_t600 * __this, X509Certificate2_t588 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" String_t* X509Chain_GetAuthorityKeyIdentifier_m2039 (X509Chain_t600 * __this, X509Certificate2_t588 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Crl)
extern "C" String_t* X509Chain_GetAuthorityKeyIdentifier_m2040 (X509Chain_t600 * __this, X509Crl_t704 * ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension)
extern "C" String_t* X509Chain_GetAuthorityKeyIdentifier_m2041 (X509Chain_t600 * __this, X509Extension_t705 * ___ext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocationOnChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" void X509Chain_CheckRevocationOnChain_m2042 (X509Chain_t600 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Int32,System.Boolean)
extern "C" int32_t X509Chain_CheckRevocation_m2043 (X509Chain_t600 * __this, X509Certificate2_t588 * ___certificate, int32_t ___ca, bool ___online, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean)
extern "C" int32_t X509Chain_CheckRevocation_m2044 (X509Chain_t600 * __this, X509Certificate2_t588 * ___certificate, X509Certificate2_t588 * ___ca_cert, bool ___online, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl System.Security.Cryptography.X509Certificates.X509Chain::FindCrl(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" X509Crl_t704 * X509Chain_FindCrl_m2045 (X509Chain_t600 * __this, X509Certificate2_t588 * ___caCertificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlExtensions(Mono.Security.X509.X509Crl)
extern "C" bool X509Chain_ProcessCrlExtensions_m2046 (X509Chain_t600 * __this, X509Crl_t704 * ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlEntryExtensions(Mono.Security.X509.X509Crl/X509CrlEntry)
extern "C" bool X509Chain_ProcessCrlEntryExtensions_m2047 (X509Chain_t600 * __this, X509CrlEntry_t706 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
