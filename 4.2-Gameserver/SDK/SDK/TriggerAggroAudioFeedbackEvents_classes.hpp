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

// 0x38 (0xD0 - 0x98)
// BlueprintGeneratedClass TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C
class UTriggerAggroAudioFeedbackEvents_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(Transient, DuplicateTransient)
	bool                                         Debug;                                             // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortAIController*                     AIController;                                      // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           AIPawn;                                            // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             CurrentGoalPawn;                                   // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceBetweenAIAndGoal;                          // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TriggeredVisibilityEvent;                          // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TriggeredAcquisitionEvent;                         // 0xC5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceToTriggerEvents;                           // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceToResetEvents;                             // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TriggerAggroAudioFeedbackEvents_C");
		return Clss;
	}

	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveActivation(class AActor* OwnerActor);
	void ExecuteUbergraph_TriggerAggroAudioFeedbackEvents(int32 EntryPoint, TArray<class UBlackboardKeyType*>& K2Node_MakeArray_Array, const struct FBlackboardKeySelector& K2Node_MakeStruct_BlackboardKeySelector, bool CallFunc_GetBlackboardValueAsBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetGoalActor_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class AActor* CallFunc_GetGoalActor_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* K2Node_Event_OwnerActor2, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_OwnerActor1, class AActor* K2Node_Event_OwnerActor, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_GetGoalActor_ReturnValue2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
