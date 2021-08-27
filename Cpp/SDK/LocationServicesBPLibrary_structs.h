﻿#pragma once

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

// Enum LocationServicesBPLibrary.ELocationAccuracy
enum class LocationServicesBPLibrary_ELocationAccuracy : uint8_t
{
	ELocationAccuracy__LA_ThreeKilometers = 0,
	ELocationAccuracy__LA_OneKilometer = 1,
	ELocationAccuracy__LA_HundredMeters = 2,
	ELocationAccuracy__LA_TenMeters = 3,
	ELocationAccuracy__LA_Best     = 4,
	ELocationAccuracy__LA_Navigation = 5,
	ELocationAccuracy__LA_MAX      = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LocationServicesBPLibrary.LocationServicesData
// 0x0000
struct FLocationServicesData
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
