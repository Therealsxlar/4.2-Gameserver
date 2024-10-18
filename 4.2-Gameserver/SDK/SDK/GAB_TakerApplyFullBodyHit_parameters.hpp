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
// Function GAB_TakerApplyFullBodyHit.GAB_TakerApplyFullBodyHit_C.PickFullBodyHitMontageSection
struct UGAB_TakerApplyFullBodyHit_C_PickFullBodyHitMontageSection_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function GAB_TakerApplyFullBodyHit.GAB_TakerApplyFullBodyHit_C.ExecuteUbergraph_GAB_TakerApplyFullBodyHit
struct UGAB_TakerApplyFullBodyHit_C_ExecuteUbergraph_GAB_TakerApplyFullBodyHit_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPawn*                             CallFunc_GetActivatingPawn_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_SetFNameBasedOnHitDirection_NameResult;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
