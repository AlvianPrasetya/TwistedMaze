#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t966;
struct PreviousInfo_t966_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m4714 (PreviousInfo_t966 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t966_marshal(const PreviousInfo_t966& unmarshaled, PreviousInfo_t966_marshaled& marshaled);
void PreviousInfo_t966_marshal_back(const PreviousInfo_t966_marshaled& marshaled, PreviousInfo_t966& unmarshaled);
void PreviousInfo_t966_marshal_cleanup(PreviousInfo_t966_marshaled& marshaled);
