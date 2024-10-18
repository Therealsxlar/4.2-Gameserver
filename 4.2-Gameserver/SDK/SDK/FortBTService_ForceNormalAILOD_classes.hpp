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

// 0x8 (0xA0 - 0x98)
// BlueprintGeneratedClass FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C
class UFortBTService_ForceNormalAILOD_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortBTService_ForceNormalAILOD_C");
		return Clss;
	}

	void ReceiveActivation(class AActor* OwnerActor);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ExecuteUbergraph_FortBTService_ForceNormalAILOD(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_OwnerActor1, class AFortAIController* K2Node_DynamicCast_AsFort_AIController1, bool K2Node_DynamicCast_bSuccess1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
