#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1098;
// System.IO.Stream
struct Stream_t854;
// System.Text.Encoding
struct Encoding_t330;
// System.Char[]
struct CharU5BU5D_t349;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m5894 (UnexceptionalStreamWriter_t1098 * __this, Stream_t854 * ___stream, Encoding_t330 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m5895 (UnexceptionalStreamWriter_t1098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m5896 (UnexceptionalStreamWriter_t1098 * __this, CharU5BU5D_t349* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m5897 (UnexceptionalStreamWriter_t1098 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m5898 (UnexceptionalStreamWriter_t1098 * __this, CharU5BU5D_t349* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m5899 (UnexceptionalStreamWriter_t1098 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
