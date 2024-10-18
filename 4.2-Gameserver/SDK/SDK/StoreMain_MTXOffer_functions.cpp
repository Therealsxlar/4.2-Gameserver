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


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreMain_MTXOffer_C::TriggerReset()
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "TriggerReset");

	Params::UStoreMain_MTXOffer_C_TriggerReset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitialReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreMain_MTXOffer_C::InitialReset()
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "InitialReset");

	Params::UStoreMain_MTXOffer_C_InitialReset_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreMain_MTXOffer_C::TriggerIntro()
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "TriggerIntro");

	Params::UStoreMain_MTXOffer_C_TriggerIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ShowDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStoreMain_OfferDetails_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_MTXOffer_C::ShowDetails(bool CallFunc_IsBROnly_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UStoreMain_OfferDetails_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "ShowDetails");

	Params::UStoreMain_MTXOffer_C_ShowDetails_Params Parms;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SalePrice                                                        (Edit, BlueprintVisible)
// bool                               bIsOnSale                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        LocalSalePrice                                                   (Edit, BlueprintVisible)
// class FText                        BonusMTX                                                         (Edit, BlueprintVisible)
// class FText                        BaseMtx                                                          (Edit, BlueprintVisible)
// class UMaterial*                   OfferMaterial                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetBonusQuantity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortMtxStoreOfferType  CallFunc_GetStoreOfferType_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortMtxGradient            CallFunc_GetGradient_ReturnValue                                 (NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetBackground_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetTileImage_ReturnValue                                ()
// class FText                        CallFunc_GetName_ReturnValue                                     ()
// int32                              CallFunc_GetBonusQuantity_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// int32                              CallFunc_GetBaseQuantity_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetNormalPrice_ReturnValue                              ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// class FText                        CallFunc_GetNormalPrice_ReturnValue1                             ()
// class FText                        CallFunc_GetSalePrice_SalePrice                                  ()
// bool                               CallFunc_GetSalePrice_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select1_Default                                           ()

void UStoreMain_MTXOffer_C::InitOffer(class FText SalePrice, bool bIsOnSale, class FText LocalSalePrice, class FText BonusMTX, class FText BaseMtx, class UMaterial* OfferMaterial, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, int32 CallFunc_GetBonusQuantity_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable1, const struct FFortMtxGradient& CallFunc_GetGradient_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& CallFunc_GetBackground_ReturnValue, const struct FSlateBrush& CallFunc_GetTileImage_ReturnValue, class FText CallFunc_GetName_ReturnValue, int32 CallFunc_GetBonusQuantity_ReturnValue1, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetBaseQuantity_ReturnValue, class FText CallFunc_GetNormalPrice_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1, class FText CallFunc_GetNormalPrice_ReturnValue1, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, class FText K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "InitOffer");

	Params::UStoreMain_MTXOffer_C_InitOffer_Params Parms;
	Parms.SalePrice = SalePrice;
	Parms.bIsOnSale = bIsOnSale;
	Parms.LocalSalePrice = LocalSalePrice;
	Parms.BonusMTX = BonusMTX;
	Parms.BaseMtx = BaseMtx;
	Parms.OfferMaterial = OfferMaterial;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetBonusQuantity_ReturnValue = CallFunc_GetBonusQuantity_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetStoreOfferType_ReturnValue = CallFunc_GetStoreOfferType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetGradient_ReturnValue = CallFunc_GetGradient_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetBackground_ReturnValue = CallFunc_GetBackground_ReturnValue;
	Parms.CallFunc_GetTileImage_ReturnValue = CallFunc_GetTileImage_ReturnValue;
	Parms.CallFunc_GetName_ReturnValue = CallFunc_GetName_ReturnValue;
	Parms.CallFunc_GetBonusQuantity_ReturnValue1 = CallFunc_GetBonusQuantity_ReturnValue1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetBaseQuantity_ReturnValue = CallFunc_GetBaseQuantity_ReturnValue;
	Parms.CallFunc_GetNormalPrice_ReturnValue = CallFunc_GetNormalPrice_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.CallFunc_GetNormalPrice_ReturnValue1 = CallFunc_GetNormalPrice_ReturnValue1;
	Parms.CallFunc_GetSalePrice_SalePrice = CallFunc_GetSalePrice_SalePrice;
	Parms.CallFunc_GetSalePrice_ReturnValue = CallFunc_GetSalePrice_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_MTXOffer_C::Construct()
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "Construct");

	Params::UStoreMain_MTXOffer_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_MTXOffer_C::OnClick(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "OnClick");

	Params::UStoreMain_MTXOffer_C_OnClick_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_MTXOffer_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "BP_OnHovered");

	Params::UStoreMain_MTXOffer_C_BP_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_MTXOffer_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "BP_OnUnhovered");

	Params::UStoreMain_MTXOffer_C_BP_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EFortMtxStoreOfferType  CallFunc_GetStoreOfferType_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortMtxStoreOfferType  CallFunc_GetStoreOfferType_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreMain_MTXOffer_C::ExecuteUbergraph_StoreMain_MTXOffer(int32 EntryPoint, class UCommonButton* K2Node_CustomEvent_Button, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortMtxStoreOfferType CallFunc_GetStoreOfferType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1)
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "ExecuteUbergraph_StoreMain_MTXOffer");

	Params::UStoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetStoreOfferType_ReturnValue = CallFunc_GetStoreOfferType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetStoreOfferType_ReturnValue1 = CallFunc_GetStoreOfferType_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreMain_MTXOffer_C::AboutToShowDetails__DelegateSignature()
{
	static auto Func = Class->GetFunction("StoreMain_MTXOffer_C", "AboutToShowDetails__DelegateSignature");

	Params::UStoreMain_MTXOffer_C_AboutToShowDetails__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
