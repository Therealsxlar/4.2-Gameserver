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

// 0x5D (0x5D - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.RandomizeTheColor
struct ATVPostProcessBP_C_RandomizeTheColor_Params
{
public:
	float                                        Use_Bluescreen;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Probablility_modulator;                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Use_Flat_Blue;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxColorPerChannelValue;                           // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Control_replacement_alpha;                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3180[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x14(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_R;                             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B;                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A;                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue1;                        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue2;                        // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue1;          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript
struct ATVPostProcessBP_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Show the troll__FinishedFunc
struct ATVPostProcessBP_C_Show_the_troll__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Show the troll__UpdateFunc
struct ATVPostProcessBP_C_Show_the_troll__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__FinishedFunc
struct ATVPostProcessBP_C_Switch_between_cameras__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__UpdateFunc
struct ATVPostProcessBP_C_Switch_between_cameras__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__Switch Camera Position__EventFunc
struct ATVPostProcessBP_C_Switch_between_cameras__Switch_Camera_Position__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Switch to live__FinishedFunc
struct ATVPostProcessBP_C_Switch_to_live__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Switch to live__UpdateFunc
struct ATVPostProcessBP_C_Switch_to_live__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.FadeOut__FinishedFunc
struct ATVPostProcessBP_C_FadeOut__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.FadeOut__UpdateFunc
struct ATVPostProcessBP_C_FadeOut__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Switch to static__FinishedFunc
struct ATVPostProcessBP_C_Switch_to_static__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Switch to static__UpdateFunc
struct ATVPostProcessBP_C_Switch_to_static__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__FinishedFunc
struct ATVPostProcessBP_C_Camera_StartTheMonitor_Text_Timeline__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__UpdateFunc
struct ATVPostProcessBP_C_Camera_StartTheMonitor_Text_Timeline__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__FinishedFunc
struct ATVPostProcessBP_C_Jitter_Timeline__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__UpdateFunc
struct ATVPostProcessBP_C_Jitter_Timeline__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__Switch Camera Position__EventFunc
struct ATVPostProcessBP_C_Jitter_Timeline__Switch_Camera_Position__EventFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitchFade__FinishedFunc
struct ATVPostProcessBP_C_FrontEndCameraSwitchFade__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitchFade__UpdateFunc
struct ATVPostProcessBP_C_FrontEndCameraSwitchFade__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.StartScreen__FinishedFunc
struct ATVPostProcessBP_C_StartScreen__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.StartScreen__UpdateFunc
struct ATVPostProcessBP_C_StartScreen__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TriggerTheTroll
struct ATVPostProcessBP_C_Camera_TriggerTheTroll_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_SwitchBetweenLocations
struct ATVPostProcessBP_C_Camera_SwitchBetweenLocations_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveStatic
struct ATVPostProcessBP_C_Camera_TransitionToLiveStatic_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TurnOffThePostProcess
struct ATVPostProcessBP_C_Camera_TurnOffThePostProcess_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveVideo
struct ATVPostProcessBP_C_Camera_TransitionToLiveVideo_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DebugEvents
struct ATVPostProcessBP_C_Camera_DebugEvents_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text
struct ATVPostProcessBP_C_Camera_StartTheMonitor_Text_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DosTextFinished
struct ATVPostProcessBP_C_Camera_DosTextFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_ReturningPlayerInitializeWithLiveVideo
struct ATVPostProcessBP_C_Camera_ReturningPlayerInitializeWithLiveVideo_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch
struct ATVPostProcessBP_C_FrontEndCameraSwitch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_LoadAndWait
struct ATVPostProcessBP_C_Camera_LoadAndWait_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_Sequence_Start_StaticWhoomp
struct ATVPostProcessBP_C_Camera_Sequence_Start_StaticWhoomp_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.WriteOutLoading
struct ATVPostProcessBP_C_WriteOutLoading_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.SequenceFinished
struct ATVPostProcessBP_C_SequenceFinished_Params
{
public:
	class FString                                SequenceName;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_InitializePost
struct ATVPostProcessBP_C_Camera_InitializePost_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects
struct ATVPostProcessBP_C_Camera_DisableEffects_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.ReceiveTick
struct ATVPostProcessBP_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.FastForwardPostProcess
struct ATVPostProcessBP_C_FastForwardPostProcess_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.JitterTheScreen
struct ATVPostProcessBP_C_JitterTheScreen_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.ReceiveBeginPlay
struct ATVPostProcessBP_C_ReceiveBeginPlay_Params
{
public:
};

// 0x632 (0x632 - 0x0)
// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP
struct ATVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue1;                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue2;                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue3;                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue4;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue5;                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Lerp_ReturnValue6;                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIDataConfigurationContext*       CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3181[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  CallFunc_GetFrontEndFFSettings_ReturnValue;        // 0x30(0x520)()
	float                                        CallFunc_GetScalarParameterValue_ReturnValue;      // 0x550(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x554(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScalarParameterValue_ReturnValue1;     // 0x558(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x55C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScalarParameterValue_ReturnValue2;     // 0x560(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x564(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x568(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloat_ReturnValue;                  // 0x56C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloat_ReturnValue1;                 // 0x570(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x574(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue1;          // 0x575(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3182[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRange_ReturnValue1;          // 0x578(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x57C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0x580(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue2;          // 0x584(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue2;         // 0x588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue3;          // 0x58C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3183[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetTimelineLength_ReturnValue;            // 0x594(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTimelineLength_ReturnValue1;           // 0x598(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue4;          // 0x59C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScalarParameterValue_ReturnValue3;     // 0x5A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScalarParameterValue_ReturnValue4;     // 0x5A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScalarParameterValue_ReturnValue5;     // 0x5A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue1;              // 0x5AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScalarParameterValue_ReturnValue6;     // 0x5B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue2;              // 0x5B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_R;                             // 0x5B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G;                             // 0x5BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B;                             // 0x5C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A;                             // 0x5C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue3;              // 0x5C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue3;         // 0x5CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x5D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue4;         // 0x5D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue5;         // 0x5D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScalarParameterValue_ReturnValue7;     // 0x5DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue4;              // 0x5E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue1;                      // 0x5E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x5E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x5EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5ED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3184[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetTimelineLength_ReturnValue2;           // 0x5F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x5F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3185[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetScalarParameterValue_ReturnValue8;     // 0x5F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue5;              // 0x5FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue6;         // 0x600(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue5;          // 0x604(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_SequenceName;                   // 0x608(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloat_ReturnValue2;                 // 0x618(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x61C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue2;          // 0x620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3186[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_BoolToFloat_ReturnValue1;            // 0x624(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue7;         // 0x628(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScalarParameterValue_ReturnValue9;     // 0x62C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable1;                // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable1;                      // 0x631(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
