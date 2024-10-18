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

// 0x220 (0x220 - 0x0)
// Function Button_Crouch.Button_Crouch_C.OnTouchStarted
struct UButton_Crouch_C_OnTouchStarted_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         InTouchEvent;                                      // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)()
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function Button_Crouch.Button_Crouch_C.OnHUDStateUpdate
struct UButton_Crouch_C_OnHUDStateUpdate_Params
{
public:
	struct FFortHUDState                         NewState;                                          // 0x0(0x11)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function Button_Crouch.Button_Crouch_C.ExecuteUbergraph_Button_Crouch
struct UButton_Crouch_C_ExecuteUbergraph_Button_Crouch_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortHUDState                         K2Node_Event_NewState;                             // 0x4(0x11)(ConstParm, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
