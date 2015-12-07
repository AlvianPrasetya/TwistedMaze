#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t45;
struct Touch_t45_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" Vector2_t13  Touch_get_position_m160 (Touch_t45 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t45_marshal(const Touch_t45& unmarshaled, Touch_t45_marshaled& marshaled);
void Touch_t45_marshal_back(const Touch_t45_marshaled& marshaled, Touch_t45& unmarshaled);
void Touch_t45_marshal_cleanup(Touch_t45_marshaled& marshaled);
