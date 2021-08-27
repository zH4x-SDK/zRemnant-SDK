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
// Classes
//---------------------------------------------------------------------------

// Class AudioMixer.SynthComponent
// 0x0000
class USynthComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}



	void Stop();
	void Start();
	void SetVolumeMultiplier();
	void SetSubmixSend();
	void IsPlaying();
};

// Class AudioMixer.AudioGenerator
// 0x0000
class UAudioGenerator : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioGenerator");
		return ptr;
	}



};

// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return ptr;
	}



	void StopRecordingOutput();
	void StopAnalyzingOutput();
	void StartRecordingOutput();
	void StartAnalyzingOutput();
	void SetBypassSourceEffectChainEntry();
	void ResumeRecordingOutput();
	void RemoveSourceEffectFromPresetChain();
	void RemoveMasterSubmixEffect();
	void PauseRecordingOutput();
	void GetPhaseForFrequencies();
	void GetNumberOfEntriesInSourceEffectChain();
	void GetMagnitudeForFrequencies();
	void ClearMasterSubmixEffects();
	void AddSourceEffectToPresetChain();
	void AddMasterSubmixEffect();
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x0000
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return ptr;
	}



	void SetSettings();
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0000
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}



	void SetSettings();
};

// Class AudioMixer.SubmixEffectReverbPreset
// 0x0000
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}



	void SetSettingsWithReverbEffect();
	void SetSettings();
};

// Class AudioMixer.SubmixEffectReverbFastPreset
// 0x0000
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbFastPreset");
		return ptr;
	}



	void SetSettingsWithReverbEffect();
	void SetSettings();
};

// Class AudioMixer.SynthSound
// 0x0000
class USynthSound : public USoundWaveProcedural
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
