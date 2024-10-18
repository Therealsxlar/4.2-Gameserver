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


// Function MulchWarning.MulchWarning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMulchWarning_C::Construct()
{
	static auto Func = Class->GetFunction("MulchWarning_C", "Construct");

	Params::UMulchWarning_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MulchWarning.MulchWarning_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMulchWarning_C::SetSelected(bool Selected)
{
	static auto Func = Class->GetFunction("MulchWarning_C", "SetSelected");

	Params::UMulchWarning_C_SetSelected_Params Parms;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MulchWarning.MulchWarning_C.ExecuteUbergraph_MulchWarning
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Selected                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMulchWarning_C::ExecuteUbergraph_MulchWarning(int32 EntryPoint, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, bool Temp_bool_Variable1, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, bool K2Node_CustomEvent_Selected, class UClass* K2Node_Select_Default, class UClass* K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("MulchWarning_C", "ExecuteUbergraph_MulchWarning");

	Params::UMulchWarning_C_ExecuteUbergraph_MulchWarning_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_class_Variable3 = Temp_class_Variable3;
	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
