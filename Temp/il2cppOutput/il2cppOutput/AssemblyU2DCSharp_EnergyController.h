#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// Controller
struct Controller_t9;
// UnityEngine.Texture2D
struct Texture2D_t11;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// EnergyController
struct  EnergyController_t12  : public MonoBehaviour_t3
{
	// UnityEngine.GameObject EnergyController::player
	GameObject_t1 * ___player_2;
	// Controller EnergyController::controller
	Controller_t9 * ___controller_3;
	// System.Single EnergyController::energyValue
	float ___energyValue_4;
	// UnityEngine.Texture2D EnergyController::energyBarFull
	Texture2D_t11 * ___energyBarFull_5;
	// UnityEngine.Texture2D EnergyController::energyBarEmpty
	Texture2D_t11 * ___energyBarEmpty_6;
	// System.Single EnergyController::offsetX
	float ___offsetX_7;
	// System.Single EnergyController::offsetY
	float ___offsetY_8;
	// UnityEngine.Vector2 EnergyController::pos
	Vector2_t13  ___pos_9;
	// UnityEngine.Vector2 EnergyController::size
	Vector2_t13  ___size_10;
};
