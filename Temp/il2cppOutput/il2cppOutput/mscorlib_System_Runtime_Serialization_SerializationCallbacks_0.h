#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t537;
// System.Collections.Hashtable
struct Hashtable_t527;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.SerializationCallbacks
struct  SerializationCallbacks_t1276  : public Object_t
{
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializingList
	ArrayList_t537 * ___onSerializingList_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializedList
	ArrayList_t537 * ___onSerializedList_1;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializingList
	ArrayList_t537 * ___onDeserializingList_2;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializedList
	ArrayList_t537 * ___onDeserializedList_3;
};
struct SerializationCallbacks_t1276_StaticFields{
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationCallbacks::cache
	Hashtable_t527 * ___cache_4;
	// System.Object System.Runtime.Serialization.SerializationCallbacks::cache_lock
	Object_t * ___cache_lock_5;
};
