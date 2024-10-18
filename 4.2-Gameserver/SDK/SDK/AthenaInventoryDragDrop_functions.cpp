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


// Function AthenaInventoryDragDrop.AthenaInventoryDragDrop_C.ShowDropIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaDragDropAction   Drop_Action                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaInventoryDragVisual_C*K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaInventoryDragDrop_C::ShowDropIcon(enum class EAthenaDragDropAction Drop_Action, class UAthenaInventoryDragVisual_C* K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaInventoryDragDrop_C", "ShowDropIcon");

	Params::UAthenaInventoryDragDrop_C_ShowDropIcon_Params Parms;
	Parms.Drop_Action = Drop_Action;
	Parms.K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual = K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
