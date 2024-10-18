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

// 0x29 (0x231 - 0x208)
// WidgetBlueprintGeneratedClass PartyFinder_LFG.PartyFinder_LFG_C
class UPartyFinder_LFG_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      LFGSoftPrompt;                                     // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     LFGButton;                                         // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 LFGStatusDescription;                              // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                LFGToggleButtonStyle;                              // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurLFGStatus;                                      // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartyFinder_LFG_C");
		return Clss;
	}

	void HandleLFGFeatureStatus(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_GetEnableLFG_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	void OnLFGChanged(bool IsLFG, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, bool Temp_bool_Variable1, class FText K2Node_Select_Default, int32 K2Node_Select1_Default);
	void BindContextEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortPartyContext* CallFunc_GetContext_ReturnValue);
	void Construct();
	void BndEvt__LFGButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void LFGSoftReminder();
	void ExecuteUbergraph_PartyFinder_LFG(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, class UFortPartyContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsLocalPlayerLFG_ReturnValue, bool CallFunc_IsLocalPlayerLFG_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
