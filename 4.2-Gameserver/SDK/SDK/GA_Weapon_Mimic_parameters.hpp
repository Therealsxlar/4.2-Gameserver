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

// 0x230 (0x230 - 0x0)
// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.SetupBottleRocket
struct UGA_Weapon_Mimic_C_SetupBottleRocket_Params
{
public:
	struct FVector                               Spawn_Location;                                    // 0x0(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Spawn_Rotation;                                    // 0xC(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FFortGameplayEffectContainerSpec      Holder_Explosion;                                  // 0x18(0x80)(Parm, OutParm)
	struct FFortGameplayEffectContainerSpec      BottleRocket_Explosion;                            // 0x98(0x80)(Parm, OutParm)
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue; // 0x118(0x80)()
	struct FFortGameplayEffectContainerSpec      CallFunc_MakeGameplayEffectContainerSpec_ReturnValue1; // 0x198(0x80)()
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x218(0xC)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetAimLocationNearestPawn_ReturnValue;    // 0x224(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Destroyed_B3D1CBD84767EEBE300B609957138606
struct UGA_Weapon_Mimic_C_Destroyed_B3D1CBD84767EEBE300B609957138606_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Exploded_B3D1CBD84767EEBE300B609957138606
struct UGA_Weapon_Mimic_C_Exploded_B3D1CBD84767EEBE300B609957138606_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Stopped_B3D1CBD84767EEBE300B609957138606
struct UGA_Weapon_Mimic_C_Stopped_B3D1CBD84767EEBE300B609957138606_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Bounced_B3D1CBD84767EEBE300B609957138606
struct UGA_Weapon_Mimic_C_Bounced_B3D1CBD84767EEBE300B609957138606_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Touched_B3D1CBD84767EEBE300B609957138606
struct UGA_Weapon_Mimic_C_Touched_B3D1CBD84767EEBE300B609957138606_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Created_B3D1CBD84767EEBE300B609957138606
struct UGA_Weapon_Mimic_C_Created_B3D1CBD84767EEBE300B609957138606_Params
{
public:
	struct FProjectileEventData                  ProjectileData;                                    // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Completed_43984B0A46B0D598E56025AEA6D640D0
struct UGA_Weapon_Mimic_C_Completed_43984B0A46B0D598E56025AEA6D640D0_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Cancelled_43984B0A46B0D598E56025AEA6D640D0
struct UGA_Weapon_Mimic_C_Cancelled_43984B0A46B0D598E56025AEA6D640D0_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Triggered_43984B0A46B0D598E56025AEA6D640D0
struct UGA_Weapon_Mimic_C_Triggered_43984B0A46B0D598E56025AEA6D640D0_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                          ApplicationTag;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.K2_ActivateAbility
struct UGA_Weapon_Mimic_C_K2_ActivateAbility_Params
{
public:
};

// 0x4BB (0x4BB - 0x0)
// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.ExecuteUbergraph_GA_Weapon_Mimic
struct UGA_Weapon_Mimic_C_ExecuteUbergraph_GA_Weapon_Mimic_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData4;                // 0x8(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData3;                // 0x40(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x68(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData2;                // 0x78(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData1;                // 0xB0(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate3;             // 0xD8(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData;                 // 0xE8(0x28)(ConstParm, ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate4;             // 0x110(0x10)(ZeroConstructor, NoDestructor)
	struct FProjectileEventData                  Temp_struct_Variable;                              // 0x120(0x28)(ContainsInstancedReference)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate5;             // 0x148(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData2;                    // 0x158(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag2;                // 0x178(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData1;                    // 0x180(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag1;                // 0x1A0(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate6;             // 0x1A8(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayAbilityTargetDataHandle      K2Node_CustomEvent_TargetData;                     // 0x1B8(0x20)(ConstParm)
	struct FGameplayTag                          K2Node_CustomEvent_ApplicationTag;                 // 0x1D8(0x8)(NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate7;             // 0x1E0(0x10)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                          Temp_struct_Variable1;                             // 0x1F0(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      Temp_struct_Variable2;                             // 0x1F8(0x20)()
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x218(0x40)(ContainsInstancedReference)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x268(0xA8)()
	struct FGameplayAbilityTargetDataHandle      CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x310(0x20)()
	struct FProjectileEventData                  K2Node_CustomEvent_ProjectileData5;                // 0x330(0x28)(ConstParm, ContainsInstancedReference)
	TArray<struct FActiveGameplayEffectHandle>   CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x358(0x10)(ZeroConstructor, ReferenceParm)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate8;             // 0x368(0x10)(ZeroConstructor, NoDestructor)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue;        // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_SetupBottleRocket_Spawn_Location;         // 0x384(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_SetupBottleRocket_Spawn_Rotation;         // 0x390(0xC)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_47CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortGameplayEffectContainerSpec      CallFunc_SetupBottleRocket_Holder_Explosion;       // 0x3A0(0x80)()
	struct FFortGameplayEffectContainerSpec      CallFunc_SetupBottleRocket_BottleRocket_Explosion; // 0x420(0x80)()
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x4A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue;       // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   CallFunc_BeginSpawningActor_SpawnedActor;          // 0x4B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BeginSpawningActor_ReturnValue;           // 0x4B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x4B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue1;            // 0x4BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
