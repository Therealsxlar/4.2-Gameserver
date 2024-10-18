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
// BlueprintGeneratedClass IsStandingOnStructurallyUnsupportedFloor.IsStandingOnStructurallyUnsupportedFloor_C
class UIsStandingOnStructurallyUnsupportedFloor_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                ActorToCheck;                                      // 0xA0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IsStandingOnStructurallyUnsupportedFloor_C");
		return Clss;
	}

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class AActor* MovementBaseActor, enum class EMovementMode Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, class UBuildingStructuralSupportSystem* CallFunc_GetBuildingStructuralSupportSystem_BuildingStructuralSupportSystem, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, bool CallFunc_WillRegisterWithStructuralGrid_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetMyMovementBaseActor_ReturnValue, class AActor* CallFunc_GetMovementBaseActor_ReturnValue, bool K2Node_Select_Default, bool CallFunc_IsBuildingActorStructurallySupported_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
