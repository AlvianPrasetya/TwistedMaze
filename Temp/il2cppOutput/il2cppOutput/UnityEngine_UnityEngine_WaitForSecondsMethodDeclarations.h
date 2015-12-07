#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t64;
struct WaitForSeconds_t64_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m190 (WaitForSeconds_t64 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t64_marshal(const WaitForSeconds_t64& unmarshaled, WaitForSeconds_t64_marshaled& marshaled);
void WaitForSeconds_t64_marshal_back(const WaitForSeconds_t64_marshaled& marshaled, WaitForSeconds_t64& unmarshaled);
void WaitForSeconds_t64_marshal_cleanup(WaitForSeconds_t64_marshaled& marshaled);
