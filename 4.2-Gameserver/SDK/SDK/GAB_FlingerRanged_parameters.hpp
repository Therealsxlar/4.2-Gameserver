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
// Function GAB_FlingerRanged.GAB_FlingerRanged_C.K2_ActivateAbility
struct UGAB_FlingerRanged_C_K2_ActivateAbility_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_FlingerRanged.GAB_FlingerRanged_C.SpawnFX
struct UGAB_FlingerRanged_C_SpawnFX_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_FlingerRanged.GAB_FlingerRanged_C.StopFX
struct UGAB_FlingerRanged_C_StopFX_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GAB_FlingerRanged.GAB_FlingerRanged_C.K2_OnEndAbility
struct UGAB_FlingerRanged_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function GAB_FlingerRanged.GAB_FlingerRanged_C.ExecuteUbergraph_GAB_FlingerRanged
struct UGAB_FlingerRanged_C_ExecuteUbergraph_GAB_FlingerRanged_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FAD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x8(0x8)(NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue1;                 // 0x10(0x8)(NoDestructor)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
