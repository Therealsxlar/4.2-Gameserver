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
// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.SetViewModel
struct UAthenaLocalPlayerHitPointInfo_C_SetViewModel_Params
{
public:
	class UAthenaPlayerViewModel*                ViewModel;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.Construct
struct UAthenaLocalPlayerHitPointInfo_C_Construct_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function AthenaLocalPlayerHitPointInfo.AthenaLocalPlayerHitPointInfo_C.ExecuteUbergraph_AthenaLocalPlayerHitPointInfo
struct UAthenaLocalPlayerHitPointInfo_C_ExecuteUbergraph_AthenaLocalPlayerHitPointInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBROnly_ReturnValue;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
