#pragma once
#include <stdint.h>
// SimpleJson.IJsonSerializerStrategy
struct IJsonSerializerStrategy_t241;
// SimpleJson.PocoJsonSerializerStrategy
struct PocoJsonSerializerStrategy_t242;
// System.Object
#include "mscorlib_System_Object.h"
// SimpleJson.SimpleJson
struct  SimpleJson_t243  : public Object_t
{
};
struct SimpleJson_t243_StaticFields{
	// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::_currentJsonSerializerStrategy
	Object_t * ____currentJsonSerializerStrategy_0;
	// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::_pocoJsonSerializerStrategy
	PocoJsonSerializerStrategy_t242 * ____pocoJsonSerializerStrategy_1;
};
