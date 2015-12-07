#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
#include "stringLiterals.h"

extern TypeInfo U3CModuleU3E_t0_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
extern TypeInfo BatteryController_t2_il2cpp_TypeInfo;
// BatteryController
#include "AssemblyU2DCSharp_BatteryController.h"
extern TypeInfo BatterySpawner_t5_il2cpp_TypeInfo;
// BatterySpawner
#include "AssemblyU2DCSharp_BatterySpawner.h"
extern TypeInfo BeginController_t6_il2cpp_TypeInfo;
// BeginController
#include "AssemblyU2DCSharp_BeginController.h"
extern TypeInfo CameraFollower_t8_il2cpp_TypeInfo;
// CameraFollower
#include "AssemblyU2DCSharp_CameraFollower.h"
extern TypeInfo Controller_t9_il2cpp_TypeInfo;
// Controller
#include "AssemblyU2DCSharp_Controller.h"
extern TypeInfo EndController_t10_il2cpp_TypeInfo;
// EndController
#include "AssemblyU2DCSharp_EndController.h"
extern TypeInfo EnergyController_t12_il2cpp_TypeInfo;
// EnergyController
#include "AssemblyU2DCSharp_EnergyController.h"
extern TypeInfo FogController_t14_il2cpp_TypeInfo;
// FogController
#include "AssemblyU2DCSharp_FogController.h"
extern TypeInfo HSController_t15_il2cpp_TypeInfo;
// HSController
#include "AssemblyU2DCSharp_HSController.h"
extern TypeInfo MazeRotator_t18_il2cpp_TypeInfo;
// MazeRotator
#include "AssemblyU2DCSharp_MazeRotator.h"
extern TypeInfo PauseController_t19_il2cpp_TypeInfo;
// PauseController
#include "AssemblyU2DCSharp_PauseController.h"
extern TypeInfo TimerController_t20_il2cpp_TypeInfo;
// TimerController
#include "AssemblyU2DCSharp_TimerController.h"
extern TypeInfo TouchController_t21_il2cpp_TypeInfo;
// TouchController
#include "AssemblyU2DCSharp_TouchController.h"
extern TypeInfo ZombieAI_t22_il2cpp_TypeInfo;
// ZombieAI
#include "AssemblyU2DCSharp_ZombieAI.h"
extern TypeInfo ZombieSpawner_t23_il2cpp_TypeInfo;
// ZombieSpawner
#include "AssemblyU2DCSharp_ZombieSpawner.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_AssemblyU2DCSharp_Assembly_Types[17] = 
{
	&U3CModuleU3E_t0_il2cpp_TypeInfo,
	&BatteryController_t2_il2cpp_TypeInfo,
	&BatterySpawner_t5_il2cpp_TypeInfo,
	&BeginController_t6_il2cpp_TypeInfo,
	&CameraFollower_t8_il2cpp_TypeInfo,
	&Controller_t9_il2cpp_TypeInfo,
	&EndController_t10_il2cpp_TypeInfo,
	&EnergyController_t12_il2cpp_TypeInfo,
	&FogController_t14_il2cpp_TypeInfo,
	&HSController_t15_il2cpp_TypeInfo,
	&MazeRotator_t18_il2cpp_TypeInfo,
	&PauseController_t19_il2cpp_TypeInfo,
	&TimerController_t20_il2cpp_TypeInfo,
	&TouchController_t21_il2cpp_TypeInfo,
	&ZombieAI_t22_il2cpp_TypeInfo,
	&ZombieSpawner_t23_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
Il2CppAssembly g_AssemblyU2DCSharp_Assembly = 
{
	{ "Assembly-CSharp", NULL, NULL, NULL, { 0 }, 32772, 0, 0, 0, 0, 0, 0 },
	&g_AssemblyU2DCSharp_dll_Image,
	1,
};
extern const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_Assembly_AttributeGenerators[2];
static const char* s_StringTable[68] = 
{
	"MAX_ENERGY",
	"MIN_ENERGY",
	"energyLabel",
	"energyCarried",
	"energyDecayRate",
	"parentSpawner",
	"numBatteries",
	"battery",
	"batteries",
	"minSpawnRadius",
	"maxSpawnRadius",
	"numBatteriesToRenew",
	"mapRadius",
	"started",
	"character",
	"moveSpeed",
	"isMoveAllowed",
	"energy",
	"ended",
	"minute",
	"second",
	"milliSecond",
	"player",
	"controller",
	"energyValue",
	"energyBarFull",
	"energyBarEmpty",
	"offsetX",
	"offsetY",
	"pos",
	"size",
	"maxScale",
	"minScale",
	"isViewing",
	"DEFAULT_COUNTER",
	"DEFAULT_ROTATE_COUNTER",
	"BLINK_RESET_COUNTER",
	"UNBLINK_RESET_COUNTER",
	"isRotate",
	"isDisplayWarning",
	"isBlinking",
	"blinkCounter",
	"counter",
	"rotateCounter",
	"innerRadius",
	"outerRadius",
	"rotateDirection",
	"zombieSpawner",
	"batterySpawner",
	"warningClip",
	"warningTexture",
	"audio",
	"paused",
	"currentTime",
	"currentMinute",
	"currentSecond",
	"currentMillisecond",
	"inputX",
	"inputY",
	"isPlayerDetected",
	"direction",
	"moveCounter",
	"targetPosition",
	"detectionRadius",
	"numZombies",
	"zombie",
	"zombies",
	"numZombiesToRenew",
};
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
static const Il2CppFieldDefinition s_FieldTable[82] = 
{
	{ 0, 32, 0, 0 } ,
	{ 1, 32, 0, 0 } ,
	{ 2, 33, offsetof(BatteryController_t2, ___energyLabel_4), 0 } ,
	{ 3, 34, offsetof(BatteryController_t2, ___energyCarried_5), 0 } ,
	{ 4, 34, offsetof(BatteryController_t2, ___energyDecayRate_6), 0 } ,
	{ 5, 33, offsetof(BatteryController_t2, ___parentSpawner_7), 0 } ,
	{ 6, 37, offsetof(BatterySpawner_t5, ___numBatteries_2), 0 } ,
	{ 7, 33, offsetof(BatterySpawner_t5, ___battery_3), 0 } ,
	{ 8, 38, offsetof(BatterySpawner_t5, ___batteries_4), 0 } ,
	{ 9, 34, offsetof(BatterySpawner_t5, ___minSpawnRadius_5), 0 } ,
	{ 10, 34, offsetof(BatterySpawner_t5, ___maxSpawnRadius_6), 0 } ,
	{ 11, 37, offsetof(BatterySpawner_t5, ___numBatteriesToRenew_7), 0 } ,
	{ 12, 34, offsetof(BatterySpawner_t5, ___mapRadius_8), 0 } ,
	{ 13, 40, offsetof(BeginController_t6, ___started_2), 0 } ,
	{ 14, 43, offsetof(CameraFollower_t8, ___character_2), 0 } ,
	{ 0, 32, 0, 0 } ,
	{ 15, 34, offsetof(Controller_t9, ___moveSpeed_3), 0 } ,
	{ 16, 40, offsetof(Controller_t9, ___isMoveAllowed_4), 0 } ,
	{ 17, 34, offsetof(Controller_t9, ___energy_5), 0 } ,
	{ 4, 34, offsetof(Controller_t9, ___energyDecayRate_6), 0 } ,
	{ 18, 40, offsetof(EndController_t10, ___ended_2), 0 } ,
	{ 19, 37, offsetof(EndController_t10, ___minute_3), 0 } ,
	{ 20, 37, offsetof(EndController_t10, ___second_4), 0 } ,
	{ 21, 37, offsetof(EndController_t10, ___milliSecond_5), 0 } ,
	{ 22, 33, offsetof(EnergyController_t12, ___player_2), 0 } ,
	{ 23, 48, offsetof(EnergyController_t12, ___controller_3), 0 } ,
	{ 24, 34, offsetof(EnergyController_t12, ___energyValue_4), 0 } ,
	{ 25, 49, offsetof(EnergyController_t12, ___energyBarFull_5), 0 } ,
	{ 26, 49, offsetof(EnergyController_t12, ___energyBarEmpty_6), 0 } ,
	{ 27, 34, offsetof(EnergyController_t12, ___offsetX_7), 0 } ,
	{ 28, 34, offsetof(EnergyController_t12, ___offsetY_8), 0 } ,
	{ 29, 50, offsetof(EnergyController_t12, ___pos_9), 0 } ,
	{ 30, 50, offsetof(EnergyController_t12, ___size_10), 0 } ,
	{ 31, 34, offsetof(FogController_t14, ___maxScale_2), 0 } ,
	{ 32, 34, offsetof(FogController_t14, ___minScale_3), 0 } ,
	{ 22, 33, offsetof(FogController_t14, ___player_4), 0 } ,
	{ 23, 48, offsetof(FogController_t14, ___controller_5), 0 } ,
	{ 33, 40, offsetof(HSController_t15, ___isViewing_2), 0 } ,
	{ 19, 37, offsetof(HSController_t15, ___minute_3), 0 } ,
	{ 20, 37, offsetof(HSController_t15, ___second_4), 0 } ,
	{ 21, 37, offsetof(HSController_t15, ___milliSecond_5), 0 } ,
	{ 34, 37, offsetof(MazeRotator_t18, ___DEFAULT_COUNTER_2), 0 } ,
	{ 35, 37, offsetof(MazeRotator_t18, ___DEFAULT_ROTATE_COUNTER_3), 0 } ,
	{ 36, 37, offsetof(MazeRotator_t18, ___BLINK_RESET_COUNTER_4), 0 } ,
	{ 37, 37, offsetof(MazeRotator_t18, ___UNBLINK_RESET_COUNTER_5), 0 } ,
	{ 38, 40, offsetof(MazeRotator_t18, ___isRotate_6), 0 } ,
	{ 39, 40, offsetof(MazeRotator_t18, ___isDisplayWarning_7), 0 } ,
	{ 40, 40, offsetof(MazeRotator_t18, ___isBlinking_8), 0 } ,
	{ 41, 37, offsetof(MazeRotator_t18, ___blinkCounter_9), 0 } ,
	{ 42, 37, offsetof(MazeRotator_t18, ___counter_10), 0 } ,
	{ 43, 37, offsetof(MazeRotator_t18, ___rotateCounter_11), 0 } ,
	{ 44, 34, offsetof(MazeRotator_t18, ___innerRadius_12), 0 } ,
	{ 45, 34, offsetof(MazeRotator_t18, ___outerRadius_13), 0 } ,
	{ 46, 37, offsetof(MazeRotator_t18, ___rotateDirection_14), 0 } ,
	{ 14, 33, offsetof(MazeRotator_t18, ___character_15), 0 } ,
	{ 47, 33, offsetof(MazeRotator_t18, ___zombieSpawner_16), 0 } ,
	{ 48, 33, offsetof(MazeRotator_t18, ___batterySpawner_17), 0 } ,
	{ 49, 56, offsetof(MazeRotator_t18, ___warningClip_18), 0 } ,
	{ 50, 49, offsetof(MazeRotator_t18, ___warningTexture_19), 0 } ,
	{ 51, 57, offsetof(MazeRotator_t18, ___audio_20), 0 } ,
	{ 52, 40, offsetof(PauseController_t19, ___paused_2), 0 } ,
	{ 53, 34, offsetof(TimerController_t20, ___currentTime_2), 0 } ,
	{ 54, 37, offsetof(TimerController_t20, ___currentMinute_3), 0 } ,
	{ 55, 37, offsetof(TimerController_t20, ___currentSecond_4), 0 } ,
	{ 56, 37, offsetof(TimerController_t20, ___currentMillisecond_5), 0 } ,
	{ 57, 64, offsetof(TouchController_t21_StaticFields, ___inputX_2), 0 } ,
	{ 58, 64, offsetof(TouchController_t21_StaticFields, ___inputY_3), 0 } ,
	{ 15, 34, offsetof(ZombieAI_t22, ___moveSpeed_2), 0 } ,
	{ 59, 40, offsetof(ZombieAI_t22, ___isPlayerDetected_3), 0 } ,
	{ 60, 37, offsetof(ZombieAI_t22, ___direction_4), 0 } ,
	{ 61, 37, offsetof(ZombieAI_t22, ___moveCounter_5), 0 } ,
	{ 62, 50, offsetof(ZombieAI_t22, ___targetPosition_6), 0 } ,
	{ 63, 34, offsetof(ZombieAI_t22, ___detectionRadius_7), 0 } ,
	{ 16, 40, offsetof(ZombieAI_t22, ___isMoveAllowed_8), 0 } ,
	{ 5, 33, offsetof(ZombieAI_t22, ___parentSpawner_9), 0 } ,
	{ 64, 37, offsetof(ZombieSpawner_t23, ___numZombies_2), 0 } ,
	{ 65, 33, offsetof(ZombieSpawner_t23, ___zombie_3), 0 } ,
	{ 66, 38, offsetof(ZombieSpawner_t23, ___zombies_4), 0 } ,
	{ 9, 34, offsetof(ZombieSpawner_t23, ___minSpawnRadius_5), 0 } ,
	{ 10, 34, offsetof(ZombieSpawner_t23, ___maxSpawnRadius_6), 0 } ,
	{ 12, 34, offsetof(ZombieSpawner_t23, ___mapRadius_7), 0 } ,
	{ 67, 37, offsetof(ZombieSpawner_t23, ___numZombiesToRenew_8), 0 } ,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
static const Il2CppFieldDefaultValue s_DefaultValues[3] = 
{
	{ 0, 18, 0 },
	{ 1, 18, 4 },
	{ 15, 18, 8 },
};
static const uint8_t s_DefaultValueDataTable[12] = 
{
	0x00,
	0x00,
	0x70,
	0x42,
	0x00,
	0x00,
	0xF0,
	0x41,
	0x00,
	0x00,
	0xC8,
	0x42,
};
Il2CppImage g_AssemblyU2DCSharp_dll_Image = 
{
	 "Assembly-CSharp.dll" ,
	&g_AssemblyU2DCSharp_Assembly,
	g_AssemblyU2DCSharp_Assembly_Types,
	16,
	NULL,
	s_StringTable,
	68,
	s_FieldTable,
	82,
	s_DefaultValues,
	3,
	s_DefaultValueDataTable,
	12,
	2,
	NULL,
	g_AssemblyU2DCSharp_Assembly_AttributeGenerators,
};
