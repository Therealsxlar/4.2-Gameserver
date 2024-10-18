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

// 0x0 (0x0 - 0x0)
// Function HeroSquadSlotsView.HeroSquadSlotsView_C.UndarkenAllSlots
struct UHeroSquadSlotsView_C_UndarkenAllSlots_Params
{
public:
};

// 0x5 (0x5 - 0x0)
// Function HeroSquadSlotsView.HeroSquadSlotsView_C.HighlightSlotByIndex
struct UHeroSquadSlotsView_C_HighlightSlotByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function HeroSquadSlotsView.HeroSquadSlotsView_C.HandleSquadNavigation
struct UHeroSquadSlotsView_C_HandleSquadNavigation_Params
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SlotIndex;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SquadSlotId;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x458 (0x458 - 0x0)
// Function HeroSquadSlotsView.HeroSquadSlotsView_C.CreateAndAddSquadSlotButton
struct UHeroSquadSlotsView_C_CreateAndAddSquadSlotButton_Params
{
public:
	int32                                        SquadSlotIndex;                                    // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHomebaseSquadSlot                    SquadSlotDefinition;                               // 0x8(0x68)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UWidget*                               OutSquadSlotButtonHost;                            // 0x70(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSquadSlotSelectorButton*          ReturnValue;                                       // 0x78(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B6E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x88(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush1;                     // 0x110(0x88)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x198(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1;             // 0x1B0(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0x1C8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue3;             // 0x1E0(0x18)()
	class FText                                  Temp_text_Variable;                                // 0x1F8(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x210(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B6F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimpleSquadSlotButton_C*              CallFunc_Create_ReturnValue;                       // 0x238(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x240(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x258(0x40)(HasGetValueTypeHash)
	TArray<class UWidget*>                       K2Node_MakeArray_Array;                            // 0x298(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array1;                           // 0x2A8(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2B8(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x2D0(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x2E8(0x18)()
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue1;             // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimpleSquadSlotButton_C*              CallFunc_Create_ReturnValue1;                      // 0x308(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       K2Node_MakeArray_Array2;                           // 0x318(0x10)(ZeroConstructor, ReferenceParm)
	struct FSlateBrush                           K2Node_Select1_Default;                            // 0x328(0x88)()
	bool                                         Temp_bool_Variable2;                               // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue2;             // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select2_Default;                            // 0x3C0(0x18)()
	class USimpleSquadSlotButton_C*              CallFunc_Create_ReturnValue2;                      // 0x3D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0x3E0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array3;                           // 0x420(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class UWidget*>                       K2Node_MakeArray_Array4;                           // 0x430(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue1;                      // 0x440(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function HeroSquadSlotsView.HeroSquadSlotsView_C.Construct
struct UHeroSquadSlotsView_C_Construct_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function HeroSquadSlotsView.HeroSquadSlotsView_C.ExecuteUbergraph_HeroSquadSlotsView
struct UHeroSquadSlotsView_C_ExecuteUbergraph_HeroSquadSlotsView_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B72[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
