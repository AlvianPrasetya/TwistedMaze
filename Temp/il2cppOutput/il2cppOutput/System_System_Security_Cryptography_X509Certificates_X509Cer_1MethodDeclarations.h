﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t560;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t589;
// System.Security.Cryptography.X509Certificates.X509Certificate[]
struct X509CertificateU5BU5D_t703;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t592;

// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
extern "C" void X509CertificateCollection__ctor_m2012 (X509CertificateCollection_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate[])
extern "C" void X509CertificateCollection__ctor_m2013 (X509CertificateCollection_t560 * __this, X509CertificateU5BU5D_t703* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection::get_Item(System.Int32)
extern "C" X509Certificate_t589 * X509CertificateCollection_get_Item_m2014 (X509CertificateCollection_t560 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate[])
extern "C" void X509CertificateCollection_AddRange_m2015 (X509CertificateCollection_t560 * __this, X509CertificateU5BU5D_t703* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
extern "C" X509CertificateEnumerator_t592 * X509CertificateCollection_GetEnumerator_m2016 (X509CertificateCollection_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetHashCode()
extern "C" int32_t X509CertificateCollection_GetHashCode_m2017 (X509CertificateCollection_t560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
