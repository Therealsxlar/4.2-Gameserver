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

// 0x1CB (0x1CB - 0x0)
// Function GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.GetEventData
struct UGA_Ranged_GenericDamage_C_GetEventData_Params
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    GameplayEventData;                                 // 0x8(0xA8)(Parm, OutParm)
	struct FGameplayTagContainer                 GT_TargetTags;                                     // 0xB0(0x20)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 GT_InstigatorTags;                                 // 0xD0(0x20)(Edit, BlueprintVisible)
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerState*                      K2Node_DynamicCast_AsFort_Player_State;            // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_483E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       CallFunc_GetCurrentPawn_ReturnValue;               // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_483F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortWeapon*                           CallFunc_GetCurrentSourceWeapon_ReturnValue;       // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x120(0xA8)()
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x1C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.K2_CommitExecute
struct UGA_Ranged_GenericDamage_C_K2_CommitExecute_Params
{
public:
	struct FGameplayEventData                    CallFunc_GetEventData_GameplayEventData;           // 0x0(0xA8)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
