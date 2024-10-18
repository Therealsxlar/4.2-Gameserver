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
// WidgetBlueprintGeneratedClass TabGameOptionsHud.TabGameOptionsHud_C
class UTabGameOptionsHud_C : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      TooltipDisplayReference;                           // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabGameOptionsHud_C");
		return Clss;
	}

	void Construct();
	void UpdateOptionsTab();
	void CenterOnTab();
	void BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_37_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void HUD_Changed(int32 Selected_Index, const struct FGameplayTag& Gameplay_Tag);
	void BndEvt__HUDCommonListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void ExecuteUbergraph_TabGameOptionsHud(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UOptionsMenuHudRotator_C* K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_ComponentBoundEvent_Widget1, class UOptionsMenuHudRotator_C* K2Node_DynamicCast_AsOptions_Menu_Hud_Rotator1, bool K2Node_DynamicCast_bSuccess1, int32 K2Node_CustomEvent_Selected_Index, const struct FGameplayTag& K2Node_CustomEvent_Gameplay_Tag, bool CallFunc_Conv_IntToBool_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
