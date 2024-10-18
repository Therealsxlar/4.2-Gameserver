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


// Function TabGameOptionsMain.TabGameOptionsMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabGameOptionsMain_C::Construct()
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "Construct");

	Params::UTabGameOptionsMain_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdatePossibleLanguages
// (Event, Public, BlueprintEvent)
// Parameters:

void UTabGameOptionsMain_C::UpdatePossibleLanguages()
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "UpdatePossibleLanguages");

	Params::UTabGameOptionsMain_C_UpdatePossibleLanguages_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGameOptionsMain_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "CenterOnTab");

	Params::UTabGameOptionsMain_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabGameOptionsMain_C::UpdateOptionsTab()
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "UpdateOptionsTab");

	Params::UTabGameOptionsMain_C_UpdateOptionsTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature_Params Parms;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.Setting Value Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::Setting_Value_Changed(float Slider_Value)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "Setting Value Changed");

	Params::UTabGameOptionsMain_C_Setting_Value_Changed_Params Parms;
	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature");

	Params::UTabGameOptionsMain_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabGameOptionsMain.TabGameOptionsMain_C.ExecuteUbergraph_TabGameOptionsMain
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuSetting_C*       K2Node_DynamicCast_AsOptions_Menu_Setting                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOptionsMenuSetting_C*       K2Node_DynamicCast_AsOptions_Menu_Setting1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Slider_Value                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabGameOptionsMain_C::ExecuteUbergraph_TabGameOptionsMain(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UOptionsMenuSetting_C* K2Node_DynamicCast_AsOptions_Menu_Setting, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_ComponentBoundEvent_Widget1, class UOptionsMenuSetting_C* K2Node_DynamicCast_AsOptions_Menu_Setting1, bool K2Node_DynamicCast_bSuccess1, float K2Node_CustomEvent_Slider_Value)
{
	static auto Func = Class->GetFunction("TabGameOptionsMain_C", "ExecuteUbergraph_TabGameOptionsMain");

	Params::UTabGameOptionsMain_C_ExecuteUbergraph_TabGameOptionsMain_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Setting = K2Node_DynamicCast_AsOptions_Menu_Setting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Widget1 = K2Node_ComponentBoundEvent_Widget1;
	Parms.K2Node_DynamicCast_AsOptions_Menu_Setting1 = K2Node_DynamicCast_AsOptions_Menu_Setting1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_CustomEvent_Slider_Value = K2Node_CustomEvent_Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
