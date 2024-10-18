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


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Refresh Visibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemDetailsStackCounter_C::Refresh_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemDetailsStackCounter_C", "Refresh Visibility");

	Params::UItemDetailsStackCounter_C_Refresh_Visibility_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Update Stack Count
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Truncate_Integer_Value_Formatted_Value                  ()
// int32                              CallFunc_GetNumInStack_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()

void UItemDetailsStackCounter_C::Update_Stack_Count(bool Temp_bool_Variable, class FText CallFunc_Truncate_Integer_Value_Formatted_Value, int32 CallFunc_GetNumInStack_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemDetailsStackCounter_C", "Update Stack Count");

	Params::UItemDetailsStackCounter_C_Update_Stack_Count_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Truncate_Integer_Value_Formatted_Value = CallFunc_Truncate_Integer_Value_Formatted_Value;
	Parms.CallFunc_GetNumInStack_ReturnValue = CallFunc_GetNumInStack_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemDetailsStackCounter_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ItemDetailsStackCounter_C", "PreConstruct");

	Params::UItemDetailsStackCounter_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemDetailsStackCounter_C::Construct()
{
	static auto Func = Class->GetFunction("ItemDetailsStackCounter_C", "Construct");

	Params::UItemDetailsStackCounter_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandlePreDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemDetailsStackCounter_C::HandlePreDifferentItemToDetailSet()
{
	static auto Func = Class->GetFunction("ItemDetailsStackCounter_C", "HandlePreDifferentItemToDetailSet");

	Params::UItemDetailsStackCounter_C_HandlePreDifferentItemToDetailSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemDetailsStackCounter_C::HandlePostDifferentItemToDetailSet()
{
	static auto Func = Class->GetFunction("ItemDetailsStackCounter_C", "HandlePostDifferentItemToDetailSet");

	Params::UItemDetailsStackCounter_C_HandlePostDifferentItemToDetailSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.HandleOnItemChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bItemChanged                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoChanged                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIngredientsChanged                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemDetailsStackCounter_C::HandleOnItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static auto Func = Class->GetFunction("ItemDetailsStackCounter_C", "HandleOnItemChanged");

	Params::UItemDetailsStackCounter_C_HandleOnItemChanged_Params Parms;
	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemDetailsStackCounter.ItemDetailsStackCounter_C.ExecuteUbergraph_ItemDetailsStackCounter
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bItemChanged                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bAmmoChanged                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bIngredientsChanged                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemDetailsStackCounter_C::ExecuteUbergraph_ItemDetailsStackCounter(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_bItemChanged, bool K2Node_CustomEvent_bAmmoChanged, bool K2Node_CustomEvent_bIngredientsChanged, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static auto Func = Class->GetFunction("ItemDetailsStackCounter_C", "ExecuteUbergraph_ItemDetailsStackCounter");

	Params::UItemDetailsStackCounter_C_ExecuteUbergraph_ItemDetailsStackCounter_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_bItemChanged = K2Node_CustomEvent_bItemChanged;
	Parms.K2Node_CustomEvent_bAmmoChanged = K2Node_CustomEvent_bAmmoChanged;
	Parms.K2Node_CustomEvent_bIngredientsChanged = K2Node_CustomEvent_bIngredientsChanged;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
