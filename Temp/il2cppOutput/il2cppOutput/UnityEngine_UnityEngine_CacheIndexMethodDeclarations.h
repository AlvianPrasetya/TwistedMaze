#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t154;
struct CacheIndex_t154_marshaled;

void CacheIndex_t154_marshal(const CacheIndex_t154& unmarshaled, CacheIndex_t154_marshaled& marshaled);
void CacheIndex_t154_marshal_back(const CacheIndex_t154_marshaled& marshaled, CacheIndex_t154& unmarshaled);
void CacheIndex_t154_marshal_cleanup(CacheIndex_t154_marshaled& marshaled);
