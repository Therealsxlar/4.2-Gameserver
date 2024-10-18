#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function AthenaChallengesTab.AthenaChallengesTab_C.SelectFirstBundle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortChallengeBundleCategoryInfo*K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortChallengeBundleInfo*>CallFunc_GetChallengeBundleInfos_ReturnValue                     (ZeroConstructor, ReferenceParm)
// class UFortChallengeBundleInfo*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengesTab_C::SelectFirstBundle(class UObject* CallFunc_GetItemAt_ReturnValue, class UFortChallengeBundleCategoryInfo* K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info, bool K2Node_DynamicCast_bSuccess, TArray<class UFortChallengeBundleInfo*>& CallFunc_GetChallengeBundleInfos_ReturnValue, class UFortChallengeBundleInfo* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "SelectFirstBundle");

	Params::UAthenaChallengesTab_C_SelectFirstBundle_Params Parms;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info = K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChallengeBundleInfos_ReturnValue = CallFunc_GetChallengeBundleInfos_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengesTab.AthenaChallengesTab_C.TreeViewGetChildrenForCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm)
// class UFortChallengeBundleCategoryInfo*K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortChallengeBundleInfo*>CallFunc_GetChallengeBundleInfos_ReturnValue                     (ZeroConstructor, ReferenceParm)

TArray<class UObject*> UAthenaChallengesTab_C::TreeViewGetChildrenForCategory(class UObject* Item, class UFortChallengeBundleCategoryInfo* K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info, bool K2Node_DynamicCast_bSuccess, TArray<class UFortChallengeBundleInfo*>& CallFunc_GetChallengeBundleInfos_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "TreeViewGetChildrenForCategory");

	Params::UAthenaChallengesTab_C_TreeViewGetChildrenForCategory_Params Parms;
	Parms.Item = Item;
	Parms.K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info = K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChallengeBundleInfos_ReturnValue = CallFunc_GetChallengeBundleInfos_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AthenaChallengesTab.AthenaChallengesTab_C.SetupViewedItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengesTab_C::SetupViewedItemData(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "SetupViewedItemData");

	Params::UAthenaChallengesTab_C_SetupViewedItemData_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengesTab.AthenaChallengesTab_C.UpdateChallengeViews
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortChallengeBundleCategoryInfo*>CallFunc_GetChallengeCategoryInfos_OutCategoryInfos              (ZeroConstructor, ReferenceParm)

void UAthenaChallengesTab_C::UpdateChallengeViews(bool CallFunc_IsActivated_ReturnValue, TArray<class UFortChallengeBundleCategoryInfo*>& CallFunc_GetChallengeCategoryInfos_OutCategoryInfos)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "UpdateChallengeViews");

	Params::UAthenaChallengesTab_C_UpdateChallengeViews_Params Parms;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_GetChallengeCategoryInfos_OutCategoryInfos = CallFunc_GetChallengeCategoryInfos_OutCategoryInfos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengesTab.AthenaChallengesTab_C.HandleChallengesChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaChallengesTab_C::HandleChallengesChanged()
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "HandleChallengesChanged");

	Params::UAthenaChallengesTab_C_HandleChallengesChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengesTab.AthenaChallengesTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaChallengesTab_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "Construct");

	Params::UAthenaChallengesTab_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengesTab.AthenaChallengesTab_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaChallengesTab_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "OnActivated");

	Params::UAthenaChallengesTab_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengesTab.AthenaChallengesTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaChallengesTab_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "OnDeactivated");

	Params::UAthenaChallengesTab_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengesTab.AthenaChallengesTab_C.BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengesTab_C::BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature(class UObject* Item)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature");

	Params::UAthenaChallengesTab_C_BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengesTab.AthenaChallengesTab_C.OnChallengesChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaChallengesTab_C::OnChallengesChanged()
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "OnChallengesChanged");

	Params::UAthenaChallengesTab_C_OnChallengesChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaChallengesTab.AthenaChallengesTab_C.ExecuteUbergraph_AthenaChallengesTab
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortChallengeBundleInfo*    K2Node_DynamicCast_AsFort_Challenge_Bundle_Info                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChallengeBundlePage_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaAccountContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentSeasonNumber_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengesTab_C::ExecuteUbergraph_AthenaChallengesTab(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, class UFortChallengeBundleInfo* K2Node_DynamicCast_AsFort_Challenge_Bundle_Info, bool K2Node_DynamicCast_bSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UChallengeBundlePage_C* CallFunc_Create_ReturnValue, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetCurrentSeasonNumber_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsBROnly_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "ExecuteUbergraph_AthenaChallengesTab");

	Params::UAthenaChallengesTab_C_ExecuteUbergraph_AthenaChallengesTab_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue = CallFunc_BP_GetSelectedItem_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_DynamicCast_AsFort_Challenge_Bundle_Info = K2Node_DynamicCast_AsFort_Challenge_Bundle_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetCurrentSeasonNumber_ReturnValue = CallFunc_GetCurrentSeasonNumber_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
