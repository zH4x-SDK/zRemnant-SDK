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

// Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class AudioPlatformConfiguration_ESoundwaveSampleRateSettings : uint8_t
{
	ESoundwaveSampleRateSettings__Max = 0,
	ESoundwaveSampleRateSettings__High = 1,
	ESoundwaveSampleRateSettings__Medium = 2,
	ESoundwaveSampleRateSettings__Low = 3,
	ESoundwaveSampleRateSettings__Min = 4,
	ESoundwaveSampleRateSettings__MatchDevice = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
// 0x0000
struct FPlatformRuntimeAudioCompressionOverrides
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
