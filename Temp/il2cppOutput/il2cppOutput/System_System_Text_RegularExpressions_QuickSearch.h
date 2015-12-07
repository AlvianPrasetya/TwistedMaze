#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t151;
// System.Collections.Hashtable
struct Hashtable_t527;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.QuickSearch
struct  QuickSearch_t655  : public Object_t
{
	// System.String System.Text.RegularExpressions.QuickSearch::str
	String_t* ___str_0;
	// System.Int32 System.Text.RegularExpressions.QuickSearch::len
	int32_t ___len_1;
	// System.Boolean System.Text.RegularExpressions.QuickSearch::ignore
	bool ___ignore_2;
	// System.Boolean System.Text.RegularExpressions.QuickSearch::reverse
	bool ___reverse_3;
	// System.Byte[] System.Text.RegularExpressions.QuickSearch::shift
	ByteU5BU5D_t151* ___shift_4;
	// System.Collections.Hashtable System.Text.RegularExpressions.QuickSearch::shiftExtended
	Hashtable_t527 * ___shiftExtended_5;
};
struct QuickSearch_t655_StaticFields{
	// System.Int32 System.Text.RegularExpressions.QuickSearch::THRESHOLD
	int32_t ___THRESHOLD_6;
};
