#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// UnityEngine.AudioClip
struct AudioClip_t16;
// UnityEngine.Texture2D
struct Texture2D_t11;
// UnityEngine.AudioSource
struct AudioSource_t17;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MazeRotator
struct  MazeRotator_t18  : public MonoBehaviour_t3
{
	// System.Int32 MazeRotator::DEFAULT_COUNTER
	int32_t ___DEFAULT_COUNTER_2;
	// System.Int32 MazeRotator::DEFAULT_ROTATE_COUNTER
	int32_t ___DEFAULT_ROTATE_COUNTER_3;
	// System.Int32 MazeRotator::BLINK_RESET_COUNTER
	int32_t ___BLINK_RESET_COUNTER_4;
	// System.Int32 MazeRotator::UNBLINK_RESET_COUNTER
	int32_t ___UNBLINK_RESET_COUNTER_5;
	// System.Boolean MazeRotator::isRotate
	bool ___isRotate_6;
	// System.Boolean MazeRotator::isDisplayWarning
	bool ___isDisplayWarning_7;
	// System.Boolean MazeRotator::isBlinking
	bool ___isBlinking_8;
	// System.Int32 MazeRotator::blinkCounter
	int32_t ___blinkCounter_9;
	// System.Int32 MazeRotator::counter
	int32_t ___counter_10;
	// System.Int32 MazeRotator::rotateCounter
	int32_t ___rotateCounter_11;
	// System.Single MazeRotator::innerRadius
	float ___innerRadius_12;
	// System.Single MazeRotator::outerRadius
	float ___outerRadius_13;
	// System.Int32 MazeRotator::rotateDirection
	int32_t ___rotateDirection_14;
	// UnityEngine.GameObject MazeRotator::character
	GameObject_t1 * ___character_15;
	// UnityEngine.GameObject MazeRotator::zombieSpawner
	GameObject_t1 * ___zombieSpawner_16;
	// UnityEngine.GameObject MazeRotator::batterySpawner
	GameObject_t1 * ___batterySpawner_17;
	// UnityEngine.AudioClip MazeRotator::warningClip
	AudioClip_t16 * ___warningClip_18;
	// UnityEngine.Texture2D MazeRotator::warningTexture
	Texture2D_t11 * ___warningTexture_19;
	// UnityEngine.AudioSource MazeRotator::audio
	AudioSource_t17 * ___audio_20;
};
