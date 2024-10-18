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
// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.InitFromGiftBoxItem_BP
struct UItemReceivedFriendGiftHeader_C_InitFromGiftBoxItem_BP_Params
{
public:
};

// 0xD0 (0xD0 - 0x0)
// Function ItemReceivedFriendGiftHeader.ItemReceivedFriendGiftHeader_C.ExecuteUbergraph_ItemReceivedFriendGiftHeader
struct UItemReceivedFriendGiftHeader_C_ExecuteUbergraph_ItemReceivedFriendGiftHeader_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DCC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)()
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)()
	class FText                                  CallFunc_FormatTextUsingParams_ReturnValue;        // 0x38(0x18)()
	class FText                                  CallFunc_Conv_StringToText_ReturnValue1;           // 0x50(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x68(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xA8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xB8(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
