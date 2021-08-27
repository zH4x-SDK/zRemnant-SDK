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

// Enum AppleVision.EDetectedFaceFeatureType
enum class AppleVision_EDetectedFaceFeatureType : uint8_t
{
	EDetectedFaceFeatureType__Unkown = 0,
	EDetectedFaceFeatureType__FaceContour = 1,
	EDetectedFaceFeatureType__InnerLips = 2,
	EDetectedFaceFeatureType__LeftEye = 3,
	EDetectedFaceFeatureType__LeftEyebrow = 4,
	EDetectedFaceFeatureType__LeftPupil = 5,
	EDetectedFaceFeatureType__MedianLine = 6,
	EDetectedFaceFeatureType__Nose = 7,
	EDetectedFaceFeatureType__NoseCrest = 8,
	EDetectedFaceFeatureType__OuterLips = 9,
	EDetectedFaceFeatureType__RightEye = 10,
	EDetectedFaceFeatureType__RightEyebrow = 11,
	EDetectedFaceFeatureType__RightPupil = 12,
	EDetectedFaceFeatureType__EDetectedFaceFeatureType_MAX = 13,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AppleVision.FaceDetectionResult
// 0x0000
struct FFaceDetectionResult
{

};

// ScriptStruct AppleVision.DetectedFeature
// 0x0000
struct FDetectedFeature
{

};

// ScriptStruct AppleVision.DetectedFeatureRegion
// 0x0000
struct FDetectedFeatureRegion : public FDetectedFeature
{

};

// ScriptStruct AppleVision.DetectedFace
// 0x0000
struct FDetectedFace : public FDetectedFeatureRegion
{

};

// ScriptStruct AppleVision.DetectedFaceFeatureRegion
// 0x0000
struct FDetectedFaceFeatureRegion : public FDetectedFeatureRegion
{

};

// ScriptStruct AppleVision.DetectedFeature2D
// 0x0000
struct FDetectedFeature2D : public FDetectedFeature
{

};

// ScriptStruct AppleVision.DetectedFaceFeature2D
// 0x0000
struct FDetectedFaceFeature2D : public FDetectedFeature2D
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
