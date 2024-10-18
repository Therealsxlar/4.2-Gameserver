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


// Function NetDebugContainer.NetDebugContainer_C.OnVisibilitySetEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNetDebugContainer_C::OnVisibilitySetEvent(enum class ESlateVisibility InVisibility)
{
	static auto Func = Class->GetFunction("NetDebugContainer_C", "OnVisibilitySetEvent");

	Params::UNetDebugContainer_C_OnVisibilitySetEvent_Params Parms;
	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NetDebugContainer.NetDebugContainer_C.ExecuteUbergraph_NetDebugContainer
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Event_InVisibility                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNetDebugContainer_C::ExecuteUbergraph_NetDebugContainer(int32 EntryPoint, enum class ESlateVisibility K2Node_Event_InVisibility, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("NetDebugContainer_C", "ExecuteUbergraph_NetDebugContainer");

	Params::UNetDebugContainer_C_ExecuteUbergraph_NetDebugContainer_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InVisibility = K2Node_Event_InVisibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
