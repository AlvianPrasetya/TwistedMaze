﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NumberFormatter/CustomInfo
struct CustomInfo_t1426;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1055;
// System.Text.StringBuilder
struct StringBuilder_t350;

// System.Void System.NumberFormatter/CustomInfo::.ctor()
extern "C" void CustomInfo__ctor_m8064 (CustomInfo_t1426 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter/CustomInfo::GetActiveSection(System.String,System.Boolean&,System.Boolean,System.Int32&,System.Int32&)
extern "C" void CustomInfo_GetActiveSection_m8065 (Object_t * __this /* static, unused */, String_t* ___format, bool* ___positive, bool ___zero, int32_t* ___offset, int32_t* ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter/CustomInfo System.NumberFormatter/CustomInfo::Parse(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo)
extern "C" CustomInfo_t1426 * CustomInfo_Parse_m8066 (Object_t * __this /* static, unused */, String_t* ___format, int32_t ___offset, int32_t ___length, NumberFormatInfo_t1055 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter/CustomInfo::Format(System.String,System.Int32,System.Int32,System.Globalization.NumberFormatInfo,System.Boolean,System.Text.StringBuilder,System.Text.StringBuilder,System.Text.StringBuilder)
extern "C" String_t* CustomInfo_Format_m8067 (CustomInfo_t1426 * __this, String_t* ___format, int32_t ___offset, int32_t ___length, NumberFormatInfo_t1055 * ___nfi, bool ___positive, StringBuilder_t350 * ___sb_int, StringBuilder_t350 * ___sb_dec, StringBuilder_t350 * ___sb_exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
