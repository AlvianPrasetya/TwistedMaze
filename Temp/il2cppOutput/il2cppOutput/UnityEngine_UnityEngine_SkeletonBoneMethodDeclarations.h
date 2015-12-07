#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t191;
struct SkeletonBone_t191_marshaled;

void SkeletonBone_t191_marshal(const SkeletonBone_t191& unmarshaled, SkeletonBone_t191_marshaled& marshaled);
void SkeletonBone_t191_marshal_back(const SkeletonBone_t191_marshaled& marshaled, SkeletonBone_t191& unmarshaled);
void SkeletonBone_t191_marshal_cleanup(SkeletonBone_t191_marshaled& marshaled);
