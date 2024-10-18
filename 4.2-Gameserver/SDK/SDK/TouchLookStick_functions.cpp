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


// Function TouchLookStick.TouchLookStick_C.SetBrushForStatus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InBuild_or_Edit_Mode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_RC_Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Found_Context                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_SetBrushFromAtlasInterface_AtlasRegion1_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_SetBrushFromAtlasInterface_AtlasRegion2_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForTag_HasTag                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForTag_HasTag1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_SetBrushFromAtlasInterface_AtlasRegion3_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_SetBrushFromAtlasInterface_AtlasRegion4_CastInput       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTouchLookStick_C::SetBrushForStatus(bool InBuild_or_Edit_Mode, bool Is_RC_Pawn, bool* Found_Context, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion1_CastInput, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion2_CastInput, bool CallFunc_CheckForTag_HasTag, bool CallFunc_CheckForTag_HasTag1, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion3_CastInput, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion4_CastInput)
{
	static auto Func = Class->GetFunction("TouchLookStick_C", "SetBrushForStatus");

	Params::UTouchLookStick_C_SetBrushForStatus_Params Parms;
	Parms.InBuild_or_Edit_Mode = InBuild_or_Edit_Mode;
	Parms.Is_RC_Pawn = Is_RC_Pawn;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput = CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion1_CastInput = CallFunc_SetBrushFromAtlasInterface_AtlasRegion1_CastInput;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion2_CastInput = CallFunc_SetBrushFromAtlasInterface_AtlasRegion2_CastInput;
	Parms.CallFunc_CheckForTag_HasTag = CallFunc_CheckForTag_HasTag;
	Parms.CallFunc_CheckForTag_HasTag1 = CallFunc_CheckForTag_HasTag1;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion3_CastInput = CallFunc_SetBrushFromAtlasInterface_AtlasRegion3_CastInput;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion4_CastInput = CallFunc_SetBrushFromAtlasInterface_AtlasRegion4_CastInput;

	UObject::ProcessEvent(Func, &Parms);

	if (Found_Context != nullptr)
		*Found_Context = Parms.Found_Context;

}


// Function TouchLookStick.TouchLookStick_C.CheckForTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                TagToCheck                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               HasTag                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuickBars          CallFunc_GetQuickbarFocus_OutQuickBar                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutSecondarySlot                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetQuickBarSlottedItem_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTouchLookStick_C::CheckForTag(const struct FGameplayTag& TagToCheck, bool* HasTag, bool Temp_bool_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue)
{
	static auto Func = Class->GetFunction("TouchLookStick_C", "CheckForTag");

	Params::UTouchLookStick_C_CheckForTag_Params Parms;
	Parms.TagToCheck = TagToCheck;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetQuickbarFocus_OutQuickBar = CallFunc_GetQuickbarFocus_OutQuickBar;
	Parms.CallFunc_GetQuickbarFocus_OutSlot = CallFunc_GetQuickbarFocus_OutSlot;
	Parms.CallFunc_GetQuickbarFocus_OutSecondarySlot = CallFunc_GetQuickbarFocus_OutSecondarySlot;
	Parms.CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot = CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot;
	Parms.CallFunc_GetQuickBarSlottedItem_ReturnValue = CallFunc_GetQuickBarSlottedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasTag != nullptr)
		*HasTag = Parms.HasTag;

}


// Function TouchLookStick.TouchLookStick_C.HandleWeaponChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               In_Build_or_Edit_Mode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RC_Pawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetBrushForStatus_Found_Context                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseTapToShoot_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTouchLookStick_C::HandleWeaponChanged(bool In_Build_or_Edit_Mode, bool RC_Pawn, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_SetBrushForStatus_Found_Context, bool CallFunc_UseTapToShoot_ReturnValue)
{
	static auto Func = Class->GetFunction("TouchLookStick_C", "HandleWeaponChanged");

	Params::UTouchLookStick_C_HandleWeaponChanged_Params Parms;
	Parms.In_Build_or_Edit_Mode = In_Build_or_Edit_Mode;
	Parms.RC_Pawn = RC_Pawn;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_SetBrushForStatus_Found_Context = CallFunc_SetBrushForStatus_Found_Context;
	Parms.CallFunc_UseTapToShoot_ReturnValue = CallFunc_UseTapToShoot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TouchLookStick.TouchLookStick_C.IsFireButtonUnderTouch
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   TouchPosition                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUnderLocation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UTouchLookStick_C::IsFireButtonUnderTouch(const struct FVector2D& TouchPosition, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, bool CallFunc_IsUnderLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("TouchLookStick_C", "IsFireButtonUnderTouch");

	Params::UTouchLookStick_C_IsFireButtonUnderTouch_Params Parms;
	Parms.TouchPosition = TouchPosition;
	Parms.CallFunc_GetCachedGeometry_ReturnValue = CallFunc_GetCachedGeometry_ReturnValue;
	Parms.CallFunc_IsUnderLocation_ReturnValue = CallFunc_IsUnderLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TouchLookStick.TouchLookStick_C.HandleTouchEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTouchLookStick_C::HandleTouchEnded()
{
	static auto Func = Class->GetFunction("TouchLookStick_C", "HandleTouchEnded");

	Params::UTouchLookStick_C_HandleTouchEnded_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TouchLookStick.TouchLookStick_C.HandleTouchStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTouchLookStick_C::HandleTouchStarted()
{
	static auto Func = Class->GetFunction("TouchLookStick_C", "HandleTouchStarted");

	Params::UTouchLookStick_C_HandleTouchStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TouchLookStick.TouchLookStick_C.SetStickPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   NewPosition                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTouchLookStick_C::SetStickPosition(const struct FVector2D& NewPosition, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("TouchLookStick_C", "SetStickPosition");

	Params::UTouchLookStick_C_SetStickPosition_Params Parms;
	Parms.NewPosition = NewPosition;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TouchLookStick.TouchLookStick_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTouchLookStick_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("TouchLookStick_C", "PreConstruct");

	Params::UTouchLookStick_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TouchLookStick.TouchLookStick_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTouchLookStick_C::Construct()
{
	static auto Func = Class->GetFunction("TouchLookStick_C", "Construct");

	Params::UTouchLookStick_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TouchLookStick.TouchLookStick_C.SetFiringState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFiring                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTouchLookStick_C::SetFiringState(bool IsFiring)
{
	static auto Func = Class->GetFunction("TouchLookStick_C", "SetFiringState");

	Params::UTouchLookStick_C_SetFiringState_Params Parms;
	Parms.IsFiring = IsFiring;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TouchLookStick.TouchLookStick_C.Weapon Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 NewWeapon                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 PrevWeapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTouchLookStick_C::Weapon_Change(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static auto Func = Class->GetFunction("TouchLookStick_C", "Weapon Change");

	Params::UTouchLookStick_C_Weapon_Change_Params Parms;
	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TouchLookStick.TouchLookStick_C.OnHUDStateUpdate
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortHUDState               NewState                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UTouchLookStick_C::OnHUDStateUpdate(struct FFortHUDState& NewState)
{
	static auto Func = Class->GetFunction("TouchLookStick_C", "OnHUDStateUpdate");

	Params::UTouchLookStick_C_OnHUDStateUpdate_Params Parms;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TouchLookStick.TouchLookStick_C.ExecuteUbergraph_TouchLookStick
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortHUDState               CallFunc_GetCurrentHUDState_ReturnValue                          (ConstParm, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsFiring                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeapon*                 K2Node_CustomEvent_NewWeapon                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 K2Node_CustomEvent_PrevWeapon                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHUDState               K2Node_Event_NewState                                            (ConstParm, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseTapToShoot_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UTouchLookStick_C::ExecuteUbergraph_TouchLookStick(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FFortHUDState& CallFunc_GetCurrentHUDState_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Event_IsFiring, class AFortWeapon* K2Node_CustomEvent_NewWeapon, class AFortWeapon* K2Node_CustomEvent_PrevWeapon, const struct FFortHUDState& K2Node_Event_NewState, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_UseTapToShoot_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("TouchLookStick_C", "ExecuteUbergraph_TouchLookStick");

	Params::UTouchLookStick_C_ExecuteUbergraph_TouchLookStick_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCurrentHUDState_ReturnValue = CallFunc_GetCurrentHUDState_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_IsFiring = K2Node_Event_IsFiring;
	Parms.K2Node_CustomEvent_NewWeapon = K2Node_CustomEvent_NewWeapon;
	Parms.K2Node_CustomEvent_PrevWeapon = K2Node_CustomEvent_PrevWeapon;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_UseTapToShoot_ReturnValue = CallFunc_UseTapToShoot_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
