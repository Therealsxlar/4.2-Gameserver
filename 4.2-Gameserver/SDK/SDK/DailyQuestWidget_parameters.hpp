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
// Function DailyQuestWidget.DailyQuestWidget_C.Entrance Anim
struct UDailyQuestWidget_C_Entrance_Anim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DailyQuestWidget.DailyQuestWidget_C.Collect Anim
struct UDailyQuestWidget_C_Collect_Anim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DailyQuestWidget.DailyQuestWidget_C.Completed State
struct UDailyQuestWidget_C_Completed_State_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function DailyQuestWidget.DailyQuestWidget_C.UpdateProgress
struct UDailyQuestWidget_C_UpdateProgress_Params
{
public:
	int32                                        CallFunc_GetAchievedCount_OutTotalAchievedCount;   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAchievedCount_OutTotalRequiredCount;   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA2 (0xA2 - 0x0)
// Function DailyQuestWidget.DailyQuestWidget_C.SetQuestItem
struct UDailyQuestWidget_C_SetQuestItem_Params
{
public:
	class UFortQuestItem*                        Quest;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46AC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortQuestItemDefinition*              CallFunc_GetQuestDefinitionBP_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortRewardInfo                       CallFunc_GetRewardInfo_BP_ReturnValue;             // 0x20(0x30)()
	class UFortTooltipUIContext*                 CallFunc_GetContext_ReturnValue;                   // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortTooltipContext*                   CallFunc_SpawnTooltipContext_ReturnValue;          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCombinedDescription_OutDescription;    // 0x68(0x18)()
	bool                                         CallFunc_GetCombinedDescription_ReturnValue;       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x88(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
