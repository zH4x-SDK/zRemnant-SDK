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

// Enum GunfireNavigation.ENavVolumeDrawType
enum class GunfireNavigation_ENavVolumeDrawType : uint8_t
{
	DRAWTYPE_Open                  = 0,
	DRAWTYPE_Blocked               = 1,
	DRAWTYPE_All                   = 2,
	DRAWTYPE_MAX                   = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
