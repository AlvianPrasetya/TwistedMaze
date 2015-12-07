#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t4;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BatterySpawner
struct  BatterySpawner_t5  : public MonoBehaviour_t3
{
	// System.Int32 BatterySpawner::numBatteries
	int32_t ___numBatteries_2;
	// UnityEngine.GameObject BatterySpawner::battery
	GameObject_t1 * ___battery_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> BatterySpawner::batteries
	List_1_t4 * ___batteries_4;
	// System.Single BatterySpawner::minSpawnRadius
	float ___minSpawnRadius_5;
	// System.Single BatterySpawner::maxSpawnRadius
	float ___maxSpawnRadius_6;
	// System.Int32 BatterySpawner::numBatteriesToRenew
	int32_t ___numBatteriesToRenew_7;
	// System.Single BatterySpawner::mapRadius
	float ___mapRadius_8;
};
