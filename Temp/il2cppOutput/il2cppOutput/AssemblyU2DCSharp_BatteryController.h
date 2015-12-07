#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BatteryController
struct  BatteryController_t2  : public MonoBehaviour_t3
{
	// UnityEngine.GameObject BatteryController::energyLabel
	GameObject_t1 * ___energyLabel_4;
	// System.Single BatteryController::energyCarried
	float ___energyCarried_5;
	// System.Single BatteryController::energyDecayRate
	float ___energyDecayRate_6;
	// UnityEngine.GameObject BatteryController::parentSpawner
	GameObject_t1 * ___parentSpawner_7;
};
