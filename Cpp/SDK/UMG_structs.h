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

// Enum UMG.ESlateVisibility
enum class UMG_ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible      = 0,
	ESlateVisibility__Collapsed    = 1,
	ESlateVisibility__Hidden       = 2,
	ESlateVisibility__HitTestInvisible = 3,
	ESlateVisibility__SelfHitTestInvisible = 4,
	ESlateVisibility__ESlateVisibility_MAX = 5,

};

// Enum UMG.EVirtualKeyboardType
enum class UMG_EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default  = 0,
	EVirtualKeyboardType__Number   = 1,
	EVirtualKeyboardType__Web      = 2,
	EVirtualKeyboardType__Email    = 3,
	EVirtualKeyboardType__Password = 4,
	EVirtualKeyboardType__AlphaNumeric = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX = 6,

};

// Enum UMG.EDragPivot
enum class UMG_EDragPivot : uint8_t
{
	EDragPivot__MouseDown          = 0,
	EDragPivot__TopLeft            = 1,
	EDragPivot__TopCenter          = 2,
	EDragPivot__TopRight           = 3,
	EDragPivot__CenterLeft         = 4,
	EDragPivot__CenterCenter       = 5,
	EDragPivot__CenterRight        = 6,
	EDragPivot__BottomLeft         = 7,
	EDragPivot__BottomCenter       = 8,
	EDragPivot__BottomRight        = 9,
	EDragPivot__EDragPivot_MAX     = 10,

};

// Enum UMG.EDynamicBoxType
enum class UMG_EDynamicBoxType : uint8_t
{
	EDynamicBoxType__Horizontal    = 0,
	EDynamicBoxType__Vertical      = 1,
	EDynamicBoxType__Wrap          = 2,
	EDynamicBoxType__Overlay       = 3,
	EDynamicBoxType__EDynamicBoxType_MAX = 4,

};

// Enum UMG.ESlateSizeRule
enum class UMG_ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic      = 0,
	ESlateSizeRule__Fill           = 1,
	ESlateSizeRule__ESlateSizeRule_MAX = 2,

};

// Enum UMG.EUMGSequencePlayMode
enum class UMG_EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward  = 0,
	EUMGSequencePlayMode__Reverse  = 1,
	EUMGSequencePlayMode__PingPong = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX = 3,

};

// Enum UMG.EWidgetAnimationEvent
enum class UMG_EWidgetAnimationEvent : uint8_t
{
	EWidgetAnimationEvent__Started = 0,
	EWidgetAnimationEvent__Finished = 1,
	EWidgetAnimationEvent__EWidgetAnimationEvent_MAX = 2,

};

// Enum UMG.EWidgetTickFrequency
enum class UMG_EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never    = 0,
	EWidgetTickFrequency__Auto     = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX = 2,

};

// Enum UMG.EWidgetDesignFlags
enum class UMG_EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None       = 0,
	EWidgetDesignFlags__Designing  = 1,
	EWidgetDesignFlags__ShowOutline = 2,
	EWidgetDesignFlags__ExecutePreConstruct = 3,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX = 4,

};

// Enum UMG.EBindingKind
enum class UMG_EBindingKind : uint8_t
{
	EBindingKind__Function         = 0,
	EBindingKind__Property         = 1,
	EBindingKind__EBindingKind_MAX = 2,

};

// Enum UMG.EWidgetGeometryMode
enum class UMG_EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane     = 0,
	EWidgetGeometryMode__Cylinder  = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX = 2,

};

// Enum UMG.EWidgetBlendMode
enum class UMG_EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque       = 0,
	EWidgetBlendMode__Masked       = 1,
	EWidgetBlendMode__Transparent  = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX = 3,

};

// Enum UMG.EWidgetTimingPolicy
enum class UMG_EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime  = 0,
	EWidgetTimingPolicy__GameTime  = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX = 2,

};

// Enum UMG.EWidgetSpace
enum class UMG_EWidgetSpace : uint8_t
{
	EWidgetSpace__World            = 0,
	EWidgetSpace__Screen           = 1,
	EWidgetSpace__EWidgetSpace_MAX = 2,

};

// Enum UMG.EWidgetInteractionSource
enum class UMG_EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World = 0,
	EWidgetInteractionSource__Mouse = 1,
	EWidgetInteractionSource__CenterScreen = 2,
	EWidgetInteractionSource__Custom = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UMG.EventReply
// 0x0000
struct FEventReply
{

};

// ScriptStruct UMG.WidgetTransform
// 0x0000
struct FWidgetTransform
{

};

// ScriptStruct UMG.PaintContext
// 0x0000
struct FPaintContext
{

};

// ScriptStruct UMG.ShapedTextOptions
// 0x0000
struct FShapedTextOptions
{

};

// ScriptStruct UMG.AnchorData
// 0x0000
struct FAnchorData
{

};

// ScriptStruct UMG.DynamicPropertyPath
// 0x0000
struct FDynamicPropertyPath : public FCachedPropertyPath
{

};

// ScriptStruct UMG.MovieScene2DTransformMask
// 0x0000
struct FMovieScene2DTransformMask
{

};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// 0x0000
struct FMovieScene2DTransformSectionTemplate : public FMovieScenePropertySectionTemplate
{

};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// 0x0000
struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate
{

};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// 0x0000
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};

// ScriptStruct UMG.RichTextStyleRow
// 0x0000
struct FRichTextStyleRow : public FTableRowBase
{

};

// ScriptStruct UMG.RichImageRow
// 0x0000
struct FRichImageRow : public FTableRowBase
{

};

// ScriptStruct UMG.SlateMeshVertex
// 0x0000
struct FSlateMeshVertex
{

};

// ScriptStruct UMG.SlateChildSize
// 0x0000
struct FSlateChildSize
{

};

// ScriptStruct UMG.NamedSlotBinding
// 0x0000
struct FNamedSlotBinding
{

};

// ScriptStruct UMG.AnimationEventBinding
// 0x0000
struct FAnimationEventBinding
{

};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0000
struct FWidgetAnimationBinding
{

};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// 0x0000
struct FBlueprintWidgetAnimationDelegateBinding
{

};

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0000
struct FDelegateRuntimeBinding
{

};

// ScriptStruct UMG.WidgetComponentInstanceData
// 0x0000
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
{

};

// ScriptStruct UMG.WidgetNavigationData
// 0x0000
struct FWidgetNavigationData
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
