#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x11 - 0x0)
// Function AthenaInventoryDragDrop.AthenaInventoryDragDrop_C.ShowDropIcon
struct UAthenaInventoryDragDrop_C_ShowDropIcon_Params
{
public:
	enum class EAthenaDragDropAction             Drop_Action;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaInventoryDragVisual_C*          K2Node_DynamicCast_AsAthena_Inventory_Drag_Visual; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
