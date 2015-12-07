#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t1333;
// System.Char[]
struct CharU5BU5D_t349;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t151;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1344;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1335;
// System.Text.Decoder
struct Decoder_t1066;

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C" void ASCIIEncoding__ctor_m7205 (ASCIIEncoding_t1333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m7206 (ASCIIEncoding_t1333 * __this, CharU5BU5D_t349* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C" int32_t ASCIIEncoding_GetByteCount_m7207 (ASCIIEncoding_t1333 * __this, String_t* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m7208 (ASCIIEncoding_t1333 * __this, CharU5BU5D_t349* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t151* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m7209 (ASCIIEncoding_t1333 * __this, CharU5BU5D_t349* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t151* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1344 ** ___buffer, CharU5BU5D_t349** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m7210 (ASCIIEncoding_t1333 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t151* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m7211 (ASCIIEncoding_t1333 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t151* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t1344 ** ___buffer, CharU5BU5D_t349** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetCharCount_m7212 (ASCIIEncoding_t1333 * __this, ByteU5BU5D_t151* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetChars_m7213 (ASCIIEncoding_t1333 * __this, ByteU5BU5D_t151* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t349* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C" int32_t ASCIIEncoding_GetChars_m7214 (ASCIIEncoding_t1333 * __this, ByteU5BU5D_t151* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t349* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t1335 ** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxByteCount_m7215 (ASCIIEncoding_t1333 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxCharCount_m7216 (ASCIIEncoding_t1333 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ASCIIEncoding_GetString_m7217 (ASCIIEncoding_t1333 * __this, ByteU5BU5D_t151* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m7218 (ASCIIEncoding_t1333 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m7219 (ASCIIEncoding_t1333 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C" Decoder_t1066 * ASCIIEncoding_GetDecoder_m7220 (ASCIIEncoding_t1333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
