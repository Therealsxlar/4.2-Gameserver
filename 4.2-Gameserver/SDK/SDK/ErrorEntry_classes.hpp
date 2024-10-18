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

// 0x91 (0x2A1 - 0x210)
// WidgetBlueprintGeneratedClass ErrorEntry.ErrorEntry_C
class UErrorEntry_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     IconTextButton;                                    // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MESSAGE;                                           // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortErrorInfo                        ErrorInfo;                                         // 0x228(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                ErrorUrlBase;                                      // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                  DebugMessage;                                      // 0x288(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bIsDebugMode;                                      // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ErrorEntry_C");
		return Clss;
	}

	void Center_on_Widget(bool* Did_Center, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void SetErrorInfo(const struct FFortErrorInfo& ErrorInfo);
	void GetButtonVisibility(enum class ESlateVisibility* NewParam);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void ExecuteUbergraph_ErrorEntry(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, const class FString& CallFunc_Concat_StrStr_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
