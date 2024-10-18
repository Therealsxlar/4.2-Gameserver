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


// Function ItemReceivedChallengeCompleteHeader.ItemReceivedChallengeCompleteHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceivedChallengeCompleteHeader_C::InitFromGiftBoxItem_BP()
{
	static auto Func = Class->GetFunction("ItemReceivedChallengeCompleteHeader_C", "InitFromGiftBoxItem_BP");

	Params::UItemReceivedChallengeCompleteHeader_C_InitFromGiftBoxItem_BP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemReceivedChallengeCompleteHeader.ItemReceivedChallengeCompleteHeader_C.ExecuteUbergraph_ItemReceivedChallengeCompleteHeader
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpProfileAthena*       CallFunc_GetAthenaProfile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPurchasedSeasonBook_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedChallengeCompleteHeader_C::ExecuteUbergraph_ItemReceivedChallengeCompleteHeader(int32 EntryPoint, bool Temp_bool_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, bool CallFunc_HasPurchasedSeasonBook_ReturnValue, class UImage* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemReceivedChallengeCompleteHeader_C", "ExecuteUbergraph_ItemReceivedChallengeCompleteHeader");

	Params::UItemReceivedChallengeCompleteHeader_C_ExecuteUbergraph_ItemReceivedChallengeCompleteHeader_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAthenaProfile_ReturnValue = CallFunc_GetAthenaProfile_ReturnValue;
	Parms.CallFunc_HasPurchasedSeasonBook_ReturnValue = CallFunc_HasPurchasedSeasonBook_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
