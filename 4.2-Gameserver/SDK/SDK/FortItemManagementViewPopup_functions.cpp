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


// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.SetupCheckboxes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemManagementScreen_C*     ItemManagementScreen                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShouldShowCollectionBookIndicator_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetShouldPrioritizeFavorites_SortFavoritesSeparately    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortItemManagementViewPopup_C::SetupCheckboxes(class UItemManagementScreen_C* ItemManagementScreen, bool CallFunc_GetShouldShowCollectionBookIndicator_ReturnValue, bool CallFunc_GetShouldPrioritizeFavorites_SortFavoritesSeparately, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("FortItemManagementViewPopup_C", "SetupCheckboxes");

	Params::UFortItemManagementViewPopup_C_SetupCheckboxes_Params Parms;
	Parms.ItemManagementScreen = ItemManagementScreen;
	Parms.CallFunc_GetShouldShowCollectionBookIndicator_ReturnValue = CallFunc_GetShouldShowCollectionBookIndicator_ReturnValue;
	Parms.CallFunc_GetShouldPrioritizeFavorites_SortFavoritesSeparately = CallFunc_GetShouldPrioritizeFavorites_SortFavoritesSeparately;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen = K2Node_DynamicCast_AsItem_Management_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.CheckboxUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      CheckboxImage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Check                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable1                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortItemManagementViewPopup_C::CheckboxUpdate(class UImage* CheckboxImage, bool Check, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable1, bool Temp_bool_Variable1, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue, float Temp_float_Variable, float Temp_float_Variable1, float K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("FortItemManagementViewPopup_C", "CheckboxUpdate");

	Params::UFortItemManagementViewPopup_C_CheckboxUpdate_Params Parms;
	Parms.CheckboxImage = CheckboxImage;
	Parms.Check = Check;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable1 = Temp_string_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.BndEvt__ToggleSizeButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortItemManagementViewPopup_C::BndEvt__ToggleSizeButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortItemManagementViewPopup_C", "BndEvt__ToggleSizeButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature");

	Params::UFortItemManagementViewPopup_C_BndEvt__ToggleSizeButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementViewPopup_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("FortItemManagementViewPopup_C", "OnDeactivated");

	Params::UFortItemManagementViewPopup_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortItemManagementViewPopup_C::OnActivated()
{
	static auto Func = Class->GetFunction("FortItemManagementViewPopup_C", "OnActivated");

	Params::UFortItemManagementViewPopup_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortItemManagementViewPopup_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortItemManagementViewPopup_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::UFortItemManagementViewPopup_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.BndEvt__IconCheckmarkTextButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortItemManagementViewPopup_C::BndEvt__IconCheckmarkTextButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortItemManagementViewPopup_C", "BndEvt__IconCheckmarkTextButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature");

	Params::UFortItemManagementViewPopup_C_BndEvt__IconCheckmarkTextButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.BndEvt__CollectionBookCheckmarkButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortItemManagementViewPopup_C::BndEvt__CollectionBookCheckmarkButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FortItemManagementViewPopup_C", "BndEvt__CollectionBookCheckmarkButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature");

	Params::UFortItemManagementViewPopup_C_BndEvt__CollectionBookCheckmarkButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.ExecuteUbergraph_FortItemManagementViewPopup
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemManagementScreen_C*     K2Node_DynamicCast_AsItem_Management_Screen2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortItemManagementViewPopup_C::ExecuteUbergraph_FortItemManagementViewPopup(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen, bool K2Node_DynamicCast_bSuccess, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen1, bool K2Node_DynamicCast_bSuccess1, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UItemManagementScreen_C* K2Node_DynamicCast_AsItem_Management_Screen2, bool K2Node_DynamicCast_bSuccess2)
{
	static auto Func = Class->GetFunction("FortItemManagementViewPopup_C", "ExecuteUbergraph_FortItemManagementViewPopup");

	Params::UFortItemManagementViewPopup_C_ExecuteUbergraph_FortItemManagementViewPopup_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen = K2Node_DynamicCast_AsItem_Management_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen1 = K2Node_DynamicCast_AsItem_Management_Screen1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_DynamicCast_AsItem_Management_Screen2 = K2Node_DynamicCast_AsItem_Management_Screen2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
