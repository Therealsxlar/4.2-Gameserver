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
// Function GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C.OnCancelled_74AB7DD04E752966F0F2FB849BD5B81D
struct UGAB_SmasherTurnTransition_C_OnCancelled_74AB7DD04E752966F0F2FB849BD5B81D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C.OnInterrupted_74AB7DD04E752966F0F2FB849BD5B81D
struct UGAB_SmasherTurnTransition_C_OnInterrupted_74AB7DD04E752966F0F2FB849BD5B81D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C.OnBlendOut_74AB7DD04E752966F0F2FB849BD5B81D
struct UGAB_SmasherTurnTransition_C_OnBlendOut_74AB7DD04E752966F0F2FB849BD5B81D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C.OnCompleted_74AB7DD04E752966F0F2FB849BD5B81D
struct UGAB_SmasherTurnTransition_C_OnCompleted_74AB7DD04E752966F0F2FB849BD5B81D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C.K2_ActivateAbility
struct UGAB_SmasherTurnTransition_C_K2_ActivateAbility_Params
{
public:
};

// 0xA1 (0xA1 - 0x0)
// Function GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C.ExecuteUbergraph_GAB_SmasherTurnTransition
struct UGAB_SmasherTurnTransition_C_ExecuteUbergraph_GAB_SmasherTurnTransition_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3790[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0x40(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3791[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_MontageSectionName; // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_TurnYawRotationRate; // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3792[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*           K2Node_DynamicCast_AsCharacter_Movement_Component; // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3793[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue1;           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASmasherPawn_C*                        K2Node_DynamicCast_AsSmasher_Pawn;                 // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
