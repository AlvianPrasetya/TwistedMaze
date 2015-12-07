#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct TlsClientCertificate_t877;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t589;
// Mono.Security.Protocol.Tls.Context
struct Context_t831;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificate__ctor_m3661 (TlsClientCertificate_t877 * __this, Context_t831 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::get_ClientCertificate()
extern "C" X509Certificate_t589 * TlsClientCertificate_get_ClientCertificate_m3662 (TlsClientCertificate_t877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::Update()
extern "C" void TlsClientCertificate_Update_m3663 (TlsClientCertificate_t877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::GetClientCertificate()
extern "C" void TlsClientCertificate_GetClientCertificate_m3664 (TlsClientCertificate_t877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::SendCertificates()
extern "C" void TlsClientCertificate_SendCertificates_m3665 (TlsClientCertificate_t877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsSsl3()
extern "C" void TlsClientCertificate_ProcessAsSsl3_m3666 (TlsClientCertificate_t877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsTls1()
extern "C" void TlsClientCertificate_ProcessAsTls1_m3667 (TlsClientCertificate_t877 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::FindParentCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" X509Certificate_t589 * TlsClientCertificate_FindParentCertificate_m3668 (TlsClientCertificate_t877 * __this, X509Certificate_t589 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
