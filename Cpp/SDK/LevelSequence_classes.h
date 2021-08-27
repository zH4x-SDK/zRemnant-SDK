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

// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0000
class UDefaultLevelSequenceInstanceData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return ptr;
	}



};

// Class LevelSequence.LevelSequenceMetaData
// 0x0000
class ULevelSequenceMetaData : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceMetaData");
		return ptr;
	}



};

// Class LevelSequence.LevelSequence
// 0x0000
class ULevelSequence : public UMovieSceneSequence
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}



	void RemoveMetaDataByClass();
	void FindOrAddMetaDataByClass();
	void FindMetaDataByClass();
	void CopyMetaData();
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000
class ULevelSequenceBurnInInitSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}



};

// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0000
class ULevelSequenceBurnInOptions : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}



	void SetBurnIn();
};

// Class LevelSequence.LevelSequenceActor
// 0x0000
class ALevelSequenceActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}



	void SetSequence();
	void SetReplicatePlayback();
	void SetEventReceivers();
	void SetBinding();
	void ResetBindings();
	void ResetBinding();
	void RemoveBinding();
	void OnLevelSequenceLoaded__DelegateSignature();
	void LoadSequence();
	void GetSequencePlayer();
	void GetSequence();
	void AddBinding();
};

// Class LevelSequence.LevelSequenceBurnIn
// 0x0000
class ULevelSequenceBurnIn : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}



	void SetSettings();
	void GetSettingsClass();
};

// Class LevelSequence.LevelSequenceDirector
// 0x0000
class ULevelSequenceDirector : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceDirector");
		return ptr;
	}



	void OnCreated();
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// 0x0000
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LegacyLevelSequenceDirectorBlueprint");
		return ptr;
	}



};

// Class LevelSequence.LevelSequencePlayer
// 0x0000
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}



	void GetActiveCameraComponent();
	void CreateLevelSequencePlayer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
