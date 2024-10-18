#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x165 (0xA8D - 0x928)
// BlueprintGeneratedClass GA_BoostJumpPack.GA_BoostJumpPack_C
class UGA_BoostJumpPack_C : public UFortGameplayAbility_JumpBoostPack
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x928(0x8)(Transient, DuplicateTransient)
	float                                        Jump_Multiple;                                     // 0x930(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Basic_Jump_Z_Adjust;                               // 0x934(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FinalJumpHeight;                                   // 0x940(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    EventTriggerData;                                  // 0x950(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bJumpButtonHeld;                                   // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bAtApex;                                           // 0x9F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F17[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           JetpackEffectHandle;                               // 0x9FC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       FortPlayerPawn;                                    // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBoundToPawnLanded;                                // 0xA10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F19[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveGameplayEffectHandle           HoveringEffectHandle;                              // 0xA14(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        FuelFudge;                                         // 0xA1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           RegenEffectHandle;                                 // 0xA20(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bRegenEffectActive;                                // 0xA28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 ExecuteTags;                                       // 0xA30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        JumpButtonHeldCount;                               // 0xA50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F1B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 ReleaseTags;                                       // 0xA58(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bInputPushed;                                      // 0xA78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F1C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeStartedHovering;                               // 0xA7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeStartedFalling;                                // 0xA80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EndHoverDelay;                                     // 0xA84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EndFallingDelay;                                   // 0xA88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasDied;                                          // 0xA8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_BoostJumpPack_C");
		return Clss;
	}

	class AFortPlayerPawn* Get_Player_Pawn(class UObject* Object, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue);
	bool IsCurrentlyDead(const struct FGameplayTag& TagOne, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1);
	void Reengage_Falling_Movement(bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Reengage_Hovering_Movement(bool CallFunc_IsFalling_ReturnValue);
	void SavePlayerPawn(const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void OnAbilityCanceled();
	void Cheat_DBNO_When_Player_Hits_Exectute_on_Controller(bool CallFunc_HasAuthority_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MatchesTag_ReturnValue);
	void OnFuelIsEmpty();
	void OnFuelIsFull();
	void Reset_Toggle_Input_State(class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void ProcessTriggerData(const struct FGameplayTag& TagOne, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
	void Push_Jetpack_Input_Component(bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void Pop_Jetpack_Input_Component(class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void Stop_Regen_Effect(bool CallFunc_HasAuthority_ReturnValue);
	void Start_Regen_Effect(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void Consider_Stopping_Regen_Effect(float CallFunc_GetMaxFuel_MaxFuel, float CallFunc_GetFuel_Fuel, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void Consider_Starting_Regen_Effect(float CallFunc_GetMaxFuel_MaxFuel, float CallFunc_GetFuel_Fuel, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	bool IsBoostAllowed(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue);
	void K2_OnEndAbility(bool bWasCancelled);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, const struct FGameplayTagContainer& InAirExecutionTags, bool CallFunc_Not_PreBool_ReturnValue, class AFortPlayerPawn* CallFunc_Get_Player_Pawn_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_MatchesAnyTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetMaxFuel(float* MaxFuel, bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, float K2Node_Select_Default);
	void GetFuel(float* Fuel, bool Temp_bool_Variable, float Temp_float_Variable, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, float K2Node_Select_Default);
	void Setup_PlayerPawn(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	bool IsUsingJetpackEffectActive(int32 CallFunc_GetActiveGameplayEffectStackCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HandleCurrentBoostStateChanged(enum class EJumpBoostPackState PreviousState, enum class EJumpBoostPackState CurrentState, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsUsingJetpackEffectActive_ReturnValue, bool CallFunc_IsUsingJetpackEffectActive_ReturnValue1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void SetCurrentBoostState(enum class EJumpBoostPackState NewState, enum class EJumpBoostPackState PreviousState, enum class Enum_BoostJumpStates PreviewBoostState);
	void PotentiallyEndHovering(bool bForceEndHovering, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Setup_Notify_at_Apex(bool bNotifyApex, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UFortMovementComp_CharacterAthena* K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena, bool K2Node_DynamicCast_bSuccess);
	void HandleIdle();
	void HandleFalling(float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_FMax_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void HandleHovering(float CallFunc_GetTimeSeconds_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_FMax_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void ResetTransitionVariables(const struct FGameplayTag& TargetTag);
	void TransitionFromFalling(enum class Enum_BoostJumpStates* TargetBoostState, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetFuel_Fuel, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void TransitionFromHovering(enum class Enum_BoostJumpStates* TargetBoostState, float CallFunc_GetFuel_Fuel, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1);
	void TransitionFromBoost(enum class Enum_BoostJumpStates* TargetBoostState, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetFuel_Fuel, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void TransitionFromIdle(enum class Enum_BoostJumpStates* TargetBoostState, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsBoostAllowed_ReturnValue, float CallFunc_GetFuel_Fuel, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetFuel_Fuel1, float CallFunc_GetMaxFuel_MaxFuel, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1);
	void ProcessAbilityStateMachine(bool K2Node_SwitchEnum_CmpSuccess, enum class Enum_BoostJumpStates CallFunc_DetermineStateToTransitionTo_BoostState, bool K2Node_SwitchEnum1_CmpSuccess);
	void DetermineStateToTransitionTo(enum class Enum_BoostJumpStates* BoostState, bool K2Node_SwitchEnum_CmpSuccess, enum class Enum_BoostJumpStates CallFunc_TransitionFromFalling_TargetBoostState, enum class Enum_BoostJumpStates CallFunc_TransitionFromHovering_TargetBoostState, enum class Enum_BoostJumpStates CallFunc_TransitionFromBoost_TargetBoostState, enum class Enum_BoostJumpStates CallFunc_TransitionFromIdle_TargetBoostState);
	void SetupTransitionVariables(const struct FGameplayTag& Tag, const struct FGameplayTag& TargetTag, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_GetPendingSkydiveLaunch_ReturnValue, bool CallFunc_IsParachuteOpen_ReturnValue, bool CallFunc_IsCurrentlyDead_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3);
	void HandleBoostJump(const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerPawn* CallFunc_SetJumpHeight_Pawn_Out, const struct FVector& CallFunc_SetJumpHeight_Jump_Height);
	void SetJumpHeight(class AFortPlayerPawn* Pawn, class AFortPlayerPawn** Pawn_Out, struct FVector* Jump_Height, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void On_Reached_Jump_Apex();
	void OnPawnLanded(struct FHitResult& Hit);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void OnCurrentStateChanged(enum class EJumpBoostPackState InPreviousState, enum class EJumpBoostPackState InCurrentState);
	void Delay_ProcessAbilityStateMachine();
	void ExecuteUbergraph_GA_BoostJumpPack(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FHitResult& K2Node_CustomEvent_Hit, const struct FGameplayEventData& K2Node_Event_EventData, enum class EJumpBoostPackState K2Node_Event_InPreviousState, enum class EJumpBoostPackState K2Node_Event_InCurrentState, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
