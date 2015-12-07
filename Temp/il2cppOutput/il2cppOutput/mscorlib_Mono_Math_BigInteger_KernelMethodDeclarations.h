#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t982;
// Mono.Math.BigInteger
struct BigInteger_t980;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1476;
// System.UInt32[]
struct UInt32U5BU5D_t785;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t980 * Kernel_AddSameSign_m4805 (Object_t * __this /* static, unused */, BigInteger_t980 * ___bi1, BigInteger_t980 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t980 * Kernel_Subtract_m4806 (Object_t * __this /* static, unused */, BigInteger_t980 * ___big, BigInteger_t980 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m4807 (Object_t * __this /* static, unused */, BigInteger_t980 * ___big, BigInteger_t980 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m4808 (Object_t * __this /* static, unused */, BigInteger_t980 * ___bi1, BigInteger_t980 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m4809 (Object_t * __this /* static, unused */, BigInteger_t980 * ___bi1, BigInteger_t980 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m4810 (Object_t * __this /* static, unused */, BigInteger_t980 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m4811 (Object_t * __this /* static, unused */, BigInteger_t980 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t1476* Kernel_DwordDivMod_m4812 (Object_t * __this /* static, unused */, BigInteger_t980 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t1476* Kernel_multiByteDivide_m4813 (Object_t * __this /* static, unused */, BigInteger_t980 * ___bi1, BigInteger_t980 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t980 * Kernel_LeftShift_m4814 (Object_t * __this /* static, unused */, BigInteger_t980 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t980 * Kernel_RightShift_m4815 (Object_t * __this /* static, unused */, BigInteger_t980 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
extern "C" BigInteger_t980 * Kernel_MultiplyByDword_m4816 (Object_t * __this /* static, unused */, BigInteger_t980 * ___n, uint32_t ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m4817 (Object_t * __this /* static, unused */, UInt32U5BU5D_t785* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t785* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t785* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m4818 (Object_t * __this /* static, unused */, UInt32U5BU5D_t785* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t785* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t785* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m4819 (Object_t * __this /* static, unused */, BigInteger_t980 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t980 * Kernel_modInverse_m4820 (Object_t * __this /* static, unused */, BigInteger_t980 * ___bi, BigInteger_t980 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
