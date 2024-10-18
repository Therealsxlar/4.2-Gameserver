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

// 0x42 (0xA14 - 0x9D2)
// BlueprintGeneratedClass GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C
class UGA_Constructor_FeelTheBase_DeathListener_C : public UGAT_GenericTriggeredAbility_C
{
public:
	uint8                                        Pad_40E7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D8(0x8)(Transient, DuplicateTransient)
	class UClass*                                StackCount;                                        // 0x9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 OverflowTag;                                       // 0x9E8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Stack1;                                            // 0xA08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Stack2;                                            // 0xA0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Stack3;                                            // 0xA10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Constructor_FeelTheBase_DeathListener_C");
		return Clss;
	}

	void ActivateBaseStacks(int32 StackCount, class AB_Constructor_BASE_C* BaseReference, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue2);
	void Exceute_GC(class AB_Constructor_BASE_C* BaseReference, bool* Overflow, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector_NetQuantize10& K2Node_MakeStruct_Vector_NetQuantize10, const struct FGameplayCueParameters& K2Node_MakeStruct_GameplayCueParameters);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener(int32 EntryPoint, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AB_Constructor_BASE_C* K2Node_DynamicCast_AsB_Constructor_BASE, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Exceute_GC_Overflow, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, int32 CallFunc_GetGameplayEffectCount_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
