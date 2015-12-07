#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Event
struct Event_t130;
struct Event_t130_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Event::.ctor()
extern "C" void Event__ctor_m531 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init()
extern "C" void Event_Init_m532 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
extern "C" void Event_Finalize_m533 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m534 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C" int32_t Event_get_rawType_m535 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m536 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t13  Event_get_mousePosition_m537 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m538 (Event_t130 * __this, Vector2_t13 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m539 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m540 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m541 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m542 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C" Event_t130 * Event_get_current_m543 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m544 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
extern "C" void Event_Internal_MakeMasterEventCurrent_m545 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m546 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m547 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C" int32_t Event_GetHashCode_m548 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern "C" bool Event_Equals_m549 (Event_t130 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
extern "C" String_t* Event_ToString_m550 (Event_t130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Event_t130_marshal(const Event_t130& unmarshaled, Event_t130_marshaled& marshaled);
void Event_t130_marshal_back(const Event_t130_marshaled& marshaled, Event_t130& unmarshaled);
void Event_t130_marshal_cleanup(Event_t130_marshaled& marshaled);
