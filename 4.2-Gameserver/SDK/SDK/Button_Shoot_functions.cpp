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


// Function Button_Shoot.Button_Shoot_C.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UButton_Shoot_C::OnTouchMoved(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("Button_Shoot_C", "OnTouchMoved");

	Params::UButton_Shoot_C_OnTouchMoved_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Button_Shoot.Button_Shoot_C.Check For Tag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
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

void UButton_Shoot_C::Check_For_Tag(const struct FGameplayTag& TagToCheck, bool* HasTag, bool Temp_bool_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, enum class EFortQuickBars CallFunc_GetQuickbarFocus_OutQuickBar, int32 CallFunc_GetQuickbarFocus_OutSlot, int32 CallFunc_GetQuickbarFocus_OutSecondarySlot, int32 CallFunc_GetQuickbarFocus_OutPreviousFocusedSlot, class UFortItem* CallFunc_GetQuickBarSlottedItem_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue)
{
	static auto Func = Class->GetFunction("Button_Shoot_C", "Check For Tag");

	Params::UButton_Shoot_C_Check_For_Tag_Params Parms;
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


// Function Button_Shoot.Button_Shoot_C.HandleWeaponChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                 New_Weapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                 Previous_Weapon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_For_Tag_HasTag                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_For_Tag_HasTag1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_For_Tag_HasTag2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_For_Tag_HasTag3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_For_Tag_HasTag4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_For_Tag_HasTag5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInBuildMode_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAbilitySystemContext*   CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UButton_Shoot_C::HandleWeaponChanged(class AFortWeapon* New_Weapon, class AFortWeapon* Previous_Weapon, bool CallFunc_Check_For_Tag_HasTag, bool CallFunc_Check_For_Tag_HasTag1, bool CallFunc_Check_For_Tag_HasTag2, bool CallFunc_Check_For_Tag_HasTag3, bool CallFunc_Check_For_Tag_HasTag4, bool CallFunc_Check_For_Tag_HasTag5, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsInBuildMode_ReturnValue, class UFortAbilitySystemContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_HasMatchingGameplayTag_ReturnValue)
{
	static auto Func = Class->GetFunction("Button_Shoot_C", "HandleWeaponChanged");

	Params::UButton_Shoot_C_HandleWeaponChanged_Params Parms;
	Parms.New_Weapon = New_Weapon;
	Parms.Previous_Weapon = Previous_Weapon;
	Parms.CallFunc_Check_For_Tag_HasTag = CallFunc_Check_For_Tag_HasTag;
	Parms.CallFunc_Check_For_Tag_HasTag1 = CallFunc_Check_For_Tag_HasTag1;
	Parms.CallFunc_Check_For_Tag_HasTag2 = CallFunc_Check_For_Tag_HasTag2;
	Parms.CallFunc_Check_For_Tag_HasTag3 = CallFunc_Check_For_Tag_HasTag3;
	Parms.CallFunc_Check_For_Tag_HasTag4 = CallFunc_Check_For_Tag_HasTag4;
	Parms.CallFunc_Check_For_Tag_HasTag5 = CallFunc_Check_For_Tag_HasTag5;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsInBuildMode_ReturnValue = CallFunc_IsInBuildMode_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_Shoot.Button_Shoot_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_CaptureMouse_ReturnValue                                ()

struct FEventReply UButton_Shoot_C::OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_CaptureMouse_ReturnValue)
{
	static auto Func = Class->GetFunction("Button_Shoot_C", "OnTouchStarted");

	Params::UButton_Shoot_C_OnTouchStarted_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CaptureMouse_ReturnValue = CallFunc_CaptureMouse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Button_Shoot.Button_Shoot_C.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()
// struct FEventReply                 CallFunc_ReleaseMouseCapture_ReturnValue                         ()

struct FEventReply UButton_Shoot_C::OnTouchEnded(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_ReleaseMouseCapture_ReturnValue)
{
	static auto Func = Class->GetFunction("Button_Shoot_C", "OnTouchEnded");

	Params::UButton_Shoot_C_OnTouchEnded_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_ReleaseMouseCapture_ReturnValue = CallFunc_ReleaseMouseCapture_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Button_Shoot.Button_Shoot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UButton_Shoot_C::Construct()
{
	static auto Func = Class->GetFunction("Button_Shoot_C", "Construct");

	Params::UButton_Shoot_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_Shoot.Button_Shoot_C.On Build Mode Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEntering                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UButton_Shoot_C::On_Build_Mode_Changed(bool bEntering)
{
	static auto Func = Class->GetFunction("Button_Shoot_C", "On Build Mode Changed");

	Params::UButton_Shoot_C_On_Build_Mode_Changed_Params Parms;
	Parms.bEntering = bEntering;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_Shoot.Button_Shoot_C.ExecuteUbergraph_Button_Shoot
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bEntering                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)

void UButton_Shoot_C::ExecuteUbergraph_Button_Shoot(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool K2Node_CustomEvent_bEntering, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1)
{
	static auto Func = Class->GetFunction("Button_Shoot_C", "ExecuteUbergraph_Button_Shoot");

	Params::UButton_Shoot_C_ExecuteUbergraph_Button_Shoot_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CustomEvent_bEntering = K2Node_CustomEvent_bEntering;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
