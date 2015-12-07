#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Application
struct Application_t157;
// UnityEngine.AsyncOperation
struct AsyncOperation_t56;
struct AsyncOperation_t56_marshaled;
// System.String
struct String_t;
// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"

// System.Void UnityEngine.Application::LoadLevel(System.Int32)
extern "C" void Application_LoadLevel_m126 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Application::LoadLevelAsync(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C" AsyncOperation_t56 * Application_LoadLevelAsync_m770 (Object_t * __this /* static, unused */, String_t* ___monoLevelName, int32_t ___index, bool ___additive, bool ___mustCompleteNextFrame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern "C" void Application_CallLogCallback_m771 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, bool ___invokedOnMainThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
