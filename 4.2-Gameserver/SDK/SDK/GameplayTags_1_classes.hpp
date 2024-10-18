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

// 0x30 (0xD0 - 0xA0)
// BlueprintGeneratedClass GameplayTags.GameplayTags_C
class UGameplayTags_C : public UBTDecorator_BlueprintBase
{
public:
	struct FGameplayTagContainer                 TC_BTDecoratorGameplayTags;                        // 0xA0(0x20)(Edit, BlueprintVisible)
	bool                                         Inverse_Condition;                                 // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OwnerActor;                                        // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTags_C");
		return Clss;
	}

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool bReturnVal, bool Temp_bool_Variable, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, UInterfaceProperty_ CallFunc_HasAllMatchingGameplayTags_self_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
