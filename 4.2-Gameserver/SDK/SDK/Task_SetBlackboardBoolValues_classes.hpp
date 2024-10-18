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

// 0xF9 (0x199 - 0xA0)
// BlueprintGeneratedClass Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C
class UTask_SetBlackboardBoolValues_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(Transient, DuplicateTransient)
	bool                                         Update_1_;                                         // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BoolKey1;                                          // 0xB0(0x28)(Edit, BlueprintVisible)
	bool                                         BoolKey1Value;                                     // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Update_2_;                                         // 0xD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BoolKey2;                                          // 0xE0(0x28)(Edit, BlueprintVisible)
	bool                                         BoolKey2Value;                                     // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Update_3_;                                         // 0x109(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BoolKey3;                                          // 0x110(0x28)(Edit, BlueprintVisible)
	bool                                         BoolKey3Value;                                     // 0x138(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Update_4_;                                         // 0x139(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BoolKey4;                                          // 0x140(0x28)(Edit, BlueprintVisible)
	bool                                         BoolKey4Value;                                     // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Update_5_;                                         // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36F6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                BoolKey5;                                          // 0x170(0x28)(Edit, BlueprintVisible)
	bool                                         BoolKey5Value;                                     // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Task_SetBlackboardBoolValues_C");
		return Clss;
	}

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_Task_SetBlackboardBoolValues(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
