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


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlayIntroOrOutro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayIntro                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingTile_C::PlayIntroOrOutro(bool PlayIntro)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingTile_C", "PlayIntroOrOutro");

	Params::UAthenaMatchmakingTile_C_PlayIntroOrOutro_Params Parms;
	Parms.PlayIntro = PlayIntro;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingTile_C", "Construct");

	Params::UAthenaMatchmakingTile_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.UpdateTileAvailability
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Available                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingTile_C::UpdateTileAvailability(bool Available)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingTile_C", "UpdateTileAvailability");

	Params::UAthenaMatchmakingTile_C_UpdateTileAvailability_Params Parms;
	Parms.Available = Available;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::BP_OnSelected()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingTile_C", "BP_OnSelected");

	Params::UAthenaMatchmakingTile_C_BP_OnSelected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::BP_OnDeselected()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingTile_C", "BP_OnDeselected");

	Params::UAthenaMatchmakingTile_C_BP_OnDeselected_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.SetTileSize
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               UseLargeSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingTile_C::SetTileSize(bool UseLargeSize)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingTile_C", "SetTileSize");

	Params::UAthenaMatchmakingTile_C_SetTileSize_Params Parms;
	Parms.UseLargeSize = UseLargeSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlaylistChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena*         PlaylistToRepresent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingTile_C::PlaylistChanged(class UFortPlaylistAthena* PlaylistToRepresent)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingTile_C", "PlaylistChanged");

	Params::UAthenaMatchmakingTile_C_PlaylistChanged_Params Parms;
	Parms.PlaylistToRepresent = PlaylistToRepresent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.TilePlaylistSetAsMatchmakingPlaylist
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::TilePlaylistSetAsMatchmakingPlaylist()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingTile_C", "TilePlaylistSetAsMatchmakingPlaylist");

	Params::UAthenaMatchmakingTile_C_TilePlaylistSetAsMatchmakingPlaylist_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.OnImageLoadingComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::OnImageLoadingComplete()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingTile_C", "OnImageLoadingComplete");

	Params::UAthenaMatchmakingTile_C_OnImageLoadingComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingTile_C", "BP_OnHovered");

	Params::UAthenaMatchmakingTile_C_BP_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.SetDefaultImage
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::SetDefaultImage()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingTile_C", "SetDefaultImage");

	Params::UAthenaMatchmakingTile_C_SetDefaultImage_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingTile_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingTile_C", "BP_OnClicked");

	Params::UAthenaMatchmakingTile_C_BP_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.ExecuteUbergraph_AthenaMatchmakingTile
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Available                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_UseLargeSize                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlaylistAthena*         K2Node_Event_PlaylistToRepresent                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        ()
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue1                       ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// class FText                        CallFunc_TextToUpper_ReturnValue1                                ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAthenaMatchmakingTile_C::ExecuteUbergraph_AthenaMatchmakingTile(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable2, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, bool K2Node_Event_Available, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_UseLargeSize, class UFortPlaylistAthena* K2Node_Event_PlaylistToRepresent, float K2Node_Select1_Default, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, enum class ESlateVisibility K2Node_Select3_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float Temp_float_Variable2, float Temp_float_Variable3, bool Temp_bool_Variable4, float K2Node_Select4_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingTile_C", "ExecuteUbergraph_AthenaMatchmakingTile");

	Params::UAthenaMatchmakingTile_C_ExecuteUbergraph_AthenaMatchmakingTile_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_Event_Available = K2Node_Event_Available;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_UseLargeSize = K2Node_Event_UseLargeSize;
	Parms.K2Node_Event_PlaylistToRepresent = K2Node_Event_PlaylistToRepresent;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue1 = CallFunc_MakeBrushFromTexture_ReturnValue1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue1 = CallFunc_TextToUpper_ReturnValue1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
