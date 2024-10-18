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

// 0x40 (0x250 - 0x210)
// WidgetBlueprintGeneratedClass EulaTab.EulaTab_C
class UEulaTab_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UWidgetSwitcher*                       EulaSpinnerSwitcher;                               // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                    FortRichTextBlock_0;                               // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressSpinner;                                   // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_4;                                       // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  FailedToDownloadEulaText;                          // 0x238(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EulaTab_C");
		return Clss;
	}

	void Activate_Scroll_Box(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Construct();
	void OnEulaDownloadComplete(bool bSuccessful, class FText EULAText);
	void ExecuteUbergraph_EulaTab(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_CustomEvent_bSuccessful, class FText K2Node_CustomEvent_EULAText, class FText K2Node_Select_Default, class UFortMcpContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetEULAText_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsMobileApp_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_HasEULADownloaded_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
