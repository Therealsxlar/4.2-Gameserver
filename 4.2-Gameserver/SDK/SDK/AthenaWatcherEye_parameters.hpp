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
// Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorAdded_Watcher
struct UAthenaWatcherEye_C_SpectatorAdded_Watcher_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaWatcherEye.AthenaWatcherEye_C.Hide_Watcher
struct UAthenaWatcherEye_C_Hide_Watcher_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaWatcherEye.AthenaWatcherEye_C.Show_Watcher
struct UAthenaWatcherEye_C_Show_Watcher_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaWatcherEye.AthenaWatcherEye_C.End_Watcher
struct UAthenaWatcherEye_C_End_Watcher_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorRemoved_Watcher
struct UAthenaWatcherEye_C_SpectatorRemoved_Watcher_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaWatcherEye.AthenaWatcherEye_C.Begin_Watcher
struct UAthenaWatcherEye_C_Begin_Watcher_Params
{
public:
	bool                                         ManySpectatorsJoining;                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaWatcherEye.AthenaWatcherEye_C.ManySpectatorsAdded_Watcher
struct UAthenaWatcherEye_C_ManySpectatorsAdded_Watcher_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function AthenaWatcherEye.AthenaWatcherEye_C.ExecuteUbergraph_AthenaWatcherEye
struct UAthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_223E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsAnyAnimationPlaying_ReturnValue;        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_223F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x20(0x8)(NoDestructor)
	float                                        CallFunc_GetEndTime_ReturnValue1;                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnyAnimationPlaying_ReturnValue1;       // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnyAnimationPlaying_ReturnValue2;       // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_ManySpectatorsJoining;          // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAnyAnimationPlaying_ReturnValue3;       // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2240[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2241[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      K2Node_Select1_Default;                            // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
