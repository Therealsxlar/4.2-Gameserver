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

// 0x568 (0x568 - 0x0)
// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.SetConsoleInputImages
struct UAthenaSpectatorScoreboard_C_SetConsoleInputImages_Params
{
public:
	struct FSlateBrush                           Temp_struct_Variable;                              // 0x0(0x88)()
	struct FSlateBrush                           Temp_struct_Variable1;                             // 0x88(0x88)()
	enum class ECommonGamepadType                Temp_byte_Variable;                                // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Temp_struct_Variable2;                             // 0x118(0x88)()
	struct FSlateBrush                           Temp_struct_Variable3;                             // 0x1A0(0x88)()
	class UCommonInputContext*                   CallFunc_GetContext_ReturnValue;                   // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonGamepadType                CallFunc_GetCurrentGamepadType_ReturnValue;        // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECommonGamepadType                Temp_byte_Variable1;                               // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x238(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush1;                     // 0x2C0(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush2;                     // 0x348(0x88)()
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x3D0(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush3;                     // 0x458(0x88)()
	struct FSlateBrush                           K2Node_Select1_Default;                            // 0x4E0(0x88)()
};

// 0x1 (0x1 - 0x0)
// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.UpdateListUI
struct UAthenaSpectatorScoreboard_C_UpdateListUI_Params
{
public:
	bool                                         bResetFocus;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.ResetFocus
struct UAthenaSpectatorScoreboard_C_ResetFocus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.Construct
struct UAthenaSpectatorScoreboard_C_Construct_Params
{
public:
};

// 0x3B (0x3B - 0x0)
// Function AthenaSpectatorScoreboard.AthenaSpectatorScoreboard_C.ExecuteUbergraph_AthenaSpectatorScoreboard
struct UAthenaSpectatorScoreboard_C_ExecuteUbergraph_AthenaSpectatorScoreboard_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   CallFunc_GetDisplayedEntryWidgets_ReturnValue;     // 0x10(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class UObject*                               CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaSpectatorScoreboardRowWidget_C* K2Node_DynamicCast_AsAthena_Spectator_Scoreboard_Row_Widget; // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bResetFocus;                          // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
