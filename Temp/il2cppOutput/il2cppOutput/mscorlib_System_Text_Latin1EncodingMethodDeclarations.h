#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Latin1Encoding
struct Latin1Encoding_t1349;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t349;
// System.Byte[]
struct ByteU5BU5D_t151;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1344;

// System.Void System.Text.Latin1Encoding::.ctor()
extern "C" void Latin1Encoding__ctor_m7322 (Latin1Encoding_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t Latin1Encoding_GetByteCount_m7323 (Latin1Encoding_t1349 * __this, CharU5BU5D_t349* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetByteCount(System.String)
extern "C" int32_t Latin1Encoding_GetByteCount_m7324 (Latin1Encoding_t1349 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Latin1Encoding_GetBytes_m7325 (Latin1Encoding_t1349 * __this, CharU5BU5D_t349* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t151* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t Latin1Encoding_GetBytes_m7326 (Latin1Encoding_t1349 * __this, CharU5BU5D_t349* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t151* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1344 ** ___buffer, CharU5BU5D_t349** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Latin1Encoding_GetBytes_m7327 (Latin1Encoding_t1349 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t151* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t Latin1Encoding_GetBytes_m7328 (Latin1Encoding_t1349 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t151* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1344 ** ___buffer, CharU5BU5D_t349** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t Latin1Encoding_GetCharCount_m7329 (Latin1Encoding_t1349 * __this, ByteU5BU5D_t151* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t Latin1Encoding_GetChars_m7330 (Latin1Encoding_t1349 * __this, ByteU5BU5D_t151* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t349* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxByteCount(System.Int32)
extern "C" int32_t Latin1Encoding_GetMaxByteCount_m7331 (Latin1Encoding_t1349 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Latin1Encoding::GetMaxCharCount(System.Int32)
extern "C" int32_t Latin1Encoding_GetMaxCharCount_m7332 (Latin1Encoding_t1349 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* Latin1Encoding_GetString_m7333 (Latin1Encoding_t1349 * __this, ByteU5BU5D_t151* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::GetString(System.Byte[])
extern "C" String_t* Latin1Encoding_GetString_m7334 (Latin1Encoding_t1349 * __this, ByteU5BU5D_t151* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::get_HeaderName()
extern "C" String_t* Latin1Encoding_get_HeaderName_m7335 (Latin1Encoding_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Latin1Encoding::get_WebName()
extern "C" String_t* Latin1Encoding_get_WebName_m7336 (Latin1Encoding_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
