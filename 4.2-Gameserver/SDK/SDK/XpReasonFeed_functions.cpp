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


// Function XpReasonFeed.XpReasonFeed_C.ShowAllXpRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpReasonFeed_C::ShowAllXpRewards(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("XpReasonFeed_C", "ShowAllXpRewards");

	Params::UXpReasonFeed_C_ShowAllXpRewards_Params Parms;
	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpReasonFeed.XpReasonFeed_C.SetXpRewards
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAthenaMatchXpReward>XpRewards                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaMatchXpReward        CallFunc_Array_Get_Item                                          ()
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UXpReasonFeedItem_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpReasonFeed_C::SetXpRewards(TArray<struct FAthenaMatchXpReward>& XpRewards, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FAthenaMatchXpReward& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UXpReasonFeedItem_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static auto Func = Class->GetFunction("XpReasonFeed_C", "SetXpRewards");

	Params::UXpReasonFeed_C_SetXpRewards_Params Parms;
	Parms.XpRewards = XpRewards;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpReasonFeed.XpReasonFeed_C.IsReadyForNextXpReward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UXpReasonFeed_C::IsReadyForNextXpReward(bool* Ready, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("XpReasonFeed_C", "IsReadyForNextXpReward");

	Params::UXpReasonFeed_C_IsReadyForNextXpReward_Params Parms;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Ready != nullptr)
		*Ready = Parms.Ready;

}


// Function XpReasonFeed.XpReasonFeed_C.Play Xp Reward
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthenaMatchXpReward        Reward                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UXpReasonFeed_C::Play_Xp_Reward(struct FAthenaMatchXpReward& Reward)
{
	static auto Func = Class->GetFunction("XpReasonFeed_C", "Play Xp Reward");

	Params::UXpReasonFeed_C_Play_Xp_Reward_Params Parms;
	Parms.Reward = Reward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpReasonFeed.XpReasonFeed_C.Reset Feed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UXpReasonFeed_C::Reset_Feed()
{
	static auto Func = Class->GetFunction("XpReasonFeed_C", "Reset Feed");

	Params::UXpReasonFeed_C_Reset_Feed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpReasonFeed.XpReasonFeed_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UXpReasonFeed_C::Destruct()
{
	static auto Func = Class->GetFunction("XpReasonFeed_C", "Destruct");

	Params::UXpReasonFeed_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function XpReasonFeed.XpReasonFeed_C.ExecuteUbergraph_XpReasonFeed
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UXpReasonFeedItem_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaMatchXpReward        K2Node_CustomEvent_Reward                                        (ConstParm)

void UXpReasonFeed_C::ExecuteUbergraph_XpReasonFeed(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UXpReasonFeedItem_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, const struct FAthenaMatchXpReward& K2Node_CustomEvent_Reward)
{
	static auto Func = Class->GetFunction("XpReasonFeed_C", "ExecuteUbergraph_XpReasonFeed");

	Params::UXpReasonFeed_C_ExecuteUbergraph_XpReasonFeed_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.K2Node_CustomEvent_Reward = K2Node_CustomEvent_Reward;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
