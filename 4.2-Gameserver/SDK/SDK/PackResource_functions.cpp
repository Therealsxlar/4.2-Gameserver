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


// Function PackResource.PackResource_C.GetCountOpacity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 SlateColor                                                       (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetResourceItemMaxStackSize_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UPackResource_C::GetCountOpacity(struct FSlateColor* SlateColor, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetResourceItemMaxStackSize_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("PackResource_C", "GetCountOpacity");

	Params::UPackResource_C_GetCountOpacity_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetResourceItemMaxStackSize_ReturnValue = CallFunc_GetResourceItemMaxStackSize_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

	if (SlateColor != nullptr)
		*SlateColor = Parms.SlateColor;

}


// Function PackResource.PackResource_C.RefreshLargerCountLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetCountOpacity_SlateColor                              ()
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetShorthandItemStackCount_ReturnValue                  ()

void UPackResource_C::RefreshLargerCountLayout(float CallFunc_Conv_IntToFloat_ReturnValue, const struct FSlateColor& CallFunc_GetCountOpacity_SlateColor, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetShorthandItemStackCount_ReturnValue)
{
	static auto Func = Class->GetFunction("PackResource_C", "RefreshLargerCountLayout");

	Params::UPackResource_C_RefreshLargerCountLayout_Params Parms;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetCountOpacity_SlateColor = CallFunc_GetCountOpacity_SlateColor;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetShorthandItemStackCount_ReturnValue = CallFunc_GetShorthandItemStackCount_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PackResource.PackResource_C.RefreshSmallerCountLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_GetCountOpacity_SlateColor                              ()

void UPackResource_C::RefreshSmallerCountLayout(float CallFunc_Conv_IntToFloat_ReturnValue, const struct FSlateColor& CallFunc_GetCountOpacity_SlateColor)
{
	static auto Func = Class->GetFunction("PackResource_C", "RefreshSmallerCountLayout");

	Params::UPackResource_C_RefreshSmallerCountLayout_Params Parms;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetCountOpacity_SlateColor = CallFunc_GetCountOpacity_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PackResource.PackResource_C.Change Material
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPackResource_C::Change_Material(class UAthenaHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("PackResource_C", "Change Material");

	Params::UPackResource_C_Change_Material_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PackResource.PackResource_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UPackResource_C::OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("PackResource_C", "OnTouchStarted");

	Params::UPackResource_C_OnTouchStarted_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PackResource.PackResource_C.SetImageSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseLargeIcon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPaperSprite*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortResourceType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortResourceType       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromSprite_ReturnValue                         ()
// struct FSlateBrush                 CallFunc_MakeBrushFromSprite_ReturnValue1                        ()

void UPackResource_C::SetImageSize(bool UseLargeIcon, class UPaperSprite* Temp_object_Variable, class UPaperSprite* Temp_object_Variable1, class UPaperSprite* Temp_object_Variable2, class UPaperSprite* Temp_object_Variable3, class UPaperSprite* Temp_object_Variable4, enum class EFortResourceType Temp_byte_Variable, class UPaperSprite* Temp_object_Variable5, class UPaperSprite* Temp_object_Variable6, class UPaperSprite* Temp_object_Variable7, class UPaperSprite* Temp_object_Variable8, class UPaperSprite* Temp_object_Variable9, enum class EFortResourceType Temp_byte_Variable1, class UPaperSprite* K2Node_Select_Default, class UPaperSprite* K2Node_Select1_Default, const struct FSlateBrush& CallFunc_MakeBrushFromSprite_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromSprite_ReturnValue1)
{
	static auto Func = Class->GetFunction("PackResource_C", "SetImageSize");

	Params::UPackResource_C_SetImageSize_Params Parms;
	Parms.UseLargeIcon = UseLargeIcon;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_object_Variable8 = Temp_object_Variable8;
	Parms.Temp_object_Variable9 = Temp_object_Variable9;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_MakeBrushFromSprite_ReturnValue = CallFunc_MakeBrushFromSprite_ReturnValue;
	Parms.CallFunc_MakeBrushFromSprite_ReturnValue1 = CallFunc_MakeBrushFromSprite_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PackResource.PackResource_C.TryUpdateCount
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetResourceCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetResourceCount_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPackResource_C::TryUpdateCount(bool CallFunc_Greater_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetResourceCount_ReturnValue, int32 CallFunc_GetResourceCount_ReturnValue1, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("PackResource_C", "TryUpdateCount");

	Params::UPackResource_C_TryUpdateCount_Params Parms;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetResourceCount_ReturnValue = CallFunc_GetResourceCount_ReturnValue;
	Parms.CallFunc_GetResourceCount_ReturnValue1 = CallFunc_GetResourceCount_ReturnValue1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PackResource.PackResource_C.TryUpdateBackground
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_IsResourceActive                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortResourceItemDefinition* CallFunc_GetCurrentResourceItemDefinition_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortResourceItemDefinition* CallFunc_GetResourceItemDefinition_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPackResource_C::TryUpdateBackground(bool Local_IsResourceActive, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable1, class UFortResourceItemDefinition* CallFunc_GetCurrentResourceItemDefinition_ReturnValue, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, bool CallFunc_IsBROnly_ReturnValue, class UClass* K2Node_Select_Default, class UClass* K2Node_Select1_Default, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UFortResourceItemDefinition* CallFunc_GetResourceItemDefinition_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("PackResource_C", "TryUpdateBackground");

	Params::UPackResource_C_TryUpdateBackground_Params Parms;
	Parms.Local_IsResourceActive = Local_IsResourceActive;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable1 = Temp_class_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_GetCurrentResourceItemDefinition_ReturnValue = CallFunc_GetCurrentResourceItemDefinition_ReturnValue;
	Parms.Temp_class_Variable2 = Temp_class_Variable2;
	Parms.Temp_class_Variable3 = Temp_class_Variable3;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetResourceItemDefinition_ReturnValue = CallFunc_GetResourceItemDefinition_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PackResource.PackResource_C.UpdateType
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortResourceType       ResourceType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortResourceType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromSprite_ReturnValue                         ()

void UPackResource_C::UpdateType(enum class EFortResourceType ResourceType, enum class EFortResourceType Temp_byte_Variable, class UPaperSprite* Temp_object_Variable, class UPaperSprite* Temp_object_Variable1, class UPaperSprite* Temp_object_Variable2, class UPaperSprite* Temp_object_Variable3, class UPaperSprite* Temp_object_Variable4, class UPaperSprite* K2Node_Select_Default, const struct FSlateBrush& CallFunc_MakeBrushFromSprite_ReturnValue)
{
	static auto Func = Class->GetFunction("PackResource_C", "UpdateType");

	Params::UPackResource_C_UpdateType_Params Parms;
	Parms.ResourceType = ResourceType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeBrushFromSprite_ReturnValue = CallFunc_MakeBrushFromSprite_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PackResource.PackResource_C.UpdateCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPackResource_C::UpdateCount()
{
	static auto Func = Class->GetFunction("PackResource_C", "UpdateCount");

	Params::UPackResource_C_UpdateCount_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PackResource.PackResource_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPackResource_C::Construct()
{
	static auto Func = Class->GetFunction("PackResource_C", "Construct");

	Params::UPackResource_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PackResource.PackResource_C.On Material Change
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPackResource_C::On_Material_Change()
{
	static auto Func = Class->GetFunction("PackResource_C", "On Material Change");

	Params::UPackResource_C_On_Material_Change_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PackResource.PackResource_C.ExecuteUbergraph_PackResource
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPackResource_C::ExecuteUbergraph_PackResource(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("PackResource_C", "ExecuteUbergraph_PackResource");

	Params::UPackResource_C_ExecuteUbergraph_PackResource_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
