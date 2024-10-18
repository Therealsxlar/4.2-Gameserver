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

// 0x38 (0x3B0 - 0x378)
// WidgetBlueprintGeneratedClass HUDLayoutTool.HUDLayoutTool_C
class UHUDLayoutTool_C : public UBacchusHUDLayoutToolPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      HidePanel;                                         // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowPanel;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUDLayoutToolPropertyPanel_C*         HUDLayoutToolPropertyPanel;                        // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     InfoButtonToggle;                                  // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        RecenterButton;                                    // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ArrowMID;                                          // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HUDLayoutTool_C");
		return Clss;
	}

	void BndEvt__RecenterButton2_K2Node_ComponentBoundEvent_82_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Close_Tool();
	void OnActivated();
	void On_Property_State_Change(bool bNewlyOpen);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void On_View_Offset_Update(const struct FVector2D& NewOffset);
	void Construct();
	void ExecuteUbergraph_HUDLayoutTool(int32 EntryPoint, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_GetIsPanning_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button1, enum class ESlateVisibility Temp_byte_Variable1, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool Temp_bool_Variable, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue4, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue5, bool K2Node_CustomEvent_bNewlyOpen, class UCommonButton* K2Node_ComponentBoundEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue6, bool CallFunc_IsSelectedWidgetUnderPanel_ReturnValue, const struct FVector2D& K2Node_CustomEvent_NewOffset, float CallFunc_VSize2DSquared_ReturnValue, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue7, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_GetPropertyMenuState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_Get_Dynamic_Material_Ret_Material);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
