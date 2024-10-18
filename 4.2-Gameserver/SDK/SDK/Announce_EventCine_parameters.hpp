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
// Function Announce_EventCine.Announce_EventCine_C.UserConstructionScript
struct AAnnounce_EventCine_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Announce_EventCine.Announce_EventCine_C.OnStateEntered_2FC6E2894145586A1A4AF69426273130
struct AAnnounce_EventCine_C_OnStateEntered_2FC6E2894145586A1A4AF69426273130_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Announce_EventCine.Announce_EventCine_C.OnStateEntered_132DA3B4468BA1009280CFB4D4C2D0AC
struct AAnnounce_EventCine_C_OnStateEntered_132DA3B4468BA1009280CFB4D4C2D0AC_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStart
struct AAnnounce_EventCine_C_OnClientAnnouncementStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop
struct AAnnounce_EventCine_C_OnClientAnnouncementStop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene
struct AAnnounce_EventCine_C_OnPlayerSkippedCutscene_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying
struct AAnnounce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying_Params
{
public:
	class UObject*                               EventSource;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               EventFocus;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      ClientEvent;                                       // 0x10(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Announce_EventCine.Announce_EventCine_C.HandleAllowSkip
struct AAnnounce_EventCine_C_HandleAllowSkip_Params
{
public:
};

// 0xA1 (0xA1 - 0x0)
// Function Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine
struct AAnnounce_EventCine_C_ExecuteUbergraph_Announce_EventCine_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5048[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable1;                // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5049[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               K2Node_HandleClientEvent_EventSource;              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_HandleClientEvent_EventFocus;               // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortClientEvent                      K2Node_HandleClientEvent_ClientEvent;              // 0x48(0x20)(ConstParm, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x68(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x78(0x8)(NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable1;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_504A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIState                      CallFunc__BPGetCurrentUIState_ReturnValue;         // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_504B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAsyncAction_SetUIState*           CallFunc_SetUIState_ReturnValue1;                  // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
