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

// 0x8 (0x8 - 0x0)
// Function Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.BreakParams
struct UGen_Interact_UnregisterFocus_C_BreakParams_Params
{
public:
	class AActor*                                ActorToUnregisterRegister;                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.SetParams
struct UGen_Interact_UnregisterFocus_C_SetParams_Params
{
public:
	class AActor*                                ActorToUnregister;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGen_Interact_UnregisterFocus_C*       ThisObject;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
