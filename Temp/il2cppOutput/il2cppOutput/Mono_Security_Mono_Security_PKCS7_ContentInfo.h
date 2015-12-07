#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t702;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t793  : public Object_t
{
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t702 * ___content_1;
};
