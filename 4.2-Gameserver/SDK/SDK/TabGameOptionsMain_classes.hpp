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

// 0x10 (0x268 - 0x258)
// WidgetBlueprintGeneratedClass TabGameOptionsMain.TabGameOptionsMain_C
class UTabGameOptionsMain_C : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      TooltipDisplayReference;                           // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabGameOptionsMain_C");
		return Clss;
	}

	void Construct();
	void UpdatePossibleLanguages();
	void CenterOnTab();
	void UpdateOptionsTab();
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void Setting_Value_Changed(float Slider_Value);
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void ExecuteUbergraph_TabGameOptionsMain(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UOptionsMenuSetting_C* K2Node_DynamicCast_AsOptions_Menu_Setting, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_ComponentBoundEvent_Widget1, class UOptionsMenuSetting_C* K2Node_DynamicCast_AsOptions_Menu_Setting1, bool K2Node_DynamicCast_bSuccess1, float K2Node_CustomEvent_Slider_Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
