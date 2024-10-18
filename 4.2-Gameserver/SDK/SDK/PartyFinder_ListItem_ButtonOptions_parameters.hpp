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

// 0x50 (0x50 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.NumPartyMembersInviteOrJoinText
struct UPartyFinder_ListItem_ButtonOptions_C_NumPartyMembersInviteOrJoinText_Params
{
public:
	int32                                        NumOfPartyMembers;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20FB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x20(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0x38(0x18)()
};

// 0x1 (0x1 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.SetEnableButtons
struct UPartyFinder_ListItem_ButtonOptions_C_SetEnableButtons_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.SetupButtons
struct UPartyFinder_ListItem_ButtonOptions_C_SetupButtons_Params
{
public:
	bool                                         bIsInvite;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bCanbeJoinedIfNotInvite;                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20FC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable2;                                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsConsolePlatform_ReturnValue;            // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue1;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select1_Default;                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.PreConstruct
struct UPartyFinder_ListItem_ButtonOptions_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__FriendItemOption_K2Node_ComponentBoundEvent_989_CommonButtonClicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_BndEvt__FriendItemOption_K2Node_ComponentBoundEvent_989_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1145_CommonButtonClicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1145_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__IgnoreInviteButton_K2Node_ComponentBoundEvent_1166_CommonButtonClicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_BndEvt__IgnoreInviteButton_K2Node_ComponentBoundEvent_1166_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Construct
struct UPartyFinder_ListItem_ButtonOptions_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__STW_InviteButton_K2Node_ComponentBoundEvent_633_CommonButtonClicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_BndEvt__STW_InviteButton_K2Node_ComponentBoundEvent_633_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__STW_JoinButton_K2Node_ComponentBoundEvent_653_CommonButtonClicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_BndEvt__STW_JoinButton_K2Node_ComponentBoundEvent_653_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Disable_STW_Invite
struct UPartyFinder_ListItem_ButtonOptions_C_Disable_STW_Invite_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Disable_STW_Join
struct UPartyFinder_ListItem_ButtonOptions_C_Disable_STW_Join_Params
{
public:
};

// 0x48 (0x48 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.ExecuteUbergraph_PartyFinder_ListItem_ButtonOptions
struct UPartyFinder_ListItem_ButtonOptions_C_ExecuteUbergraph_PartyFinder_ListItem_ButtonOptions_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2100[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button4;                // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default;                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2101[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button3;                // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1;                // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.STWInvite_Clicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_STWInvite_Clicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.JoinParty_Clicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_JoinParty_Clicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.IgnoreInvite_Clicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_IgnoreInvite_Clicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.InviteToParty_Clicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_InviteToParty_Clicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.AcceptPartyInvite_Clicked__DelegateSignature
struct UPartyFinder_ListItem_ButtonOptions_C_AcceptPartyInvite_Clicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
