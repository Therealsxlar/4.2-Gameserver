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

// 0x4C8 (0x4C8 - 0x0)
// Function Results_TopPanel.Results_TopPanel_C.Initialize
struct UResults_TopPanel_C_Initialize_Params
{
public:
	enum class EFortCompletionResult             CompletionResult;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x20(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x38(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x50(0x18)()
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortBasicMissionInfo                 CallFunc_GetCurrentBasicMissionInfo_BasicMissionInfo; // 0x70(0x388)()
	bool                                         CallFunc_GetCurrentBasicMissionInfo_ReturnValue;   // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_49D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x400(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0x440(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x480(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x490(0x18)()
	enum class EFortCompletionResult             Temp_byte_Variable;                                // 0x4A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_49DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x4B0(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function Results_TopPanel.Results_TopPanel_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_TopPanel_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_56_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Results_TopPanel.Results_TopPanel_C.Intro Sequence
struct UResults_TopPanel_C_Intro_Sequence_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function Results_TopPanel.Results_TopPanel_C.ExecuteUbergraph_Results_TopPanel
struct UResults_TopPanel_C_ExecuteUbergraph_Results_TopPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Results_TopPanel.Results_TopPanel_C.IntroComplete__DelegateSignature
struct UResults_TopPanel_C_IntroComplete__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
