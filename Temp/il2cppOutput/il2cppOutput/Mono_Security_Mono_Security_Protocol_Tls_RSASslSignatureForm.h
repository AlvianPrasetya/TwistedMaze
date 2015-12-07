#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t701;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t801;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t131;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct  RSASslSignatureFormatter_t860  : public AsymmetricSignatureFormatter_t861
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t701 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t801 * ___hash_1;
};
struct RSASslSignatureFormatter_t860_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t131 * ___U3CU3Ef__switchU24map16_2;
};
