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

// 0xA8 (0xA8 - 0x0)
// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnTeamStatsAvailable
struct UAthenaMatchStatsPartial_C_OnTeamStatsAvailable_Params
{
public:
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x0(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0x40(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x80(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x90(0x18)()
};

// 0x11 (0x11 - 0x0)
// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnStatsAvailable
struct UAthenaMatchStatsPartial_C_OnStatsAvailable_Params
{
public:
	class UAthenaProfileStatContext*             CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMatchStatView*                  CallFunc_CreateCurrentMatchStatView_ReturnValue;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnRewardsAvailable
struct UAthenaMatchStatsPartial_C_OnRewardsAvailable_Params
{
public:
};

// 0x58 (0x58 - 0x0)
// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.SetMatchReport
struct UAthenaMatchStatsPartial_C_SetMatchReport_Params
{
public:
	class UAthenaPlayerMatchReport*              Report;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTravelLogTextDisplayEnabled_ReturnValue; // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_479F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x38(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x48(0x10)(ZeroConstructor, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.Play Xp Rewards
struct UAthenaMatchStatsPartial_C_Play_Xp_Rewards_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.Construct
struct UAthenaMatchStatsPartial_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.Destruct
struct UAthenaMatchStatsPartial_C_Destruct_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.ExecuteUbergraph_AthenaMatchStatsPartial
struct UAthenaMatchStatsPartial_C_ExecuteUbergraph_AthenaMatchStatsPartial_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTravelLogTextDisplayEnabled_ReturnValue; // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
