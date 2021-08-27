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

// Enum MovieSceneCapture.EHDRCaptureGamut
enum class MovieSceneCapture_EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_Linear                    = 5,
	HCGM_MAX                       = 6,

};

// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class MovieSceneCapture_EMovieSceneCaptureProtocolState : uint8_t
{
	EMovieSceneCaptureProtocolState__Idle = 0,
	EMovieSceneCaptureProtocolState__Initialized = 1,
	EMovieSceneCaptureProtocolState__Capturing = 2,
	EMovieSceneCaptureProtocolState__Finalizing = 3,
	EMovieSceneCaptureProtocolState__EMovieSceneCaptureProtocolState_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// 0x0000
struct FCompositionGraphCapturePasses
{

};

// ScriptStruct MovieSceneCapture.FrameMetrics
// 0x0000
struct FFrameMetrics
{

};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0000
struct FMovieSceneCaptureSettings
{

};

// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x0000
struct FCaptureResolution
{

};

// ScriptStruct MovieSceneCapture.CapturedPixels
// 0x0000
struct FCapturedPixels
{

};

// ScriptStruct MovieSceneCapture.CapturedPixelsID
// 0x0000
struct FCapturedPixelsID
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
