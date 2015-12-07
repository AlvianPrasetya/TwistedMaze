#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// Controller
struct Controller_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FogController
struct  FogController_t14  : public MonoBehaviour_t3
{
	// System.Single FogController::maxScale
	float ___maxScale_2;
	// System.Single FogController::minScale
	float ___minScale_3;
	// UnityEngine.GameObject FogController::player
	GameObject_t1 * ___player_4;
	// Controller FogController::controller
	Controller_t9 * ___controller_5;
};
