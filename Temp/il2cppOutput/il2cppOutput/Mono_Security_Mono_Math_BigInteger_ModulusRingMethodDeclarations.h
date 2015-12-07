#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t783;
// Mono.Math.BigInteger
struct BigInteger_t782;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m2923 (ModulusRing_t783 * __this, BigInteger_t782 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m2924 (ModulusRing_t783 * __this, BigInteger_t782 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t782 * ModulusRing_Multiply_m2925 (ModulusRing_t783 * __this, BigInteger_t782 * ___a, BigInteger_t782 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t782 * ModulusRing_Difference_m2926 (ModulusRing_t783 * __this, BigInteger_t782 * ___a, BigInteger_t782 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t782 * ModulusRing_Pow_m2927 (ModulusRing_t783 * __this, BigInteger_t782 * ___a, BigInteger_t782 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t782 * ModulusRing_Pow_m2928 (ModulusRing_t783 * __this, uint32_t ___b, BigInteger_t782 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
