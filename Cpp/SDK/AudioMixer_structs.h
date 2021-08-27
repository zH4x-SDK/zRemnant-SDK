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

// Enum AudioMixer.EFFTWindowType
enum class AudioMixer_EFFTWindowType : uint8_t
{
	EFFTWindowType__None           = 0,
	EFFTWindowType__Hamming        = 1,
	EFFTWindowType__Hann           = 2,
	EFFTWindowType__Blackman       = 3,
	EFFTWindowType__EFFTWindowType_MAX = 4,

};

// Enum AudioMixer.EFFTPeakInterpolationMethod
enum class AudioMixer_EFFTPeakInterpolationMethod : uint8_t
{
	EFFTPeakInterpolationMethod__NearestNeighbor = 0,
	EFFTPeakInterpolationMethod__Linear = 1,
	EFFTPeakInterpolationMethod__Quadratic = 2,
	EFFTPeakInterpolationMethod__EFFTPeakInterpolationMethod_MAX = 3,

};

// Enum AudioMixer.EFFTSize
enum class AudioMixer_EFFTSize : uint8_t
{
	EFFTSize__DefaultSize          = 0,
	EFFTSize__Min                  = 1,
	EFFTSize__Small                = 2,
	EFFTSize__Medium               = 3,
	EFFTSize__Large                = 4,
	EFFTSize__Max                  = 5,

};

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class AudioMixer_ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared = 1,
	ESubmixEffectDynamicsPeakMode__Peak = 2,
	ESubmixEffectDynamicsPeakMode__Count = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX = 4,

};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class AudioMixer_ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor = 0,
	ESubmixEffectDynamicsProcessorType__Limiter = 1,
	ESubmixEffectDynamicsProcessorType__Expander = 2,
	ESubmixEffectDynamicsProcessorType__Gate = 3,
	ESubmixEffectDynamicsProcessorType__Count = 4,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// 0x0000
struct FSubmixEffectDynamicsProcessorSettings
{

};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// 0x0000
struct FSubmixEffectSubmixEQSettings
{

};

// ScriptStruct AudioMixer.SubmixEffectEQBand
// 0x0000
struct FSubmixEffectEQBand
{

};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// 0x0000
struct FSubmixEffectReverbSettings
{

};

// ScriptStruct AudioMixer.SubmixEffectReverbFastSettings
// 0x0000
struct FSubmixEffectReverbFastSettings
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
