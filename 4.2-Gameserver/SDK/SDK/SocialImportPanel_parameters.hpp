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
// Function SocialImportPanel.SocialImportPanel_C.OnClaimViewRequested
struct USocialImportPanel_C_OnClaimViewRequested_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnImportViewRequested
struct USocialImportPanel_C_OnImportViewRequested_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnWaitingViewRequested
struct USocialImportPanel_C_OnWaitingViewRequested_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnPanelTypeSet
struct USocialImportPanel_C_OnPanelTypeSet_Params
{
public:
	enum class ESocialImportPanelType            NewType;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnActivated
struct USocialImportPanel_C_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.OnLauncherImportOpened
struct USocialImportPanel_C_OnLauncherImportOpened_Params
{
public:
};

// 0x280 (0x280 - 0x0)
// Function SocialImportPanel.SocialImportPanel_C.ExecuteUbergraph_SocialImportPanel
struct USocialImportPanel_C_ExecuteUbergraph_SocialImportPanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESocialImportPanelType            Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Temp_byte_Variable1;                               // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D40[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable1;                             // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Temp_byte_Variable2;                               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D41[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)()
	class FText                                  Temp_text_Variable1;                               // 0x38(0x18)()
	uint8                                        Temp_byte_Variable3;                               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable2;                               // 0x58(0x18)()
	class FText                                  Temp_text_Variable3;                               // 0x70(0x18)()
	uint8                                        Temp_byte_Variable4;                               // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D43[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Temp_struct_Variable;                              // 0x90(0x88)()
	struct FSlateBrush                           Temp_struct_Variable1;                             // 0x118(0x88)()
	enum class ESocialImportPanelType            K2Node_Event_NewType;                              // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESocialImportPanelPlatform        CallFunc_GetSocialPlatform_ReturnValue;            // 0x1A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D44[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default;                             // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select1_Default;                            // 0x1B0(0x18)()
	class FText                                  K2Node_Select2_Default;                            // 0x1C8(0x18)()
	struct FSlateBrush                           K2Node_Select3_Default;                            // 0x1E0(0x88)()
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x268(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D45[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable1;                                // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select4_Default;                            // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
