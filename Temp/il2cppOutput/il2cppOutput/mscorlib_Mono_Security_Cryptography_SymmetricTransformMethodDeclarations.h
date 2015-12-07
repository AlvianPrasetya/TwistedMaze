#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t996;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t808;
// System.Byte[]
struct ByteU5BU5D_t151;
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
extern "C" void SymmetricTransform__ctor_m4986 (SymmetricTransform_t996 * __this, SymmetricAlgorithm_t808 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t151* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::System.IDisposable.Dispose()
extern "C" void SymmetricTransform_System_IDisposable_Dispose_m4987 (SymmetricTransform_t996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Finalize()
extern "C" void SymmetricTransform_Finalize_m4988 (SymmetricTransform_t996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean)
extern "C" void SymmetricTransform_Dispose_m4989 (SymmetricTransform_t996 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanReuseTransform()
extern "C" bool SymmetricTransform_get_CanReuseTransform_m4990 (SymmetricTransform_t996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_Transform_m4991 (SymmetricTransform_t996 * __this, ByteU5BU5D_t151* ___input, ByteU5BU5D_t151* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[])
// System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_CBC_m4992 (SymmetricTransform_t996 * __this, ByteU5BU5D_t151* ___input, ByteU5BU5D_t151* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_CFB_m4993 (SymmetricTransform_t996 * __this, ByteU5BU5D_t151* ___input, ByteU5BU5D_t151* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_OFB_m4994 (SymmetricTransform_t996 * __this, ByteU5BU5D_t151* ___input, ByteU5BU5D_t151* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_CTS_m4995 (SymmetricTransform_t996 * __this, ByteU5BU5D_t151* ___input, ByteU5BU5D_t151* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C" void SymmetricTransform_CheckInput_m4996 (SymmetricTransform_t996 * __this, ByteU5BU5D_t151* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t SymmetricTransform_TransformBlock_m4997 (SymmetricTransform_t996 * __this, ByteU5BU5D_t151* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t151* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
extern "C" bool SymmetricTransform_get_KeepLastBlock_m4998 (SymmetricTransform_t996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t SymmetricTransform_InternalTransformBlock_m4999 (SymmetricTransform_t996 * __this, ByteU5BU5D_t151* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t151* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
extern "C" void SymmetricTransform_Random_m5000 (SymmetricTransform_t996 * __this, ByteU5BU5D_t151* ___buffer, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
extern "C" void SymmetricTransform_ThrowBadPaddingException_m5001 (SymmetricTransform_t996 * __this, int32_t ___padding, int32_t ___length, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t151* SymmetricTransform_FinalEncrypt_m5002 (SymmetricTransform_t996 * __this, ByteU5BU5D_t151* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t151* SymmetricTransform_FinalDecrypt_m5003 (SymmetricTransform_t996 * __this, ByteU5BU5D_t151* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t151* SymmetricTransform_TransformFinalBlock_m5004 (SymmetricTransform_t996 * __this, ByteU5BU5D_t151* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
