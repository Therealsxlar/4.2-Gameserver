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

// 0x30 (0x30 - 0x0)
// Function AthenaChallengesTab.AthenaChallengesTab_C.SelectFirstBundle
struct UAthenaChallengesTab_C_SelectFirstBundle_Params
{
public:
	class UObject*                               CallFunc_GetItemAt_ReturnValue;                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortChallengeBundleCategoryInfo*      K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortChallengeBundleInfo*>      CallFunc_GetChallengeBundleInfos_ReturnValue;      // 0x18(0x10)(ZeroConstructor, ReferenceParm)
	class UFortChallengeBundleInfo*              CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function AthenaChallengesTab.AthenaChallengesTab_C.TreeViewGetChildrenForCategory
struct UAthenaChallengesTab_C_TreeViewGetChildrenForCategory_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm)
	class UFortChallengeBundleCategoryInfo*      K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortChallengeBundleInfo*>      CallFunc_GetChallengeBundleInfos_ReturnValue;      // 0x28(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function AthenaChallengesTab.AthenaChallengesTab_C.SetupViewedItemData
struct UAthenaChallengesTab_C_SetupViewedItemData_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function AthenaChallengesTab.AthenaChallengesTab_C.UpdateChallengeViews
struct UAthenaChallengesTab_C_UpdateChallengeViews_Params
{
public:
	bool                                         CallFunc_IsActivated_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortChallengeBundleCategoryInfo*> CallFunc_GetChallengeCategoryInfos_OutCategoryInfos; // 0x8(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaChallengesTab.AthenaChallengesTab_C.HandleChallengesChanged
struct UAthenaChallengesTab_C_HandleChallengesChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaChallengesTab.AthenaChallengesTab_C.Construct
struct UAthenaChallengesTab_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaChallengesTab.AthenaChallengesTab_C.OnActivated
struct UAthenaChallengesTab_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaChallengesTab.AthenaChallengesTab_C.OnDeactivated
struct UAthenaChallengesTab_C_OnDeactivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaChallengesTab.AthenaChallengesTab_C.BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature
struct UAthenaChallengesTab_C_BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaChallengesTab.AthenaChallengesTab_C.OnChallengesChanged
struct UAthenaChallengesTab_C_OnChallengesChanged_Params
{
public:
};

// 0x80 (0x80 - 0x0)
// Function AthenaChallengesTab.AthenaChallengesTab_C.ExecuteUbergraph_AthenaChallengesTab
struct UAthenaChallengesTab_C_ExecuteUbergraph_AthenaChallengesTab_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_BP_GetSelectedItem_ReturnValue;           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_ComponentBoundEvent_Item;                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortChallengeBundleInfo*              K2Node_DynamicCast_AsFort_Challenge_Bundle_Info;   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChallengeBundlePage_C*                CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAccountContext*                 CallFunc_GetContext_ReturnValue1;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentSeasonNumber_ReturnValue;       // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBROnly_ReturnValue;                     // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48CF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue2;                  // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue3;                  // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue4;                  // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
