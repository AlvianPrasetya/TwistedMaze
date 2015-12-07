#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t68;
struct Coroutine_t68_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m193 (Coroutine_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m194 (Coroutine_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m195 (Coroutine_t68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t68_marshal(const Coroutine_t68& unmarshaled, Coroutine_t68_marshaled& marshaled);
void Coroutine_t68_marshal_back(const Coroutine_t68_marshaled& marshaled, Coroutine_t68& unmarshaled);
void Coroutine_t68_marshal_cleanup(Coroutine_t68_marshaled& marshaled);
