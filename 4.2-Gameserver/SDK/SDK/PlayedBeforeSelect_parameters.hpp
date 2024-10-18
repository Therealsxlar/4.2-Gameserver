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
// Function PlayedBeforeSelect.PlayedBeforeSelect_C.OnActivated
struct UPlayedBeforeSelect_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PlayedBeforeSelect.PlayedBeforeSelect_C.Construct
struct UPlayedBeforeSelect_C_Construct_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function PlayedBeforeSelect.PlayedBeforeSelect_C.ExecuteUbergraph_PlayedBeforeSelect
struct UPlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C7F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInviteUIDisabled_ReturnValue;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
