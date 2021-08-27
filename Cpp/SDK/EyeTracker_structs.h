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

// Enum EyeTracker.EEyeTrackerStatus
enum class EyeTracker_EEyeTrackerStatus : uint8_t
{
	EEyeTrackerStatus__NotConnected = 0,
	EEyeTrackerStatus__NotTracking = 1,
	EEyeTrackerStatus__Tracking    = 2,
	EEyeTrackerStatus__EEyeTrackerStatus_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// 0x0000
struct FEyeTrackerStereoGazeData
{

};

// ScriptStruct EyeTracker.EyeTrackerGazeData
// 0x0000
struct FEyeTrackerGazeData
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
