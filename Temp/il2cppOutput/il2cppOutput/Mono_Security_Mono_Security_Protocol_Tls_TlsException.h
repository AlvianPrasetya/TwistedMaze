#pragma once
#include <stdint.h>
// Mono.Security.Protocol.Tls.Alert
struct Alert_t829;
// System.Exception
#include "mscorlib_System_Exception.h"
// Mono.Security.Protocol.Tls.TlsException
struct  TlsException_t873  : public Exception_t118
{
	// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::alert
	Alert_t829 * ___alert_11;
};
