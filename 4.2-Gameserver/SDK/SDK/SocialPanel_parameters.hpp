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

// 0x18 (0x18 - 0x0)
// Function SocialPanel.SocialPanel_C.HandleAction_Close
struct USocialPanel_C_HandleAction_Close_Params
{
public:
	bool                                         Passthrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonUIContext*                      CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                   CallFunc_GetInputManager_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function SocialPanel.SocialPanel_C.InitializeInput
struct USocialPanel_C_InitializeInput_Params
{
public:
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D58[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel.SocialPanel_C.Construct
struct USocialPanel_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel.SocialPanel_C.OnActivated
struct USocialPanel_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel.SocialPanel_C.OnDeactivated
struct USocialPanel_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialPanel.SocialPanel_C.OnBeginIntro
struct USocialPanel_C_OnBeginIntro_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel
struct USocialPanel_C_ExecuteUbergraph_SocialPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
