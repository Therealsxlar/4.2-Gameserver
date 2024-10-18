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


// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.SetPurchaseText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PurchaseText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bHasBeenRefunded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaseHistoryEntry_C::SetPurchaseText(class FText& PurchaseText, bool bHasBeenRefunded)
{
	static auto Func = Class->GetFunction("PurchaseHistoryEntry_C", "SetPurchaseText");

	Params::UPurchaseHistoryEntry_C_SetPurchaseText_Params Parms;
	Parms.PurchaseText = PurchaseText;
	Parms.bHasBeenRefunded = bHasBeenRefunded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.DisableAppearance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaseHistoryEntry_C::DisableAppearance(bool IsDisabled)
{
	static auto Func = Class->GetFunction("PurchaseHistoryEntry_C", "DisableAppearance");

	Params::UPurchaseHistoryEntry_C_DisableAppearance_Params Parms;
	Parms.IsDisabled = IsDisabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaseHistoryEntry_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("PurchaseHistoryEntry_C", "PreConstruct");

	Params::UPurchaseHistoryEntry_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaseHistoryEntry.PurchaseHistoryEntry_C.ExecuteUbergraph_PurchaseHistoryEntry
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_PurchaseText                                        (ConstParm)
// bool                               K2Node_Event_bHasBeenRefunded                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isDisabled                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaseHistoryEntry_C::ExecuteUbergraph_PurchaseHistoryEntry(int32 EntryPoint, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable1, bool Temp_bool_Variable1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, class FText K2Node_Event_PurchaseText, bool K2Node_Event_bHasBeenRefunded, bool K2Node_CustomEvent_isDisabled, class UMaterialInterface* K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("PurchaseHistoryEntry_C", "ExecuteUbergraph_PurchaseHistoryEntry");

	Params::UPurchaseHistoryEntry_C_ExecuteUbergraph_PurchaseHistoryEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_Event_PurchaseText = K2Node_Event_PurchaseText;
	Parms.K2Node_Event_bHasBeenRefunded = K2Node_Event_bHasBeenRefunded;
	Parms.K2Node_CustomEvent_isDisabled = K2Node_CustomEvent_isDisabled;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
