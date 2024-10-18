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


// Function FortReplayCameraOption.FortReplayCameraOption_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortReplayCameraOption_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("FortReplayCameraOption_C", "BP_OnClicked");

	Params::UFortReplayCameraOption_C_BP_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraOption.FortReplayCameraOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFortReplayCameraOption_C::Construct()
{
	static auto Func = Class->GetFunction("FortReplayCameraOption_C", "Construct");

	Params::UFortReplayCameraOption_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortReplayCameraOption.FortReplayCameraOption_C.ExecuteUbergraph_FortReplayCameraOption
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerSpectating*K2Node_DynamicCast_AsFort_Player_Controller_Spectating           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCameraNameFromType_ReturnValue                       ()

void UFortReplayCameraOption_C::ExecuteUbergraph_FortReplayCameraOption(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCameraNameFromType_ReturnValue)
{
	static auto Func = Class->GetFunction("FortReplayCameraOption_C", "ExecuteUbergraph_FortReplayCameraOption");

	Params::UFortReplayCameraOption_C_ExecuteUbergraph_FortReplayCameraOption_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Spectating = K2Node_DynamicCast_AsFort_Player_Controller_Spectating;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCameraNameFromType_ReturnValue = CallFunc_GetCameraNameFromType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
