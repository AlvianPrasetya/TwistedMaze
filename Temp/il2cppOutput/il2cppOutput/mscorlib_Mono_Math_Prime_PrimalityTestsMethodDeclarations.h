#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.PrimalityTests
struct PrimalityTests_t978;
// Mono.Math.BigInteger
struct BigInteger_t980;
// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"

// System.Int32 Mono.Math.Prime.PrimalityTests::GetSPPRounds(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C" int32_t PrimalityTests_GetSPPRounds_m4795 (Object_t * __this /* static, unused */, BigInteger_t980 * ___bi, int32_t ___confidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTests::Test(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C" bool PrimalityTests_Test_m4796 (Object_t * __this /* static, unused */, BigInteger_t980 * ___n, int32_t ___confidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTests::RabinMillerTest(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C" bool PrimalityTests_RabinMillerTest_m4797 (Object_t * __this /* static, unused */, BigInteger_t980 * ___n, int32_t ___confidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTests::SmallPrimeSppTest(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C" bool PrimalityTests_SmallPrimeSppTest_m4798 (Object_t * __this /* static, unused */, BigInteger_t980 * ___bi, int32_t ___confidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
