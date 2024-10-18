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

// 0xF8 (0xF8 - 0x0)
// Function FriendCodePC.FriendCodePC_C.GetCodeText
struct UFriendCodePC_C_GetCodeText_Params
{
public:
	class FText                                  Result;                                            // 0x0(0x18)(Parm, OutParm)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetFriendCodeDisplayName_ReturnValue;     // 0x20(0x18)()
	class FText                                  CallFunc_GetFriendCodeDescription_ReturnValue;     // 0x38(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x50(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0x90(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xD0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xE0(0x18)()
};

// 0x38 (0x38 - 0x0)
// Function FriendCodePC.FriendCodePC_C.GetFriendCodeUrl
struct UFriendCodePC_C_GetFriendCodeUrl_Params
{
public:
	class FString                                Result;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsTencentBuild_ReturnValue;               // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37EB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default;                             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FriendCodePC.FriendCodePC_C.Construct
struct UFriendCodePC_C_Construct_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function FriendCodePC.FriendCodePC_C.OnMouseEnter
struct UFriendCodePC_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function FriendCodePC.FriendCodePC_C.OnMouseLeave
struct UFriendCodePC_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function FriendCodePC.FriendCodePC_C.BP_OnClicked
struct UFriendCodePC_C_BP_OnClicked_Params
{
public:
};

// 0x151 (0x151 - 0x0)
// Function FriendCodePC.FriendCodePC_C.ExecuteUbergraph_FriendCodePC
struct UFriendCodePC_C_ExecuteUbergraph_FriendCodePC_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x10(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent1;                          // 0x48(0x70)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xB8(0x70)(ConstParm)
	class FString                                CallFunc_GetFriendCodeUrl_Result;                  // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCodeText_Result;                       // 0x138(0x18)()
	bool                                         CallFunc_IsTencentBuild_ReturnValue;               // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
