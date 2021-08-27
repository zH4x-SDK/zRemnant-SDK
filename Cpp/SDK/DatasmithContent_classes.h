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

// Class DatasmithContent.DatasmithObjectTemplate
// 0x0000
class UDatasmithObjectTemplate : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithObjectTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithActorTemplate
// 0x0000
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithActorTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithAreaLightActor
// 0x0000
class ADatasmithAreaLightActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActor");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithAreaLightActorTemplate
// 0x0000
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActorTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithAssetImportData
// 0x0000
class UDatasmithAssetImportData : public UAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithStaticMeshImportData
// 0x0000
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithStaticMeshCADImportData
// 0x0000
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshCADImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithSceneImportData
// 0x0000
class UDatasmithSceneImportData : public UAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithCADImportSceneData
// 0x0000
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCADImportSceneData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithMDLSceneImportData
// 0x0000
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithMDLSceneImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithGLTFSceneImportData
// 0x0000
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithGLTFSceneImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// 0x0000
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshGLTFImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// 0x0000
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenAssetImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// 0x0000
class UDatasmithDeltaGenSceneImportData : public UDatasmithSceneImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenSceneImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithVREDAssetImportData
// 0x0000
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDAssetImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithVREDSceneImportData
// 0x0000
class UDatasmithVREDSceneImportData : public UDatasmithSceneImportData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDSceneImportData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithAssetUserData
// 0x0000
class UDatasmithAssetUserData : public UAssetUserData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetUserData");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithCineCameraActorTemplate
// 0x0000
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraActorTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// 0x0000
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraComponentTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithContentBlueprintLibrary
// 0x0000
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithContentBlueprintLibrary");
		return ptr;
	}



	void GetDatasmithUserDataValueForKey();
	void GetDatasmithUserDataKeysAndValuesForValue();
	void GetDatasmithUserData();
};

// Class DatasmithContent.DatasmithImportOptions
// 0x0000
class UDatasmithImportOptions : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportOptions");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithLandscapeTemplate
// 0x0000
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithLandscapeTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithLightComponentTemplate
// 0x0000
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithLightComponentTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// 0x0000
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithMaterialInstanceTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithPointLightComponentTemplate
// 0x0000
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithPointLightComponentTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// 0x0000
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithPostProcessVolumeTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithScene
// 0x0000
class UDatasmithScene : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithScene");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithSceneActor
// 0x0000
class ADatasmithSceneActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneActor");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithSceneComponentTemplate
// 0x0000
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneComponentTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// 0x0000
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSkyLightComponentTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// 0x0000
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSpotLightComponentTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// 0x0000
class UDatasmithStaticMeshComponentTemplate : public UDatasmithSceneComponentTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshComponentTemplate");
		return ptr;
	}



};

// Class DatasmithContent.DatasmithStaticMeshTemplate
// 0x0000
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshTemplate");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
