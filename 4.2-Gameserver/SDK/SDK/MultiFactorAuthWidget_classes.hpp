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

// 0x10 (0x360 - 0x350)
// WidgetBlueprintGeneratedClass MultiFactorAuthWidget.MultiFactorAuthWidget_C
class UMultiFactorAuthWidget_C : public UFortMultiFactorAuthWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CommonTextPromptText;                              // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MultiFactorAuthWidget_C");
		return Clss;
	}

	void Construct();
	void ExecuteUbergraph_MultiFactorAuthWidget(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
