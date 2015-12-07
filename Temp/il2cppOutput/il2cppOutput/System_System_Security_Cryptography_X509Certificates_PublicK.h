#pragma once
#include <stdint.h>
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t576;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t577;
// System.Security.Cryptography.Oid
struct Oid_t578;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t131;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Cryptography.X509Certificates.PublicKey
struct  PublicKey_t579  : public Object_t
{
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::_key
	AsymmetricAlgorithm_t576 * ____key_0;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t577 * ____keyValue_1;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t577 * ____params_2;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t578 * ____oid_3;
};
struct PublicKey_t579_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.PublicKey::<>f__switch$map9
	Dictionary_2_t131 * ___U3CU3Ef__switchU24map9_4;
};
