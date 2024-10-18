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

enum class ECheckBoxState : uint8
{
	Unchecked                      = 0,
	Checked                        = 1,
	Undetermined                   = 2,
	ECheckBoxState_MAX             = 3,
};

enum class EWidgetClipping : uint8
{
	Inherit                        = 0,
	ClipToBounds                   = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways             = 3,
	OnDemand                       = 4,
	EWidgetClipping_MAX            = 5,
};

enum class ESlateBrushImageType : uint8
{
	NoImage                        = 0,
	FullColor                      = 1,
	Linear                         = 2,
	ESlateBrushImageType_MAX       = 3,
};

enum class ESlateBrushMirrorType : uint8
{
	NoMirror                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushMirrorType_MAX      = 4,
};

enum class ESlateBrushTileType : uint8
{
	NoTile                         = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushTileType_MAX        = 4,
};

enum class ESlateBrushDrawType : uint8
{
	NoDrawType                     = 0,
	Box                            = 1,
	Border                         = 2,
	Image                          = 3,
	ESlateBrushDrawType_MAX        = 4,
};

enum class ESlateColorStylingMode : uint8
{
	UseColor_Specified             = 0,
	UseColor_Specified_Link        = 1,
	UseColor_Foreground            = 2,
	UseColor_Foreground_Subdued    = 3,
	UseColor_MAX                   = 4,
};

enum class EUINavigationRule : uint8
{
	Escape                         = 0,
	Explicit                       = 1,
	Wrap                           = 2,
	Stop                           = 3,
	Custom                         = 4,
	CustomBoundary                 = 5,
	Invalid                        = 6,
	EUINavigationRule_MAX          = 7,
};

enum class EUINavigation : uint8
{
	Left                           = 0,
	Right                          = 1,
	Up                             = 2,
	Down                           = 3,
	Next                           = 4,
	Previous                       = 5,
	Num                            = 6,
	Invalid                        = 7,
	EUINavigation_MAX              = 8,
};

enum class ESelectInfo : uint8
{
	OnKeyPress                     = 0,
	OnNavigation                   = 1,
	OnMouseClick                   = 2,
	Direct                         = 3,
	ESelectInfo_MAX                = 4,
};

enum class ETextCommit : uint8
{
	Default                        = 0,
	OnEnter                        = 1,
	OnUserMovedFocus               = 2,
	OnCleared                      = 3,
	ETextCommit_MAX                = 4,
};

enum class ETextShapingMethod : uint8
{
	Auto                           = 0,
	KerningOnly                    = 1,
	FullShaping                    = 2,
	ETextShapingMethod_MAX         = 3,
};

enum class EHorizontalAlignment : uint8
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4,
};

enum class EVerticalAlignment : uint8
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4,
};

enum class EFontLayoutMethod : uint8
{
	Metrics                        = 0,
	BoundingBox                    = 1,
	EFontLayoutMethod_MAX          = 2,
};

enum class EFontLoadingPolicy : uint8
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3,
};

enum class EFontHinting : uint8
{
	Default                        = 0,
	Auto                           = 1,
	AutoLight                      = 2,
	Monochrome                     = 3,
	None                           = 4,
	EFontHinting_MAX               = 5,
};

enum class EFocusCause : uint8
{
	Mouse                          = 0,
	Navigation                     = 1,
	SetDirectly                    = 2,
	Cleared                        = 3,
	OtherWidgetLostFocus           = 4,
	WindowActivate                 = 5,
	EFocusCause_MAX                = 6,
};

enum class EColorVisionDeficiency : uint8
{
	NormalVision                   = 0,
	Deuteranope                    = 1,
	Protanope                      = 2,
	Tritanope                      = 3,
	EColorVisionDeficiency_MAX     = 4,
};

enum class EScrollDirection : uint8
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2,
};

enum class EOrientation : uint8
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2,
};

enum class EMenuPlacement : uint8
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_MAX              = 13,
};

enum class ENavigationGenesis : uint8
{
	Keyboard                       = 0,
	Controller                     = 1,
	User                           = 2,
	ENavigationGenesis_MAX         = 3,
};

enum class ENavigationSource : uint8
{
	FocusedWidget                  = 0,
	WidgetUnderCursor              = 1,
	ENavigationSource_MAX          = 2,
};

enum class EButtonPressMethod : uint8
{
	DownAndUp                      = 0,
	ButtonPress                    = 1,
	ButtonRelease                  = 2,
	EButtonPressMethod_MAX         = 3,
};

enum class EButtonTouchMethod : uint8
{
	DownAndUp                      = 0,
	PreciseTap                     = 1,
	EButtonTouchMethod_MAX         = 2,
};

enum class EButtonClickMethod : uint8
{
	DownAndUp                      = 0,
	MouseDown                      = 1,
	MouseUp                        = 2,
	PreciseClick                   = 3,
	EButtonClickMethod_MAX         = 4,
};

enum class EFontFallback : uint8
{
	FF_NoFallback                  = 0,
	FF_LocalizedFallback           = 1,
	FF_LastResortFallback          = 2,
	FF_Max                         = 3,
};

enum class ESlateCheckBoxType : uint8
{
	CheckBox                       = 0,
	ToggleButton                   = 1,
	ESlateCheckBoxType_MAX         = 2,
};

enum class ESlateParentWindowSearchMethod : uint8
{
	ActiveWindow                   = 0,
	MainWindow                     = 1,
	ESlateParentWindowSearchMethod_MAX = 2,
};

enum class EConsumeMouseWheel : uint8
{
	WhenScrollingPossible          = 0,
	Always                         = 1,
	Never                          = 2,
	EConsumeMouseWheel_MAX         = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct SlateCore.Geometry
struct FGeometry
{
public:
	uint8                                        Pad_F4C[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SlateCore.Margin
struct FMargin
{
public:
	float                                        Left;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Top;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Right;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bottom;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.SlateColor
struct FSlateColor
{
public:
	struct FLinearColor                          SpecifiedColor;                                    // 0x0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateColorStylingMode            ColorUseRule;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F4D[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct SlateCore.SlateBrush
struct FSlateBrush
{
public:
	uint8                                        Pad_F4E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ImageSize;                                         // 0x8(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Margin;                                            // 0x10(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                           TintColor;                                         // 0x20(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UObject*                               ResourceObject;                                    // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ResourceName;                                      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FBox2D                                UVRegion;                                          // 0x58(0x14)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class ESlateBrushDrawType               DrawAs;                                            // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushTileType               Tiling;                                            // 0x6D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushMirrorType             Mirroring;                                         // 0x6E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushImageType              ImageType;                                         // 0x6F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4F[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bIsDynamicallyLoaded : 1;                          // Mask: 0x1, PropSize: 0x10x80(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasUObject : 1;                                   // Mask: 0x2, PropSize: 0x10x80(0x1)(Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F50[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SlateCore.InputEvent
struct FInputEvent
{
public:
	uint8                                        Pad_F51[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x70 - 0x18)
// ScriptStruct SlateCore.PointerEvent
struct FPointerEvent : public FInputEvent
{
public:
	uint8                                        Pad_F52[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x20 - 0x18)
// ScriptStruct SlateCore.CharacterEvent
struct FCharacterEvent : public FInputEvent
{
public:
	uint8                                        Pad_F53[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x38 - 0x18)
// ScriptStruct SlateCore.KeyEvent
struct FKeyEvent : public FInputEvent
{
public:
	uint8                                        Pad_F54[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x20 - 0x18)
// ScriptStruct SlateCore.NavigationEvent
struct FNavigationEvent : public FInputEvent
{
public:
	uint8                                        Pad_F55[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x40 - 0x38)
// ScriptStruct SlateCore.AnalogInputEvent
struct FAnalogInputEvent : public FKeyEvent
{
public:
	uint8                                        Pad_F56[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.FontOutlineSettings
struct FFontOutlineSettings
{
public:
	int32                                        OutlineSize;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSeparateFillAlpha;                                // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F57[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               OutlineMaterial;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OutlineColor;                                      // 0x10(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct SlateCore.SlateFontInfo
struct FSlateFontInfo
{
public:
	class UObject*                               FontObject;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               FontMaterial;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFontOutlineSettings                  OutlineSettings;                                   // 0x10(0x20)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F58[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TypefaceFontName;                                  // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Size;                                              // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F59[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.SlateWidgetStyle
struct FSlateWidgetStyle
{
public:
	uint8                                        Pad_F5A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x6B0 (0x6B8 - 0x8)
// ScriptStruct SlateCore.TableRowStyle
struct FTableRowStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           SelectorFocusedBrush;                              // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveHoveredBrush;                                // 0x90(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveBrush;                                       // 0x118(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveHoveredBrush;                              // 0x1A0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveBrush;                                     // 0x228(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           EvenRowBackgroundHoveredBrush;                     // 0x2B0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           EvenRowBackgroundBrush;                            // 0x338(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OddRowBackgroundHoveredBrush;                      // 0x3C0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OddRowBackgroundBrush;                             // 0x448(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           TextColor;                                         // 0x4D0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           SelectedTextColor;                                 // 0x4F8(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DropIndicator_Above;                               // 0x520(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DropIndicator_Onto;                                // 0x5A8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DropIndicator_Below;                               // 0x630(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SlateCore.SlateSound
struct FSlateSound
{
public:
	class UObject*                               ResourceObject;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F5B[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x270 (0x278 - 0x8)
// ScriptStruct SlateCore.ButtonStyle
struct FButtonStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           Normal;                                            // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Hovered;                                           // 0x90(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Pressed;                                           // 0x118(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Disabled;                                          // 0x1A0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               NormalPadding;                                     // 0x228(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PressedPadding;                                    // 0x238(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x248(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x260(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x398 (0x3A0 - 0x8)
// ScriptStruct SlateCore.ComboButtonStyle
struct FComboButtonStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          ButtonStyle;                                       // 0x8(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DownArrowImage;                                    // 0x280(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuBorderBrush;                                   // 0x308(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               MenuBorderPadding;                                 // 0x390(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3D0 (0x3D8 - 0x8)
// ScriptStruct SlateCore.ComboBoxStyle
struct FComboBoxStyle : public FSlateWidgetStyle
{
public:
	struct FComboButtonStyle                     ComboButtonStyle;                                  // 0x8(0x3A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x3A8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           SelectionChangeSlateSound;                         // 0x3C0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x210 (0x218 - 0x8)
// ScriptStruct SlateCore.EditableTextStyle
struct FEditableTextStyle : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x8(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x58(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageSelected;                           // 0x80(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageComposing;                          // 0x108(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CaretImage;                                        // 0x190(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x4C8 (0x4D0 - 0x8)
// ScriptStruct SlateCore.ScrollBarStyle
struct FScrollBarStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           HorizontalBackgroundImage;                         // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           VerticalBackgroundImage;                           // 0x90(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           VerticalTopSlotImage;                              // 0x118(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HorizontalTopSlotImage;                            // 0x1A0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           VerticalBottomSlotImage;                           // 0x228(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HorizontalBottomSlotImage;                         // 0x2B0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalThumbImage;                                  // 0x338(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredThumbImage;                                 // 0x3C0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DraggedThumbImage;                                 // 0x448(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x7E8 (0x7F0 - 0x8)
// ScriptStruct SlateCore.EditableTextBoxStyle
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           BackgroundImageNormal;                             // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageHovered;                            // 0x90(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageFocused;                            // 0x118(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundImageReadOnly;                           // 0x1A0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x228(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font;                                              // 0x238(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x288(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           BackgroundColor;                                   // 0x2B0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           ReadOnlyForegroundColor;                           // 0x2D8(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               HScrollBarPadding;                                 // 0x300(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               VScrollBarPadding;                                 // 0x310(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x320(0x4D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1D8 (0x1E0 - 0x8)
// ScriptStruct SlateCore.TextBlockStyle
struct FTextBlockStyle : public FSlateWidgetStyle
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x8(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x58(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset;                                      // 0x80(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x88(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           SelectedBackgroundColor;                           // 0x98(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          HighlightColor;                                    // 0xC0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HighlightShape;                                    // 0xD0(0x88)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UnderlineBrush;                                    // 0x158(0x88)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x2E0 (0x2E8 - 0x8)
// ScriptStruct SlateCore.SpinBoxStyle
struct FSpinBoxStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           BackgroundBrush;                                   // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredBackgroundBrush;                            // 0x90(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveFillBrush;                                   // 0x118(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveFillBrush;                                 // 0x1A0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ArrowsImage;                                       // 0x228(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x2B0(0x28)(NativeAccessSpecifierPublic)
	struct FMargin                               TextPadding;                                       // 0x2D8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.FocusEvent
struct FFocusEvent
{
public:
	uint8                                        Pad_F5C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x48 - 0x18)
// ScriptStruct SlateCore.MotionEvent
struct FMotionEvent : public FInputEvent
{
public:
	uint8                                        Pad_F5D[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x220 (0x228 - 0x8)
// ScriptStruct SlateCore.ScrollBoxStyle
struct FScrollBoxStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           TopShadowBrush;                                    // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BottomShadowBrush;                                 // 0x90(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LeftShadowBrush;                                   // 0x118(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           RightShadowBrush;                                  // 0x1A0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x578 (0x580 - 0x8)
// ScriptStruct SlateCore.CheckBoxStyle
struct FCheckBoxStyle : public FSlateWidgetStyle
{
public:
	enum class ESlateCheckBoxType                CheckBoxType;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           UncheckedImage;                                    // 0x10(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UncheckedHoveredImage;                             // 0x98(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UncheckedPressedImage;                             // 0x120(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CheckedImage;                                      // 0x1A8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CheckedHoveredImage;                               // 0x230(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           CheckedPressedImage;                               // 0x2B8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UndeterminedImage;                                 // 0x340(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UndeterminedHoveredImage;                          // 0x3C8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UndeterminedPressedImage;                          // 0x450(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x4D8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x4E8(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           BorderBackgroundColor;                             // 0x510(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateSound                           CheckedSlateSound;                                 // 0x538(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           UncheckedSlateSound;                               // 0x550(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x568(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.FontData
struct FFontData
{
public:
	class FString                                FontFilename;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFontHinting                      Hinting;                                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFontLoadingPolicy                LoadingPolicy;                                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F5F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               FontFaceAsset;                                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.TypefaceEntry
struct FTypefaceEntry
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFontData                             Font;                                              // 0x8(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SlateCore.Typeface
struct FTypeface
{
public:
	TArray<struct FTypefaceEntry>                Fonts;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SlateCore.CompositeFallbackFont
struct FCompositeFallbackFont
{
public:
	struct FTypeface                             Typeface;                                          // 0x0(0x10)(NativeAccessSpecifierPublic)
	float                                        ScalingFactor;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F60[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x38 - 0x18)
// ScriptStruct SlateCore.CompositeSubFont
struct FCompositeSubFont : public FCompositeFallbackFont
{
public:
	TArray<struct FInt32Range>                   CharacterRanges;                                   // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Cultures;                                          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SlateCore.CompositeFont
struct FCompositeFont
{
public:
	struct FTypeface                             DefaultTypeface;                                   // 0x0(0x10)(NativeAccessSpecifierPublic)
	struct FCompositeFallbackFont                FallbackTypeface;                                  // 0x10(0x18)(NativeAccessSpecifierPublic)
	TArray<struct FCompositeSubFont>             SubTypefaces;                                      // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.CaptureLostEvent
struct FCaptureLostEvent
{
public:
	uint8                                        Pad_F61[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xFC8 (0xFD0 - 0x8)
// ScriptStruct SlateCore.WindowStyle
struct FWindowStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          MinimizeButtonStyle;                               // 0x8(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          MaximizeButtonStyle;                               // 0x280(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          RestoreButtonStyle;                                // 0x4F8(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          CloseButtonStyle;                                  // 0x770(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TitleTextStyle;                                    // 0x9E8(0x1E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveTitleBrush;                                  // 0xBC8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           InactiveTitleBrush;                                // 0xC50(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FlashTitleBrush;                                   // 0xCD8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           BackgroundColor;                                   // 0xD60(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OutlineBrush;                                      // 0xD88(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                           OutlineColor;                                      // 0xE10(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BorderBrush;                                       // 0xE38(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundBrush;                                   // 0xEC0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChildBackgroundBrush;                              // 0xF48(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x110 (0x118 - 0x8)
// ScriptStruct SlateCore.ScrollBorderStyle
struct FScrollBorderStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           TopShadowBrush;                                    // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BottomShadowBrush;                                 // 0x90(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x6F8 (0x700 - 0x8)
// ScriptStruct SlateCore.DockTabStyle
struct FDockTabStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          CloseButtonStyle;                                  // 0x8(0x278)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBrush;                                       // 0x280(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActiveBrush;                                       // 0x308(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ColorOverlayTabBrush;                              // 0x390(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ColorOverlayIconBrush;                             // 0x418(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ForegroundBrush;                                   // 0x4A0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredBrush;                                      // 0x528(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ContentAreaBrush;                                  // 0x5B0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TabWellBrush;                                      // 0x638(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               TabPadding;                                        // 0x6C0(0x10)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        OverlapWidth;                                      // 0x6D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F62[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           FlashColor;                                        // 0x6D8(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x4C8 (0x4D0 - 0x8)
// ScriptStruct SlateCore.TableColumnHeaderStyle
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           SortPrimaryAscendingImage;                         // 0x8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortPrimaryDescendingImage;                        // 0x90(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortSecondaryAscendingImage;                       // 0x118(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SortSecondaryDescendingImage;                      // 0x1A0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBrush;                                       // 0x228(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HoveredBrush;                                      // 0x2B0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuDropdownImage;                                 // 0x338(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuDropdownNormalBorderBrush;                     // 0x3C0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MenuDropdownHoveredBorderBrush;                    // 0x448(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x110 (0x118 - 0x8)
// ScriptStruct SlateCore.SplitterStyle
struct FSplitterStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           HandleNormalBrush;                                 // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HandleHighlightBrush;                              // 0x90(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xB68 (0xB70 - 0x8)
// ScriptStruct SlateCore.HeaderRowStyle
struct FHeaderRowStyle : public FSlateWidgetStyle
{
public:
	struct FTableColumnHeaderStyle               ColumnStyle;                                       // 0x8(0x4D0)(Edit, NativeAccessSpecifierPublic)
	struct FTableColumnHeaderStyle               LastColumnStyle;                                   // 0x4D8(0x4D0)(Edit, NativeAccessSpecifierPublic)
	struct FSplitterStyle                        ColumnSplitterStyle;                               // 0x9A8(0x118)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundBrush;                                   // 0xAC0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0xB48(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x90 (0x98 - 0x8)
// ScriptStruct SlateCore.InlineTextImageStyle
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           Image;                                             // 0x8(0x88)(Edit, NativeAccessSpecifierPublic)
	int16                                        Baseline;                                          // 0x90(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F63[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x228 (0x230 - 0x8)
// ScriptStruct SlateCore.SliderStyle
struct FSliderStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           NormalBarImage;                                    // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DisabledBarImage;                                  // 0x90(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalThumbImage;                                  // 0x118(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DisabledThumbImage;                                // 0x1A0(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        BarThickness;                                      // 0x228(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F64[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4D8 (0x4E0 - 0x8)
// ScriptStruct SlateCore.VolumeControlStyle
struct FVolumeControlStyle : public FSlateWidgetStyle
{
public:
	struct FSliderStyle                          SliderStyle;                                       // 0x8(0x230)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           HighVolumeImage;                                   // 0x238(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MidVolumeImage;                                    // 0x2C0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LowVolumeImage;                                    // 0x348(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NoVolumeImage;                                     // 0x3D0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MutedImage;                                        // 0x458(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0xA78 (0xA80 - 0x8)
// ScriptStruct SlateCore.SearchBoxStyle
struct FSearchBoxStyle : public FSlateWidgetStyle
{
public:
	struct FEditableTextBoxStyle                 TextBoxStyle;                                      // 0x8(0x7F0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        ActiveFontInfo;                                    // 0x7F8(0x50)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           UpArrowImage;                                      // 0x848(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           DownArrowImage;                                    // 0x8D0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GlassImage;                                        // 0x958(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ClearImage;                                        // 0x9E0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               ImagePadding;                                      // 0xA68(0x10)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLeftAlignButtons;                                 // 0xA78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F65[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x120 - 0x8)
// ScriptStruct SlateCore.ExpandableAreaStyle
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           CollapsedImage;                                    // 0x8(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ExpandedImage;                                     // 0x90(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        RolloutAnimationSeconds;                           // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F66[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x198 (0x1A0 - 0x8)
// ScriptStruct SlateCore.ProgressBarStyle
struct FProgressBarStyle : public FSlateWidgetStyle
{
public:
	struct FSlateBrush                           BackgroundImage;                                   // 0x8(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FillImage;                                         // 0x90(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MarqueeImage;                                      // 0x118(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x9D0 (0x9D8 - 0x8)
// ScriptStruct SlateCore.InlineEditableTextBlockStyle
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
public:
	struct FEditableTextBoxStyle                 EditableTextBoxStyle;                              // 0x8(0x7F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0x7F8(0x1E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x468 (0x470 - 0x8)
// ScriptStruct SlateCore.HyperlinkStyle
struct FHyperlinkStyle : public FSlateWidgetStyle
{
public:
	struct FButtonStyle                          UnderlineStyle;                                    // 0x8(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0x280(0x1E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x460(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
