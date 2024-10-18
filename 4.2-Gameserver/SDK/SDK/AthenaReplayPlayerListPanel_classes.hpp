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

// 0x28 (0x350 - 0x328)
// WidgetBlueprintGeneratedClass AthenaReplayPlayerListPanel.AthenaReplayPlayerListPanel_C
class UAthenaReplayPlayerListPanel_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UIconTextButton_C*                     CloseButton;                                       // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaReplayPlayerListListView_C*     FortReplayPlayerListListView;                      // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ShowPlayerProfileInput;                            // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaReplayPlayerListPanel_C");
		return Clss;
	}

	void OnShowPlayerProfileInput(bool* bPassThrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void OnInputModeChanged(bool bUsingGamepad);
	void Construct();
	void ExecuteUbergraph_AthenaReplayPlayerListPanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortReplayContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_bUsingGamepad);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
