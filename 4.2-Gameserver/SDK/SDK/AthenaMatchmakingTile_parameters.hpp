#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlayIntroOrOutro
struct UAthenaMatchmakingTile_C_PlayIntroOrOutro_Params
{
public:
	bool                                         PlayIntro;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.Construct
struct UAthenaMatchmakingTile_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.UpdateTileAvailability
struct UAthenaMatchmakingTile_C_UpdateTileAvailability_Params
{
public:
	bool                                         Available;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnSelected
struct UAthenaMatchmakingTile_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnDeselected
struct UAthenaMatchmakingTile_C_BP_OnDeselected_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.SetTileSize
struct UAthenaMatchmakingTile_C_SetTileSize_Params
{
public:
	bool                                         UseLargeSize;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.PlaylistChanged
struct UAthenaMatchmakingTile_C_PlaylistChanged_Params
{
public:
	class UFortPlaylistAthena*                   PlaylistToRepresent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.TilePlaylistSetAsMatchmakingPlaylist
struct UAthenaMatchmakingTile_C_TilePlaylistSetAsMatchmakingPlaylist_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.OnImageLoadingComplete
struct UAthenaMatchmakingTile_C_OnImageLoadingComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnHovered
struct UAthenaMatchmakingTile_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.SetDefaultImage
struct UAthenaMatchmakingTile_C_SetDefaultImage_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.BP_OnClicked
struct UAthenaMatchmakingTile_C_BP_OnClicked_Params
{
public:
};

// 0x1A0 (0x1A0 - 0x0)
// Function AthenaMatchmakingTile.AthenaMatchmakingTile_C.ExecuteUbergraph_AthenaMatchmakingTile
struct UAthenaMatchmakingTile_C_ExecuteUbergraph_AthenaMatchmakingTile_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable1;                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable2;                               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable3;                               // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable3;                               // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable4;                               // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable5;                               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Available;                            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_UseLargeSize;                         // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPlaylistAthena*                   K2Node_Event_PlaylistToRepresent;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select1_Default;                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x30(0x88)()
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue1;        // 0xB8(0x88)()
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x140(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue1;                 // 0x158(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select2_Default;                            // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select3_Default;                            // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_47D4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable2;                              // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable3;                              // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable4;                               // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select4_Default;                            // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x190(0x10)(ZeroConstructor, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
