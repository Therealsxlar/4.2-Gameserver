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

// 0xB8 (0x410 - 0x358)
// WidgetBlueprintGeneratedClass AthenaReplayBrowserTab.AthenaReplayBrowserTab_C
class UAthenaReplayBrowserTab_C : public UAthenaReplayBrowserScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      AverageKills;                                      // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AverageLength;                                     // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AverageRank;                                       // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AverageViews;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaderboardThrobber_C*                LoadingThrobber;                                   // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         LowerBarBorder;                                    // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaReplayBrowserMatchStats_C*      MatchStats;                                        // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     OpenReplayFolder;                                  // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaReplayBrowserRenameDialog_C*    RenameDialog;                                      // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                       ReplayListView;                                    // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TotalSize;                                         // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaReplayBrowserRowProxyInstance*  SelectedRowProxy;                                  // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputPlay;                                         // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InputDelete;                                       // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InputRename;                                       // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UAthenaReplayBrowserOldReplayDisclaimer_C* OldReplayDisclaimer;                               // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   InputBack;                                         // 0x3F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          LoadingTimerHandle;                                // 0x408(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaReplayBrowserTab_C");
		return Clss;
	}

	void RefreshReplayFolderState(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_DoesSupportReplayFolder_IsSupported, enum class ESlateVisibility K2Node_Select_Default);
	void DoesSupportReplayFolder(bool* IsSupported, bool CallFunc_DoesReplayFolderExist_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue1, bool CallFunc_EqualEqual_StriStri_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	void OnShowLoadingThrobber();
	void OnEnumerationStateChanged(bool EnumerationInProgress, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void OnInputBack(bool* bPassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void SetupInputActionHandlers(enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void CloseRenameDialog(class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnConfirmRename(class FText NewName, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnInputPlay(bool* bPassThrough, bool CallFunc_IsValid_ReturnValue);
	void InitializeInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3);
	void FocusList(class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void SelectReplay(class UObject* ReplayInfoObject, class UAthenaReplayBrowserRowProxyInstance* K2Node_DynamicCast_AsAthena_Replay_Browser_Row_Proxy_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnInputRename(bool* bPassThrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue);
	void OnInputDelete(bool* bPassThrough, bool CallFunc_IsValid_ReturnValue);
	void Refresh(int32 LocalTotalViews, float LocalTotalLength, int32 LocalNumReplayRows, int32 LocalTotalNumPlayers, int32 LocalTotalRank, int32 LocalTotalKills, float LocalTotalSize, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue1, const struct FTimespan& CallFunc_FromSeconds_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue3, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue4, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue2, class FText CallFunc_Conv_IntToText_ReturnValue1, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue1, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue2, const class FString& CallFunc_Conv_TextToString_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue5, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue6, const class FString& CallFunc_Concat_StrStr_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue7, float CallFunc_Divide_FloatFloat_ReturnValue3, int32 CallFunc_Round_ReturnValue1, const class FString& CallFunc_Conv_IntToString_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue8, const class FString& CallFunc_Concat_StrStr_ReturnValue4, float CallFunc_Divide_FloatFloat_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue5, class FText CallFunc_Conv_FloatToText_ReturnValue1, class FText CallFunc_Conv_StringToText_ReturnValue1, class FText CallFunc_Conv_FloatToText_ReturnValue2, const class FString& CallFunc_Conv_TextToString_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue6, class FText CallFunc_Conv_StringToText_ReturnValue2, class UAthenaReplayBrowserRowProxyInstance* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1);
	void DialogResult_580DD63848C06A1FCA8D9DABDAF6FF77(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_12ECDF8D47346477E6D96B927F5223CE(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_E89869AF460753E34CA097BC86722E95(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_00986FB1494FF7EA41F1769EAFB70E83(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_961693C14B8B2A8E26E2AFB69251D5F8(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_C4C0E9C14BA061EBBA451D839890A4A7(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_79A680104EAA90FF10D265808FD512BC(enum class EFortDialogResult Result, class FName ResultName);
	void DialogResult_F681A46A43F230E95DCC3F994D03E83C(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__CommonListView_0_K2Node_ComponentBoundEvent_2_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void Construct();
	void PlayReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy);
	void OnInputModeChanged(bool bUsingGamepad);
	void BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void DeleteReplay(class UAthenaReplayBrowserRowProxyInstance* RowProxy);
	void OnActivated();
	void OnDeleteFailed(class FText& Reason);
	void OnRenameFailed(class FText& Reason);
	void OnSaveFailed(class FText& Reason);
	void OnRowsUpdated();
	void OnCorruptReplayFound(class FText& Info);
	void BndEvt__ReplayListView_K2Node_ComponentBoundEvent_0_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected);
	void OnPlayFailed(class FText& Reason);
	void OnReplayEnumerationStart();
	void OnReplayEnumerationFinish();
	void BndEvt__OpenReplayFolder_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ShowErrorDialog(class FText& Title, class FText& MESSAGE);
	void ExecuteUbergraph_AthenaReplayBrowserTab(int32 EntryPoint, class FText K2Node_Event_Title, class FText K2Node_Event_Message, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result6, class FName K2Node_CustomEvent_ResultName6, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class EFortDialogResult K2Node_CustomEvent_Result5, class FName K2Node_CustomEvent_ResultName5, class FName Temp_name_Variable1, enum class EFortDialogResult Temp_byte_Variable1, enum class EFortDialogResult K2Node_CustomEvent_Result4, class FName K2Node_CustomEvent_ResultName4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class FName Temp_name_Variable2, enum class EFortDialogResult Temp_byte_Variable2, enum class EFortDialogResult K2Node_CustomEvent_Result3, class FName K2Node_CustomEvent_ResultName3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class FName Temp_name_Variable3, enum class EFortDialogResult Temp_byte_Variable3, enum class EFortDialogResult K2Node_CustomEvent_Result2, class FName K2Node_CustomEvent_ResultName2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, class FName Temp_name_Variable4, enum class EFortDialogResult Temp_byte_Variable4, enum class EFortDialogResult K2Node_CustomEvent_Result1, class FName K2Node_CustomEvent_ResultName1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, class FName Temp_name_Variable5, enum class EFortDialogResult Temp_byte_Variable5, class UCommonInputContext* CallFunc_GetContext_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable6, enum class EFortDialogResult Temp_byte_Variable6, class UObject* K2Node_ComponentBoundEvent_Item2, class UAthenaReplayBrowserRowProxyInstance* K2Node_Event_RowProxy1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaReplayBrowserOldReplayDisclaimer_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool K2Node_Event_bUsingGamepad, bool CallFunc_BooleanNOR_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item1, bool CallFunc_IsValid_ReturnValue2, enum class EFortDialogResult Temp_byte_Variable7, class FName Temp_name_Variable7, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, class UAthenaReplayBrowserRowProxyInstance* K2Node_Event_RowProxy, bool CallFunc_IsValid_ReturnValue3, class UWidget* Temp_object_Variable, class FText CallFunc_Conv_StringToText_ReturnValue1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue1, enum class EFortDialogResult K2Node_CustomEvent_Result7, class FName K2Node_CustomEvent_ResultName7, bool CallFunc_IsValid_ReturnValue4, class FText K2Node_Event_Reason3, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue2, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue5, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue3, bool CallFunc_IsValid_ReturnValue6, class FText K2Node_Event_Reason2, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue4, class FText K2Node_Event_Reason1, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue5, bool CallFunc_IsValid_ReturnValue7, bool CallFunc_IsValid_ReturnValue8, bool CallFunc_IsValid_ReturnValue9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, class FText K2Node_Event_Info, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue6, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, bool CallFunc_IsValid_ReturnValue10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9, class FText K2Node_Event_Reason, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue7, bool CallFunc_IsValid_ReturnValue11, class UCommonButton* K2Node_ComponentBoundEvent_Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
