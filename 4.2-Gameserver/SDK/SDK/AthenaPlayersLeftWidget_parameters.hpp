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

// 0x18 (0x18 - 0x0)
// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.SetPlayersLeftText
struct UAthenaPlayersLeftWidget_C_SetPlayersLeftText_Params
{
public:
	class FText                                  PlayersText;                                       // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x20 (0x20 - 0x0)
// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.ExecuteUbergraph_AthenaPlayersLeftWidget
struct UAthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_PlayersText;                          // 0x8(0x18)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
