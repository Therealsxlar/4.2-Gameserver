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

// 0x48 (0x2B8 - 0x270)
// WidgetBlueprintGeneratedClass InteractionIndicator.InteractionIndicator_C
class UInteractionIndicator_C : public UFortActorIndicatorWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(Transient, DuplicateTransient)
	class UBasicInteractionWidget_C*             BasicInteractionWidget;                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHUD_PickupItemWidget_C*               HUD_PickupItemWidget;                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInteraction_DefenderBeacon_C*         Interaction_DefenderBeacon;                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          InteractionKeybindBox;                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeybindWidget;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextUnderKeybindText;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortInteractContextInfo*              CurrentInteraction;                                // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InteractionIndicator_C");
		return Clss;
	}

	void UpdateKeybinds(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetUseActionName_ReturnValue);
	void ShowDefenderBeaconWidget(class ABuildingTrapDefender* BuildingTrap);
	void ShowBasicInteractionWidget(enum class EFortKeybindForcedHoldStatus Temp_byte_Variable, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable1, bool CallFunc_IsMobileGame_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, enum class EFortKeybindForcedHoldStatus K2Node_Select_Default);
	void ShowPickupWidget(class AFortPickup* Pickup, bool Temp_bool_Variable, class FText CallFunc_GetInteractText_InteractText, bool CallFunc_GetInteractText_ReturnValue, class FText CallFunc_GetInteractErrorText_InteractErrorText, bool CallFunc_GetInteractErrorText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select1_Default);
	void HandleInteractionChanged(class UFortInteractContextInfo* Interaction, bool ValidInteraction, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class ABuildingTrapDefender* K2Node_DynamicCast_AsBuilding_Trap_Defender, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_PickedUp_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_InteractionIndicator(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
