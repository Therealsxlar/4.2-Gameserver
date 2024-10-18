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


// Function QuickbarSlot.QuickbarSlot_C.InitializeInvalidation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::InitializeInvalidation(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "InitializeInvalidation");

	Params::UQuickbarSlot_C_InitializeInvalidation_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.UpdateItemBoxSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemType           Item_Type_To_Show                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldUseNewItemCards_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetCardDimensions_ReturnValue1                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlot_C::UpdateItemBoxSize(enum class EFortItemType Item_Type_To_Show, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, enum class EFortItemType CallFunc_GetType_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool CallFunc_ShouldUseNewItemCards_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, enum class EFortItemType K2Node_Select_Default, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue1, enum class EFortItemType K2Node_Select1_Default, const struct FVector2D& CallFunc_GetCardDimensions_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, float CallFunc_Add_FloatFloat_ReturnValue5, float CallFunc_Add_FloatFloat_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue7, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue1)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "UpdateItemBoxSize");

	Params::UQuickbarSlot_C_UpdateItemBoxSize_Params Parms;
	Parms.Item_Type_To_Show = Item_Type_To_Show;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_ShouldUseNewItemCards_ReturnValue = CallFunc_ShouldUseNewItemCards_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue = CallFunc_GetCardSize_ReturnValue;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCardDimensions_ReturnValue = CallFunc_GetCardDimensions_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_FloatFloat_ReturnValue1 = CallFunc_Add_FloatFloat_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue3 = CallFunc_Add_FloatFloat_ReturnValue3;
	Parms.CallFunc_GetCardSize_ReturnValue1 = CallFunc_GetCardSize_ReturnValue1;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue1 = CallFunc_SlotAsOverlaySlot_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetCardDimensions_ReturnValue1 = CallFunc_GetCardDimensions_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue4 = CallFunc_Add_FloatFloat_ReturnValue4;
	Parms.CallFunc_BreakVector2D_X1 = CallFunc_BreakVector2D_X1;
	Parms.CallFunc_BreakVector2D_Y1 = CallFunc_BreakVector2D_Y1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue5 = CallFunc_Add_FloatFloat_ReturnValue5;
	Parms.CallFunc_Add_FloatFloat_ReturnValue6 = CallFunc_Add_FloatFloat_ReturnValue6;
	Parms.CallFunc_Add_FloatFloat_ReturnValue7 = CallFunc_Add_FloatFloat_ReturnValue7;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue1 = CallFunc_Lerp_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStopped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemCooldownType   CooldownType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::OnCooldownStopped(enum class EFortItemCooldownType CooldownType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "OnCooldownStopped");

	Params::UQuickbarSlot_C_OnCooldownStopped_Params Parms;
	Parms.CooldownType = CooldownType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.OnCooldownStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortItemCooldownType   CooldownType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::OnCooldownStarted(enum class EFortItemCooldownType CooldownType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "OnCooldownStarted");

	Params::UQuickbarSlot_C_OnCooldownStarted_Params Parms;
	Parms.CooldownType = CooldownType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.InitializeCooldowns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuickbarSlotCooldown_C*     K2Node_DynamicCast_AsQuickbar_Slot_Cooldown                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void UQuickbarSlot_C::InitializeCooldowns(class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "InitializeCooldowns");

	Params::UQuickbarSlot_C_InitializeCooldowns_Params Parms;
	Parms.K2Node_DynamicCast_AsQuickbar_Slot_Cooldown = K2Node_DynamicCast_AsQuickbar_Slot_Cooldown;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::HandleMaximizeStarted()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "HandleMaximizeStarted");

	Params::UQuickbarSlot_C_HandleMaximizeStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::HandleMinimizeFinished()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "HandleMinimizeFinished");

	Params::UQuickbarSlot_C_HandleMinimizeFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.HandleMaximizeFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::HandleMaximizeFinished()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "HandleMaximizeFinished");

	Params::UQuickbarSlot_C_HandleMaximizeFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.HandleMinimizeStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::HandleMinimizeStarted()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "HandleMinimizeStarted");

	Params::UQuickbarSlot_C_HandleMinimizeStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuickbarSlot_C::Construct()
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "Construct");

	Params::UQuickbarSlot_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "PreConstruct");

	Params::UQuickbarSlot_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.SetAnimatedBoxScaleFactor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AnimatedBoxScaleFactor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlot_C::SetAnimatedBoxScaleFactor(float AnimatedBoxScaleFactor)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "SetAnimatedBoxScaleFactor");

	Params::UQuickbarSlot_C_SetAnimatedBoxScaleFactor_Params Parms;
	Parms.AnimatedBoxScaleFactor = AnimatedBoxScaleFactor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.MaximizeSlot
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldSkipAnimation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::MaximizeSlot(bool bShouldSkipAnimation)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "MaximizeSlot");

	Params::UQuickbarSlot_C_MaximizeSlot_Params Parms;
	Parms.bShouldSkipAnimation = bShouldSkipAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.MinimizeSlot
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldSkipAnimation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::MinimizeSlot(bool bShouldSkipAnimation)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "MinimizeSlot");

	Params::UQuickbarSlot_C_MinimizeSlot_Params Parms;
	Parms.bShouldSkipAnimation = bShouldSkipAnimation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.SetSlotSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSelected                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuickbarSlot_C::SetSlotSelected(bool bSelected)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "SetSlotSelected");

	Params::UQuickbarSlot_C_SetSlotSelected_Params Parms;
	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuickbarSlot.QuickbarSlot_C.ExecuteUbergraph_QuickbarSlot
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemCardSize       CallFunc_GetCardSize_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_AnimatedBoxScaleFactor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldSkipAnimation1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldSkipAnimation                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuickbarSlotCooldown_C*     K2Node_DynamicCast_AsQuickbar_Slot_Cooldown                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemDisplayStyle       Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// class UQuickbarSlotCooldown_C*     K2Node_DynamicCast_AsQuickbar_Slot_Cooldown1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSelected                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuickbarSlot_C::ExecuteUbergraph_QuickbarSlot(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue, enum class EFortItemCardSize CallFunc_GetCardSize_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_AnimatedBoxScaleFactor, class UTexture2D* Temp_object_Variable, bool K2Node_Event_bShouldSkipAnimation1, bool K2Node_SwitchEnum_CmpSuccess, class UTexture2D* Temp_object_Variable1, bool CallFunc_IsAnimationPlaying_ReturnValue, class UTexture2D* Temp_object_Variable2, class UTexture2D* Temp_object_Variable3, class UTexture2D* Temp_object_Variable4, bool K2Node_Event_bShouldSkipAnimation, class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue1, class UTexture2D* Temp_object_Variable5, class UTexture2D* Temp_object_Variable6, enum class EItemDisplayStyle Temp_byte_Variable2, class UTexture2D* K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UQuickbarSlotCooldown_C* K2Node_DynamicCast_AsQuickbar_Slot_Cooldown1, bool K2Node_DynamicCast_bSuccess1, bool K2Node_Event_bSelected, enum class ESlateVisibility K2Node_Select1_Default, float CallFunc_GetEndTime_ReturnValue)
{
	static auto Func = Class->GetFunction("QuickbarSlot_C", "ExecuteUbergraph_QuickbarSlot");

	Params::UQuickbarSlot_C_ExecuteUbergraph_QuickbarSlot_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetCardSize_ReturnValue = CallFunc_GetCardSize_ReturnValue;
	Parms.CallFunc_GetCardSize_ReturnValue1 = CallFunc_GetCardSize_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_AnimatedBoxScaleFactor = K2Node_CustomEvent_AnimatedBoxScaleFactor;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_Event_bShouldSkipAnimation1 = K2Node_Event_bShouldSkipAnimation1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.K2Node_Event_bShouldSkipAnimation = K2Node_Event_bShouldSkipAnimation;
	Parms.K2Node_DynamicCast_AsQuickbar_Slot_Cooldown = K2Node_DynamicCast_AsQuickbar_Slot_Cooldown;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue1 = CallFunc_IsAnimationPlaying_ReturnValue1;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_DynamicCast_AsQuickbar_Slot_Cooldown1 = K2Node_DynamicCast_AsQuickbar_Slot_Cooldown1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_Event_bSelected = K2Node_Event_bSelected;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
