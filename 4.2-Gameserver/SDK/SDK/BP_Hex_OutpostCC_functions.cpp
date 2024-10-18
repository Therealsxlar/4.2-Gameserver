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


// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_OutpostCC_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_Hex_OutpostCC_C", "UserConstructionScript");

	Params::ABP_Hex_OutpostCC_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Hex_OutpostCC_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_Hex_OutpostCC_C", "ReceiveBeginPlay");

	Params::ABP_Hex_OutpostCC_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.ActivateOutpost
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Hex_OutpostCC_C::ActivateOutpost()
{
	static auto Func = Class->GetFunction("BP_Hex_OutpostCC_C", "ActivateOutpost");

	Params::ABP_Hex_OutpostCC_C_ActivateOutpost_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.HandleOnPlayerInfoChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            UniqueId                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ABP_Hex_OutpostCC_C::HandleOnPlayerInfoChanged(struct FUniqueNetIdRepl& UniqueId)
{
	static auto Func = Class->GetFunction("BP_Hex_OutpostCC_C", "HandleOnPlayerInfoChanged");

	Params::ABP_Hex_OutpostCC_C_HandleOnPlayerInfoChanged_Params Parms;
	Parms.UniqueId = UniqueId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.ExecuteUbergraph_BP_Hex_OutpostCC
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            K2Node_CustomEvent_UniqueId                                      (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHomeBaseContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Hex_OutpostCC_C::ExecuteUbergraph_BP_Hex_OutpostCC(int32 EntryPoint, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FUniqueNetIdRepl& K2Node_CustomEvent_UniqueId, bool CallFunc_IsValid_ReturnValue, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue1)
{
	static auto Func = Class->GetFunction("BP_Hex_OutpostCC_C", "ExecuteUbergraph_BP_Hex_OutpostCC");

	Params::ABP_Hex_OutpostCC_C_ExecuteUbergraph_BP_Hex_OutpostCC_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CustomEvent_UniqueId = K2Node_CustomEvent_UniqueId;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
