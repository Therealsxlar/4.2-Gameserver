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

// 0x0 (0xA0 - 0xA0)
// BlueprintGeneratedClass AllowedToSleep.AllowedToSleep_C
class UAllowedToSleep_C : public UBTDecorator_BlueprintBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AllowedToSleep_C");
		return Clss;
	}

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool Temp_bool_Variable, class AFortAIController* K2Node_DynamicCast_AsFort_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAllowedToSleep_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
