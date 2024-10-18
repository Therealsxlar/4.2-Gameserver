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


// Function TimelineMarker.TimelineMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTimelineMarker_C::Construct()
{
	static auto Func = Class->GetFunction("TimelineMarker_C", "Construct");

	Params::UTimelineMarker_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimelineMarker.TimelineMarker_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTimelineMarker_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("TimelineMarker_C", "BP_OnHovered");

	Params::UTimelineMarker_C_BP_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimelineMarker.TimelineMarker_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTimelineMarker_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("TimelineMarker_C", "BP_OnUnhovered");

	Params::UTimelineMarker_C_BP_OnUnhovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimelineMarker.TimelineMarker_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTimelineMarker_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("TimelineMarker_C", "BP_OnClicked");

	Params::UTimelineMarker_C_BP_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TimelineMarker.TimelineMarker_C.ExecuteUbergraph_TimelineMarker
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortReplayEventType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortReplayContext*          CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UTimelineMarker_C::ExecuteUbergraph_TimelineMarker(int32 EntryPoint, enum class EFortReplayEventType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable1, class UTexture2D* Temp_object_Variable2, class UTexture2D* Temp_object_Variable3, class UFortReplayContext* CallFunc_GetContext_ReturnValue, class UTexture2D* K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("TimelineMarker_C", "ExecuteUbergraph_TimelineMarker");

	Params::UTimelineMarker_C_ExecuteUbergraph_TimelineMarker_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
