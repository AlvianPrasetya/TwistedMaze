﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.IPAddress
struct IPAddress_t564;
// System.UInt16[]
struct UInt16U5BU5D_t563;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.IPAddress::.ctor(System.Int64)
extern "C" void IPAddress__ctor_m1848 (IPAddress_t564 * __this, int64_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.ctor(System.UInt16[],System.Int64)
extern "C" void IPAddress__ctor_m1849 (IPAddress_t564 * __this, UInt16U5BU5D_t563* ___address, int64_t ___scopeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.cctor()
extern "C" void IPAddress__cctor_m1850 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::SwapShort(System.Int16)
extern "C" int16_t IPAddress_SwapShort_m1851 (Object_t * __this /* static, unused */, int16_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::HostToNetworkOrder(System.Int16)
extern "C" int16_t IPAddress_HostToNetworkOrder_m1852 (Object_t * __this /* static, unused */, int16_t ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::NetworkToHostOrder(System.Int16)
extern "C" int16_t IPAddress_NetworkToHostOrder_m1853 (Object_t * __this /* static, unused */, int16_t ___network, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern "C" IPAddress_t564 * IPAddress_Parse_m1854 (Object_t * __this /* static, unused */, String_t* ___ipString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
extern "C" bool IPAddress_TryParse_m1855 (Object_t * __this /* static, unused */, String_t* ___ipString, IPAddress_t564 ** ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV4(System.String)
extern "C" IPAddress_t564 * IPAddress_ParseIPV4_m1856 (Object_t * __this /* static, unused */, String_t* ___ip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV6(System.String)
extern "C" IPAddress_t564 * IPAddress_ParseIPV6_m1857 (Object_t * __this /* static, unused */, String_t* ___ip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_InternalIPv4Address()
extern "C" int64_t IPAddress_get_InternalIPv4Address_m1858 (IPAddress_t564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_ScopeId()
extern "C" int64_t IPAddress_get_ScopeId_m1859 (IPAddress_t564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
extern "C" int32_t IPAddress_get_AddressFamily_m1860 (IPAddress_t564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
extern "C" bool IPAddress_IsLoopback_m1861 (Object_t * __this /* static, unused */, IPAddress_t564 * ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString()
extern "C" String_t* IPAddress_ToString_m1862 (IPAddress_t564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString(System.Int64)
extern "C" String_t* IPAddress_ToString_m1863 (Object_t * __this /* static, unused */, int64_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::Equals(System.Object)
extern "C" bool IPAddress_Equals_m1864 (IPAddress_t564 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::GetHashCode()
extern "C" int32_t IPAddress_GetHashCode_m1865 (IPAddress_t564 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t IPAddress_Hash_m1866 (Object_t * __this /* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
