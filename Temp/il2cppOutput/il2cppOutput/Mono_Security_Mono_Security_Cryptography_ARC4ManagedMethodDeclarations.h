#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.ARC4Managed
struct ARC4Managed_t796;
// System.Byte[]
struct ByteU5BU5D_t151;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t832;

// System.Void Mono.Security.Cryptography.ARC4Managed::.ctor()
extern "C" void ARC4Managed__ctor_m3021 (ARC4Managed_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Finalize()
extern "C" void ARC4Managed_Finalize_m3022 (ARC4Managed_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Dispose(System.Boolean)
extern "C" void ARC4Managed_Dispose_m3023 (ARC4Managed_t796 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::get_Key()
extern "C" ByteU5BU5D_t151* ARC4Managed_get_Key_m3024 (ARC4Managed_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::set_Key(System.Byte[])
extern "C" void ARC4Managed_set_Key_m3025 (ARC4Managed_t796 * __this, ByteU5BU5D_t151* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.ARC4Managed::get_CanReuseTransform()
extern "C" bool ARC4Managed_get_CanReuseTransform_m3026 (ARC4Managed_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * ARC4Managed_CreateEncryptor_m3027 (ARC4Managed_t796 * __this, ByteU5BU5D_t151* ___rgbKey, ByteU5BU5D_t151* ___rgvIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * ARC4Managed_CreateDecryptor_m3028 (ARC4Managed_t796 * __this, ByteU5BU5D_t151* ___rgbKey, ByteU5BU5D_t151* ___rgvIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateIV()
extern "C" void ARC4Managed_GenerateIV_m3029 (ARC4Managed_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateKey()
extern "C" void ARC4Managed_GenerateKey_m3030 (ARC4Managed_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::KeySetup(System.Byte[])
extern "C" void ARC4Managed_KeySetup_m3031 (ARC4Managed_t796 * __this, ByteU5BU5D_t151* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C" void ARC4Managed_CheckInput_m3032 (ARC4Managed_t796 * __this, ByteU5BU5D_t151* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ARC4Managed_TransformBlock_m3033 (ARC4Managed_t796 * __this, ByteU5BU5D_t151* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t151* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ARC4Managed_InternalTransformBlock_m3034 (ARC4Managed_t796 * __this, ByteU5BU5D_t151* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t151* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t151* ARC4Managed_TransformFinalBlock_m3035 (ARC4Managed_t796 * __this, ByteU5BU5D_t151* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
