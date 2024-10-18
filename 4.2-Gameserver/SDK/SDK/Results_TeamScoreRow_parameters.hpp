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

// 0x29 (0x29 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.ShowValidResidualScores
struct UResults_TeamScoreRow_C_ShowValidResidualScores_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4821[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonNumericTextBlock*               CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResults_PlayerScoreBox_C*             CallFunc_Array_Get_Item1;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsValidScoreBox_bIsValidScoreBox;      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4822[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.SkipToFinalState
struct UResults_TeamScoreRow_C_SkipToFinalState_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.SetSkippingToEnd
struct UResults_TeamScoreRow_C_SetSkippingToEnd_Params
{
public:
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x118 (0x118 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Initialize
struct UResults_TeamScoreRow_C_Initialize_Params
{
public:
	class UFortUIScoreReport*                    InScoreReport;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayRate;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4823[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonNumericTextBlock*               CurrentResidualScoreText;                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentScoreReportIndex;                           // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4824[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_PlayerScoreBox_C*             CurrentScoreBox;                                   // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIScoreReport*                    ScoreReport;                                       // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BestScore;                                         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4825[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_PlayerScoreBox_C*             ScoreBoxBest;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCommonNumericTextBlock*>       K2Node_MakeArray_Array;                            // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4826[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices; // 0x58(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4827[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonNumericTextBlock*               CallFunc_Array_Get_Item;                           // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4828[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_PlayerScoreBox_C*             CallFunc_Array_Get_Item1;                          // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item2;                          // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4829[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonNumericTextBlock*               CallFunc_Array_Get_Item3;                          // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPlayerCount_ReturnValue;               // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_482A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UResults_PlayerScoreBox_C*>     K2Node_MakeArray_Array1;                           // 0xB0(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTeamScore_ReturnValue;                 // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue1;                  // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_482B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_PlayerScoreBox_C*             CallFunc_Array_Get_Item4;                          // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue1;                // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_482C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xE0(0x28)()
	bool                                         CallFunc_GetIsValidScoreBox_bIsValidScoreBox;      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_482D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetPlayerScore_ReturnValue;               // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Intro Sequence
struct UResults_TeamScoreRow_C_Intro_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__Anim_Absorb_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_TeamScoreRow_C_BndEvt__Anim_Absorb_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Count Up Sequence
struct UResults_TeamScoreRow_C_Count_Up_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_5_CountUpFinished__DelegateSignature
struct UResults_TeamScoreRow_C_BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_5_CountUpFinished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Count Down Sequence
struct UResults_TeamScoreRow_C_Count_Down_Sequence_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature
struct UResults_TeamScoreRow_C_BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature
struct UResults_TeamScoreRow_C_BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Stop Count Down Absorption
struct UResults_TeamScoreRow_C_Stop_Count_Down_Absorption_Params
{
public:
};

// 0x35 (0x35 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.ExecuteUbergraph_Results_TeamScoreRow
struct UResults_TeamScoreRow_C_ExecuteUbergraph_Results_TeamScoreRow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue1;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue2;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue3;                   // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue4;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_482E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue5;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_482F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_PlayerScoreBox_C*             CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsValidScoreBox_bIsValidScoreBox;      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue6;                   // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4830[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4831[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue7;                   // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.CountDownFinished__DelegateSignature
struct UResults_TeamScoreRow_C_CountDownFinished__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TeamScoreRow.Results_TeamScoreRow_C.CountUpFinished__DelegateSignature
struct UResults_TeamScoreRow_C_CountUpFinished__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
