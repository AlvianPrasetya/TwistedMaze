#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioSource
struct AudioSource_t17;

// System.Void UnityEngine.AudioSource::Play(System.UInt64)
extern "C" void AudioSource_Play_m919 (AudioSource_t17 * __this, uint64_t ___delay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C" void AudioSource_Play_m145 (AudioSource_t17 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" bool AudioSource_get_isPlaying_m144 (AudioSource_t17 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
