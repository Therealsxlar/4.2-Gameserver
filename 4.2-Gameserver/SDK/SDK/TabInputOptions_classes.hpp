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

// 0x50 (0x298 - 0x248)
// WidgetBlueprintGeneratedClass TabInputOptions.TabInputOptions_C
class UTabInputOptions_C : public UFortInputOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         OverlayBorder;                                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Currently_Selected_Input;                          // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Currently_Primary;                              // 0x25C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4983[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  Enable_Overlay;                                    // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  Disable_Overlay;                                   // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Using_Gamepad;                                     // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4984[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  Gamepad_Changed;                                   // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabInputOptions_C");
		return Clss;
	}

	void NewFunction_0();
	void Set_Input_Enabled(bool Enabled, int32 Temp_int_Variable, class UObject* CallFunc_GetItemAt_ReturnValue, int32 CallFunc_GetNumItems_ReturnValue, class UWidget* CallFunc_GetListWidget_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue);
	void Overlay_Key_Pressed(const struct FKey& NewKey, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
	void CenterOnTab();
	void BndEvt__InputCommonListView_K2Node_ComponentBoundEvent_14_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void HandleUsingGamepadChanged(enum class ECommonInputType bNewInputType);
	void UnbindClicked(int32 Number_in_List, class UOptionsMenuInput_C* Widget);
	void ClearAndConstructKeybindList();
	void Input_Clicked(int32 Number_in_List, bool Is_Primary_Button);
	void Construct();
	void UpdateOptionsTab();
	void ExecuteUbergraph_TabInputOptions(int32 EntryPoint, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UObject* CallFunc_GetItemAt_ReturnValue, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetListWidget_ReturnValue, class UOptionsMenuInput_C* K2Node_DynamicCast_AsOptions_Menu_Input1, bool K2Node_DynamicCast_bSuccess1, enum class ECommonInputType K2Node_Event_bNewInputType, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class ESlateVisibility Temp_byte_Variable1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 K2Node_CustomEvent_Number_in_List1, class UOptionsMenuInput_C* K2Node_CustomEvent_Widget, const struct FKey& K2Node_MakeStruct_Key, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, int32 K2Node_CustomEvent_Number_In_List, bool K2Node_CustomEvent_Is_Primary_Button, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_Not_PreBool_ReturnValue2);
	void Gamepad_Changed__DelegateSignature(bool Gamepad_Enabled);
	void Disable_Overlay__DelegateSignature();
	void Enable_Overlay__DelegateSignature(bool Accept_Input, class FText Overlay_Text);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
