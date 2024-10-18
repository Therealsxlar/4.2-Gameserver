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


// Function CommonBacchusButton.CommonBacchusButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonBacchusButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("CommonBacchusButton_C", "PreConstruct");

	Params::UCommonBacchusButton_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonBacchusButton.CommonBacchusButton_C.SetButtonSprite
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPaperSprite*                NewSprite                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonBacchusButton_C::SetButtonSprite(class UPaperSprite* NewSprite)
{
	static auto Func = Class->GetFunction("CommonBacchusButton_C", "SetButtonSprite");

	Params::UCommonBacchusButton_C_SetButtonSprite_Params Parms;
	Parms.NewSprite = NewSprite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonBacchusButton.CommonBacchusButton_C.SetButtonSize
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewButtonSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonBacchusButton_C::SetButtonSize(float NewButtonSize)
{
	static auto Func = Class->GetFunction("CommonBacchusButton_C", "SetButtonSize");

	Params::UCommonBacchusButton_C_SetButtonSize_Params Parms;
	Parms.NewButtonSize = NewButtonSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonBacchusButton.CommonBacchusButton_C.SetButtonDisplayScale
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewDisplayScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonBacchusButton_C::SetButtonDisplayScale(float NewDisplayScale)
{
	static auto Func = Class->GetFunction("CommonBacchusButton_C", "SetButtonDisplayScale");

	Params::UCommonBacchusButton_C_SetButtonDisplayScale_Params Parms;
	Parms.NewDisplayScale = NewDisplayScale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonBacchusButton.CommonBacchusButton_C.ExecuteUbergraph_CommonBacchusButton
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPaperSprite*                K2Node_Event_NewSprite                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_NewButtonSize                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewDisplayScale                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonBacchusButton_C::ExecuteUbergraph_CommonBacchusButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UPaperSprite* K2Node_Event_NewSprite, bool CallFunc_IsValid_ReturnValue, UInterfaceProperty_ CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput, float K2Node_Event_NewButtonSize, float K2Node_Event_NewDisplayScale, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("CommonBacchusButton_C", "ExecuteUbergraph_CommonBacchusButton");

	Params::UCommonBacchusButton_C_ExecuteUbergraph_CommonBacchusButton_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_NewSprite = K2Node_Event_NewSprite;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput = CallFunc_SetBrushFromAtlasInterface_AtlasRegion_CastInput;
	Parms.K2Node_Event_NewButtonSize = K2Node_Event_NewButtonSize;
	Parms.K2Node_Event_NewDisplayScale = K2Node_Event_NewDisplayScale;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
