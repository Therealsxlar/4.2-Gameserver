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

// 0x0 (0x0 - 0x0)
// Function ItemReceivedVariationReceived.ItemReceivedVariationReceived_C.InitFromGiftBoxItem_BP
struct UItemReceivedVariationReceived_C_InitFromGiftBoxItem_BP_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function ItemReceivedVariationReceived.ItemReceivedVariationReceived_C.ExecuteUbergraph_ItemReceivedVariationReceived
struct UItemReceivedVariationReceived_C_ExecuteUbergraph_ItemReceivedVariationReceived_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortReceivedItemLootInfo             CallFunc_Array_Get_Item;                           // 0x8(0x28)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x30(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
