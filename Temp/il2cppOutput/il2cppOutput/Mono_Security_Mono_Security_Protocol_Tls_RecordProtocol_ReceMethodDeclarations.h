#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t855;
// System.IO.Stream
struct Stream_t854;
// System.Byte[]
struct ByteU5BU5D_t151;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t118;
// System.Threading.WaitHandle
struct WaitHandle_t900;
// System.AsyncCallback
struct AsyncCallback_t100;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3410 (ReceiveRecordAsyncResult_t855 * __this, AsyncCallback_t100 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t151* ___initialBuffer, Stream_t854 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t854 * ReceiveRecordAsyncResult_get_Record_m3411 (ReceiveRecordAsyncResult_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t151* ReceiveRecordAsyncResult_get_ResultingBuffer_m3412 (ReceiveRecordAsyncResult_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t151* ReceiveRecordAsyncResult_get_InitialBuffer_m3413 (ReceiveRecordAsyncResult_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3414 (ReceiveRecordAsyncResult_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t118 * ReceiveRecordAsyncResult_get_AsyncException_m3415 (ReceiveRecordAsyncResult_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3416 (ReceiveRecordAsyncResult_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t900 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3417 (ReceiveRecordAsyncResult_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3418 (ReceiveRecordAsyncResult_t855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3419 (ReceiveRecordAsyncResult_t855 * __this, Exception_t118 * ___ex, ByteU5BU5D_t151* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3420 (ReceiveRecordAsyncResult_t855 * __this, Exception_t118 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3421 (ReceiveRecordAsyncResult_t855 * __this, ByteU5BU5D_t151* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
