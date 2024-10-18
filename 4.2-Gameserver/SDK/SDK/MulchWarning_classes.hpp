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

// 0x50 (0x258 - 0x208)
// WidgetBlueprintGeneratedClass MulchWarning.MulchWarning_C
class UMulchWarning_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         Border;                                            // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      WarningCount;                                      // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      WarningText;                                       // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Count;                                             // 0x228(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Warning;                                           // 0x240(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MulchWarning_C");
		return Clss;
	}

	void Construct();
	void SetSelected(bool Selected);
	void ExecuteUbergraph_MulchWarning(int32 EntryPoint, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, bool Temp_bool_Variable1, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, bool K2Node_CustomEvent_Selected, class UClass* K2Node_Select_Default, class UClass* K2Node_Select1_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
