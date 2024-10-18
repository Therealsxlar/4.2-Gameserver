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

// 0x10 (0x10 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.TempFix_TintMainBrushes
struct UAthena_PartySuggestion_TempFix_C_TempFix_TintMainBrushes_Params
{
public:
	struct FLinearColor                          NewColor;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.SetupMIDReferences
struct UAthena_PartySuggestion_TempFix_C_SetupMIDReferences_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43E8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue1; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue2; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue3; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue4; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.SetMainMIDs
struct UAthena_PartySuggestion_TempFix_C_SetMainMIDs_Params
{
public:
	class UMaterialInstanceDynamic*              BorderMID;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              TailMID;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              SparklesMID;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LC_Cur_Border_L;                                   // 0x18(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LC_CurBorder_R;                                    // 0x28(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurMIDScalar_ShapeChange;                          // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_K2_GetVectorParameterValue_ReturnValue;   // 0x40(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_K2_GetVectorParameterValue_ReturnValue1;  // 0x50(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue;   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.InitPhysAnim
struct UAthena_PartySuggestion_TempFix_C_InitPhysAnim_Params
{
public:
	struct FFloatSpringState                     K2Node_MakeStruct_FloatSpringState;                // 0x0(0x8)(NoDestructor)
	struct FFloatSpringState                     K2Node_MakeStruct_FloatSpringState1;               // 0x8(0x8)(NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.InitMIDs
struct UAthena_PartySuggestion_TempFix_C_InitMIDs_Params
{
public:
};

// 0x80 (0x80 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.InitNewPartySuggestion
struct UAthena_PartySuggestion_TempFix_C_InitNewPartySuggestion_Params
{
public:
	struct FFortPartySuggestion                  NewPartySuggestion;                                // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x218 (0x218 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.OnMouseButtonDown_0
struct UAthena_PartySuggestion_TempFix_C_OnMouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)()
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.PlayOutro
struct UAthena_PartySuggestion_TempFix_C_PlayOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.DismissSuggestion
struct UAthena_PartySuggestion_TempFix_C_DismissSuggestion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.ClobberSuggestion
struct UAthena_PartySuggestion_TempFix_C_ClobberSuggestion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature
struct UAthena_PartySuggestion_TempFix_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature
struct UAthena_PartySuggestion_TempFix_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_120_OnButtonHoverEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UAthena_PartySuggestion_TempFix_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.ForceAcceptSuggestion
struct UAthena_PartySuggestion_TempFix_C_ForceAcceptSuggestion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.Construct
struct UAthena_PartySuggestion_TempFix_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature
struct UAthena_PartySuggestion_TempFix_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_31_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.PlayIntro
struct UAthena_PartySuggestion_TempFix_C_PlayIntro_Params
{
public:
};

// 0x3C (0x3C - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.Tick
struct UAthena_PartySuggestion_TempFix_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.UpdatePartySuggestion
struct UAthena_PartySuggestion_TempFix_C_UpdatePartySuggestion_Params
{
public:
	struct FFortPartySuggestion                  PartySuggestionStruct;                             // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.UpdateDisplay
struct UAthena_PartySuggestion_TempFix_C_UpdateDisplay_Params
{
public:
};

// 0x80 (0x80 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.NewPartySuggestion
struct UAthena_PartySuggestion_TempFix_C_NewPartySuggestion_Params
{
public:
	struct FFortPartySuggestion                  Party_Suggestion_Struct;                           // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.HidePartySuggestion
struct UAthena_PartySuggestion_TempFix_C_HidePartySuggestion_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.PreConstruct
struct UAthena_PartySuggestion_TempFix_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.OnUnhovered
struct UAthena_PartySuggestion_TempFix_C_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.OnHovered
struct UAthena_PartySuggestion_TempFix_C_OnHovered_Params
{
public:
};

// 0x3F8 (0x3F8 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.ExecuteUbergraph_Athena_PartySuggestion_TempFix
struct UAthena_PartySuggestion_TempFix_C_ExecuteUbergraph_Athena_PartySuggestion_TempFix_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortSocialItem*>               CallFunc_Map_Values_Values;                        // 0x10(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Variable1;                                // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortSocialItem*                       CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentPlatform_ReturnValue;           // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x40(0x18)()
	bool                                         Temp_bool_Variable1;                               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable2;                                // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable3;                                // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable4;                                // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x78(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x90(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0xA8(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0xC0(0x18)()
	class FText                                  Temp_text_Variable4;                               // 0xD8(0x18)()
	bool                                         Temp_bool_Variable2;                               // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43F0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable3;                               // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0xFC(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable1;                             // 0x10C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable4;                               // 0x11C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable5;                                // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable6;                                // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable5;                               // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable5;                               // 0x130(0x18)()
	class FText                                  Temp_text_Variable6;                               // 0x148(0x18)()
	class UFortUIDataConfigurationContext*       CallFunc_GetContext_ReturnValue1;                  // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable6;                               // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Temp_struct_Variable2;                             // 0x16C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable3;                             // 0x17C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x190(0x10)(ZeroConstructor, NoDestructor)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x1A0(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetEndTime_ReturnValue;                   // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x1B8(0x8)(NoDestructor)
	int32                                        Temp_int_Variable7;                                // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             CallFunc_DateTimeMinValue_ReturnValue;             // 0x1C8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DateTimeDateTime_ReturnValue;    // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select1_Default;                            // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x1E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable7;                               // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x1EC(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortPartySuggestion                  K2Node_CustomEvent_PartySuggestionStruct;          // 0x230(0x80)()
	int32                                        K2Node_Select2_Default;                            // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x2B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select3_Default;                            // 0x2B8(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x2D0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x310(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x320(0x18)()
	struct FFortPartySuggestion                  K2Node_CustomEvent_Party_Suggestion_Struct;        // 0x338(0x80)()
	bool                                         CallFunc_RandomBool_ReturnValue;                   // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select4_Default;                            // 0x3BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select5_Default;                            // 0x3C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select6_Default;                            // 0x3C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select7_Default;                            // 0x3CC(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue1;              // 0x3DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3DD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43FE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select8_Default;                            // 0x3E0(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.OnSuggestionMouseDown__DelegateSignature
struct UAthena_PartySuggestion_TempFix_C_OnSuggestionMouseDown__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Athena_PartySuggestion_TempFix.Athena_PartySuggestion_TempFix_C.PartyFocused__DelegateSignature
struct UAthena_PartySuggestion_TempFix_C_PartyFocused__DelegateSignature_Params
{
public:
	class UAthena_LFG_SuggestedPartyItem_C*      FocusedPartyItem;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
