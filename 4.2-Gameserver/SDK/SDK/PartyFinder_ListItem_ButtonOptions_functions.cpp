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


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.NumPartyMembersInviteOrJoinText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumOfPartyMembers                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// class FText                        K2Node_Select_Default                                            ()

void UPartyFinder_ListItem_ButtonOptions_C::NumPartyMembersInviteOrJoinText(int32 NumOfPartyMembers, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "NumPartyMembersInviteOrJoinText");

	Params::UPartyFinder_ListItem_ButtonOptions_C_NumPartyMembersInviteOrJoinText_Params Parms;
	Parms.NumOfPartyMembers = NumOfPartyMembers;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.SetEnableButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinder_ListItem_ButtonOptions_C::SetEnableButtons(bool bIsEnabled)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "SetEnableButtons");

	Params::UPartyFinder_ListItem_ButtonOptions_C_SetEnableButtons_Params Parms;
	Parms.bIsEnabled = bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.SetupButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsInvite                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bCanbeJoinedIfNotInvite                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConsolePlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_ListItem_ButtonOptions_C::SetupButtons(bool bIsInvite, bool bCanbeJoinedIfNotInvite, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool Temp_bool_Variable1, int32 Temp_int_Variable2, bool CallFunc_IsConsolePlatform_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, int32 K2Node_Select_Default, int32 K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "SetupButtons");

	Params::UPartyFinder_ListItem_ButtonOptions_C_SetupButtons_Params Parms;
	Parms.bIsInvite = bIsInvite;
	Parms.bCanbeJoinedIfNotInvite = bCanbeJoinedIfNotInvite;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.CallFunc_IsConsolePlatform_ReturnValue = CallFunc_IsConsolePlatform_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyFinder_ListItem_ButtonOptions_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "PreConstruct");

	Params::UPartyFinder_ListItem_ButtonOptions_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__FriendItemOption_K2Node_ComponentBoundEvent_989_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_ListItem_ButtonOptions_C::BndEvt__FriendItemOption_K2Node_ComponentBoundEvent_989_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "BndEvt__FriendItemOption_K2Node_ComponentBoundEvent_989_CommonButtonClicked__DelegateSignature");

	Params::UPartyFinder_ListItem_ButtonOptions_C_BndEvt__FriendItemOption_K2Node_ComponentBoundEvent_989_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1145_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_ListItem_ButtonOptions_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1145_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1145_CommonButtonClicked__DelegateSignature");

	Params::UPartyFinder_ListItem_ButtonOptions_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1145_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__IgnoreInviteButton_K2Node_ComponentBoundEvent_1166_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_ListItem_ButtonOptions_C::BndEvt__IgnoreInviteButton_K2Node_ComponentBoundEvent_1166_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "BndEvt__IgnoreInviteButton_K2Node_ComponentBoundEvent_1166_CommonButtonClicked__DelegateSignature");

	Params::UPartyFinder_ListItem_ButtonOptions_C_BndEvt__IgnoreInviteButton_K2Node_ComponentBoundEvent_1166_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPartyFinder_ListItem_ButtonOptions_C::Construct()
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "Construct");

	Params::UPartyFinder_ListItem_ButtonOptions_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__STW_InviteButton_K2Node_ComponentBoundEvent_633_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_ListItem_ButtonOptions_C::BndEvt__STW_InviteButton_K2Node_ComponentBoundEvent_633_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "BndEvt__STW_InviteButton_K2Node_ComponentBoundEvent_633_CommonButtonClicked__DelegateSignature");

	Params::UPartyFinder_ListItem_ButtonOptions_C_BndEvt__STW_InviteButton_K2Node_ComponentBoundEvent_633_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.BndEvt__STW_JoinButton_K2Node_ComponentBoundEvent_653_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_ListItem_ButtonOptions_C::BndEvt__STW_JoinButton_K2Node_ComponentBoundEvent_653_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "BndEvt__STW_JoinButton_K2Node_ComponentBoundEvent_653_CommonButtonClicked__DelegateSignature");

	Params::UPartyFinder_ListItem_ButtonOptions_C_BndEvt__STW_JoinButton_K2Node_ComponentBoundEvent_653_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Disable_STW_Invite
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyFinder_ListItem_ButtonOptions_C::Disable_STW_Invite()
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "Disable_STW_Invite");

	Params::UPartyFinder_ListItem_ButtonOptions_C_Disable_STW_Invite_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.Disable_STW_Join
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPartyFinder_ListItem_ButtonOptions_C::Disable_STW_Join()
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "Disable_STW_Join");

	Params::UPartyFinder_ListItem_ButtonOptions_C_Disable_STW_Join_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.ExecuteUbergraph_PartyFinder_ListItem_ButtonOptions
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button4                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button3                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_ListItem_ButtonOptions_C::ExecuteUbergraph_PartyFinder_ListItem_ButtonOptions(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, bool K2Node_Event_IsDesignTime, class UCommonButton* K2Node_ComponentBoundEvent_Button4, int32 K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "ExecuteUbergraph_PartyFinder_ListItem_ButtonOptions");

	Params::UPartyFinder_ListItem_ButtonOptions_C_ExecuteUbergraph_PartyFinder_ListItem_ButtonOptions_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Button4 = K2Node_ComponentBoundEvent_Button4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button3 = K2Node_ComponentBoundEvent_Button3;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.STWInvite_Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_ListItem_ButtonOptions_C::STWInvite_Clicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "STWInvite_Clicked__DelegateSignature");

	Params::UPartyFinder_ListItem_ButtonOptions_C_STWInvite_Clicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.JoinParty_Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_ListItem_ButtonOptions_C::JoinParty_Clicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "JoinParty_Clicked__DelegateSignature");

	Params::UPartyFinder_ListItem_ButtonOptions_C_JoinParty_Clicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.IgnoreInvite_Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_ListItem_ButtonOptions_C::IgnoreInvite_Clicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "IgnoreInvite_Clicked__DelegateSignature");

	Params::UPartyFinder_ListItem_ButtonOptions_C_IgnoreInvite_Clicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.InviteToParty_Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_ListItem_ButtonOptions_C::InviteToParty_Clicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "InviteToParty_Clicked__DelegateSignature");

	Params::UPartyFinder_ListItem_ButtonOptions_C_InviteToParty_Clicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PartyFinder_ListItem_ButtonOptions.PartyFinder_ListItem_ButtonOptions_C.AcceptPartyInvite_Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyFinder_ListItem_ButtonOptions_C::AcceptPartyInvite_Clicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("PartyFinder_ListItem_ButtonOptions_C", "AcceptPartyInvite_Clicked__DelegateSignature");

	Params::UPartyFinder_ListItem_ButtonOptions_C_AcceptPartyInvite_Clicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
