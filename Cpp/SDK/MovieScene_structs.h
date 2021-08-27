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

// Enum MovieScene.EMovieSceneKeyInterpolation
enum class MovieScene_EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto = 0,
	EMovieSceneKeyInterpolation__User = 1,
	EMovieSceneKeyInterpolation__Break = 2,
	EMovieSceneKeyInterpolation__Linear = 3,
	EMovieSceneKeyInterpolation__Constant = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5,

};

// Enum MovieScene.EMovieSceneBlendType
enum class MovieScene_EMovieSceneBlendType : uint8_t
{
	EMovieSceneBlendType__Absolute = 0,
	EMovieSceneBlendType__Additive = 1,
	EMovieSceneBlendType__Relative = 2,
	EMovieSceneBlendType__EMovieSceneBlendType_MAX = 3,

};

// Enum MovieScene.EMovieSceneBuiltInEasing
enum class MovieScene_EMovieSceneBuiltInEasing : uint8_t
{
	EMovieSceneBuiltInEasing__Linear = 0,
	EMovieSceneBuiltInEasing__SinIn = 1,
	EMovieSceneBuiltInEasing__SinOut = 2,
	EMovieSceneBuiltInEasing__SinInOut = 3,
	EMovieSceneBuiltInEasing__QuadIn = 4,
	EMovieSceneBuiltInEasing__QuadOut = 5,
	EMovieSceneBuiltInEasing__QuadInOut = 6,
	EMovieSceneBuiltInEasing__CubicIn = 7,
	EMovieSceneBuiltInEasing__CubicOut = 8,
	EMovieSceneBuiltInEasing__CubicInOut = 9,
	EMovieSceneBuiltInEasing__QuartIn = 10,
	EMovieSceneBuiltInEasing__QuartOut = 11,
	EMovieSceneBuiltInEasing__QuartInOut = 12,
	EMovieSceneBuiltInEasing__QuintIn = 13,
	EMovieSceneBuiltInEasing__QuintOut = 14,
	EMovieSceneBuiltInEasing__QuintInOut = 15,
	EMovieSceneBuiltInEasing__ExpoIn = 16,
	EMovieSceneBuiltInEasing__ExpoOut = 17,
	EMovieSceneBuiltInEasing__ExpoInOut = 18,
	EMovieSceneBuiltInEasing__CircIn = 19,
	EMovieSceneBuiltInEasing__CircOut = 20,
	EMovieSceneBuiltInEasing__CircInOut = 21,
	EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX = 22,

};

// Enum MovieScene.EEvaluationMethod
enum class MovieScene_EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static      = 0,
	EEvaluationMethod__Swept       = 1,
	EEvaluationMethod__EEvaluationMethod_MAX = 2,

};

// Enum MovieScene.EUpdateClockSource
enum class MovieScene_EUpdateClockSource : uint8_t
{
	EUpdateClockSource__Tick       = 0,
	EUpdateClockSource__Platform   = 1,
	EUpdateClockSource__Audio      = 2,
	EUpdateClockSource__Timecode   = 3,
	EUpdateClockSource__EUpdateClockSource_MAX = 4,

};

// Enum MovieScene.EMovieSceneEvaluationType
enum class MovieScene_EMovieSceneEvaluationType : uint8_t
{
	EMovieSceneEvaluationType__FrameLocked = 0,
	EMovieSceneEvaluationType__WithSubFrames = 1,
	EMovieSceneEvaluationType__EMovieSceneEvaluationType_MAX = 2,

};

// Enum MovieScene.EMovieScenePlayerStatus
enum class MovieScene_EMovieScenePlayerStatus : uint8_t
{
	EMovieScenePlayerStatus__Stopped = 0,
	EMovieScenePlayerStatus__Playing = 1,
	EMovieScenePlayerStatus__Recording = 2,
	EMovieScenePlayerStatus__Scrubbing = 3,
	EMovieScenePlayerStatus__Jumping = 4,
	EMovieScenePlayerStatus__Stepping = 5,
	EMovieScenePlayerStatus__Paused = 6,
	EMovieScenePlayerStatus__MAX   = 7,

};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class MovieScene_EMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace__Local = 0,
	EMovieSceneObjectBindingSpace__Root = 1,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX = 2,

};

// Enum MovieScene.EMovieSceneCompletionMode
enum class MovieScene_EMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode__KeepState = 0,
	EMovieSceneCompletionMode__RestoreState = 1,
	EMovieSceneCompletionMode__ProjectDefault = 2,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX = 3,

};

// Enum MovieScene.ESectionEvaluationFlags
enum class MovieScene_ESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags__None  = 0,
	ESectionEvaluationFlags__PreRoll = 1,
	ESectionEvaluationFlags__PostRoll = 2,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX = 3,

};

// Enum MovieScene.EUpdatePositionMethod
enum class MovieScene_EUpdatePositionMethod : uint8_t
{
	EUpdatePositionMethod__Play    = 0,
	EUpdatePositionMethod__Jump    = 1,
	EUpdatePositionMethod__Scrub   = 2,
	EUpdatePositionMethod__EUpdatePositionMethod_MAX = 3,

};

// Enum MovieScene.ESpawnOwnership
enum class MovieScene_ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence = 0,
	ESpawnOwnership__MasterSequence = 1,
	ESpawnOwnership__External      = 2,
	ESpawnOwnership__ESpawnOwnership_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// 0x0000
struct FMovieSceneSequencePlaybackSettings
{

};

// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
// 0x0000
struct FMovieSceneSequenceLoopCount
{

};

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// 0x0000
struct FMovieSceneEvalTemplateBase
{

};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// 0x0000
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{

};

// ScriptStruct MovieScene.MovieSceneChannel
// 0x0000
struct FMovieSceneChannel
{

};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// 0x0000
struct FMovieSceneObjectBindingID
{

};

// ScriptStruct MovieScene.MovieSceneSequenceID
// 0x0000
struct FMovieSceneSequenceID
{

};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// 0x0000
struct FMovieSceneTrackLabels
{

};

// ScriptStruct MovieScene.MovieSceneEditorData
// 0x0000
struct FMovieSceneEditorData
{

};

// ScriptStruct MovieScene.MovieSceneExpansionState
// 0x0000
struct FMovieSceneExpansionState
{

};

// ScriptStruct MovieScene.MovieSceneMarkedFrame
// 0x0000
struct FMovieSceneMarkedFrame
{

};

// ScriptStruct MovieScene.MovieSceneTimecodeSource
// 0x0000
struct FMovieSceneTimecodeSource
{

};

// ScriptStruct MovieScene.MovieSceneBinding
// 0x0000
struct FMovieSceneBinding
{

};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// 0x0000
struct FMovieSceneBindingOverrideData
{

};

// ScriptStruct MovieScene.OptionalMovieSceneBlendType
// 0x0000
struct FOptionalMovieSceneBlendType
{

};

// ScriptStruct MovieScene.MovieSceneBoolChannel
// 0x0000
struct FMovieSceneBoolChannel : public FMovieSceneChannel
{

};

// ScriptStruct MovieScene.MovieSceneByteChannel
// 0x0000
struct FMovieSceneByteChannel : public FMovieSceneChannel
{

};

// ScriptStruct MovieScene.MovieSceneKeyHandleMap
// 0x0000
struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{

};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// 0x0000
struct FMovieSceneEvalTemplatePtr
{

};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// 0x0000
struct FMovieSceneEmptyStruct
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// 0x0000
struct FMovieSceneEvaluationField
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// 0x0000
struct FMovieSceneEvaluationMetaData
{

};

// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// 0x0000
struct FMovieSceneOrderedEvaluationKey
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationKey
// 0x0000
struct FMovieSceneEvaluationKey
{

};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// 0x0000
struct FMovieSceneTrackIdentifier
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// 0x0000
struct FMovieSceneEvaluationGroup
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// 0x0000
struct FMovieSceneEvaluationFieldTrackPtr
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// 0x0000
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{

};

// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// 0x0000
struct FMovieSceneSegmentIdentifier
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// 0x0000
struct FMovieSceneEvaluationGroupLUTIndex
{

};

// ScriptStruct MovieScene.MovieSceneFrameRange
// 0x0000
struct FMovieSceneFrameRange
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationOperand
// 0x0000
struct FMovieSceneEvaluationOperand
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// 0x0000
struct FMovieSceneEvaluationTemplate
{

};

// ScriptStruct MovieScene.MovieSceneSubSectionFieldData
// 0x0000
struct FMovieSceneSubSectionFieldData
{

};

// ScriptStruct MovieScene.MovieSceneTrackFieldData
// 0x0000
struct FMovieSceneTrackFieldData
{

};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// 0x0000
struct FMovieSceneTemplateGenerationLedger
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// 0x0000
struct FMovieSceneEvaluationTemplateSerialNumber
{

};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// 0x0000
struct FMovieSceneSequenceHierarchy
{

};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// 0x0000
struct FMovieSceneSequenceHierarchyNode
{

};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// 0x0000
struct FMovieSceneSubSequenceData
{

};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// 0x0000
struct FMovieSceneSequenceTransform
{

};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// 0x0000
struct FMovieSceneSequenceInstanceDataPtr
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// 0x0000
struct FMovieSceneEvaluationTrack
{

};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// 0x0000
struct FMovieSceneTrackImplementationPtr
{

};

// ScriptStruct MovieScene.SectionEvaluationDataTree
// 0x0000
struct FSectionEvaluationDataTree
{

};

// ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
// 0x0000
struct FMovieSceneEvaluationTrackSegments
{

};

// ScriptStruct MovieScene.MovieSceneSegment
// 0x0000
struct FMovieSceneSegment
{

};

// ScriptStruct MovieScene.MovieSceneSubSectionData
// 0x0000
struct FMovieSceneSubSectionData
{

};

// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// 0x0000
struct FMovieSceneRootEvaluationTemplateInstance
{

};

// ScriptStruct MovieScene.MovieSceneFloatChannel
// 0x0000
struct FMovieSceneFloatChannel : public FMovieSceneChannel
{

};

// ScriptStruct MovieScene.MovieSceneFloatValue
// 0x0000
struct FMovieSceneFloatValue
{

};

// ScriptStruct MovieScene.MovieSceneTangentData
// 0x0000
struct FMovieSceneTangentData
{

};

// ScriptStruct MovieScene.MovieSceneIntegerChannel
// 0x0000
struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{

};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// 0x0000
struct FMovieSceneKeyStruct
{

};

// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// 0x0000
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{

};

// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
// 0x0000
struct FGeneratedMovieSceneKeyStruct
{

};

// ScriptStruct MovieScene.MovieSceneObjectPathChannel
// 0x0000
struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{

};

// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
// 0x0000
struct FMovieSceneObjectPathChannelKeyValue
{

};

// ScriptStruct MovieScene.MovieScenePossessable
// 0x0000
struct FMovieScenePossessable
{

};

// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// 0x0000
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// 0x0000
struct FMovieScenePropertySectionData
{

};

// ScriptStruct MovieScene.MovieSceneEasingSettings
// 0x0000
struct FMovieSceneEasingSettings
{

};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// 0x0000
struct FMovieSceneSectionEvalOptions
{

};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// 0x0000
struct FMovieSceneSectionParameters
{

};

// ScriptStruct MovieScene.SectionEvaluationData
// 0x0000
struct FSectionEvaluationData
{

};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// 0x0000
struct FMovieSceneSequenceInstanceData
{

};

// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
// 0x0000
struct FMovieSceneSequenceReplProperties
{

};

// ScriptStruct MovieScene.MovieSceneSpawnable
// 0x0000
struct FMovieSceneSpawnable
{

};

// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// 0x0000
struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
// 0x0000
struct FMovieSceneTrackDisplayOptions
{

};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// 0x0000
struct FMovieSceneTrackEvalOptions
{

};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// 0x0000
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
