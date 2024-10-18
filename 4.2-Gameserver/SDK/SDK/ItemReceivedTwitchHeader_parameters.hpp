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
// Function ItemReceivedTwitchHeader.ItemReceivedTwitchHeader_C.InitFromGiftBoxItem_BP
struct UItemReceivedTwitchHeader_C_InitFromGiftBoxItem_BP_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function ItemReceivedTwitchHeader.ItemReceivedTwitchHeader_C.ExecuteUbergraph_ItemReceivedTwitchHeader
struct UItemReceivedTwitchHeader_C_ExecuteUbergraph_ItemReceivedTwitchHeader_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)()
	bool                                         CallFunc_HasParam_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EF0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_FormatTextUsingParams_ReturnValue;        // 0x28(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
