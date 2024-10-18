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

// 0xF8 (0xF8 - 0x0)
// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.UpdateSeasonText
struct UItemReceivedBattlePassPromiseHeader_C_UpdateSeasonText_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EE4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SeasonNumber;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x10(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue1;              // 0x28(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0x80(0x40)(HasGetValueTypeHash)
	class UAthenaAccountContext*                 CallFunc_GetContext_ReturnValue;                   // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xC8(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_GetCurrentSeasonNumber_ReturnValue;       // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE0(0x18)()
};

// 0x1 (0x1 - 0x0)
// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.PreConstruct
struct UItemReceivedBattlePassPromiseHeader_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.InitFromGiftBoxItem_BP
struct UItemReceivedBattlePassPromiseHeader_C_InitFromGiftBoxItem_BP_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader
struct UItemReceivedBattlePassPromiseHeader_C_ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
