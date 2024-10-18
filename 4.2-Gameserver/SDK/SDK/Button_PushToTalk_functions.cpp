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


// Function Button_PushToTalk.Button_PushToTalk_C.Update Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPTTState               PTT_State                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCanPTT_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPTTState               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPaperSprite*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_PushToTalk_C::Update_Visibility(enum class EPTTState PTT_State, class UPaperSprite* Temp_object_Variable, class UPaperSprite* Temp_object_Variable1, class UPaperSprite* Temp_object_Variable2, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GetCanPTT_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EPTTState Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue1, class UPaperSprite* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("Button_PushToTalk_C", "Update Visibility");

	Params::UButton_PushToTalk_C_Update_Visibility_Params Parms;
	Parms.PTT_State = PTT_State;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCanPTT_ReturnValue = CallFunc_GetCanPTT_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_PushToTalk.Button_PushToTalk_C.OnClicked
// (Event, Public, BlueprintEvent)
// Parameters:

void UButton_PushToTalk_C::OnClicked()
{
	static auto Func = Class->GetFunction("Button_PushToTalk_C", "OnClicked");

	Params::UButton_PushToTalk_C_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_PushToTalk.Button_PushToTalk_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UButton_PushToTalk_C::Construct()
{
	static auto Func = Class->GetFunction("Button_PushToTalk_C", "Construct");

	Params::UButton_PushToTalk_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_PushToTalk.Button_PushToTalk_C.OnHUDStateUpdate
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortHUDState               NewState                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UButton_PushToTalk_C::OnHUDStateUpdate(struct FFortHUDState& NewState)
{
	static auto Func = Class->GetFunction("Button_PushToTalk_C", "OnHUDStateUpdate");

	Params::UButton_PushToTalk_C_OnHUDStateUpdate_Params Parms;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_PushToTalk.Button_PushToTalk_C.On Can PTT
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UButton_PushToTalk_C::On_Can_PTT()
{
	static auto Func = Class->GetFunction("Button_PushToTalk_C", "On Can PTT");

	Params::UButton_PushToTalk_C_On_Can_PTT_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_PushToTalk.Button_PushToTalk_C.ExecuteUbergraph_Button_PushToTalk
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPTTState               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPTTState               CallFunc_GetPTTState_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPTTState               Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPTTState               CallFunc_GetPTTState_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPTTState               Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPTTState               CallFunc_GetPTTState_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPTTState               Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// enum class EPTTState               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortHUDState               K2Node_Event_NewState                                            (ConstParm, NoDestructor)

void UButton_PushToTalk_C::ExecuteUbergraph_Button_PushToTalk(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, enum class EPTTState Temp_byte_Variable, enum class EPTTState CallFunc_GetPTTState_ReturnValue, enum class EPTTState Temp_byte_Variable1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue2, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue3, enum class EPTTState CallFunc_GetPTTState_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue4, enum class EPTTState Temp_byte_Variable2, enum class EPTTState CallFunc_GetPTTState_ReturnValue2, enum class EPTTState Temp_byte_Variable3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, enum class EPTTState K2Node_Select_Default, const struct FFortHUDState& K2Node_Event_NewState)
{
	static auto Func = Class->GetFunction("Button_PushToTalk_C", "ExecuteUbergraph_Button_PushToTalk");

	Params::UButton_PushToTalk_C_ExecuteUbergraph_Button_PushToTalk_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetPTTState_ReturnValue = CallFunc_GetPTTState_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_GetPTTState_ReturnValue1 = CallFunc_GetPTTState_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_GetPTTState_ReturnValue2 = CallFunc_GetPTTState_ReturnValue2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
