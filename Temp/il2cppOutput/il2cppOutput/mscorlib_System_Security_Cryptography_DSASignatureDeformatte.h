#pragma once
#include <stdint.h>
// System.Security.Cryptography.DSA
struct DSA_t700;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"
// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t909  : public AsymmetricSignatureDeformatter_t859
{
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t700 * ___dsa_0;
};
