#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3;
// UnityEngine.Coroutine
struct Coroutine_t68;
struct Coroutine_t68_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Object
struct Object_t;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m65 (MonoBehaviour_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t68 * MonoBehaviour_StartCoroutine_m833 (MonoBehaviour_t3 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t68 * MonoBehaviour_StartCoroutine_Auto_m834 (MonoBehaviour_t3 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C" void MonoBehaviour_print_m124 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
