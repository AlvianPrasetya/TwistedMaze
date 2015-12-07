#pragma once
#include <stdint.h>
// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t818;
// Mono.Security.X509.X509Extension
#include "Mono_Security_Mono_Security_X509_X509Extension.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct  SubjectAltNameExtension_t823  : public X509Extension_t705
{
	// Mono.Security.X509.Extensions.GeneralNames Mono.Security.X509.Extensions.SubjectAltNameExtension::_names
	GeneralNames_t818 * ____names_3;
};
