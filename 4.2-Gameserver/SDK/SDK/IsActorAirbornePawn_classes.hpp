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

// 0x50 (0xF0 - 0xA0)
// BlueprintGeneratedClass IsActorAirbornePawn.IsActorAirbornePawn_C
class UIsActorAirbornePawn_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                ActorKeyToTest;                                    // 0xA0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                TakerAirborneKeyToMoveTo;                          // 0xC8(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IsActorAirbornePawn_C");
		return Clss;
	}

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, enum class EMovementMode Temp_byte_Variable, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class ATakerPawn_C* K2Node_DynamicCast_AsTaker_Pawn, bool K2Node_DynamicCast_bSuccess1, const struct FVector& CallFunc_TakerAirborneTest_ImpactPointOrTraceEndBelowTaker, bool CallFunc_TakerAirborneTest_Airborne, bool K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
