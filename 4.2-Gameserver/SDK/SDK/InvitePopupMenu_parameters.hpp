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

// 0x2B (0x2B - 0x0)
// Function InvitePopupMenu.InvitePopupMenu_C.GetNetId
struct UInvitePopupMenu_C_GetNetId_Params
{
public:
	struct FUniqueNetIdRepl                      NetId;                                             // 0x0(0x28)(Parm, OutParm, HasGetValueTypeHash)
	bool                                         bIsConsoleUniqueId;                                // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsTencentBuild_ReturnValue;               // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsConsolePlatform_ReturnValue;            // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function InvitePopupMenu.InvitePopupMenu_C.InitializeValues
struct UInvitePopupMenu_C_InitializeValues_Params
{
public:
	struct FUniqueNetIdRepl                      InUniqueNetId;                                     // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      InConsoleNetId;                                    // 0x28(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FText                                  InPlayerName;                                      // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x38 (0x38 - 0x0)
// Function InvitePopupMenu.InvitePopupMenu_C.InvitePlayerToParty
struct UInvitePopupMenu_C_InvitePlayerToParty_Params
{
public:
	struct FUniqueNetIdRepl                      CallFunc_GetNetId_NetId;                           // 0x0(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_GetNetId_bIsConsoleUniqueId;              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_494D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function InvitePopupMenu.InvitePopupMenu_C.InvitePlayerAsFriend
struct UInvitePopupMenu_C_InvitePlayerAsFriend_Params
{
public:
	struct FUniqueNetIdRepl                      CallFunc_GetNetId_NetId;                           // 0x0(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_GetNetId_bIsConsoleUniqueId;              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_494E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetNetId_NetId1;                          // 0x30(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_GetNetId_bIsConsoleUniqueId1;             // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_494F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UResults_TeleportPadPlayer_C*          K2Node_DynamicCast_AsResults_Teleport_Pad_Player;  // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4950[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x45 (0x45 - 0x0)
// Function InvitePopupMenu.InvitePopupMenu_C.CanAddAsFriend
struct UInvitePopupMenu_C_CanAddAsFriend_Params
{
public:
	bool                                         bCanFriendPlayer;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortFriendRequestStatus          Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable2;                               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortFriendRequestStatus          Temp_byte_Variable1;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable4;                               // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable5;                               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable6;                               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable7;                               // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4951[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                      CallFunc_GetNetId_NetId;                           // 0x18(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_GetNetId_bIsConsoleUniqueId;              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortFriendRequestStatus          CallFunc_GetConsoleFriendRequestStatusForPlayer_ReturnValue; // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortFriendRequestStatus          CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue; // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default;                             // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select1_Default;                            // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x42 (0x42 - 0x0)
// Function InvitePopupMenu.InvitePopupMenu_C.CanInviteToParty
struct UInvitePopupMenu_C_CanInviteToParty_Params
{
public:
	bool                                         CanInviteToParty;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4952[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      CallFunc_GetNetId_NetId;                           // 0x8(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_GetNetId_bIsConsoleUniqueId;              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4953[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortPartyRestriction             CallFunc_CanBeInvitedNetID_FailReason;             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanBeInvitedNetID_ReturnValue;            // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature
struct UInvitePopupMenu_C_BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature
struct UInvitePopupMenu_C_BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature
struct UInvitePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function InvitePopupMenu.InvitePopupMenu_C.OnActivated
struct UInvitePopupMenu_C_OnActivated_Params
{
public:
};

// 0x31 (0x31 - 0x0)
// Function InvitePopupMenu.InvitePopupMenu_C.ExecuteUbergraph_InvitePopupMenu
struct UInvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanInviteToParty_CanInviteToParty;        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4954[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1;                // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanAddAsFriend_bCanFriendPlayer;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
