﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Exception
#include "mscorlib_System_Exception.h"
// UnityEngine.UnityException
struct  UnityException_t298  : public Exception_t118
{
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace_12;
};
