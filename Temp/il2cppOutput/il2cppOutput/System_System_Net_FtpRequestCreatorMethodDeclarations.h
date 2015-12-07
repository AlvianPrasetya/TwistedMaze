#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t553;
// System.Net.WebRequest
struct WebRequest_t551;
// System.Uri
struct Uri_t235;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m1831 (FtpRequestCreator_t553 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t551 * FtpRequestCreator_Create_m1832 (FtpRequestCreator_t553 * __this, Uri_t235 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
