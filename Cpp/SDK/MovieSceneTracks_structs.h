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

// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieSceneTracks_EMovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X = 0,
	MovieScene3DPathSection_Axis__Y = 1,
	MovieScene3DPathSection_Axis__Z = 2,
	MovieScene3DPathSection_Axis__NEG_X = 3,
	MovieScene3DPathSection_Axis__NEG_Y = 4,
	MovieScene3DPathSection_Axis__NEG_Z = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX = 6,

};

// Enum MovieSceneTracks.EFireEventsAtPosition
enum class MovieSceneTracks_EFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition__AtStartOfEvaluation = 0,
	EFireEventsAtPosition__AtEndOfEvaluation = 1,
	EFireEventsAtPosition__AfterSpawn = 2,
	EFireEventsAtPosition__EFireEventsAtPosition_MAX = 3,

};

// Enum MovieSceneTracks.ELevelVisibility
enum class MovieSceneTracks_ELevelVisibility : uint8_t
{
	ELevelVisibility__Visible      = 0,
	ELevelVisibility__Hidden       = 1,
	ELevelVisibility__ELevelVisibility_MAX = 2,

};

// Enum MovieSceneTracks.EParticleKey
enum class MovieSceneTracks_EParticleKey : uint8_t
{
	EParticleKey__Activate         = 0,
	EParticleKey__Deactivate       = 1,
	EParticleKey__Trigger          = 2,
	EParticleKey__EParticleKey_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// 0x0000
struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// 0x0000
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// 0x0000
struct FMovieSceneTransformMask
{

};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// 0x0000
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{

};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// 0x0000
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{

};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// 0x0000
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{

};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// 0x0000
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{

};

// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// 0x0000
struct FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// 0x0000
struct FMovieScene3DTransformTemplateData
{

};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// 0x0000
struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{

};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// 0x0000
struct FMovieSceneActorReferenceKey
{

};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// 0x0000
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// 0x0000
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplateData
// 0x0000
struct FMovieSceneAudioSectionTemplateData
{

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// 0x0000
struct FMovieSceneCameraAnimSectionData
{

};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// 0x0000
struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// 0x0000
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// 0x0000
struct FMovieSceneCameraShakeSectionData
{

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// 0x0000
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// 0x0000
struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// 0x0000
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{

};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// 0x0000
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
// 0x0000
struct FMovieSceneEvent
{

};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// 0x0000
struct FMovieSceneEventChannel : public FMovieSceneChannel
{

};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// 0x0000
struct FMovieSceneEventSectionData : public FMovieSceneChannel
{

};

// ScriptStruct MovieSceneTracks.EventPayload
// 0x0000
struct FEventPayload
{

};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// 0x0000
struct FMovieSceneEventParameters
{

};

// ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
// 0x0000
struct FMovieSceneEventTemplateBase : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
// 0x0000
struct FMovieSceneEventRepeaterTemplate : public FMovieSceneEventTemplateBase
{

};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
// 0x0000
struct FMovieSceneEventTriggerTemplate : public FMovieSceneEventTemplateBase
{

};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// 0x0000
struct FMovieSceneEventSectionTemplate : public FMovieSceneEventTemplateBase
{

};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// 0x0000
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// 0x0000
struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// 0x0000
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// 0x0000
struct FColorParameterNameAndCurves
{

};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x0000
struct FVectorParameterNameAndCurves
{

};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x0000
struct FScalarParameterNameAndCurve
{

};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// 0x0000
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// 0x0000
struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// 0x0000
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// 0x0000
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// 0x0000
struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// 0x0000
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate
// 0x0000
struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
// 0x0000
struct FMovieSceneEulerTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// 0x0000
struct FMovieSceneTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// 0x0000
struct FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// 0x0000
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// 0x0000
struct FMovieSceneStringChannel : public FMovieSceneChannel
{

};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// 0x0000
struct FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// 0x0000
struct FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// 0x0000
struct FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// 0x0000
struct FMovieSceneFloatPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// 0x0000
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// 0x0000
struct FMovieSceneSkeletalAnimationParams
{

};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// 0x0000
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// 0x0000
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{

};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// 0x0000
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// 0x0000
struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// 0x0000
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{

};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// 0x0000
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{

};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// 0x0000
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{

};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// 0x0000
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{

};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// 0x0000
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
