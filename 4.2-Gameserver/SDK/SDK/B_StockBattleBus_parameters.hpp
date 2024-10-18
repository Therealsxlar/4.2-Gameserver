#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function B_StockBattleBus.B_StockBattleBus_C.UserConstructionScript
struct AB_StockBattleBus_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_StockBattleBus.B_StockBattleBus_C.Bus Music Fader__FinishedFunc
struct AB_StockBattleBus_C_Bus_Music_Fader__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_StockBattleBus.B_StockBattleBus_C.Bus Music Fader__UpdateFunc
struct AB_StockBattleBus_C_Bus_Music_Fader__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_StockBattleBus.B_StockBattleBus_C.ReceiveBeginPlay
struct AB_StockBattleBus_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_StockBattleBus.B_StockBattleBus_C.Start Audio
struct AB_StockBattleBus_C_Start_Audio_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_StockBattleBus.B_StockBattleBus_C.GrabAudioReferences
struct AB_StockBattleBus_C_GrabAudioReferences_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function B_StockBattleBus.B_StockBattleBus_C.ExecuteUbergraph_B_StockBattleBus
struct AB_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AAE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue1;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetFlightLoopingSound_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetFlightLoopingMusic_ReturnValue;        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
