#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t736;
// System.IO.TextReader
struct TextReader_t1018;
// System.Text.Encoding
struct Encoding_t330;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t735  : public Object_t
{
};
struct Console_t735_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t736 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t736 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1018 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t330 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t330 * ___outputEncoding_4;
};
