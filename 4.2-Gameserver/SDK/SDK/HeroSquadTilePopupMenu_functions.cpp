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


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.GetItemInSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSquadSlotSelectorButton*CallFunc_GetHostButton_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInSquadSlotBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroSquadTilePopupMenu_C::GetItemInSlot(class UFortItem** Item, class UFortSquadSlotSelectorButton* CallFunc_GetHostButton_ReturnValue, class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue)
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "GetItemInSlot");

	Params::UHeroSquadTilePopupMenu_C_GetItemInSlot_Params Parms;
	Parms.CallFunc_GetHostButton_ReturnValue = CallFunc_GetHostButton_ReturnValue;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_GetItemInSquadSlotBP_ReturnValue = CallFunc_GetItemInSquadSlotBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Item != nullptr)
		*Item = Parms.Item;

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.SetViewAllText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHeroSquadTilePopupMenu_C::SetViewAllText()
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "SetViewAllText");

	Params::UHeroSquadTilePopupMenu_C_SetViewAllText_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHeroSquadTilePopupMenu_C::OnActivated()
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "OnActivated");

	Params::UHeroSquadTilePopupMenu_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroSquadTilePopupMenu_C::BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");

	Params::UHeroSquadTilePopupMenu_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHeroSquadTilePopupMenu_C::Construct()
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "Construct");

	Params::UHeroSquadTilePopupMenu_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroSquadTilePopupMenu_C::BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature");

	Params::UHeroSquadTilePopupMenu_C_BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.OnBeginOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UHeroSquadTilePopupMenu_C::OnBeginOutro()
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "OnBeginOutro");

	Params::UHeroSquadTilePopupMenu_C_OnBeginOutro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.OnBeginIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UHeroSquadTilePopupMenu_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "OnBeginIntro");

	Params::UHeroSquadTilePopupMenu_C_OnBeginIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroSquadTilePopupMenu_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature");

	Params::UHeroSquadTilePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHeroSquadTilePopupMenu_C::BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UHeroSquadTilePopupMenu_C_BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroSquadTilePopupMenu_C::BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature");

	Params::UHeroSquadTilePopupMenu_C_BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroSquadTilePopupMenu_C::BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature");

	Params::UHeroSquadTilePopupMenu_C_BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.HandlePostDifferentContextProviderSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHeroSquadTilePopupMenu_C::HandlePostDifferentContextProviderSet()
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "HandlePostDifferentContextProviderSet");

	Params::UHeroSquadTilePopupMenu_C_HandlePostDifferentContextProviderSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHeroSquadTilePopupMenu_C::Initialize()
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "Initialize");

	Params::UHeroSquadTilePopupMenu_C_Initialize_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UHeroSquadTilePopupMenu_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "OnDeactivated");

	Params::UHeroSquadTilePopupMenu_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HeroSquadTilePopupMenu.HeroSquadTilePopupMenu_C.ExecuteUbergraph_HeroSquadTilePopupMenu
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetItemInSlot_Item                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFavorite_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSquadSlotSelectorButton*CallFunc_GetHostButton_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSquadSlotSelectorButton*CallFunc_GetHostButton_ReturnValue1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetItemInSlot_Item1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFavorite_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetItemInSlot_Item2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroSquadTilePopupMenu_C::ExecuteUbergraph_HeroSquadTilePopupMenu(int32 EntryPoint, class UWidget* CallFunc_GetChildAt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, class UFortItem* CallFunc_GetItemInSlot_Item, enum class EFortItemType CallFunc_GetType_ReturnValue, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float Temp_float_Variable, bool K2Node_SwitchEnum1_CmpSuccess, float Temp_float_Variable1, class UFortSquadSlotSelectorButton* CallFunc_GetHostButton_ReturnValue, class UFortSquadSlotSelectorButton* CallFunc_GetHostButton_ReturnValue1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1, bool Temp_bool_Variable1, class UFortItem* CallFunc_GetItemInSlot_Item1, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item1, bool K2Node_DynamicCast_bSuccess1, float K2Node_Select1_Default, bool CallFunc_IsFavorite_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, class UFortItem* CallFunc_GetItemInSlot_Item2)
{
	static auto Func = Class->GetFunction("HeroSquadTilePopupMenu_C", "ExecuteUbergraph_HeroSquadTilePopupMenu");

	Params::UHeroSquadTilePopupMenu_C_ExecuteUbergraph_HeroSquadTilePopupMenu_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetItemInSlot_Item = CallFunc_GetItemInSlot_Item;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsFavorite_ReturnValue = CallFunc_IsFavorite_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_EqualEqual_ByteByte_ReturnValue2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.CallFunc_GetHostButton_ReturnValue = CallFunc_GetHostButton_ReturnValue;
	Parms.CallFunc_GetHostButton_ReturnValue1 = CallFunc_GetHostButton_ReturnValue1;
	Parms.CallFunc_GetUINavigationManager_ReturnValue1 = CallFunc_GetUINavigationManager_ReturnValue1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetItemInSlot_Item1 = CallFunc_GetItemInSlot_Item1;
	Parms.K2Node_DynamicCast_AsFort_Account_Item1 = K2Node_DynamicCast_AsFort_Account_Item1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_IsFavorite_ReturnValue1 = CallFunc_IsFavorite_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetItemInSlot_Item2 = CallFunc_GetItemInSlot_Item2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
