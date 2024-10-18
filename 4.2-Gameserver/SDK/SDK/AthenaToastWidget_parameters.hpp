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
// Function AthenaToastWidget.AthenaToastWidget_C.StartIntro
struct UAthenaToastWidget_C_StartIntro_Params
{
public:
};

// 0x41 (0x41 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.ShowText
struct UAthenaToastWidget_C_ShowText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                      TextBlock;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      LocalTextBlock;                                    // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  LocalText;                                         // 0x28(0x18)(Edit, BlueprintVisible)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.SetToast
struct UAthenaToastWidget_C_SetToast_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Description;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.Construct
struct UAthenaToastWidget_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.HandleIntroFinished
struct UAthenaToastWidget_C_HandleIntroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.HandleOutroFinished
struct UAthenaToastWidget_C_HandleOutroFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.HandleAnimationDelay
struct UAthenaToastWidget_C_HandleAnimationDelay_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.OnMouseEnter
struct UAthenaToastWidget_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.OnMouseLeave
struct UAthenaToastWidget_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x158 (0x158 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.ExecuteUbergraph_AthenaToastWidget
struct UAthenaToastWidget_C_ExecuteUbergraph_AthenaToastWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46BF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x18(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate2;             // 0x28(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x38(0x8)(NoDestructor)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x40(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent1;                          // 0x78(0x70)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xE8(0x70)(ConstParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaToastWidget.AthenaToastWidget_C.OnFinishedToast__DelegateSignature
struct UAthenaToastWidget_C_OnFinishedToast__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
