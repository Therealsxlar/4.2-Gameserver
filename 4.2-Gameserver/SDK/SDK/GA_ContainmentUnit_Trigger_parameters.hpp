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
// Function GA_ContainmentUnit_Trigger.GA_ContainmentUnit_Trigger_C.K2_ActivateAbilityFromEvent
struct UGA_ContainmentUnit_Trigger_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x170 (0x170 - 0x0)
// Function GA_ContainmentUnit_Trigger.GA_ContainmentUnit_Trigger_C.ExecuteUbergraph_GA_ContainmentUnit_Trigger
struct UGA_ContainmentUnit_Trigger_C_ExecuteUbergraph_GA_ContainmentUnit_Trigger_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E39[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetCurrentSourceObject_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_DynamicCast_AsActor;                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x20(0xA8)(ConstParm)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0xC8(0xA8)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
