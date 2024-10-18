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

// 0x20 (0x20 - 0x0)
// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.InvalidHandle_93D7E1854196ECDA2F2306926AC3D608
struct UGA_DanceGrenade_Stun_C_InvalidHandle_93D7E1854196ECDA2F2306926AC3D608_Params
{
public:
	struct FGameplayEffectRemovalInfo            GameplayEffectRemovalInfo;                         // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.OnRemoved_93D7E1854196ECDA2F2306926AC3D608
struct UGA_DanceGrenade_Stun_C_OnRemoved_93D7E1854196ECDA2F2306926AC3D608_Params
{
public:
	struct FGameplayEffectRemovalInfo            GameplayEffectRemovalInfo;                         // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.K2_ActivateAbility
struct UGA_DanceGrenade_Stun_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.K2_OnEndAbility
struct UGA_DanceGrenade_Stun_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x190 (0x190 - 0x0)
// Function GA_DanceGrenade_Stun.GA_DanceGrenade_Stun_C.ExecuteUbergraph_GA_DanceGrenade_Stun
struct UGA_DanceGrenade_Stun_C_ExecuteUbergraph_GA_DanceGrenade_Stun_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectRemovalInfo            K2Node_CustomEvent_GameplayEffectRemovalInfo;      // 0x8(0x20)(ConstParm)
	struct FGameplayEffectRemovalInfo            Temp_struct_Variable;                              // 0x28(0x20)()
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x48(0x40)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FC3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0xA0(0x8)(NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue; // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0xB8(0x20)()
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0xD8(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xF0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FC6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue1;                // 0x108(0x40)(ContainsInstancedReference)
	float                                        CallFunc_PlayAnimMontage_ReturnValue;              // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn1;            // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectRemovalInfo            K2Node_CustomEvent_GameplayEffectRemovalInfo1;     // 0x160(0x20)(ConstParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x180(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
