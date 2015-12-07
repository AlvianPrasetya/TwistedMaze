#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.BinaryReader
struct BinaryReader_t1067;
// System.IO.Stream
struct Stream_t854;
// System.Text.Encoding
struct Encoding_t330;
// System.Byte[]
struct ByteU5BU5D_t151;
// System.Char[]
struct CharU5BU5D_t349;
// System.String
struct String_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern "C" void BinaryReader__ctor_m5596 (BinaryReader_t1067 * __this, Stream_t854 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void BinaryReader__ctor_m5597 (BinaryReader_t1067 * __this, Stream_t854 * ___input, Encoding_t330 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::System.IDisposable.Dispose()
extern "C" void BinaryReader_System_IDisposable_Dispose_m5598 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Dispose(System.Boolean)
extern "C" void BinaryReader_Dispose_m5599 (BinaryReader_t1067 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::FillBuffer(System.Int32)
extern "C" void BinaryReader_FillBuffer_m5600 (BinaryReader_t1067 * __this, int32_t ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read()
extern "C" int32_t BinaryReader_Read_m5601 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t BinaryReader_Read_m5602 (BinaryReader_t1067 * __this, ByteU5BU5D_t151* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t BinaryReader_Read_m5603 (BinaryReader_t1067 * __this, CharU5BU5D_t349* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadCharBytes(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C" int32_t BinaryReader_ReadCharBytes_m5604 (BinaryReader_t1067 * __this, CharU5BU5D_t349* ___buffer, int32_t ___index, int32_t ___count, int32_t* ___bytes_read, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read7BitEncodedInt()
extern "C" int32_t BinaryReader_Read7BitEncodedInt_m5605 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BinaryReader::ReadBoolean()
extern "C" bool BinaryReader_ReadBoolean_m5606 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.IO.BinaryReader::ReadByte()
extern "C" uint8_t BinaryReader_ReadByte_m5607 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.BinaryReader::ReadChar()
extern "C" uint16_t BinaryReader_ReadChar_m5608 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.IO.BinaryReader::ReadDecimal()
extern "C" Decimal_t393  BinaryReader_ReadDecimal_m5609 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.IO.BinaryReader::ReadDouble()
extern "C" double BinaryReader_ReadDouble_m5610 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.IO.BinaryReader::ReadInt16()
extern "C" int16_t BinaryReader_ReadInt16_m5611 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadInt32()
extern "C" int32_t BinaryReader_ReadInt32_m5612 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BinaryReader::ReadInt64()
extern "C" int64_t BinaryReader_ReadInt64_m5613 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.IO.BinaryReader::ReadSByte()
extern "C" int8_t BinaryReader_ReadSByte_m5614 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.BinaryReader::ReadString()
extern "C" String_t* BinaryReader_ReadString_m5615 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.IO.BinaryReader::ReadSingle()
extern "C" float BinaryReader_ReadSingle_m5616 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.IO.BinaryReader::ReadUInt16()
extern "C" uint16_t BinaryReader_ReadUInt16_m5617 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.IO.BinaryReader::ReadUInt32()
extern "C" uint32_t BinaryReader_ReadUInt32_m5618 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.IO.BinaryReader::ReadUInt64()
extern "C" uint64_t BinaryReader_ReadUInt64_m5619 (BinaryReader_t1067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::CheckBuffer(System.Int32)
extern "C" void BinaryReader_CheckBuffer_m5620 (BinaryReader_t1067 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
