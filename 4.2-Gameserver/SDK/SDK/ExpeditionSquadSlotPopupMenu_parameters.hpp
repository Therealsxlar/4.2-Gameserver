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

// 0x20 (0x20 - 0x0)
// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.GetItemInSlot
struct UExpeditionSquadSlotPopupMenu_C_GetItemInSlot_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSquadSlotSelectorButton*          CallFunc_GetHostButton_ReturnValue;                // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetItemInSquadSlotBP_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.OnActivated
struct UExpeditionSquadSlotPopupMenu_C_OnActivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
struct UExpeditionSquadSlotPopupMenu_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.OnBeginOutro
struct UExpeditionSquadSlotPopupMenu_C_OnBeginOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.OnBeginIntro
struct UExpeditionSquadSlotPopupMenu_C_OnBeginIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UExpeditionSquadSlotPopupMenu_C_BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature
struct UExpeditionSquadSlotPopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature
struct UExpeditionSquadSlotPopupMenu_C_BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.OnDeactivated
struct UExpeditionSquadSlotPopupMenu_C_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.HandlePostDifferentContextProviderSet
struct UExpeditionSquadSlotPopupMenu_C_HandlePostDifferentContextProviderSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.Initialize
struct UExpeditionSquadSlotPopupMenu_C_Initialize_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function ExpeditionSquadSlotPopupMenu.ExpeditionSquadSlotPopupMenu_C.ExecuteUbergraph_ExpeditionSquadSlotPopupMenu
struct UExpeditionSquadSlotPopupMenu_C_ExecuteUbergraph_ExpeditionSquadSlotPopupMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FBE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button2;                // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button1;                // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FBF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSquadSlotSelectorButton*          CallFunc_GetHostButton_ReturnValue;                // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetItemInSlot_Item;                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue1;      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetItemInSlot_Item1;                      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
