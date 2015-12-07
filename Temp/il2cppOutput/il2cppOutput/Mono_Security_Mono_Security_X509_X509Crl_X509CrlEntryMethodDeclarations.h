#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t706;
// System.Byte[]
struct ByteU5BU5D_t151;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t730;
// Mono.Security.ASN1
struct ASN1_t702;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" void X509CrlEntry__ctor_m3173 (X509CrlEntry_t706 * __this, ASN1_t702 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" ByteU5BU5D_t151* X509CrlEntry_get_SerialNumber_m3174 (X509CrlEntry_t706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C" DateTime_t104  X509CrlEntry_get_RevocationDate_m2745 (X509CrlEntry_t706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C" X509ExtensionCollection_t730 * X509CrlEntry_get_Extensions_m2751 (X509CrlEntry_t706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
