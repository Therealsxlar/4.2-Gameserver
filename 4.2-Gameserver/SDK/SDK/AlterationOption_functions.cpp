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


// Function AlterationOption.AlterationOption_C.IntroPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAlterationOption_C::IntroPlay()
{
	static auto Func = Class->GetFunction("AlterationOption_C", "IntroPlay");

	Params::UAlterationOption_C_IntroPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOption.AlterationOption_C.IntroReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAlterationOption_C::IntroReset()
{
	static auto Func = Class->GetFunction("AlterationOption_C", "IntroReset");

	Params::UAlterationOption_C_IntroReset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOption.AlterationOption_C.SetupPips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Mid                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefinition_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// float                              CallFunc_GetNextPipCount_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentPipCount_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOption_C::SetupPips(class UMaterialInstanceDynamic* Mid, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefinition_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, float CallFunc_GetNextPipCount_ReturnValue, float CallFunc_GetCurrentPipCount_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationOption_C", "SetupPips");

	Params::UAlterationOption_C_SetupPips_Params Parms;
	Parms.Mid = Mid;
	Parms.CallFunc_GetAlterationDefinition_ReturnValue = CallFunc_GetAlterationDefinition_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_GetNextPipCount_ReturnValue = CallFunc_GetNextPipCount_ReturnValue;
	Parms.CallFunc_GetCurrentPipCount_ReturnValue = CallFunc_GetCurrentPipCount_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOption.AlterationOption_C.OnSetup
// (Event, Public, BlueprintEvent)
// Parameters:

void UAlterationOption_C::OnSetup()
{
	static auto Func = Class->GetFunction("AlterationOption_C", "OnSetup");

	Params::UAlterationOption_C_OnSetup_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationOption.AlterationOption_C.ExecuteUbergraph_AlterationOption
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefinition_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSingleLineDescription_ReturnValue                    ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UAlterationOption_C::ExecuteUbergraph_AlterationOption(int32 EntryPoint, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefinition_ReturnValue, class FText CallFunc_GetSingleLineDescription_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("AlterationOption_C", "ExecuteUbergraph_AlterationOption");

	Params::UAlterationOption_C_ExecuteUbergraph_AlterationOption_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAlterationDefinition_ReturnValue = CallFunc_GetAlterationDefinition_ReturnValue;
	Parms.CallFunc_GetSingleLineDescription_ReturnValue = CallFunc_GetSingleLineDescription_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
