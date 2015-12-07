#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t723;
struct DSAParameters_t723_marshaled;

void DSAParameters_t723_marshal(const DSAParameters_t723& unmarshaled, DSAParameters_t723_marshaled& marshaled);
void DSAParameters_t723_marshal_back(const DSAParameters_t723_marshaled& marshaled, DSAParameters_t723& unmarshaled);
void DSAParameters_t723_marshal_cleanup(DSAParameters_t723_marshaled& marshaled);
