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
// Function GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.OnCancelled_940C59954AFE32346A40E49BFAFD2A0B
struct UGAB_NPCTurnTransition_C_OnCancelled_940C59954AFE32346A40E49BFAFD2A0B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.OnInterrupted_940C59954AFE32346A40E49BFAFD2A0B
struct UGAB_NPCTurnTransition_C_OnInterrupted_940C59954AFE32346A40E49BFAFD2A0B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.OnBlendOut_940C59954AFE32346A40E49BFAFD2A0B
struct UGAB_NPCTurnTransition_C_OnBlendOut_940C59954AFE32346A40E49BFAFD2A0B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.OnCompleted_940C59954AFE32346A40E49BFAFD2A0B
struct UGAB_NPCTurnTransition_C_OnCompleted_940C59954AFE32346A40E49BFAFD2A0B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.K2_ActivateAbility
struct UGAB_NPCTurnTransition_C_K2_ActivateAbility_Params
{
public:
};

// 0xD1 (0xD1 - 0x0)
// Function GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.ExecuteUbergraph_GAB_NPCTurnTransition
struct UGAB_NPCTurnTransition_C_ExecuteUbergraph_GAB_NPCTurnTransition_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BA4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x20(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x30(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_MontageSectionName; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTurnTransitionMontageSectionNameAndYawRotationRate_TurnYawRotationRate; // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BA6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x60(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BA7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*           K2Node_DynamicCast_AsCharacter_Movement_Component; // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BA8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue1;           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           K2Node_DynamicCast_AsFort_AIPawn;                  // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAIAbilityTarget_ReturnValue;           // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0xC0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
