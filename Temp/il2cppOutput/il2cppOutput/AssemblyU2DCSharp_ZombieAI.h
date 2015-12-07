#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// ZombieAI
struct  ZombieAI_t22  : public MonoBehaviour_t3
{
	// System.Single ZombieAI::moveSpeed
	float ___moveSpeed_2;
	// System.Boolean ZombieAI::isPlayerDetected
	bool ___isPlayerDetected_3;
	// System.Int32 ZombieAI::direction
	int32_t ___direction_4;
	// System.Int32 ZombieAI::moveCounter
	int32_t ___moveCounter_5;
	// UnityEngine.Vector2 ZombieAI::targetPosition
	Vector2_t13  ___targetPosition_6;
	// System.Single ZombieAI::detectionRadius
	float ___detectionRadius_7;
	// System.Boolean ZombieAI::isMoveAllowed
	bool ___isMoveAllowed_8;
	// UnityEngine.GameObject ZombieAI::parentSpawner
	GameObject_t1 * ___parentSpawner_9;
};
