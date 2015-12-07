#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DaylightTime
struct DaylightTime_t1060;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
extern "C" void DaylightTime__ctor_m5535 (DaylightTime_t1060 * __this, DateTime_t104  ___start, DateTime_t104  ___end, TimeSpan_t603  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
extern "C" DateTime_t104  DaylightTime_get_Start_m5536 (DaylightTime_t1060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
extern "C" DateTime_t104  DaylightTime_get_End_m5537 (DaylightTime_t1060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
extern "C" TimeSpan_t603  DaylightTime_get_Delta_m5538 (DaylightTime_t1060 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
