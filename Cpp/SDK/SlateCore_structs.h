#pragma once

// Name: Remnant, Version: 1.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum SlateCore.EUINavigation
enum class SlateCore_EUINavigation : uint8_t
{
	EUINavigation__Left            = 0,
	EUINavigation__Right           = 1,
	EUINavigation__Up              = 2,
	EUINavigation__Down            = 3,
	EUINavigation__Next            = 4,
	EUINavigation__Previous        = 5,
	EUINavigation__Num             = 6,
	EUINavigation__Invalid         = 7,
	EUINavigation__EUINavigation_MAX = 8,

};

// Enum SlateCore.EWidgetClipping
enum class SlateCore_EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit       = 0,
	EWidgetClipping__ClipToBounds  = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting = 2,
	EWidgetClipping__ClipToBoundsAlways = 3,
	EWidgetClipping__OnDemand      = 4,
	EWidgetClipping__EWidgetClipping_MAX = 5,

};

// Enum SlateCore.EFontLayoutMethod
enum class SlateCore_EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics     = 0,
	EFontLayoutMethod__BoundingBox = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX = 2,

};

// Enum SlateCore.EFontLoadingPolicy
enum class SlateCore_EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad   = 0,
	EFontLoadingPolicy__Stream     = 1,
	EFontLoadingPolicy__Inline     = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX = 3,

};

// Enum SlateCore.EFontHinting
enum class SlateCore_EFontHinting : uint8_t
{
	EFontHinting__Default          = 0,
	EFontHinting__Auto             = 1,
	EFontHinting__AutoLight        = 2,
	EFontHinting__Monochrome       = 3,
	EFontHinting__None             = 4,
	EFontHinting__EFontHinting_MAX = 5,

};

// Enum SlateCore.EFocusCause
enum class SlateCore_EFocusCause : uint8_t
{
	EFocusCause__Mouse             = 0,
	EFocusCause__Navigation        = 1,
	EFocusCause__SetDirectly       = 2,
	EFocusCause__Cleared           = 3,
	EFocusCause__OtherWidgetLostFocus = 4,
	EFocusCause__WindowActivate    = 5,
	EFocusCause__EFocusCause_MAX   = 6,

};

// Enum SlateCore.EFlowDirectionPreference
enum class SlateCore_EFlowDirectionPreference : uint8_t
{
	EFlowDirectionPreference__Inherit = 0,
	EFlowDirectionPreference__Culture = 1,
	EFlowDirectionPreference__LeftToRight = 2,
	EFlowDirectionPreference__RightToLeft = 3,
	EFlowDirectionPreference__EFlowDirectionPreference_MAX = 4,

};

// Enum SlateCore.ETextShapingMethod
enum class SlateCore_ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto       = 0,
	ETextShapingMethod__KerningOnly = 1,
	ETextShapingMethod__FullShaping = 2,
	ETextShapingMethod__ETextShapingMethod_MAX = 3,

};

// Enum SlateCore.EUINavigationRule
enum class SlateCore_EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape      = 0,
	EUINavigationRule__Explicit    = 1,
	EUINavigationRule__Wrap        = 2,
	EUINavigationRule__Stop        = 3,
	EUINavigationRule__Custom      = 4,
	EUINavigationRule__CustomBoundary = 5,
	EUINavigationRule__Invalid     = 6,
	EUINavigationRule__EUINavigationRule_MAX = 7,

};

// Enum SlateCore.EColorVisionDeficiency
enum class SlateCore_EColorVisionDeficiency : uint8_t
{
	EColorVisionDeficiency__NormalVision = 0,
	EColorVisionDeficiency__Deuteranope = 1,
	EColorVisionDeficiency__Protanope = 2,
	EColorVisionDeficiency__Tritanope = 3,
	EColorVisionDeficiency__EColorVisionDeficiency_MAX = 4,

};

// Enum SlateCore.ESlateBrushImageType
enum class SlateCore_ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage  = 0,
	ESlateBrushImageType__FullColor = 1,
	ESlateBrushImageType__Linear   = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX = 3,

};

// Enum SlateCore.ESlateBrushMirrorType
enum class SlateCore_ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror = 0,
	ESlateBrushMirrorType__Horizontal = 1,
	ESlateBrushMirrorType__Vertical = 2,
	ESlateBrushMirrorType__Both    = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 4,

};

// Enum SlateCore.ESlateBrushTileType
enum class SlateCore_ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile    = 0,
	ESlateBrushTileType__Horizontal = 1,
	ESlateBrushTileType__Vertical  = 2,
	ESlateBrushTileType__Both      = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 4,

};

// Enum SlateCore.ESlateBrushDrawType
enum class SlateCore_ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType = 0,
	ESlateBrushDrawType__Box       = 1,
	ESlateBrushDrawType__Border    = 2,
	ESlateBrushDrawType__Image     = 3,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 4,

};

// Enum SlateCore.ESlateColorStylingMode
enum class SlateCore_ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	ESlateColorStylingMode__UseColor_Specified_Link = 1,
	ESlateColorStylingMode__UseColor_Foreground = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
	ESlateColorStylingMode__UseColor_MAX = 4,

};

// Enum SlateCore.ESlateDebuggingFocusEvent
enum class SlateCore_ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging = 0,
	ESlateDebuggingFocusEvent__FocusLost = 1,
	ESlateDebuggingFocusEvent__FocusReceived = 2,
	ESlateDebuggingFocusEvent__ESlateDebuggingFocusEvent_MAX = 3,

};

// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class SlateCore_ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent__ESlateDebuggingStateChangeEvent_MAX = 2,

};

// Enum SlateCore.ESlateDebuggingInputEvent
enum class SlateCore_ESlateDebuggingInputEvent : uint8_t
{
	ESlateDebuggingInputEvent__MouseMove = 0,
	ESlateDebuggingInputEvent__MouseEnter = 1,
	ESlateDebuggingInputEvent__MouseLeave = 2,
	ESlateDebuggingInputEvent__MouseButtonDown = 3,
	ESlateDebuggingInputEvent__MouseButtonUp = 4,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick = 5,
	ESlateDebuggingInputEvent__MouseWheel = 6,
	ESlateDebuggingInputEvent__TouchStart = 7,
	ESlateDebuggingInputEvent__TouchEnd = 8,
	ESlateDebuggingInputEvent__DragDetected = 9,
	ESlateDebuggingInputEvent__DragEnter = 10,
	ESlateDebuggingInputEvent__DragLeave = 11,
	ESlateDebuggingInputEvent__DragOver = 12,
	ESlateDebuggingInputEvent__DragDrop = 13,
	ESlateDebuggingInputEvent__DropMessage = 14,
	ESlateDebuggingInputEvent__KeyDown = 15,
	ESlateDebuggingInputEvent__KeyUp = 16,
	ESlateDebuggingInputEvent__KeyChar = 17,
	ESlateDebuggingInputEvent__AnalogInput = 18,
	ESlateDebuggingInputEvent__TouchGesture = 19,
	ESlateDebuggingInputEvent__COUNT = 20,
	ESlateDebuggingInputEvent__ESlateDebuggingInputEvent_MAX = 21,

};

// Enum SlateCore.ESelectInfo
enum class SlateCore_ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress        = 0,
	ESelectInfo__OnNavigation      = 1,
	ESelectInfo__OnMouseClick      = 2,
	ESelectInfo__Direct            = 3,
	ESelectInfo__ESelectInfo_MAX   = 4,

};

// Enum SlateCore.ETextCommit
enum class SlateCore_ETextCommit : uint8_t
{
	ETextCommit__Default           = 0,
	ETextCommit__OnEnter           = 1,
	ETextCommit__OnUserMovedFocus  = 2,
	ETextCommit__OnCleared         = 3,
	ETextCommit__ETextCommit_MAX   = 4,

};

// Enum SlateCore.EScrollDirection
enum class SlateCore_EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2,

};

// Enum SlateCore.EOrientation
enum class SlateCore_EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2,

};

// Enum SlateCore.EMenuPlacement
enum class SlateCore_EMenuPlacement : uint8_t
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

// Enum SlateCore.EVerticalAlignment
enum class SlateCore_EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4,

};

// Enum SlateCore.EHorizontalAlignment
enum class SlateCore_EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4,

};

// Enum SlateCore.ENavigationGenesis
enum class SlateCore_ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard   = 0,
	ENavigationGenesis__Controller = 1,
	ENavigationGenesis__User       = 2,
	ENavigationGenesis__ENavigationGenesis_MAX = 3,

};

// Enum SlateCore.ENavigationSource
enum class SlateCore_ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget = 0,
	ENavigationSource__WidgetUnderCursor = 1,
	ENavigationSource__ENavigationSource_MAX = 2,

};

// Enum SlateCore.EButtonPressMethod
enum class SlateCore_EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp  = 0,
	EButtonPressMethod__ButtonPress = 1,
	EButtonPressMethod__ButtonRelease = 2,
	EButtonPressMethod__EButtonPressMethod_MAX = 3,

};

// Enum SlateCore.EButtonTouchMethod
enum class SlateCore_EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp  = 0,
	EButtonTouchMethod__Down       = 1,
	EButtonTouchMethod__PreciseTap = 2,
	EButtonTouchMethod__EButtonTouchMethod_MAX = 3,

};

// Enum SlateCore.EButtonClickMethod
enum class SlateCore_EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp  = 0,
	EButtonClickMethod__MouseDown  = 1,
	EButtonClickMethod__MouseUp    = 2,
	EButtonClickMethod__PreciseClick = 3,
	EButtonClickMethod__EButtonClickMethod_MAX = 4,

};

// Enum SlateCore.EFontFallback
enum class SlateCore_EFontFallback : uint8_t
{
	EFontFallback__FF_NoFallback   = 0,
	EFontFallback__FF_LocalizedFallback = 1,
	EFontFallback__FF_LastResortFallback = 2,
	EFontFallback__FF_Max          = 3,

};

// Enum SlateCore.ECheckBoxState
enum class SlateCore_ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked      = 0,
	ECheckBoxState__Checked        = 1,
	ECheckBoxState__Undetermined   = 2,
	ECheckBoxState__ECheckBoxState_MAX = 3,

};

// Enum SlateCore.ESlateCheckBoxType
enum class SlateCore_ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox   = 0,
	ESlateCheckBoxType__ToggleButton = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX = 2,

};

// Enum SlateCore.ESlateParentWindowSearchMethod
enum class SlateCore_ESlateParentWindowSearchMethod : uint8_t
{
	ESlateParentWindowSearchMethod__ActiveWindow = 0,
	ESlateParentWindowSearchMethod__MainWindow = 1,
	ESlateParentWindowSearchMethod__ESlateParentWindowSearchMethod_MAX = 2,

};

// Enum SlateCore.EConsumeMouseWheel
enum class SlateCore_EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible = 0,
	EConsumeMouseWheel__Always     = 1,
	EConsumeMouseWheel__Never      = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.InputEvent
// 0x0000
struct FInputEvent
{

};

// ScriptStruct SlateCore.PointerEvent
// 0x0000
struct FPointerEvent : public FInputEvent
{

};

// ScriptStruct SlateCore.Geometry
// 0x0000
struct FGeometry
{

};

// ScriptStruct SlateCore.SlateBrush
// 0x0000
struct FSlateBrush
{

};

// ScriptStruct SlateCore.SlateColor
// 0x0000
struct FSlateColor
{

};

// ScriptStruct SlateCore.Margin
// 0x0000
struct FMargin
{

};

// ScriptStruct SlateCore.CharacterEvent
// 0x0000
struct FCharacterEvent : public FInputEvent
{

};

// ScriptStruct SlateCore.KeyEvent
// 0x0000
struct FKeyEvent : public FInputEvent
{

};

// ScriptStruct SlateCore.NavigationEvent
// 0x0000
struct FNavigationEvent : public FInputEvent
{

};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0000
struct FAnalogInputEvent : public FKeyEvent
{

};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0000
struct FSlateFontInfo
{

};

// ScriptStruct SlateCore.FontOutlineSettings
// 0x0000
struct FFontOutlineSettings
{

};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0000
struct FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.TableRowStyle
// 0x0000
struct FTableRowStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x0000
struct FComboBoxStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.SlateSound
// 0x0000
struct FSlateSound
{

};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x0000
struct FComboButtonStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.ButtonStyle
// 0x0000
struct FButtonStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.EditableTextStyle
// 0x0000
struct FEditableTextStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x0000
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x0000
struct FScrollBarStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.TextBlockStyle
// 0x0000
struct FTextBlockStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x0000
struct FSpinBoxStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.CompositeFont
// 0x0000
struct FCompositeFont
{

};

// ScriptStruct SlateCore.CompositeFallbackFont
// 0x0000
struct FCompositeFallbackFont
{

};

// ScriptStruct SlateCore.Typeface
// 0x0000
struct FTypeface
{

};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0000
struct FTypefaceEntry
{

};

// ScriptStruct SlateCore.FontData
// 0x0000
struct FFontData
{

};

// ScriptStruct SlateCore.CompositeSubFont
// 0x0000
struct FCompositeSubFont : public FCompositeFallbackFont
{

};

// ScriptStruct SlateCore.MotionEvent
// 0x0000
struct FMotionEvent : public FInputEvent
{

};

// ScriptStruct SlateCore.CaptureLostEvent
// 0x0000
struct FCaptureLostEvent
{

};

// ScriptStruct SlateCore.FocusEvent
// 0x0000
struct FFocusEvent
{

};

// ScriptStruct SlateCore.WindowStyle
// 0x0000
struct FWindowStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0000
struct FScrollBorderStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0000
struct FScrollBoxStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.DockTabStyle
// 0x0000
struct FDockTabStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x0000
struct FHeaderRowStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.SplitterStyle
// 0x0000
struct FSplitterStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x0000
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x0000
struct FInlineTextImageStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x0000
struct FVolumeControlStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.SliderStyle
// 0x0000
struct FSliderStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0000
struct FSearchBoxStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x0000
struct FExpandableAreaStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x0000
struct FProgressBarStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x0000
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x0000
struct FHyperlinkStyle : public FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x0000
struct FCheckBoxStyle : public FSlateWidgetStyle
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
