#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECommonNumericType : uint8
{
	Number                         = 0,
	Percentage                     = 1,
	Seconds                        = 2,
	Distance                       = 3,
	ECommonNumericType_MAX         = 4,
};

enum class EOperation : uint8
{
	Intro                          = 0,
	Outro                          = 1,
	Push                           = 2,
	Pop                            = 3,
	Invalid                        = 4,
	EOperation_MAX                 = 5,
};

enum class ECommonPlatformType : uint8
{
	PC                             = 0,
	Mac                            = 1,
	PS4                            = 2,
	XBox                           = 3,
	IOS                            = 4,
	Android                        = 5,
	Erebus                         = 6,
	Count                          = 7,
	ECommonPlatformType_MAX        = 8,
};

enum class EInputActionState : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	HiddenAndDisabled              = 3,
	EInputActionState_MAX          = 4,
};

enum class ETransitionCurve : uint8
{
	Linear                         = 0,
	QuadIn                         = 1,
	QuadOut                        = 2,
	QuadInOut                      = 3,
	CubicIn                        = 4,
	CubicOut                       = 5,
	CubicInOut                     = 6,
	ETransitionCurve_MAX           = 7,
};

enum class ECommonSwitcherTransition : uint8
{
	FadeOnly                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Zoom                           = 3,
	ECommonSwitcherTransition_MAX  = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct CommonUI.CommonNumberFormattingOptions
struct FCommonNumberFormattingOptions
{
public:
	enum class ERoundingMode                     RoundingMode;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseGrouping;                                       // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F30[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinimumIntegralDigits;                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumIntegralDigits;                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimumFractionalDigits;                           // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumFractionalDigits;                           // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CommonUI.CommonRegisteredTabInfo
struct FCommonRegisteredTabInfo
{
public:
	int32                                        TabIndex;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F31[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ContentInstance;                                   // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CommonUI.CommonInputActionHandlerData
struct FCommonInputActionHandlerData
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EInputActionState                 State;                                             // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F32[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CommonUI.Operation
struct FOperation
{
public:
	enum class EOperation                        Operation;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F33[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActivatablePanel*               Panel;                                             // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntroPanel;                                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivatePanel;                                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutroPanelBelow;                                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F34[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2A8 (0x2A8 - 0x0)
// ScriptStruct CommonUI.CommonInputKeyDisplayData
struct FCommonInputKeyDisplayData
{
public:
	struct FSlateBrush                           KeyboardSpecificBrush;                             // 0x0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GamepadSpecificBrushes;                            // 0x88(0x88)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_F35[0x110];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           TouchSpecificBrush;                                // 0x220(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x2C0 (0x2C0 - 0x0)
// ScriptStruct CommonUI.CommonInputKeyDisplayConfiguration
struct FCommonInputKeyDisplayConfiguration
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCommonInputKeyDisplayData            Value;                                             // 0x18(0x2A8)(Edit, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct CommonUI.CommonInputTypeInfo
struct FCommonInputTypeInfo
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EInputActionState                 OverrrideState;                                    // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActionRequiresHold;                               // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F36[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HoldTime;                                          // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OverrideBrush;                                     // 0x20(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x378 (0x380 - 0x8)
// ScriptStruct CommonUI.CommonInputActionData
struct FCommonInputActionData : public FTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  HoldDisplayName;                                   // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FCommonInputTypeInfo                  KeyboardInputTypeInfo;                             // 0x38(0xA8)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FCommonInputTypeInfo                  GamepadInputTypeInfos;                             // 0xE0(0xA8)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F37[0x150];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCommonInputTypeInfo                  TouchInputTypeInfo;                                // 0x2D8(0xA8)(Edit, Protected, NativeAccessSpecifierProtected)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
