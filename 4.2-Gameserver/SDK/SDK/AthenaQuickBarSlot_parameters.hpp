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

// 0x12 (0x12 - 0x0)
// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.UpdateJetpackFuelGaugeVisiblity
struct UAthenaQuickBarSlot_C_UpdateJetpackFuelGaugeVisiblity_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B00[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ShowJetpackFuelGauge
struct UAthenaQuickBarSlot_C_ShowJetpackFuelGauge_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.HideJetpackFuelGauge
struct UAthenaQuickBarSlot_C_HideJetpackFuelGauge_Params
{
public:
};

// 0x2E0 (0x2E0 - 0x0)
// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.OnTouchStarted
struct UAthenaQuickBarSlot_C_OnTouchStarted_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         InTouchEvent;                                      // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x160(0xB8)()
	bool                                         CallFunc_IsBROnly_ReturnValue;                     // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x228(0xB8)()
};

// 0x0 (0x0 - 0x0)
// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.OnRefreshItem
struct UAthenaQuickBarSlot_C_OnRefreshItem_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AthenaQuickBarSlot.AthenaQuickBarSlot_C.ExecuteUbergraph_AthenaQuickBarSlot
struct UAthenaQuickBarSlot_C_ExecuteUbergraph_AthenaQuickBarSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
