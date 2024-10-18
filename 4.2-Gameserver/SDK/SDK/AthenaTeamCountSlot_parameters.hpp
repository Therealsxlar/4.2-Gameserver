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

// 0x3C (0x3C - 0x0)
// Function AthenaTeamCountSlot.AthenaTeamCountSlot_C.SetTeamSlotData
struct UAthenaTeamCountSlot_C_SetTeamSlotData_Params
{
public:
	struct FAthenaTeamCountSlotData              TeamSlotData;                                      // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                        DrawOpacity;                                       // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
