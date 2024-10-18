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
// Function BottomBarWidget.BottomBarWidget_C.Construct
struct UBottomBarWidget_C_Construct_Params
{
public:
};

// 0x90 (0x90 - 0x0)
// Function BottomBarWidget.BottomBarWidget_C.ExecuteUbergraph_BottomBarWidget
struct UBottomBarWidget_C_ExecuteUbergraph_BottomBarWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AB2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_NoResourceBrush_ReturnValue;              // 0x8(0x88)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
