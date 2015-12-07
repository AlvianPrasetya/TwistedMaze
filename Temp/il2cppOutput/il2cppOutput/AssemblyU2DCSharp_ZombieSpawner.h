#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t4;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ZombieSpawner
struct  ZombieSpawner_t23  : public MonoBehaviour_t3
{
	// System.Int32 ZombieSpawner::numZombies
	int32_t ___numZombies_2;
	// UnityEngine.GameObject ZombieSpawner::zombie
	GameObject_t1 * ___zombie_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ZombieSpawner::zombies
	List_1_t4 * ___zombies_4;
	// System.Single ZombieSpawner::minSpawnRadius
	float ___minSpawnRadius_5;
	// System.Single ZombieSpawner::maxSpawnRadius
	float ___maxSpawnRadius_6;
	// System.Single ZombieSpawner::mapRadius
	float ___mapRadius_7;
	// System.Int32 ZombieSpawner::numZombiesToRenew
	int32_t ___numZombiesToRenew_8;
};
