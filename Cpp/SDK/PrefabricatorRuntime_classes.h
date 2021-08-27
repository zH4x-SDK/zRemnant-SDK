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

// Class PrefabricatorRuntime.PrefabActor
// 0x0000
class APrefabActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabActor");
		return ptr;
	}



	void SavePrefab();
	void RandomizeSeed();
	void LoadPrefab();
	void IsPrefabOutdated();
	void GetPrefabAsset();
};

// Class PrefabricatorRuntime.ReplicablePrefabActor
// 0x0000
class AReplicablePrefabActor : public APrefabActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.ReplicablePrefabActor");
		return ptr;
	}



};

// Class PrefabricatorRuntime.PrefabComponent
// 0x0000
class UPrefabComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabComponent");
		return ptr;
	}



};

// Class PrefabricatorRuntime.PrefabRandomizer
// 0x0000
class APrefabRandomizer : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabRandomizer");
		return ptr;
	}



	void Randomize();
};

// Class PrefabricatorRuntime.PrefabricatorProperty
// 0x0000
class UPrefabricatorProperty : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorProperty");
		return ptr;
	}



};

// Class PrefabricatorRuntime.PrefabricatorEventListener
// 0x0000
class UPrefabricatorEventListener : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorEventListener");
		return ptr;
	}



	void PostSpawn();
};

// Class PrefabricatorRuntime.PrefabricatorAssetInterface
// 0x0000
class UPrefabricatorAssetInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetInterface");
		return ptr;
	}



};

// Class PrefabricatorRuntime.PrefabricatorAsset
// 0x0000
class UPrefabricatorAsset : public UPrefabricatorAssetInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAsset");
		return ptr;
	}



};

// Class PrefabricatorRuntime.PrefabricatorAssetCollection
// 0x0000
class UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetCollection");
		return ptr;
	}



};

// Class PrefabricatorRuntime.PrefabricatorAssetUserData
// 0x0000
class UPrefabricatorAssetUserData : public UAssetUserData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorAssetUserData");
		return ptr;
	}



};

// Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
// 0x0000
class UPrefabricatorBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary");
		return ptr;
	}



	void SpawnPrefab();
	void GetAllAttachedActors();
};

// Class PrefabricatorRuntime.PrefabSeedLinkerComponent
// 0x0000
class UPrefabSeedLinkerComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabSeedLinkerComponent");
		return ptr;
	}



};

// Class PrefabricatorRuntime.PrefabSeedLinker
// 0x0000
class APrefabSeedLinker : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabricatorRuntime.PrefabSeedLinker");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
