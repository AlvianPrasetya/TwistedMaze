#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t557;
// System.Net.WebRequest
struct WebRequest_t551;
// System.Uri
struct Uri_t235;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m1837 (HttpRequestCreator_t557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t551 * HttpRequestCreator_Create_m1838 (HttpRequestCreator_t557 * __this, Uri_t235 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
