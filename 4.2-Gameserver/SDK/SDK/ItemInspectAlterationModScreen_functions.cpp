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


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.UpdateColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()

void UItemInspectAlterationModScreen_C::UpdateColors(enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "UpdateColors");

	Params::UItemInspectAlterationModScreen_C_UpdateColors_Params Parms;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupTriangles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::SetupTriangles(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "SetupTriangles");

	Params::UItemInspectAlterationModScreen_C_SetupTriangles_Params Parms;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.SetupHeaderColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::SetupHeaderColors(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "SetupHeaderColors");

	Params::UItemInspectAlterationModScreen_C_SetupHeaderColors_Params Parms;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.OnAlterationModificationCompleted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModScreen_C::OnAlterationModificationCompleted()
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "OnAlterationModificationCompleted");

	Params::UItemInspectAlterationModScreen_C_OnAlterationModificationCompleted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.RefreshItemAndAlterationsBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemInspectAlterationModScreen_C::RefreshItemAndAlterationsBP()
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "RefreshItemAndAlterationsBP");

	Params::UItemInspectAlterationModScreen_C_RefreshItemAndAlterationsBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectAlterationModScreen.ItemInspectAlterationModScreen_C.ExecuteUbergraph_ItemInspectAlterationModScreen
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectAlterationModScreen_C::ExecuteUbergraph_ItemInspectAlterationModScreen(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemInspectAlterationModScreen_C", "ExecuteUbergraph_ItemInspectAlterationModScreen");

	Params::UItemInspectAlterationModScreen_C_ExecuteUbergraph_ItemInspectAlterationModScreen_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
