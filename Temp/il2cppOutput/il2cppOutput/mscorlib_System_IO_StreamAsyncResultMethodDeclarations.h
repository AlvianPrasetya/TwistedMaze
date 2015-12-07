#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamAsyncResult
struct StreamAsyncResult_t1089;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t900;
// System.Exception
struct Exception_t118;

// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
extern "C" void StreamAsyncResult__ctor_m5786 (StreamAsyncResult_t1089 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
extern "C" void StreamAsyncResult_SetComplete_m5787 (StreamAsyncResult_t1089 * __this, Exception_t118 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C" void StreamAsyncResult_SetComplete_m5788 (StreamAsyncResult_t1089 * __this, Exception_t118 * ___e, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.StreamAsyncResult::get_AsyncState()
extern "C" Object_t * StreamAsyncResult_get_AsyncState_m5789 (StreamAsyncResult_t1089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.StreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t900 * StreamAsyncResult_get_AsyncWaitHandle_m5790 (StreamAsyncResult_t1089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_IsCompleted()
extern "C" bool StreamAsyncResult_get_IsCompleted_m5791 (StreamAsyncResult_t1089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.StreamAsyncResult::get_Exception()
extern "C" Exception_t118 * StreamAsyncResult_get_Exception_m5792 (StreamAsyncResult_t1089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
extern "C" int32_t StreamAsyncResult_get_NBytes_m5793 (StreamAsyncResult_t1089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.StreamAsyncResult::get_Done()
extern "C" bool StreamAsyncResult_get_Done_m5794 (StreamAsyncResult_t1089 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
extern "C" void StreamAsyncResult_set_Done_m5795 (StreamAsyncResult_t1089 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
