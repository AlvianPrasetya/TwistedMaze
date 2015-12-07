#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t721;
struct RSAParameters_t721_marshaled;

void RSAParameters_t721_marshal(const RSAParameters_t721& unmarshaled, RSAParameters_t721_marshaled& marshaled);
void RSAParameters_t721_marshal_back(const RSAParameters_t721_marshaled& marshaled, RSAParameters_t721& unmarshaled);
void RSAParameters_t721_marshal_cleanup(RSAParameters_t721_marshaled& marshaled);
