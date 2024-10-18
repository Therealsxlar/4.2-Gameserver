#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function InteractionIndicator.InteractionIndicator_C.UpdateKeybinds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUseActionName_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractionIndicator_C::UpdateKeybinds(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FName CallFunc_GetUseActionName_ReturnValue)
{
	static auto Func = Class->GetFunction("InteractionIndicator_C", "UpdateKeybinds");

	Params::UInteractionIndicator_C_UpdateKeybinds_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetUseActionName_ReturnValue = CallFunc_GetUseActionName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InteractionIndicator.InteractionIndicator_C.ShowDefenderBeaconWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingTrapDefender*       BuildingTrap                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractionIndicator_C::ShowDefenderBeaconWidget(class ABuildingTrapDefender* BuildingTrap)
{
	static auto Func = Class->GetFunction("InteractionIndicator_C", "ShowDefenderBeaconWidget");

	Params::UInteractionIndicator_C_ShowDefenderBeaconWidget_Params Parms;
	Parms.BuildingTrap = BuildingTrap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InteractionIndicator.InteractionIndicator_C.ShowBasicInteractionWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortKeybindForcedHoldStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortKeybindForcedHoldStatusTemp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortKeybindForcedHoldStatusK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractionIndicator_C::ShowBasicInteractionWidget(enum class EFortKeybindForcedHoldStatus Temp_byte_Variable, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable1, bool CallFunc_IsMobileGame_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue1, enum class EFortKeybindForcedHoldStatus K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("InteractionIndicator_C", "ShowBasicInteractionWidget");

	Params::UInteractionIndicator_C_ShowBasicInteractionWidget_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InteractionIndicator.InteractionIndicator_C.ShowPickupWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*                 Pickup                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetInteractText_InteractText                            ()
// bool                               CallFunc_GetInteractText_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetInteractErrorText_InteractErrorText                  ()
// bool                               CallFunc_GetInteractErrorText_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractionIndicator_C::ShowPickupWidget(class AFortPickup* Pickup, bool Temp_bool_Variable, class FText CallFunc_GetInteractText_InteractText, bool CallFunc_GetInteractText_ReturnValue, class FText CallFunc_GetInteractErrorText_InteractErrorText, bool CallFunc_GetInteractErrorText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("InteractionIndicator_C", "ShowPickupWidget");

	Params::UInteractionIndicator_C_ShowPickupWidget_Params Parms;
	Parms.Pickup = Pickup;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetInteractText_InteractText = CallFunc_GetInteractText_InteractText;
	Parms.CallFunc_GetInteractText_ReturnValue = CallFunc_GetInteractText_ReturnValue;
	Parms.CallFunc_GetInteractErrorText_InteractErrorText = CallFunc_GetInteractErrorText_InteractErrorText;
	Parms.CallFunc_GetInteractErrorText_ReturnValue = CallFunc_GetInteractErrorText_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InteractionIndicator.InteractionIndicator_C.HandleInteractionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortInteractContextInfo*    Interaction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ValidInteraction                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingTrapDefender*       K2Node_DynamicCast_AsBuilding_Trap_Defender                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPickup*                 K2Node_DynamicCast_AsFort_Pickup                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PickedUp_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractionIndicator_C::HandleInteractionChanged(class UFortInteractContextInfo* Interaction, bool ValidInteraction, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class ABuildingTrapDefender* K2Node_DynamicCast_AsBuilding_Trap_Defender, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_PickedUp_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("InteractionIndicator_C", "HandleInteractionChanged");

	Params::UInteractionIndicator_C_HandleInteractionChanged_Params Parms;
	Parms.Interaction = Interaction;
	Parms.ValidInteraction = ValidInteraction;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsBuilding_Trap_Defender = K2Node_DynamicCast_AsBuilding_Trap_Defender;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pickup = K2Node_DynamicCast_AsFort_Pickup;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_PickedUp_ReturnValue = CallFunc_PickedUp_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InteractionIndicator.InteractionIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInteractionIndicator_C::Construct()
{
	static auto Func = Class->GetFunction("InteractionIndicator_C", "Construct");

	Params::UInteractionIndicator_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InteractionIndicator.InteractionIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInteractionIndicator_C::Destruct()
{
	static auto Func = Class->GetFunction("InteractionIndicator_C", "Destruct");

	Params::UInteractionIndicator_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InteractionIndicator.InteractionIndicator_C.ExecuteUbergraph_InteractionIndicator
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)

void UInteractionIndicator_C::ExecuteUbergraph_InteractionIndicator(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2)
{
	static auto Func = Class->GetFunction("InteractionIndicator_C", "ExecuteUbergraph_InteractionIndicator");

	Params::UInteractionIndicator_C_ExecuteUbergraph_InteractionIndicator_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
