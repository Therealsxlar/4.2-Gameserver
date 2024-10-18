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

// 0x5A8 (0x7B0 - 0x208)
// WidgetBlueprintGeneratedClass SpectatorPlayerSelectionUI.SpectatorPlayerSelectionUI_C
class USpectatorPlayerSelectionUI_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UScrollBox*                            ScrollBox_151;                                     // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                          ButtonStyle;                                       // 0x218(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UButton*, class AFortPlayerState*> ButtonToPlayerStateMap;                            // 0x490(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FButtonStyle                          FollowedButtonStyle;                               // 0x4E0(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class AFortPlayerState*, class UButton*> PlayerStateToButtonMap;                            // 0x758(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UButton*                               FollowedPlayerButton;                              // 0x7A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpectatorPlayerSelectionUI_C");
		return Clss;
	}

	void SetFollowedPlayerButton(class UButton* NewButton, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
	void FindPlayerWithPressedButton(class AFortPlayerState** Player, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, class UButton* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerState* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsPressed_ReturnValue);
	void AddPlayerElement(class AFortPlayerStateAthena* Player, class UAthenaTeamMemberInfo_C* NewTeamInfoWidget, class UButton* NewButton, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaTeamMemberInfo_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UButton* CallFunc_SpawnObject_ReturnValue);
	void Construct();
	void OnPlayerButtonPressed();
	void OnFollowedPlayerChanged(class AFortPlayerControllerSpectating* SpectatorPC, class AFortPlayerState* NewFollowedPlayer);
	void PlayerBecameRelevant(class AFortPlayerState* NewlyRelevantPlayer);
	void PlayerBecameIrrelevant(class AFortPlayerState* NewlyRelevantPlayer);
	void ExecuteUbergraph_SpectatorPlayerSelectionUI(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess1, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AFortPlayerState* CallFunc_FindPlayerWithPressedButton_Player, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating1, bool K2Node_DynamicCast_bSuccess3, class AFortPlayerControllerSpectating* K2Node_CustomEvent_SpectatorPC, class AFortPlayerState* K2Node_CustomEvent_NewFollowedPlayer, class UButton* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerState* K2Node_CustomEvent_NewlyRelevantPlayer1, class AFortPlayerState* K2Node_CustomEvent_NewlyRelevantPlayer, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UButton* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UButton* CallFunc_Map_Find_Value2, bool CallFunc_Map_Find_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
