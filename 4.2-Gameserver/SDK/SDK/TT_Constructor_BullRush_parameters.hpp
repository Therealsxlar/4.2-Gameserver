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

// 0x11 (0x11 - 0x0)
// Function TT_Constructor_BullRush.TT_Constructor_BullRush_C.GetApplicationTag
struct UTT_Constructor_BullRush_C_GetApplicationTag_Params
{
public:
	class UGameplayAbility*                      AbilityInstance;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          OutTag;                                            // 0x8(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x150 (0x150 - 0x0)
// Function TT_Constructor_BullRush.TT_Constructor_BullRush_C.GetTextForTokenFromAbilityInstanceInternal
struct UTT_Constructor_BullRush_C_GetTextForTokenFromAbilityInstanceInternal_Params
{
public:
	class UGameplayAbility*                      AbilityInstance;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag;                                               // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   Context;                                           // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Token;                                             // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class FText                                  OutText;                                           // 0x20(0x18)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGA_Constructor_BullRush_C*            K2Node_DynamicCast_AsGA_Constructor_Bull_Rush;     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x50(0x18)()
	class FText                                  Temp_text_Variable;                                // 0x68(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x80(0x18)()
	class FText                                  Temp_text_Variable2;                               // 0x98(0x18)()
	class FText                                  K2Node_Select_Default;                             // 0xB0(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0xC8(0x18)()
	bool                                         Temp_bool_Variable1;                               // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable4;                               // 0xE8(0x18)()
	class FText                                  K2Node_Select1_Default;                            // 0x100(0x18)()
	class FText                                  Temp_text_Variable5;                               // 0x118(0x18)()
	bool                                         Temp_bool_Variable2;                               // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select2_Default;                            // 0x138(0x18)()
};

// 0x19 (0x19 - 0x0)
// Function TT_Constructor_BullRush.TT_Constructor_BullRush_C.InitializeAbilityInstanceInternal
struct UTT_Constructor_BullRush_C_InitializeAbilityInstanceInternal_Params
{
public:
	class UGameplayAbility*                      AbilityInstance;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   Context;                                           // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGA_Constructor_BullRush_C*            K2Node_DynamicCast_AsGA_Constructor_Bull_Rush;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
