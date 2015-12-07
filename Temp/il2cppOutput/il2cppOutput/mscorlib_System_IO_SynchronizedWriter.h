#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t736;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.IO.SynchronizedWriter
struct  SynchronizedWriter_t1096  : public TextWriter_t736
{
	// System.IO.TextWriter System.IO.SynchronizedWriter::writer
	TextWriter_t736 * ___writer_2;
	// System.Boolean System.IO.SynchronizedWriter::neverClose
	bool ___neverClose_3;
};
