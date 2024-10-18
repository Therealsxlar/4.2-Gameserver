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

// 0x68 (0x100 - 0x98)
// BlueprintGeneratedClass ActivateAbilityByTag.ActivateAbilityByTag_C
class UActivateAbilityByTag_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(Transient, DuplicateTransient)
	struct FGameplayTagContainer                 TC_AbilityToActivate;                              // 0xA0(0x20)(Edit, BlueprintVisible)
	bool                                         RequireCanHitTargetWithAbility;                    // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PawnTargetsOnly;                                   // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 ProhibitedTargetTags;                              // 0xC8(0x20)(Edit, BlueprintVisible)
	class AFortAIController*                     OwnerAIController;                                 // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           OwnerPawn;                                         // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OwnerGoalActor;                                    // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActivateAbilityByTag_C");
		return Clss;
	}

	void ReceiveActivation(class AActor* OwnerActor);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ExecuteUbergraph_ActivateAbilityByTag(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_Event_OwnerActor2, class AActor* K2Node_Event_OwnerActor1, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetGoalActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanActivateAbilityWithMatchingTag_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_HasActiveAbilityWithAnyMatchingTag_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_TryActivateAbilitiesByTag_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool Temp_bool_Variable, bool CallFunc_CanHitTargetWithAbility_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
