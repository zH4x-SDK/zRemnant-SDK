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

// Enum CinematicCamera.ECameraFocusMethod
enum class CinematicCamera_ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__None       = 0,
	ECameraFocusMethod__Manual     = 1,
	ECameraFocusMethod__Tracking   = 2,
	ECameraFocusMethod__ECameraFocusMethod_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// 0x0000
struct FCameraLookatTrackingSettings
{

};

// ScriptStruct CinematicCamera.CameraFocusSettings
// 0x0000
struct FCameraFocusSettings
{

};

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// 0x0000
struct FCameraTrackingFocusSettings
{

};

// ScriptStruct CinematicCamera.NamedLensPreset
// 0x0000
struct FNamedLensPreset
{

};

// ScriptStruct CinematicCamera.CameraLensSettings
// 0x0000
struct FCameraLensSettings
{

};

// ScriptStruct CinematicCamera.NamedFilmbackPreset
// 0x0000
struct FNamedFilmbackPreset
{

};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// 0x0000
struct FCameraFilmbackSettings
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
