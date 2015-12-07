﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t981;
// Mono.Math.BigInteger
struct BigInteger_t980;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m4799 (ModulusRing_t981 * __this, BigInteger_t980 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m4800 (ModulusRing_t981 * __this, BigInteger_t980 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t980 * ModulusRing_Multiply_m4801 (ModulusRing_t981 * __this, BigInteger_t980 * ___a, BigInteger_t980 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t980 * ModulusRing_Difference_m4802 (ModulusRing_t981 * __this, BigInteger_t980 * ___a, BigInteger_t980 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t980 * ModulusRing_Pow_m4803 (ModulusRing_t981 * __this, BigInteger_t980 * ___a, BigInteger_t980 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t980 * ModulusRing_Pow_m4804 (ModulusRing_t981 * __this, uint32_t ___b, BigInteger_t980 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
