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

// 0x270 (0x270 - 0x0)
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.OnFocusReceived
struct UAthena_Matchmaking_SpecialEventButton_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x100(0xB8)()
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1B8(0xB8)()
};

// 0x0 (0x0 - 0x0)
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.SetupLTM
struct UAthena_Matchmaking_SpecialEventButton_C_SetupLTM_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.SetLTMSplashArt
struct UAthena_Matchmaking_SpecialEventButton_C_SetLTMSplashArt_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             NewParam;                                          // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.FirstTime_NewBang
struct UAthena_Matchmaking_SpecialEventButton_C_FirstTime_NewBang_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.PlayFirstTimeBang
struct UAthena_Matchmaking_SpecialEventButton_C_PlayFirstTimeBang_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.Construct
struct UAthena_Matchmaking_SpecialEventButton_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.PreConstruct
struct UAthena_Matchmaking_SpecialEventButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD (0xD - 0x0)
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton
struct UAthena_Matchmaking_SpecialEventButton_C_ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select1_Default;                            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
