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

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C
class UBTTask_AlwaysSuccess_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BTTask_AlwaysSuccess_C");
		return Clss;
	}

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTTask_AlwaysSuccess(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
