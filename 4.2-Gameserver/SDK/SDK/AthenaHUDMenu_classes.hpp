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

// 0x58 (0x268 - 0x210)
// WidgetBlueprintGeneratedClass AthenaHUDMenu.AthenaHUDMenu_C
class UAthenaHUDMenu_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UAthenaInventoryPanel_C*               AthenaInventoryPanel;                              // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaHUDBottomBar_C*                 BottomBar;                                         // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                    DynamicCursorContent;                              // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetStack*                    MainContentStack;                                  // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 NamedContentSwitcher;                              // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               NoContent;                                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTopBar_C*                             TopBar;                                            // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaGameOverWidget_C*               DynamicGameOverScreen;                             // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowingGameOverScreen;                             // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShowingWinnerScreen;                               // 0x259(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DCF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaPlayerViewModel*                ViewModel;                                         // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaHUDMenu_C");
		return Clss;
	}

	void Has_Player_Died(bool* bDied, struct FFortPlayerDeathReport* DeathReport, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsClientNotifiedOfPawnDied_ReturnValue);
	void Has_Player_Or_Team_Won(bool* bWon, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsClientNotifiedOfWin_ReturnValue, bool CallFunc_IsClientNotifiedOfTeamWin_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetViewModel(class UAthenaPlayerViewModel* ViewModel, bool CallFunc_IsValid_ReturnValue);
	void CreateOrShowGameOverScreen(class UAthenaGameOverWidget_C** GameOverScreen, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void Dismiss(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUIManager_C* K2Node_DynamicCast_AsUIManager, bool K2Node_DynamicCast_bSuccess, class UFeedback_C* K2Node_DynamicCast_AsFeedback, bool K2Node_DynamicCast_bSuccess1);
	class UWidget* PopMenuContent(class UWidget* CallFunc_PopWidget_ReturnValue);
	void PushMenuContent(class UWidget* Widget);
	void SetCursorModeContent(class UUserWidget* CustomWidget, class FName ActionName, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsValid_ReturnValue);
	void On_Player_Or_Team_Won();
	void HandleRevived();
	void Construct();
	void Clear_GameOver_Screen();
	void On_Player_Died(struct FFortPlayerDeathReport& DeathReport);
	void PostBind_CheckConditions();
	void ExecuteUbergraph_AthenaHUDMenu(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaGameOverWidget_C* CallFunc_CreateOrShowGameOverScreen_GameOverScreen, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UAthenaGameOverWidget_C* CallFunc_CreateOrShowGameOverScreen_GameOverScreen1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, const struct FFortPlayerDeathReport& K2Node_CustomEvent_DeathReport, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_Has_Player_Or_Team_Won_bWon, bool CallFunc_Has_Player_Died_bDied, const struct FFortPlayerDeathReport& CallFunc_Has_Player_Died_DeathReport, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue3, float K2Node_Select_Default, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UAthenaGameOverWidget_C* CallFunc_Create_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
