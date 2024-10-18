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

// 0x1 (0x1 - 0x0)
// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.PreConstruct
struct UBP_BattlePassUnlockAnim_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.AnimComplete
struct UBP_BattlePassUnlockAnim_C_AnimComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.CustomEvent_0
struct UBP_BattlePassUnlockAnim_C_CustomEvent_0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.OnActivated
struct UBP_BattlePassUnlockAnim_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.PlayIntro
struct UBP_BattlePassUnlockAnim_C_PlayIntro_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.ExecuteUbergraph_BP_BattlePassUnlockAnim
struct UBP_BattlePassUnlockAnim_C_ExecuteUbergraph_BP_BattlePassUnlockAnim_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_439E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemReceived_Base_C*                  CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue1;          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
