﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.JsonObject
struct JsonObject_t240;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t344;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t345;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t328;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t346;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t348;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"

// System.Void SimpleJson.JsonObject::.ctor()
extern "C" void JsonObject__ctor_m1175 (JsonObject_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * JsonObject_System_Collections_IEnumerable_GetEnumerator_m1176 (JsonObject_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern "C" void JsonObject_Add_m1177 (JsonObject_t240 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern "C" Object_t* JsonObject_get_Keys_m1178 (JsonObject_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::Remove(System.String)
extern "C" bool JsonObject_Remove_m1179 (JsonObject_t240 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern "C" bool JsonObject_TryGetValue_m1180 (JsonObject_t240 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern "C" Object_t* JsonObject_get_Values_m1181 (JsonObject_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern "C" Object_t * JsonObject_get_Item_m1182 (JsonObject_t240 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern "C" void JsonObject_set_Item_m1183 (JsonObject_t240 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" void JsonObject_Add_m1184 (JsonObject_t240 * __this, KeyValuePair_2_t347  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::Clear()
extern "C" void JsonObject_Clear_m1185 (JsonObject_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" bool JsonObject_Contains_m1186 (JsonObject_t240 * __this, KeyValuePair_2_t347  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern "C" void JsonObject_CopyTo_m1187 (JsonObject_t240 * __this, KeyValuePair_2U5BU5D_t346* ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJson.JsonObject::get_Count()
extern "C" int32_t JsonObject_get_Count_m1188 (JsonObject_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern "C" bool JsonObject_get_IsReadOnly_m1189 (JsonObject_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" bool JsonObject_Remove_m1190 (JsonObject_t240 * __this, KeyValuePair_2_t347  ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern "C" Object_t* JsonObject_GetEnumerator_m1191 (JsonObject_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJson.JsonObject::ToString()
extern "C" String_t* JsonObject_ToString_m1192 (JsonObject_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
