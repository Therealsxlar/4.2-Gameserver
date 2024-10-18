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


// Function SocialImportPanel.SocialImportPanel_C.OnClaimViewRequested
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialImportPanel_C::OnClaimViewRequested()
{
	static auto Func = Class->GetFunction("SocialImportPanel_C", "OnClaimViewRequested");

	Params::USocialImportPanel_C_OnClaimViewRequested_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialImportPanel.SocialImportPanel_C.OnImportViewRequested
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialImportPanel_C::OnImportViewRequested()
{
	static auto Func = Class->GetFunction("SocialImportPanel_C", "OnImportViewRequested");

	Params::USocialImportPanel_C_OnImportViewRequested_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialImportPanel.SocialImportPanel_C.OnWaitingViewRequested
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialImportPanel_C::OnWaitingViewRequested()
{
	static auto Func = Class->GetFunction("SocialImportPanel_C", "OnWaitingViewRequested");

	Params::USocialImportPanel_C_OnWaitingViewRequested_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialImportPanel.SocialImportPanel_C.OnPanelTypeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ESocialImportPanelType  NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialImportPanel_C::OnPanelTypeSet(enum class ESocialImportPanelType NewType)
{
	static auto Func = Class->GetFunction("SocialImportPanel_C", "OnPanelTypeSet");

	Params::USocialImportPanel_C_OnPanelTypeSet_Params Parms;
	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialImportPanel.SocialImportPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialImportPanel_C::OnActivated()
{
	static auto Func = Class->GetFunction("SocialImportPanel_C", "OnActivated");

	Params::USocialImportPanel_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialImportPanel.SocialImportPanel_C.OnLauncherImportOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialImportPanel_C::OnLauncherImportOpened()
{
	static auto Func = Class->GetFunction("SocialImportPanel_C", "OnLauncherImportOpened");

	Params::USocialImportPanel_C_OnLauncherImportOpened_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialImportPanel.SocialImportPanel_C.ExecuteUbergraph_SocialImportPanel
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESocialImportPanelType  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// uint8                              Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable2                                              ()
// class FText                        Temp_text_Variable3                                              ()
// uint8                              Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 Temp_struct_Variable                                             ()
// struct FSlateBrush                 Temp_struct_Variable1                                            ()
// enum class ESocialImportPanelType  K2Node_Event_NewType                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESocialImportPanelPlatformCallFunc_GetSocialPlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select1_Default                                           ()
// class FText                        K2Node_Select2_Default                                           ()
// struct FSlateBrush                 K2Node_Select3_Default                                           ()
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialImportPanel_C::ExecuteUbergraph_SocialImportPanel(int32 EntryPoint, enum class ESocialImportPanelType Temp_byte_Variable, uint8 Temp_byte_Variable1, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, uint8 Temp_byte_Variable2, class FText Temp_text_Variable, class FText Temp_text_Variable1, uint8 Temp_byte_Variable3, class FText Temp_text_Variable2, class FText Temp_text_Variable3, uint8 Temp_byte_Variable4, const struct FSlateBrush& Temp_struct_Variable, const struct FSlateBrush& Temp_struct_Variable1, enum class ESocialImportPanelType K2Node_Event_NewType, bool K2Node_SwitchEnum_CmpSuccess, enum class ESocialImportPanelPlatform CallFunc_GetSocialPlatform_ReturnValue, class UTexture2D* K2Node_Select_Default, class FText K2Node_Select1_Default, class FText K2Node_Select2_Default, const struct FSlateBrush& K2Node_Select3_Default, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 K2Node_Select4_Default)
{
	static auto Func = Class->GetFunction("SocialImportPanel_C", "ExecuteUbergraph_SocialImportPanel");

	Params::USocialImportPanel_C_ExecuteUbergraph_SocialImportPanel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_text_Variable2 = Temp_text_Variable2;
	Parms.Temp_text_Variable3 = Temp_text_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.K2Node_Event_NewType = K2Node_Event_NewType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSocialPlatform_ReturnValue = CallFunc_GetSocialPlatform_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
