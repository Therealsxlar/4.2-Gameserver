#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class UMG.Visual
class UVisual : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Visual");
		return Clss;
	}

};

// 0xD8 (0x100 - 0x28)
// Class UMG.Widget
class UWidget : public UVisual
{
public:
	class UPanelSlot*                            Slot;                                              // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           bIsEnabledDelegate;                                // 0x30(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  ToolTipText;                                       // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ToolTipTextDelegate;                               // 0x58(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class UWidget*                               ToolTipWidget;                                     // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ToolTipWidgetDelegate;                             // 0x70(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           VisibilityDelegate;                                // 0x80(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FWidgetTransform                      RenderTransform;                                   // 0x90(0x1C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             RenderTransformPivot;                              // 0xAC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsVariable : 1;                                   // Mask: 0x1, PropSize: 0x10xB4(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCreatedByConstructionScript : 1;                  // Mask: 0x2, PropSize: 0x10xB4(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x4, PropSize: 0x10xB4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Cursor : 1;                              // Mask: 0x8, PropSize: 0x10xB4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsVolatile : 1;                                   // Mask: 0x10, PropSize: 0x10xB4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_0 : 3;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EMouseCursor                      Cursor;                                            // 0xB5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWidgetClipping                   Clipping;                                          // 0xB6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  Visibility;                                        // 0xB7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RenderOpacity;                                     // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetNavigation*                     Navigation;                                        // 0xC0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD[0x28];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPropertyBinding*>              NativeBindings;                                    // 0xF0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Widget");
		return Clss;
	}

	void SetVisibility(enum class ESlateVisibility InVisibility);
	void SetUserFocus(class APlayerController* PlayerController);
	void SetToolTipText(class FText& InToolTipText);
	void SetToolTip(class UWidget* Widget);
	void SetRenderTranslation(const struct FVector2D& Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransform(const struct FWidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(const struct FVector2D& Scale);
	void SetRenderOpacity(float InOpacity);
	void SetRenderAngle(float Angle);
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, class FName WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetCursor(enum class EMouseCursor InCursor);
	void SetClipping(enum class EWidgetClipping InClipping);
	void SetAllNavigationRules(enum class EUINavigationRule Rule, class FName WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool HasUserFocus(class APlayerController* PlayerController);
	bool HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UWidget* GetWidget__DelegateSignature();
	enum class ESlateVisibility GetVisibility();
	class FText GetText__DelegateSignature();
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	float GetRenderOpacity();
	class UPanelWidget* GetParent();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	enum class EMouseCursor GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int32 GetInt32__DelegateSignature();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	enum class EWidgetClipping GetClipping();
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature();
	struct FGeometry GetCachedGeometry();
	bool GetBool__DelegateSignature();
	class UWidget* GenerateWidgetForString__DelegateSignature(const class FString& Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};

// 0x2D8 (0x3D8 - 0x100)
// Class UMG.Slider
class USlider : public UWidget
{
public:
	float                                        Value;                                             // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           ValueDelegate;                                     // 0x108(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSliderStyle                          WidgetStyle;                                       // 0x118(0x230)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SliderBarColor;                                    // 0x34C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderHandleColor;                                 // 0x35C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IndentHandle;                                      // 0x36C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x36D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B0[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StepSize;                                          // 0x370(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x374(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnMouseCaptureBegin;                               // 0x378(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnMouseCaptureEnd;                                 // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnControllerCaptureBegin;                          // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnControllerCaptureEnd;                            // 0x3A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnValueChanged;                                    // 0x3B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B2[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Slider");
		return Clss;
	}

	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	float GetValue();
};

// 0x108 (0x208 - 0x100)
// Class UMG.UserWidget
class UUserWidget : public UWidget
{
public:
	uint8                                        Pad_C3[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorAndOpacity;                                   // 0x108(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x118(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x128(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ForegroundColorDelegate;                           // 0x150(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x160(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UUMGSequencePlayer*>            ActiveSequencePlayers;                             // 0x170(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UUMGSequencePlayer*>            StoppedSequencePlayers;                            // 0x180(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FNamedSlotBinding>             NamedSlotBindings;                                 // 0x190(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UWidgetTree*                           WidgetTree;                                        // 0x1A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x1A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsKeyboardFocus : 1;                        // Mask: 0x1, PropSize: 0x10x1AC(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsFocusable : 1;                                  // Mask: 0x2, PropSize: 0x10x1AC(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopAction : 1;                                   // Mask: 0x4, PropSize: 0x10x1AC(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasScriptImplementedTick : 1;                     // Mask: 0x8, PropSize: 0x10x1AC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasScriptImplementedPaint : 1;                    // Mask: 0x10, PropSize: 0x10x1AC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1 : 2;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bCookedWidgetTree : 1;                             // Mask: 0x80, PropSize: 0x10x1AC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWidgetTickFrequency              TickFrequency;                                     // 0x1AD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C4[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputComponent*                       InputComponent;                                    // 0x1B0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C5[0x50];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UserWidget");
		return Clss;
	}

	void UnregisterInputComponent();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StopListeningForInputAction(class FName ActionName, enum class EInputEvent EventType);
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void StopAllAnimations();
	void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void SetPadding(const struct FMargin& InPadding);
	void SetOwningPlayer(class APlayerController* LocalPlayerController);
	void SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer);
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32 NumLoopsToPlay);
	void SetInputActionPriority(int32 NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDesiredSizeInViewport(const struct FVector2D& Size);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetAnchorsInViewport(const struct FAnchors& Anchors);
	void SetAlignmentInViewport(const struct FVector2D& Alignment);
	void ReverseAnimation(class UWidgetAnimation* InAnimation);
	void RemoveFromViewport();
	void RegisterInputComponent();
	void PreConstruct(bool IsDesignTime);
	void PlaySound(class USoundBase* SoundToPlay);
	void PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
	void PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
	float PauseAnimation(class UWidgetAnimation* InAnimation);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, struct FPointerEvent& GestureEvent);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnPaint(struct FPaintContext& Context);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseCaptureLost();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragCancelled(struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ListenForInputAction(class FName ActionName, enum class EInputEvent EventType, bool bConsume, UDelegateProperty_ Callback);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(class FName ActionName);
	bool IsInViewport();
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	class APawn* GetOwningPlayerPawn();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	bool GetIsVisible();
	float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	struct FAnchors GetAnchorsInViewport();
	struct FVector2D GetAlignmentInViewport();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	void AddToViewport(int32 ZOrder);
	bool AddToPlayerScreen(int32 ZOrder);
};

// 0x18 (0x118 - 0x100)
// Class UMG.PanelWidget
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                    Slots;                                             // 0x100(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_CB[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PanelWidget");
		return Clss;
	}

	bool RemoveChildAt(int32 Index);
	bool RemoveChild(class UWidget* Content);
	bool HasChild(class UWidget* Content);
	bool HasAnyChildren();
	int32 GetChildrenCount();
	int32 GetChildIndex(class UWidget* Content);
	class UWidget* GetChildAt(int32 Index);
	void ClearChildren();
	class UPanelSlot* AddChild(class UWidget* Content);
};

// 0x0 (0x118 - 0x118)
// Class UMG.ContentWidget
class UContentWidget : public UPanelWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ContentWidget");
		return Clss;
	}

	class UPanelSlot* SetContent(class UWidget* Content);
	class UPanelSlot* GetContentSlot();
	class UWidget* GetContent();
};

// 0x148 (0x260 - 0x118)
// Class UMG.Border
class UBorder : public UContentWidget
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x119(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowEffectWhenDisabled : 1;                       // Mask: 0x1, PropSize: 0x10x11A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2 : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_CC[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ContentColorAndOpacity;                            // 0x11C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           ContentColorAndOpacityDelegate;                    // 0x130(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x140(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Background;                                        // 0x150(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UDelegateProperty_                           BackgroundDelegate;                                // 0x1D8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          BrushColor;                                        // 0x1E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           BrushColorDelegate;                                // 0x1F8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             DesiredSizeScale;                                  // 0x208(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnMouseButtonDownEvent;                            // 0x210(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnMouseButtonUpEvent;                              // 0x220(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnMouseMoveEvent;                                  // 0x230(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnMouseDoubleClickEvent;                           // 0x240(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Border");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetDesiredSizeScale(const struct FVector2D& InScale);
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrushColor(const struct FLinearColor& InBrushColor);
	void SetBrush(struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// 0x308 (0x420 - 0x118)
// Class UMG.Button
class UButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                Style;                                             // 0x118(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FButtonStyle                          WidgetStyle;                                       // 0x120(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x398(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0x3A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonClickMethod                ClickMethod;                                       // 0x3B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x3B9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonPressMethod                PressMethod;                                       // 0x3BA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x3BB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CF[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnClicked;                                         // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnPressed;                                         // 0x3D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnReleased;                                        // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHovered;                                         // 0x3F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnUnhovered;                                       // 0x400(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D0[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Button");
		return Clss;
	}

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod);
	void SetStyle(struct FButtonStyle& InStyle);
	void SetPressMethod(enum class EButtonPressMethod InPressMethod);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
};

// 0x20 (0x120 - 0x100)
// Class UMG.TextLayoutWidget
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x100(0x3)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	enum class ETextJustify                      Justification;                                     // 0x103(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETextWrappingPolicy               WrappingPolicy;                                    // 0x104(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        AutoWrapText : 1;                                  // Mask: 0x1, PropSize: 0x10x105(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_3 : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D1[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WrapTextAt;                                        // 0x108(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               Margin;                                            // 0x10C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	float                                        LineHeightPercentage;                              // 0x11C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TextLayoutWidget");
		return Clss;
	}

};

// 0xF0 (0x210 - 0x120)
// Class UMG.TextBlock
class UTextBlock : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x120(0x18)(Edit, NativeAccessSpecifierPublic)
	UDelegateProperty_                           TextDelegate;                                      // 0x138(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x148(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x170(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font;                                              // 0x180(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset;                                      // 0x1D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x1D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ShadowColorAndOpacityDelegate;                     // 0x1E8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinDesiredWidth;                                   // 0x1F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWrapWithInvalidationPanel;                        // 0x1FC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoWrapText;                                     // 0x1FD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2[0x12];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TextBlock");
		return Clss;
	}

	void SetText(class FText InText);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetJustification(enum class ETextJustify InJustification);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	class FText GetText();
	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
	class UMaterialInstanceDynamic* GetDynamicFontMaterial();
};

// 0xD8 (0x1D8 - 0x100)
// Class UMG.Image
class UImage : public UWidget
{
public:
	struct FSlateBrush                           Brush;                                             // 0x100(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UDelegateProperty_                           BrushDelegate;                                     // 0x188(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x198(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x1A8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnMouseButtonDownEvent;                            // 0x1B8(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Image");
		return Clss;
	}

	void SetOpacity(float InOpacity);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushTintColor(const struct FSlateColor& TintColor);
	void SetBrushSize(const struct FVector2D& DesiredSize);
	void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAtlasInterface(UInterfaceProperty_ AtlasRegion, bool bMatchSize);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrush(struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// 0x108 (0x208 - 0x100)
// Class UMG.ListViewBase
class UListViewBase : public UWidget
{
public:
	TSubclassOf<class UUserWidget>               EntryWidgetClass;                                  // 0x100(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  BP_OnEntryGenerated;                               // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  BP_OnEntryReleased;                                // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D7[0xE0];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ListViewBase");
		return Clss;
	}

	void ScrollToTop();
	void ScrollToBottom();
	void RegenerateAllEntries();
	TArray<class UUserWidget*> GetDisplayedEntryWidgets();
};

// 0xF0 (0x2F8 - 0x208)
// Class UMG.ListView
class UListView : public UListViewBase
{
public:
	enum class ESelectionMode                    SelectionMode;                                     // 0x208(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0x209(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClearSelectionOnClick;                            // 0x20A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DD[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EntrySpacing;                                      // 0x20C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UObject*>                       ListItems;                                         // 0x210(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_DE[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  BP_OnItemClicked;                                  // 0x230(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  BP_OnItemDoubleClicked;                            // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  BP_OnItemIsHoveredChanged;                         // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  BP_OnItemSelectionChanged;                         // 0x260(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  BP_OnItemScrolledIntoView;                         // 0x270(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DF[0x78];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ListView");
		return Clss;
	}

	void SetSelectionMode(enum class ESelectionMode SelectionMode);
	void SetSelectedItem(class UObject* Item);
	void SetSelectedIndex(int32 Index);
	void SetItemSelection(class UObject* Item, bool bSelected);
	void ScrollItemIntoView(class UObject* Item);
	void ScrollIndexIntoView(int32 Index);
	void NavigateToItem(class UObject* Item);
	void NavigateToIndex(int32 Index);
	bool IsRefreshPending();
	bool IsItemVisible(class UObject* Item);
	bool GetSelectedItems(TArray<class UObject*>* Items);
	int32 GetNumItemsSelected();
	int32 GetNumItems();
	TArray<class UObject*> GetListItems();
	class UObject* GetItemAt(int32 Index);
	int32 GetIndexForItem(class UObject* Item);
	void ClearSelection();
	void ClearListItems();
	void CancelScrollIntoView();
	void BP_SetListItems(TArray<class UObject*>& InListItems);
	class UObject* BP_GetSelectedItem();
	void AddItem(class UObject* Item);
};

// 0x20 (0x318 - 0x2F8)
// Class UMG.TileView
class UTileView : public UListView
{
public:
	float                                        EntryHeight;                                       // 0x2F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EntryWidth;                                        // 0x2FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EListItemAlignment                TileAlignment;                                     // 0x300(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWrapHorizontalNavigation;                         // 0x301(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E0[0x16];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TileView");
		return Clss;
	}

	void SetEntryWidth(float NewWidth);
	void SetEntryHeight(float NewHeight);
};

// 0x58 (0x350 - 0x2F8)
// Class UMG.TreeView
class UTreeView : public UListView
{
public:
	uint8                                        Pad_E2[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           BP_OnGetItemChildren;                              // 0x308(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  BP_OnItemExpansionChanged;                         // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E3[0x28];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TreeView");
		return Clss;
	}

	void SetItemExpansion(class UObject* Item, bool bExpandItem);
	void ExpandAll();
	void CollapseAll();
};

// 0x18 (0x130 - 0x118)
// Class UMG.WidgetSwitcher
class UWidgetSwitcher : public UPanelWidget
{
public:
	int32                                        ActiveWidgetIndex;                                 // 0x118(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5[0x14];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetSwitcher");
		return Clss;
	}

	void SetActiveWidgetIndex(int32 Index);
	void SetActiveWidget(class UWidget* Widget);
	class UWidget* GetWidgetAtIndex(int32 Index);
	int32 GetNumWidgets();
	int32 GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
};

// 0x20 (0x48 - 0x28)
// Class UMG.AsyncTaskDownloadImage
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	UMulticastDelegateProperty_                  OnSuccess;                                         // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnFail;                                            // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AsyncTaskDownloadImage");
		return Clss;
	}

	class UAsyncTaskDownloadImage* DownloadImage(const class FString& URL);
};

// 0xB8 (0x1D0 - 0x118)
// Class UMG.BackgroundBlur
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                               Padding;                                           // 0x118(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x129(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyAlphaToBlur;                                 // 0x12A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6[0x1];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlurStrength;                                      // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAutoRadiusCalculation;                    // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BlurRadius;                                        // 0x134(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LowQualityFallbackBrush;                           // 0x138(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BackgroundBlur");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetBlurStrength(float InStrength);
	void SetBlurRadius(int32 InBlurRadius);
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};

// 0x10 (0x38 - 0x28)
// Class UMG.PanelSlot
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                          Parent;                                            // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Content;                                           // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PanelSlot");
		return Clss;
	}

};

// 0x28 (0x60 - 0x38)
// Class UMG.BackgroundBlurSlot
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E9[0x16];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BackgroundBlurSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x20 (0x48 - 0x28)
// Class UMG.PropertyBinding
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                  SourcePath;                                        // 0x30(0x10)(NativeAccessSpecifierPublic)
	class FName                                  DestinationProperty;                               // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PropertyBinding");
		return Clss;
	}

};

// 0x0 (0x48 - 0x48)
// Class UMG.BoolBinding
class UBoolBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BoolBinding");
		return Clss;
	}

	bool GetValue();
};

// 0x28 (0x60 - 0x38)
// Class UMG.BorderSlot
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EA[0x16];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BorderSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x8 (0x50 - 0x48)
// Class UMG.BrushBinding
class UBrushBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_EB[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BrushBinding");
		return Clss;
	}

	struct FSlateBrush GetValue();
};

// 0x28 (0x60 - 0x38)
// Class UMG.ButtonSlot
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC[0x16];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ButtonSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x10 (0x128 - 0x118)
// Class UMG.CanvasPanel
class UCanvasPanel : public UPanelWidget
{
public:
	uint8                                        Pad_ED[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CanvasPanel");
		return Clss;
	}

	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
};

// 0x38 (0x70 - 0x38)
// Class UMG.CanvasPanelSlot
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                           LayoutData;                                        // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAutoSize;                                         // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ZOrder;                                            // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CanvasPanelSlot");
		return Clss;
	}

	void SetZOrder(int32 InZOrder);
	void SetSize(const struct FVector2D& InSize);
	void SetPosition(const struct FVector2D& InPosition);
	void SetOffsets(const struct FMargin& InOffset);
	void SetMinimum(const struct FVector2D& InMinimumAnchors);
	void SetMaximum(const struct FVector2D& InMaximumAnchors);
	void SetLayout(struct FAnchorData& InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const struct FAnchors& InAnchors);
	void SetAlignment(const struct FVector2D& InAlignment);
	int32 GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
};

// 0x650 (0x768 - 0x118)
// Class UMG.CheckBox
class UCheckBox : public UContentWidget
{
public:
	enum class ECheckBoxState                    CheckedState;                                      // 0x118(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           CheckedStateDelegate;                              // 0x120(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                        WidgetStyle;                                       // 0x130(0x580)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                Style;                                             // 0x6B0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      UncheckedImage;                                    // 0x6B8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      UncheckedHoveredImage;                             // 0x6C0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      UncheckedPressedImage;                             // 0x6C8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      CheckedImage;                                      // 0x6D0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      CheckedHoveredImage;                               // 0x6D8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      CheckedPressedImage;                               // 0x6E0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      UndeterminedImage;                                 // 0x6E8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      UndeterminedHoveredImage;                          // 0x6F0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      UndeterminedPressedImage;                          // 0x6F8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x700(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x704(0x10)(Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_F2[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           BorderBackgroundColor;                             // 0x718(0x28)(Deprecated, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x740(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnCheckStateChanged;                               // 0x748(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CheckBox");
		return Clss;
	}

	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(enum class ECheckBoxState InCheckedState);
	bool IsPressed();
	bool IsChecked();
	enum class ECheckBoxState GetCheckedState();
};

// 0x8 (0x50 - 0x48)
// Class UMG.CheckedStateBinding
class UCheckedStateBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_F5[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CheckedStateBinding");
		return Clss;
	}

	enum class ECheckBoxState GetValue();
};

// 0xB8 (0x1B8 - 0x100)
// Class UMG.CircularThrobber
class UCircularThrobber : public UWidget
{
public:
	int32                                        NumberOfPieces;                                    // 0x100(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Period;                                            // 0x104(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x108(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class USlateBrushAsset*                      PieceImage;                                        // 0x110(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Image;                                             // 0x118(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bEnableRadius;                                     // 0x1A0(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F7[0x17];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CircularThrobber");
		return Clss;
	}

	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int32 InNumberOfPieces);
};

// 0x8 (0x50 - 0x48)
// Class UMG.ColorBinding
class UColorBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_F8[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ColorBinding");
		return Clss;
	}

	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};

// 0x38 (0x138 - 0x100)
// Class UMG.ComboBox
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                       Items;                                             // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnGenerateWidgetEvent;                             // 0x110(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsFocusable;                                      // 0x120(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9[0x17];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComboBox");
		return Clss;
	}

};

// 0xBB8 (0xCB8 - 0x100)
// Class UMG.ComboBoxString
class UComboBoxString : public UWidget
{
public:
	TArray<class FString>                        DefaultOptions;                                    // 0x100(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                SelectedOption;                                    // 0x110(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FComboBoxStyle                        WidgetStyle;                                       // 0x120(0x3D8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTableRowStyle                        ItemStyle;                                         // 0x4F8(0x6B8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               ContentPadding;                                    // 0xBB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MaxListHeight;                                     // 0xBC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasDownArrow;                                      // 0xBC4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableGamepadNavigationMode;                       // 0xBC5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Font;                                              // 0xBC8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0xC18(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsFocusable;                                      // 0xC40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           OnGenerateWidgetEvent;                             // 0xC48(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSelectionChanged;                                // 0xC58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnOpening;                                         // 0xC68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_100[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComboBoxString");
		return Clss;
	}

	void SetSelectedOption(const class FString& Option);
	bool RemoveOption(const class FString& Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void OnOpeningEvent__DelegateSignature();
	class FString GetSelectedOption();
	int32 GetOptionCount();
	class FString GetOptionAtIndex(int32 Index);
	int32 FindOptionIndex(const class FString& Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const class FString& Option);
};

// 0x60 (0x88 - 0x28)
// Class UMG.DragDropOperation
class UDragDropOperation : public UObject
{
public:
	class FString                                Tag;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Payload;                                           // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               DefaultDragVisual;                                 // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDragPivot                        Pivot;                                             // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_101[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Offset;                                            // 0x4C(0x8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_102[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnDrop;                                            // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDragCancelled;                                   // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnDragged;                                         // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DragDropOperation");
		return Clss;
	}

	void Drop(struct FPointerEvent& PointerEvent);
	void Dragged(struct FPointerEvent& PointerEvent);
	void DragCancelled(struct FPointerEvent& PointerEvent);
};

// 0xD0 (0x1D0 - 0x100)
// Class UMG.DynamicEntryBox
class UDynamicEntryBox : public UWidget
{
public:
	enum class EDynamicBoxType                   EntryBoxType;                                      // 0x100(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_103[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             EntrySpacing;                                      // 0x104(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_104[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector2D>                     SpacingPattern;                                    // 0x110(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateChildSize                       EntrySizeRule;                                     // 0x120(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              EntryHorizontalAlignment;                          // 0x128(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                EntryVerticalAlignment;                            // 0x129(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_105[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxElementSize;                                    // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_106[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UUserWidget>               EntryWidgetClass;                                  // 0x140(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_107[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicEntryBox");
		return Clss;
	}

	void SetEntrySpacing(struct FVector2D& InEntrySpacing);
	void Reset(bool bDeleteWidgets);
	void RemoveEntry(class UUserWidget* EntryWidget);
	int32 GetNumEntries();
	TArray<class UUserWidget*> GetAllEntries();
	class UUserWidget* BP_CreateEntry();
};

// 0x348 (0x448 - 0x100)
// Class UMG.EditableText
class UEditableText : public UWidget
{
public:
	class FText                                  Text;                                              // 0x100(0x18)(Edit, NativeAccessSpecifierPublic)
	UDelegateProperty_                           TextDelegate;                                      // 0x118(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  HintText;                                          // 0x128(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UDelegateProperty_                           HintTextDelegate;                                  // 0x140(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FEditableTextStyle                    WidgetStyle;                                       // 0x150(0x218)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                Style;                                             // 0x368(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      BackgroundImageSelected;                           // 0x370(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      BackgroundImageComposing;                          // 0x378(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      CaretImage;                                        // 0x380(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font;                                              // 0x388(0x50)(Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x3D8(0x28)(Deprecated, NativeAccessSpecifierPublic)
	bool                                         IsReadOnly;                                        // 0x400(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPassword;                                        // 0x401(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_109[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDesiredWidth;                               // 0x404(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x408(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextWhenFocused;                          // 0x409(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RevertTextOnEscape;                                // 0x40A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x40B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextOnCommit;                             // 0x40C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0x40D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x40E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x40F(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x410(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x411(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x412(0x3)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnTextChanged;                                     // 0x418(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTextCommitted;                                   // 0x428(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableText");
		return Clss;
	}

	void SetText(class FText InText);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(class FText InHintText);
	void OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	class FText GetText();
};

// 0x920 (0xA20 - 0x100)
// Class UMG.EditableTextBox
class UEditableTextBox : public UWidget
{
public:
	class FText                                  Text;                                              // 0x100(0x18)(Edit, NativeAccessSpecifierPublic)
	UDelegateProperty_                           TextDelegate;                                      // 0x118(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x128(0x7F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                Style;                                             // 0x918(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  HintText;                                          // 0x920(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UDelegateProperty_                           HintTextDelegate;                                  // 0x938(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font;                                              // 0x948(0x50)(Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ForegroundColor;                                   // 0x998(0x10)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0x9A8(0x10)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReadOnlyForegroundColor;                           // 0x9B8(0x10)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsReadOnly;                                        // 0x9C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPassword;                                        // 0x9C9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDesiredWidth;                               // 0x9CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x9D0(0x10)(Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x9E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextWhenFocused;                          // 0x9E1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RevertTextOnEscape;                                // 0x9E2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x9E3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextOnCommit;                             // 0x9E4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0x9E5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x9E6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x9E7(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x9E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x9E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x9EA(0x3)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnTextChanged;                                     // 0x9F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTextCommitted;                                   // 0xA00(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableTextBox");
		return Clss;
	}

	void SetText(class FText InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(class FText InText);
	void SetError(class FText InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	bool HasError();
	class FText GetText();
	void ClearError();
};

// 0x230 (0x330 - 0x100)
// Class UMG.ExpandableArea
class UExpandableArea : public UWidget
{
public:
	uint8                                        Pad_110[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExpandableAreaStyle                  Style;                                             // 0x108(0x120)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BorderBrush;                                       // 0x228(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                           BorderColor;                                       // 0x2B0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsExpanded;                                       // 0x2D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_111[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxHeight;                                         // 0x2DC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               HeaderPadding;                                     // 0x2E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               AreaPadding;                                       // 0x2F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnExpansionChanged;                                // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UWidget*                               HeaderContent;                                     // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               BodyContent;                                       // 0x318(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_112[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ExpandableArea");
		return Clss;
	}

	void SetIsExpanded_Animated(bool IsExpanded);
	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};

// 0x0 (0x48 - 0x48)
// Class UMG.FloatBinding
class UFloatBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FloatBinding");
		return Clss;
	}

	float GetValue();
};

// 0x30 (0x148 - 0x118)
// Class UMG.GridPanel
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                ColumnFill;                                        // 0x118(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                RowFill;                                           // 0x128(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_113[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GridPanel");
		return Clss;
	}

	void SetRowFill(int32 ColumnIndex, float Coefficient);
	void SetColumnFill(int32 ColumnIndex, float Coefficient);
	class UGridSlot* AddChildToGrid(class UWidget* Content);
};

// 0x38 (0x70 - 0x38)
// Class UMG.GridSlot
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Row;                                               // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RowSpan;                                           // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Column;                                            // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ColumnSpan;                                        // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Layer;                                             // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Nudge;                                             // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GridSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetRowSpan(int32 InRowSpan);
	void SetRow(int32 InRow);
	void SetPadding(const struct FMargin& InPadding);
	void SetLayer(int32 InLayer);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetColumnSpan(int32 InColumnSpan);
	void SetColumn(int32 InColumn);
};

// 0x10 (0x128 - 0x118)
// Class UMG.HorizontalBox
class UHorizontalBox : public UPanelWidget
{
public:
	uint8                                        Pad_116[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizontalBox");
		return Clss;
	}

	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
};

// 0x28 (0x60 - 0x38)
// Class UMG.HorizontalBoxSlot
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateChildSize                       Size;                                              // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_117[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizontalBoxSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x560 (0x660 - 0x100)
// Class UMG.InputKeySelector
class UInputKeySelector : public UWidget
{
public:
	struct FButtonStyle                          WidgetStyle;                                       // 0x100(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0x378(0x1E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInputChord                           SelectedKey;                                       // 0x558(0x20)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font;                                              // 0x578(0x50)(Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Margin;                                            // 0x5C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x5D8(0x10)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  KeySelectionText;                                  // 0x5E8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  NoKeySpecifiedText;                                // 0x600(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bAllowModifierKeys;                                // 0x618(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowGamepadKeys;                                 // 0x619(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          EscapeKeys;                                        // 0x620(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnKeySelected;                                     // 0x630(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnIsSelectingKeyChanged;                           // 0x640(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_119[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InputKeySelector");
		return Clss;
	}

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility);
	void SetSelectedKey(struct FInputChord& InSelectedKey);
	void SetNoKeySpecifiedText(class FText InNoKeySpecifiedText);
	void SetKeySelectionText(class FText InKeySelectionText);
	void SetEscapeKeys(TArray<struct FKey>& InKeys);
	void SetAllowModifierKeys(bool bInAllowModifierKeys);
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};

// 0x0 (0x48 - 0x48)
// Class UMG.Int32Binding
class UInt32Binding : public UPropertyBinding
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Int32Binding");
		return Clss;
	}

	int32 GetValue();
};

// 0x18 (0x130 - 0x118)
// Class UMG.InvalidationBox
class UInvalidationBox : public UContentWidget
{
public:
	bool                                         bCanCache;                                         // 0x118(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CacheRelativeTransforms;                           // 0x119(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11A[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InvalidationBox");
		return Clss;
	}

	void SetCanCache(bool CanCache);
	void InvalidateCache();
	bool GetCanCache();
};

// 0x0 (0x28 - 0x28)
// Class UMG.NativeUserListEntry
class UNativeUserListEntry : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NativeUserListEntry");
		return Clss;
	}

	bool IsListItemSelected();
	bool IsListItemExpanded();
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserListEntry
class UUserListEntry : public UNativeUserListEntry
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UserListEntry");
		return Clss;
	}

	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserObjectListEntry
class UUserObjectListEntry : public UUserListEntry
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UserObjectListEntry");
		return Clss;
	}

	void OnListItemObjectSet(class UObject* ListItemObject);
	class UObject* GetListItemObject();
};

// 0x0 (0x28 - 0x28)
// Class UMG.ListViewDesignerPreviewItem
class UListViewDesignerPreviewItem : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ListViewDesignerPreviewItem");
		return Clss;
	}

};

// 0x40 (0x158 - 0x118)
// Class UMG.MenuAnchor
class UMenuAnchor : public UContentWidget
{
public:
	TSubclassOf<class UUserWidget>               MenuClass;                                         // 0x118(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           OnGetMenuContentEvent;                             // 0x120(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMenuPlacement                    Placement;                                         // 0x130(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldDeferPaintingAfterWindowContent;             // 0x131(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseApplicationMenuStack;                           // 0x132(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnMenuOpenChanged;                                 // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MenuAnchor");
		return Clss;
	}

	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	struct FVector2D GetMenuPosition();
	void Close();
};

// 0x0 (0x48 - 0x48)
// Class UMG.MouseCursorBinding
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MouseCursorBinding");
		return Clss;
	}

	enum class EMouseCursor GetValue();
};

// 0x3F0 (0x4D0 - 0xE0)
// Class UMG.MovieScene2DTransformSection
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel               Translation;                                       // 0xE0(0x90)(NativeAccessSpecifierPublic)
	uint8                                        Pad_11D[0x90];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               Rotation;                                          // 0x200(0x90)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Scale;                                             // 0x290(0x90)(NativeAccessSpecifierPublic)
	uint8                                        Pad_11E[0x90];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               Shear;                                             // 0x3B0(0x90)(NativeAccessSpecifierPublic)
	uint8                                        Pad_11F[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene2DTransformSection");
		return Clss;
	}

};

// 0x0 (0x80 - 0x80)
// Class UMG.MovieScene2DTransformTrack
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene2DTransformTrack");
		return Clss;
	}

};

// 0x240 (0x320 - 0xE0)
// Class UMG.MovieSceneMarginSection
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel               TopCurve;                                          // 0xE0(0x90)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               LeftCurve;                                         // 0x170(0x90)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               RightCurve;                                        // 0x200(0x90)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               BottomCurve;                                       // 0x290(0x90)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMarginSection");
		return Clss;
	}

};

// 0x0 (0x80 - 0x80)
// Class UMG.MovieSceneMarginTrack
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMarginTrack");
		return Clss;
	}

};

// 0x18 (0x80 - 0x68)
// Class UMG.MovieSceneWidgetMaterialTrack
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	TArray<class FName>                          BrushPropertyNamePath;                             // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FName                                  TrackName;                                         // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneWidgetMaterialTrack");
		return Clss;
	}

};

// 0x2B0 (0x3D0 - 0x120)
// Class UMG.MultiLineEditableText
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x120(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  HintText;                                          // 0x138(0x18)(Edit, NativeAccessSpecifierPublic)
	UDelegateProperty_                           HintTextDelegate;                                  // 0x150(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       WidgetStyle;                                       // 0x160(0x1E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsReadOnly;                                       // 0x340(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_121[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Font;                                              // 0x348(0x50)(Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextWhenFocused;                          // 0x398(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearTextSelectionOnFocusLoss;                     // 0x399(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RevertTextOnEscape;                                // 0x39A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x39B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0x39C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x39D(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x39E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_122[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnTextChanged;                                     // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTextCommitted;                                   // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_123[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MultiLineEditableText");
		return Clss;
	}

	void SetText(class FText InText);
	void SetIsReadOnly(bool bReadOnly);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(class FText& Text);
	class FText GetText();
};

// 0xAD0 (0xBF0 - 0x120)
// Class UMG.MultiLineEditableTextBox
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x120(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  HintText;                                          // 0x138(0x18)(Edit, NativeAccessSpecifierPublic)
	UDelegateProperty_                           HintTextDelegate;                                  // 0x150(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x160(0x7F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0x950(0x1E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsReadOnly;                                       // 0xB30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0xB31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0xB32(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0xB33(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_125[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USlateWidgetStyleAsset*                Style;                                             // 0xB38(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font;                                              // 0xB40(0x50)(Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ForegroundColor;                                   // 0xB90(0x10)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0xBA0(0x10)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReadOnlyForegroundColor;                           // 0xBB0(0x10)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTextChanged;                                     // 0xBC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTextCommitted;                                   // 0xBD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_126[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MultiLineEditableTextBox");
		return Clss;
	}

	void SetText(class FText InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetError(class FText InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	class FText GetText();
};

// 0x10 (0x128 - 0x118)
// Class UMG.NamedSlot
class UNamedSlot : public UContentWidget
{
public:
	uint8                                        Pad_127[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NamedSlot");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class UMG.NamedSlotInterface
class UNamedSlotInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NamedSlotInterface");
		return Clss;
	}

};

// 0x10 (0x110 - 0x100)
// Class UMG.NativeWidgetHost
class UNativeWidgetHost : public UWidget
{
public:
	uint8                                        Pad_128[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NativeWidgetHost");
		return Clss;
	}

};

// 0x10 (0x128 - 0x118)
// Class UMG.Overlay
class UOverlay : public UPanelWidget
{
public:
	uint8                                        Pad_129[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Overlay");
		return Clss;
	}

	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};

// 0x20 (0x58 - 0x38)
// Class UMG.OverlaySlot
class UOverlaySlot : public UPanelSlot
{
public:
	uint8                                        Pad_12A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OverlaySlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x210 (0x310 - 0x100)
// Class UMG.ProgressBar
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                     WidgetStyle;                                       // 0x100(0x1A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                Style;                                             // 0x2A0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      BackgroundImage;                                   // 0x2A8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      FillImage;                                         // 0x2B0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                      MarqueeImage;                                      // 0x2B8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Percent;                                           // 0x2C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProgressBarFillType              BarFillType;                                       // 0x2C4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMarquee;                                        // 0x2C5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             BorderPadding;                                     // 0x2C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           PercentDelegate;                                   // 0x2D0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          FillColorAndOpacity;                               // 0x2E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           FillColorAndOpacityDelegate;                       // 0x2F0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProgressBar");
		return Clss;
	}

	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
};

// 0x30 (0x148 - 0x118)
// Class UMG.RetainerBox
class URetainerBox : public UContentWidget
{
public:
	bool                                         RenderOnInvalidation;                              // 0x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RenderOnPhase;                                     // 0x119(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Phase;                                             // 0x11C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PhaseCount;                                        // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    EffectMaterial;                                    // 0x128(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TextureParameter;                                  // 0x130(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_130[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RetainerBox");
		return Clss;
	}

	void SetTextureParameter(class FName TextureParameter);
	void SetRenderingPhase(int32 RenderPhase, int32 TotalPhases);
	void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	void RequestRender();
	class UMaterialInstanceDynamic* GetEffectMaterial();
};

// 0x240 (0x360 - 0x120)
// Class UMG.RichTextBlock
class URichTextBlock : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x120(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UDataTable*                            TextStyleSet;                                      // 0x138(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class URichTextBlockDecorator>> DecoratorClasses;                                  // 0x140(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_131[0x1F0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class URichTextBlockDecorator*>       InstanceDecorators;                                // 0x340(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_132[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RichTextBlock");
		return Clss;
	}

	void SetText(class FText& InText);
	class URichTextBlockDecorator* GetDecoratorByClass(TSubclassOf<class URichTextBlockDecorator> DecoratorClass);
};

// 0x0 (0x28 - 0x28)
// Class UMG.RichTextBlockDecorator
class URichTextBlockDecorator : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RichTextBlockDecorator");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class UMG.RichTextBlockImageDecorator
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                            ImageSet;                                          // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RichTextBlockImageDecorator");
		return Clss;
	}

};

// 0x18 (0x130 - 0x118)
// Class UMG.SafeZone
class USafeZone : public UContentWidget
{
public:
	bool                                         PadLeft;                                           // 0x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PadRight;                                          // 0x119(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PadTop;                                            // 0x11A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PadBottom;                                         // 0x11B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SafeZone");
		return Clss;
	}

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};

// 0x28 (0x60 - 0x38)
// Class UMG.SafeZoneSlot
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                         bIsTitleSafe;                                      // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_134[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               SafeAreaScale;                                     // 0x3C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HAlign;                                            // 0x4C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VAlign;                                            // 0x4D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SafeZoneSlot");
		return Clss;
	}

};

// 0x20 (0x138 - 0x118)
// Class UMG.ScaleBox
class UScaleBox : public UContentWidget
{
public:
	enum class EStretch                          Stretch;                                           // 0x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStretchDirection                 StretchDirection;                                  // 0x119(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UserSpecifiedScale;                                // 0x11C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreInheritedScale;                              // 0x120(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSingleLayoutPass;                                 // 0x121(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScaleBox");
		return Clss;
	}

	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	void SetStretchDirection(enum class EStretchDirection InStretchDirection);
	void SetStretch(enum class EStretch InStretch);
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};

// 0x28 (0x60 - 0x38)
// Class UMG.ScaleBoxSlot
class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScaleBoxSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x4F8 (0x5F8 - 0x100)
// Class UMG.ScrollBar
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                       WidgetStyle;                                       // 0x100(0x4D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                Style;                                             // 0x5D0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysShowScrollbar;                              // 0x5D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x5D9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Thickness;                                         // 0x5DC(0x8)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScrollBar");
		return Clss;
	}

	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};

// 0x748 (0x860 - 0x118)
// Class UMG.ScrollBox
class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                       WidgetStyle;                                       // 0x118(0x228)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                       WidgetBarStyle;                                    // 0x340(0x4D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                Style;                                             // 0x810(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                BarStyle;                                          // 0x818(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x820(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  ScrollBarVisibility;                               // 0x821(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0x822(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ScrollbarThickness;                                // 0x824(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AlwaysShowScrollbar;                               // 0x82C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowOverscroll;                                   // 0x82D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDescendantScrollDestination      NavigationDestination;                             // 0x82E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NavigationScrollPadding;                           // 0x830(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRightClickDragScrolling;                     // 0x834(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnUserScrolled;                                    // 0x838(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScrollBox");
		return Clss;
	}

	void SetScrollOffset(float NewScrollOffset);
	void SetScrollBarVisibility(enum class ESlateVisibility NewScrollBarVisibility);
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness);
	void SetOrientation(enum class EOrientation NewOrientation);
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool NewAllowOverscroll);
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination);
	void ScrollToStart();
	void ScrollToEnd();
	float GetScrollOffset();
};

// 0x20 (0x58 - 0x38)
// Class UMG.ScrollBoxSlot
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScrollBoxSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x30 (0x148 - 0x118)
// Class UMG.SizeBox
class USizeBox : public UContentWidget
{
public:
	uint8                                        bOverride_WidthOverride : 1;                       // Mask: 0x1, PropSize: 0x10x118(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_HeightOverride : 1;                      // Mask: 0x2, PropSize: 0x10x118(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MinDesiredWidth : 1;                     // Mask: 0x4, PropSize: 0x10x118(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MinDesiredHeight : 1;                    // Mask: 0x8, PropSize: 0x10x118(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MaxDesiredWidth : 1;                     // Mask: 0x10, PropSize: 0x10x118(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MaxDesiredHeight : 1;                    // Mask: 0x20, PropSize: 0x10x118(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MaxAspectRatio : 1;                      // Mask: 0x40, PropSize: 0x10x118(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4 : 1;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_141[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WidthOverride;                                     // 0x11C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightOverride;                                    // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDesiredWidth;                                   // 0x124(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDesiredHeight;                                  // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDesiredWidth;                                   // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDesiredHeight;                                  // 0x130(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAspectRatio;                                    // 0x134(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SizeBox");
		return Clss;
	}

	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetMaxAspectRatio(float InMaxAspectRatio);
	void SetHeightOverride(float InHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};

// 0x28 (0x60 - 0x38)
// Class UMG.SizeBoxSlot
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SizeBoxSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x0 (0x28 - 0x28)
// Class UMG.SlateBlueprintLibrary
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SlateBlueprintLibrary");
		return Clss;
	}

	void ScreenToWidgetLocal(class UObject* WorldContextObject, struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate);
	void ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate);
	void ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
	void LocalToViewport(class UObject* WorldContextObject, struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
	bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate);
	struct FVector2D GetLocalSize(struct FGeometry& Geometry);
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry);
	bool EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B);
	void AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
};

// 0x38 (0x60 - 0x28)
// Class UMG.SlateVectorArtData
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>              VertexData;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint32>                               IndexData;                                         // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    Material;                                          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             ExtentMin;                                         // 0x50(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             ExtentMax;                                         // 0x58(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SlateVectorArtData");
		return Clss;
	}

};

// 0x18 (0x118 - 0x100)
// Class UMG.Spacer
class USpacer : public UWidget
{
public:
	struct FVector2D                             Size;                                              // 0x100(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Spacer");
		return Clss;
	}

	void SetSize(const struct FVector2D& InSize);
};

// 0x400 (0x500 - 0x100)
// Class UMG.SpinBox
class USpinBox : public UWidget
{
public:
	float                                        Value;                                             // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           ValueDelegate;                                     // 0x108(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSpinBoxStyle                         WidgetStyle;                                       // 0x118(0x2E8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                Style;                                             // 0x400(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delta;                                             // 0x408(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderExponent;                                    // 0x40C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        Font;                                              // 0x410(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x460(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDesiredWidth;                                   // 0x464(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x468(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextOnCommit;                             // 0x469(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           ForegroundColor;                                   // 0x470(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnValueChanged;                                    // 0x498(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnValueCommitted;                                  // 0x4A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnBeginSliderMovement;                             // 0x4B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnEndSliderMovement;                               // 0x4C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MinValue : 1;                            // Mask: 0x1, PropSize: 0x10x4D8(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOverride_MaxValue : 1;                            // Mask: 0x2, PropSize: 0x10x4D8(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOverride_MinSliderValue : 1;                      // Mask: 0x4, PropSize: 0x10x4D8(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOverride_MaxSliderValue : 1;                      // Mask: 0x8, PropSize: 0x10x4D8(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_5 : 4;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_14B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinValue;                                          // 0x4DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxValue;                                          // 0x4E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinSliderValue;                                    // 0x4E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxSliderValue;                                    // 0x4E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14C[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpinBox");
		return Clss;
	}

	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	float GetMaxValue();
	float GetMaxSliderValue();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};

// 0x8 (0x50 - 0x48)
// Class UMG.TextBinding
class UTextBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_14D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TextBinding");
		return Clss;
	}

	class FText GetTextValue();
	class FString GetStringValue();
};

// 0xA8 (0x1A8 - 0x100)
// Class UMG.Throbber
class UThrobber : public UWidget
{
public:
	int32                                        NumberOfPieces;                                    // 0x100(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateHorizontally;                              // 0x104(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateVertically;                                // 0x105(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateOpacity;                                   // 0x106(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USlateBrushAsset*                      PieceImage;                                        // 0x108(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Image;                                             // 0x110(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Throbber");
		return Clss;
	}

	void SetNumberOfPieces(int32 InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};

// 0x6D8 (0x700 - 0x28)
// Class UMG.UMGSequencePlayer
class UUMGSequencePlayer : public UObject
{
public:
	uint8                                        Pad_150[0x348];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      Animation;                                         // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_151[0x388];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UMGSequencePlayer");
		return Clss;
	}

};

// 0x28 (0x140 - 0x118)
// Class UMG.UniformGridPanel
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                               SlotPadding;                                       // 0x118(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinDesiredSlotWidth;                               // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDesiredSlotHeight;                              // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UniformGridPanel");
		return Clss;
	}

	void SetSlotPadding(const struct FMargin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content);
};

// 0x18 (0x50 - 0x38)
// Class UMG.UniformGridSlot
class UUniformGridSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Row;                                               // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Column;                                            // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_154[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UniformGridSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetRow(int32 InRow);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetColumn(int32 InColumn);
};

// 0x10 (0x128 - 0x118)
// Class UMG.VerticalBox
class UVerticalBox : public UPanelWidget
{
public:
	uint8                                        Pad_155[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerticalBox");
		return Clss;
	}

	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
};

// 0x28 (0x60 - 0x38)
// Class UMG.VerticalBoxSlot
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateChildSize                       Size;                                              // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_156[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerticalBoxSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x28 (0x140 - 0x118)
// Class UMG.Viewport
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                          BackgroundColor;                                   // 0x118(0x10)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Viewport");
		return Clss;
	}

	class AActor* Spawn(TSubclassOf<class AActor> ActorClass);
	void SetViewRotation(const struct FRotator& Rotation);
	void SetViewLocation(const struct FVector& Location);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
};

// 0x0 (0x48 - 0x48)
// Class UMG.VisibilityBinding
class UVisibilityBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VisibilityBinding");
		return Clss;
	}

	enum class ESlateVisibility GetValue();
};

// 0x38 (0x380 - 0x348)
// Class UMG.WidgetAnimation
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	UMulticastDelegateProperty_                  OnAnimationStarted;                                // 0x348(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnAnimationFinished;                               // 0x358(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMovieScene*                           MovieScene;                                        // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWidgetAnimationBinding>       AnimationBindings;                                 // 0x370(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetAnimation");
		return Clss;
	}

	float GetStartTime();
	float GetEndTime();
};

// 0x0 (0x48 - 0x48)
// Class UMG.WidgetBinding
class UWidgetBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetBinding");
		return Clss;
	}

	class UWidget* GetValue();
};

// 0x70 (0x348 - 0x2D8)
// Class UMG.WidgetBlueprintGeneratedClass
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                           WidgetTree;                                        // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowTemplate : 1;                                // Mask: 0x1, PropSize: 0x10x2E0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowDynamicCreation : 1;                         // Mask: 0x2, PropSize: 0x10x2E0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bValidTemplate : 1;                                // Mask: 0x4, PropSize: 0x10x2E0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bTemplateInitialized : 1;                          // Mask: 0x8, PropSize: 0x10x2E0(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bCookedTemplate : 1;                               // Mask: 0x10, PropSize: 0x10x2E0(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bClassRequiresNativeTick : 1;                      // Mask: 0x20, PropSize: 0x10x2E0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_6 : 2;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_158[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDelegateRuntimeBinding>       Bindings;                                          // 0x2E8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UWidgetAnimation*>              Animations;                                        // 0x2F8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class FName>                          NamedSlots;                                        // 0x308(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UUserWidget>            TemplateAsset;                                     // 0x318(0x28)(ExportObject, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UUserWidget*                           Template;                                          // 0x340(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetBlueprintGeneratedClass");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetBlueprintLibrary
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetBlueprintLibrary");
		return Clss;
	}

	struct FEventReply UnlockMouse(struct FEventReply& Reply);
	struct FEventReply Unhandled();
	void SetWindowTitleBarState(class UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
	void SetWindowTitleBarOnCloseClickedDelegate(UDelegateProperty_ Delegate);
	void SetWindowTitleBarCloseButtonActive(bool bActive);
	struct FEventReply SetUserFocus(struct FEventReply& Reply, class UWidget* FocusWidget, bool bInAllUsers);
	struct FEventReply SetMousePosition(struct FEventReply& Reply, const struct FVector2D& NewMousePosition);
	void SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode);
	void SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	void SetInputMode_GameOnly(class APlayerController* PlayerController);
	void SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
	void SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	bool SetHardwareCursor(class UObject* WorldContextObject, enum class EMouseCursor CursorShape, class FName CursorName, const struct FVector2D& HotSpot);
	void SetFocusToGameViewport();
	void SetBrushResourceToTexture(struct FSlateBrush& Brush, class UTexture2D* Texture);
	void SetBrushResourceToMaterial(struct FSlateBrush& Brush, class UMaterialInterface* Material);
	void RestorePreviousWindowTitleBarState();
	struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply);
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks);
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	struct FSlateBrush NoResourceBrush();
	struct FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int32 Width, int32 Height);
	struct FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int32 Width, int32 Height);
	struct FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	struct FEventReply LockMouse(struct FEventReply& Reply, class UWidget* CapturingWidget);
	bool IsDragDropping();
	struct FEventReply Handled();
	void GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding);
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event);
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& Event);
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& Event);
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& Event);
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& Event);
	class UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush);
	class UDragDropOperation* GetDragDroppingContent();
	class UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush);
	class UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush);
	class UObject* GetBrushResource(struct FSlateBrush& Brush);
	void GetAllWidgetsWithInterface(class UObject* WorldContextObject, TSubclassOf<class UInterface> Interface, TArray<class UUserWidget*>* FoundWidgets, bool TopLevelOnly);
	void GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly);
	struct FEventReply EndDragDrop(struct FEventReply& Reply);
	void DrawTextFormatted(struct FPaintContext& Context, class FText& Text, const struct FVector2D& Position, class UFont* Font, int32 FontSize, class FName FontTypeFace, const struct FLinearColor& Tint);
	void DrawText(struct FPaintContext& Context, const class FString& InString, const struct FVector2D& Position, const struct FLinearColor& Tint);
	void DrawLines(struct FPaintContext& Context, TArray<struct FVector2D>& Points, const struct FLinearColor& Tint, bool bAntiAlias);
	void DrawLine(struct FPaintContext& Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias);
	void DrawBox(struct FPaintContext& Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint);
	void DismissAllMenus();
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	struct FEventReply DetectDrag(struct FEventReply& Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	class UDragDropOperation* CreateDragDropOperation(TSubclassOf<class UDragDropOperation> OperationClass);
	class UUserWidget* Create(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetType, class APlayerController* OwningPlayer);
	struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers);
	struct FEventReply CaptureMouse(struct FEventReply& Reply, class UWidget* CapturingWidget);
	struct FEventReply CaptureJoystick(struct FEventReply& Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);
	void CancelDragDrop();
};

// 0x128 (0x6B0 - 0x588)
// Class UMG.WidgetComponent
class UWidgetComponent : public UMeshComponent
{
public:
	enum class EWidgetSpace                      Space;                                             // 0x588(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWidgetTimingPolicy               TimingPolicy;                                      // 0x589(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x590(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                             DrawSize;                                          // 0x598(0x8)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bManuallyRedraw;                                   // 0x5A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRedrawRequested;                                  // 0x5A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RedrawTime;                                        // 0x5A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             CurrentDrawSize;                                   // 0x5B0(0x8)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawAtDesiredSize;                                // 0x5B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Pivot;                                             // 0x5BC(0x8)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReceiveHardwareInput;                             // 0x5C4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWindowFocusable;                                  // 0x5C5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          OwnerPlayer;                                       // 0x5C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          BackgroundColor;                                   // 0x5D0(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          TintColorAndOpacity;                               // 0x5E0(0x10)(Edit, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OpacityFromTexture;                                // 0x5F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWidgetBlendMode                  BlendMode;                                         // 0x5F4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsTwoSided;                                       // 0x5F5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         TickWhenOffscreen;                                 // 0x5F6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_170[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           Widget;                                            // 0x5F8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_171[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            BodySetup;                                         // 0x620(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    TranslucentMaterial;                               // 0x628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    TranslucentMaterial_OneSided;                      // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    OpaqueMaterial;                                    // 0x638(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    OpaqueMaterial_OneSided;                           // 0x640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    MaskedMaterial;                                    // 0x648(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    MaskedMaterial_OneSided;                           // 0x650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x658(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              MaterialInstance;                                  // 0x660(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAddedToScreen;                                    // 0x668(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEditTimeUsable;                                   // 0x669(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_172[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SharedLayerName;                                   // 0x670(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LayerZOrder;                                       // 0x678(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWidgetGeometryMode               GeometryMode;                                      // 0x67C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_173[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CylinderArcAngle;                                  // 0x680(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_174[0x2C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetComponent");
		return Clss;
	}

	void SetWidget(class UUserWidget* Widget);
	void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetDrawSize(const struct FVector2D& Size);
	void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	void RequestRedraw();
	class UUserWidget* GetUserWidgetObject();
	class UTextureRenderTarget2D* GetRenderTarget();
	class ULocalPlayer* GetOwnerPlayer();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	struct FVector2D GetDrawSize();
};

// 0x1F8 (0x430 - 0x238)
// Class UMG.WidgetInteractionComponent
class UWidgetInteractionComponent : public USceneComponent
{
public:
	UMulticastDelegateProperty_                  OnHoveredWidgetChanged;                            // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_179[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VirtualUserIndex;                                  // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PointerIndex;                                      // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InteractionDistance;                               // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWidgetInteractionSource          InteractionSource;                                 // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableHitTesting;                                 // 0x269(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebug;                                        // 0x26A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          DebugColor;                                        // 0x26C(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C[0x7C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CustomHitResult;                                   // 0x2F8(0x88)(Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             LocalHitLocation;                                  // 0x380(0x8)(Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             LastLocalHitLocation;                              // 0x388(0x8)(Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      HoveredWidgetComponent;                            // 0x390(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FHitResult                            LastHitResult;                                     // 0x398(0x88)(Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsHoveredWidgetInteractable;                      // 0x420(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsHoveredWidgetFocusable;                         // 0x421(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsHoveredWidgetHitTestVisible;                    // 0x422(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17D[0xD];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetInteractionComponent");
		return Clss;
	}

	void SetCustomHitResult(struct FHitResult& HitResult);
	bool SendKeyChar(const class FString& Characters, bool bRepeat);
	void ScrollWheel(float ScrollDelta);
	void ReleasePointerKey(const struct FKey& Key);
	bool ReleaseKey(const struct FKey& Key);
	void PressPointerKey(const struct FKey& Key);
	bool PressKey(const struct FKey& Key, bool bRepeat);
	bool PressAndReleaseKey(const struct FKey& Key);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct FHitResult GetLastHitResult();
	class UWidgetComponent* GetHoveredWidgetComponent();
	struct FVector2D Get2DHitLocation();
};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetLayoutLibrary
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetLayoutLibrary");
		return Clss;
	}

	class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);
	class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);
	class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);
	class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);
	class UGridSlot* SlotAsGridSlot(class UWidget* Widget);
	class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);
	class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);
	void RemoveAllWidgets(class UObject* WorldContextObject);
	bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition);
	struct FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject);
	struct FVector2D GetViewportSize(class UObject* WorldContextObject);
	float GetViewportScale(class UObject* WorldContextObject);
	struct FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
	bool GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
	struct FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject);
	struct FVector2D GetMousePositionOnPlatform();
};

// 0xF0 (0x118 - 0x28)
// Class UMG.WidgetNavigation
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                 Up;                                                // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                 Down;                                              // 0x50(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                 Left;                                              // 0x78(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                 Right;                                             // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                 Next;                                              // 0xC8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                 Previous;                                          // 0xF0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetNavigation");
		return Clss;
	}

};

// 0x20 (0x58 - 0x38)
// Class UMG.WidgetSwitcherSlot
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_181[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetSwitcherSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x18 (0x40 - 0x28)
// Class UMG.WidgetTree
class UWidgetTree : public UObject
{
public:
	class UWidget*                               RootWidget;                                        // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UWidget*>                       AllWidgets;                                        // 0x30(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetTree");
		return Clss;
	}

};

// 0x20 (0x138 - 0x118)
// Class UMG.WindowTitleBarArea
class UWindowTitleBarArea : public UContentWidget
{
public:
	bool                                         bWindowButtonsEnabled;                             // 0x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoubleClickTogglesFullscreen;                     // 0x119(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182[0x1E];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WindowTitleBarArea");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x28 (0x60 - 0x38)
// Class UMG.WindowTitleBarAreaSlot
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_183[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WindowTitleBarAreaSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x20 (0x138 - 0x118)
// Class UMG.WrapBox
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                             InnerSlotPadding;                                  // 0x118(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WrapWidth;                                         // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExplicitWrapWidth;                                // 0x124(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_184[0x13];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WrapBox");
		return Clss;
	}

	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	class UWrapBoxSlot* AddChildWrapBox(class UWidget* Content);
};

// 0x28 (0x60 - 0x38)
// Class UMG.WrapBoxSlot
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bFillEmptySpace;                                   // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_185[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FillSpanWhenLessThan;                              // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WrapBoxSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
