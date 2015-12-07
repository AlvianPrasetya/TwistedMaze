﻿#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t151;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t999  : public Object_t
{
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t151* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t151* ____salt_6;
};
struct DeriveBytes_t999_StaticFields{
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t151* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t151* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t151* ___macDiversifier_2;
};
