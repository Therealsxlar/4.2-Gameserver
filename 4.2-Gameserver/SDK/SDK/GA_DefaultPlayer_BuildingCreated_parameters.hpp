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

// 0xA8 (0xA8 - 0x0)
// Function GA_DefaultPlayer_BuildingCreated.GA_DefaultPlayer_BuildingCreated_C.K2_ActivateAbilityFromEvent
struct UGA_DefaultPlayer_BuildingCreated_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xE0 (0xE0 - 0x0)
// Function GA_DefaultPlayer_BuildingCreated.GA_DefaultPlayer_BuildingCreated_C.ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated
struct UGA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xA8)(ConstParm)
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0xB0(0x20)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0xD0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
