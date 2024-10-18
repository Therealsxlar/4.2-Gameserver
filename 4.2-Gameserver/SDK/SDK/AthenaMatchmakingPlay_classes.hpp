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

// 0x28 (0x308 - 0x2E0)
// WidgetBlueprintGeneratedClass AthenaMatchmakingPlay.AthenaMatchmakingPlay_C
class UAthenaMatchmakingPlay_C : public UFortAthenaMatchmakingWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(Transient, DuplicateTransient)
	class UAthenaMatchmakingModeButton_C*        AthenaMatchmakingModeButton;                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MatchmakingSpinner;                                // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  PlaylistsUpdated;                                  // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMatchmakingPlay_C");
		return Clss;
	}

	void OpenPlayOptions(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UAthenaMatchmakingOptionsDisplay_v2_C* CallFunc_Create_ReturnValue);
	void BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnAvailablePlaylistsUpdated();
	void OnPlayButtonUpdated(bool bShowPlayButton);
	void BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnSetPlayButtonText(class FText& PlayButtonText);
	void OnSetCancelButtonText(class FText& CancelButtonText);
	void PlaylistChanged(class UFortPlaylistAthena* NewPlaylist);
	void BndEvt__AthenaMatchmakingModeButton_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetSquadFillText(bool InCurrentSquadFill);
	void ExecuteUbergraph_AthenaMatchmakingPlay(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button1, bool K2Node_DynamicCast_bSuccess1, bool K2Node_Event_bShowPlayButton, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class FText K2Node_Event_PlayButtonText, class FText K2Node_Event_CancelButtonText, class UFortPlaylistAthena* K2Node_Event_NewPlaylist, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_InCurrentSquadFill);
	void PlaylistsUpdated__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
