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

// 0x28 (0xC8 - 0xA0)
// BlueprintGeneratedClass IsStandingOnActor.IsStandingOnActor_C
class UIsStandingOnActor_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                ActorToCheck;                                      // 0xA0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IsStandingOnActor_C");
		return Clss;
	}

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool Temp_bool_Variable, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetMyMovementBaseActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetMovementBaseActor_ReturnValue, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EMovementMode Temp_byte_Variable, bool K2Node_Select_Default, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
