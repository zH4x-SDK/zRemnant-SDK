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

// Class AssetRegistry.AssetRegistryImpl
// 0x0000
class UAssetRegistryImpl : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryImpl");
		return ptr;
	}



};

// Class AssetRegistry.AssetRegistryHelpers
// 0x0000
class UAssetRegistryHelpers : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryHelpers");
		return ptr;
	}



	void ToSoftObjectPath();
	void SetFilterTagsAndValues();
	void IsValid();
	void IsUAsset();
	void IsRedirector();
	void IsAssetLoaded();
	void GetTagValue();
	void GetFullName();
	void GetExportTextName();
	void GetClass();
	void GetAssetRegistry();
	void GetAsset();
	void CreateAssetData();
};

// Class AssetRegistry.AssetRegistry
// 0x0000
class UAssetRegistry : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistry");
		return ptr;
	}



	void UseFilterToExcludeAssets();
	void SearchAllAssets();
	void ScanPathsSynchronous();
	void ScanModifiedAssetFiles();
	void ScanFilesSynchronous();
	void RunAssetsThroughFilter();
	void PrioritizeSearchPath();
	void IsLoadingAssets();
	void HasAssets();
	void GetSubPaths();
	void GetAssetsByPath();
	void GetAssetsByPackageName();
	void GetAssetsByClass();
	void GetAssets();
	void GetAssetByObjectPath();
	void GetAllCachedPaths();
	void GetAllAssets();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
