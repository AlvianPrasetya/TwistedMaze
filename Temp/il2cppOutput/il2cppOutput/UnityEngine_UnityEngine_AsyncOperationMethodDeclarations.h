#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t56;
struct AsyncOperation_t56_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m763 (AsyncOperation_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m764 (AsyncOperation_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m765 (AsyncOperation_t56 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t56_marshal(const AsyncOperation_t56& unmarshaled, AsyncOperation_t56_marshaled& marshaled);
void AsyncOperation_t56_marshal_back(const AsyncOperation_t56_marshaled& marshaled, AsyncOperation_t56& unmarshaled);
void AsyncOperation_t56_marshal_cleanup(AsyncOperation_t56_marshaled& marshaled);
