#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t818;
// System.String[]
struct StringU5BU5D_t44;
// Mono.Security.ASN1
struct ASN1_t702;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m3217 (GeneralNames_t818 * __this, ASN1_t702 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t44* GeneralNames_get_DNSNames_m3218 (GeneralNames_t818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t44* GeneralNames_get_IPAddresses_m3219 (GeneralNames_t818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m3220 (GeneralNames_t818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
