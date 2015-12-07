#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t65;
struct YieldInstruction_t65_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m874 (YieldInstruction_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t65_marshal(const YieldInstruction_t65& unmarshaled, YieldInstruction_t65_marshaled& marshaled);
void YieldInstruction_t65_marshal_back(const YieldInstruction_t65_marshaled& marshaled, YieldInstruction_t65& unmarshaled);
void YieldInstruction_t65_marshal_cleanup(YieldInstruction_t65_marshaled& marshaled);
