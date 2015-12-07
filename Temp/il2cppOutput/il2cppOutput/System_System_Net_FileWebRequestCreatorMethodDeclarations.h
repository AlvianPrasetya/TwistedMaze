#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t552;
// System.Net.WebRequest
struct WebRequest_t551;
// System.Uri
struct Uri_t235;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m1829 (FileWebRequestCreator_t552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t551 * FileWebRequestCreator_Create_m1830 (FileWebRequestCreator_t552 * __this, Uri_t235 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
