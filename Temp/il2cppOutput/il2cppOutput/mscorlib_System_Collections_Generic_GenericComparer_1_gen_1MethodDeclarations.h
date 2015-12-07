#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Guid>
struct GenericComparer_1_t1510;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m8350_gshared (GenericComparer_1_t1510 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m8350(__this, method) (( void (*) (GenericComparer_1_t1510 *, const MethodInfo*))GenericComparer_1__ctor_m8350_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12804_gshared (GenericComparer_1_t1510 * __this, Guid_t410  ___x, Guid_t410  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m12804(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1510 *, Guid_t410 , Guid_t410 , const MethodInfo*))GenericComparer_1_Compare_m12804_gshared)(__this, ___x, ___y, method)
