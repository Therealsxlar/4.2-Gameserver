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

// 0xB9 (0x301 - 0x248)
// WidgetBlueprintGeneratedClass TabGamePadConfig.TabGamePadConfig_C
class UTabGamePadConfig_C : public UFortGamepadInputOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Transient, DuplicateTransient)
	class URotatorSelector_C*                    CustomInputTemplateConfigs;                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    GamepadConfig;                                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGamepadMappingInfo_C*                 GamepadMappingInfo;                                // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    GamepadPlatformConfig;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Gamepad_Platform;                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_GamepadMappingInfo;                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_InputList;                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsCombatMode;                                      // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C7A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        InputPresets;                                      // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        PlatformMappingIndex;                              // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PresetMappingIndex;                                // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  EnableGamepadInputOverlay;                         // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        CustomInputTemplatePresetIndex;                    // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentInputNum;                                   // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  GamepadMappingInfoChanged;                         // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture2D*                            T_PS4_Unbound;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            T_Xb1_Unbound;                                     // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          InputPresetNames_NoCustom;                         // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastDelegateProperty_                  ShowResetToDefaultMessage;                         // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         PendingInputEnabledValue;                          // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabGamePadConfig_C");
		return Clss;
	}

	void GetCurrentPlatformIndex(int32* Platform_Index, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable1, int32 Temp_int_Variable1, int32 Temp_int_Variable2, bool CallFunc_IsErebus_ReturnValue, const class FString& CallFunc_GetControllerPlatform_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select1_Default);
	bool IsCustomConfig(int32 PresetIndex, bool CallFunc_IsCustomGamepadConfig_ReturnValue);
	void SetInputEnabled(bool Enable, int32 Temp_int_Variable, class UObject* CallFunc_GetItemAt_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UOptionsMenuInputOneKey_C* K2Node_DynamicCast_AsOptions_Menu_Input_One_Key, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
	void OverlayKeyPressed(const struct FKey& NewKey, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue, class UOptionsMenuInputOneKey_C* K2Node_DynamicCast_AsOptions_Menu_Input_One_Key, bool K2Node_DynamicCast_bSuccess);
	void HandleGamepadMappingInfoChange(bool CallFunc_IsCustomConfig_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue);
	void Handle_Mode_Toggled(bool CallFunc_Not_PreBool_ReturnValue);
	void Update_Data(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetCurrentInputPresetName_ReturnValue, int32 CallFunc_GetCurrentPlatformIndex_Platform_Index, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, const class FString& CallFunc_GetCurrentCustomInputTemplatePresetName_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue1);
	void Initialize_Data(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames, TArray<class FText>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames, class FText Temp_text_Variable, class FText Temp_text_Variable1, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, class FText K2Node_Select_Default, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, enum class ESubGame CallFunc_GetSubGame_ReturnValue1, TArray<class FString>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetNames1, TArray<class FText>& CallFunc_GetAllPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames1, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, const class FString& CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateOptionsTab();
	void GamepadPlatformConfigChanged(int32 Selected_Index);
	void Gamepad_Config_Changed(int32 Selected_Index);
	void ClearAndConstructKeybindList();
	void CenterOnTab();
	void BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_130_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void InputClicked_Bind(int32 Number_in_List, bool Is_Primary_Button);
	void Configuration_Changed(int32 Selected_Index);
	void HandleGamePadToggleMode();
	void UnbindClicked_Bind(int32 Number_in_List, class UOptionsMenuInputOneKey_C* Widget);
	void BndEvt__CustomInputTemplateConfigs_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void DoResetToDefault();
	void DoNotResetToDefault();
	void Construct();
	void TrySetInputEnabled();
	void ExecuteUbergraph_TabGamePadConfig(int32 EntryPoint, bool CallFunc_IsErebus_ReturnValue, bool Temp_bool_Variable, enum class ECommonGamepadType Temp_byte_Variable, enum class ECommonGamepadType Temp_byte_Variable1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_IsPS4Platform_ReturnValue, bool CallFunc_IsXboxPlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 K2Node_CustomEvent_Selected_Index2, bool CallFunc_BooleanOR_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, int32 K2Node_CustomEvent_Selected_Index1, const class FString& CallFunc_Array_Get_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, int32 K2Node_CustomEvent_Number_in_List1, bool K2Node_CustomEvent_Is_Primary_Button, class UOptionsMenuInputOneKey_C* K2Node_DynamicCast_AsOptions_Menu_Input_One_Key, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_MakeLiteralText_ReturnValue, int32 K2Node_CustomEvent_Selected_Index, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1, class UCommonInputContext* CallFunc_GetContext_ReturnValue2, int32 K2Node_CustomEvent_Number_In_List, class UOptionsMenuInputOneKey_C* K2Node_CustomEvent_Widget, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, bool Temp_bool_Variable1, int32 K2Node_ComponentBoundEvent_Selected_Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, const class FString& K2Node_Select_Default, enum class ECommonGamepadType K2Node_Select1_Default, const class FString& CallFunc_Array_Get_Item1, bool CallFunc_IsRefreshPending_ReturnValue, bool CallFunc_HasCustomGamepadBindingChanges_ReturnValue, const struct FKey& K2Node_MakeStruct_Key);
	void ShowResetToDefaultMessage__DelegateSignature();
	void GamepadMappingInfoChanged__DelegateSignature();
	void EnableGamepadInputOverlay__DelegateSignature(bool AcceptInput, class FText OverlayText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
