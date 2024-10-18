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
// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Clear
struct UAthenaReplayBrowserMatchStats_C_Clear_Params
{
public:
};

// 0x1E8 (0x1E8 - 0x0)
// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Refresh
struct UAthenaReplayBrowserMatchStats_C_Refresh_Params
{
public:
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue1;              // 0x38(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue2;              // 0x50(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue3;              // 0x68(0x18)()
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue1;               // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue4;              // 0xA0(0x18)()
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xB8(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue5;              // 0xD0(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue6;              // 0xE8(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue7;              // 0x100(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue8;              // 0x118(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue9;              // 0x130(0x18)()
	class FString                                CallFunc_Conv_IntToString_ReturnValue1;            // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue2;               // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue10;             // 0x168(0x18)()
	class FText                                  CallFunc_Conv_StringToText_ReturnValue1;           // 0x180(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue11;             // 0x198(0x18)()
	class FString                                CallFunc_Conv_IntToString_ReturnValue2;            // 0x1B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue3;               // 0x1C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue2;           // 0x1D0(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.Construct
struct UAthenaReplayBrowserMatchStats_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.SetReplayInfo
struct UAthenaReplayBrowserMatchStats_C_SetReplayInfo_Params
{
public:
	class UAthenaReplayBrowserRowProxyInstance*  ReplayInfo;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function AthenaReplayBrowserMatchStats.AthenaReplayBrowserMatchStats_C.ExecuteUbergraph_AthenaReplayBrowserMatchStats
struct UAthenaReplayBrowserMatchStats_C_ExecuteUbergraph_AthenaReplayBrowserMatchStats_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_476E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaReplayBrowserRowProxyInstance*  K2Node_CustomEvent_ReplayInfo;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
