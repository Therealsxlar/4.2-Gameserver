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
// Function FortReplayCameraOption.FortReplayCameraOption_C.BP_OnClicked
struct UFortReplayCameraOption_C_BP_OnClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FortReplayCameraOption.FortReplayCameraOption_C.Construct
struct UFortReplayCameraOption_C_Construct_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function FortReplayCameraOption.FortReplayCameraOption_C.ExecuteUbergraph_FortReplayCameraOption
struct UFortReplayCameraOption_C_ExecuteUbergraph_FortReplayCameraOption_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DB1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerSpectating*       K2Node_DynamicCast_AsFort_Player_Controller_Spectating; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortReplayContext*                    CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCameraNameFromType_ReturnValue;        // 0x28(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
