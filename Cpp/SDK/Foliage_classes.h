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

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x0000
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}



};

// Class Foliage.FoliageStatistics
// 0x0000
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		return ptr;
	}



	void FoliageOverlappingSphereCount();
	void FoliageOverlappingBoxCount();
};

// Class Foliage.FoliageType
// 0x0000
class UFoliageType : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}



};

// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0000
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}



};

// Class Foliage.InstancedFoliageActor
// 0x0000
class AInstancedFoliageActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return ptr;
	}



};

// Class Foliage.InteractiveFoliageActor
// 0x0000
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}



	void CapsuleTouched();
};

// Class Foliage.InteractiveFoliageComponent
// 0x0000
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}



};

// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0000
class AProceduralFoliageBlockingVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}



};

// Class Foliage.ProceduralFoliageComponent
// 0x0000
class UProceduralFoliageComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}



};

// Class Foliage.ProceduralFoliageSpawner
// 0x0000
class UProceduralFoliageSpawner : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}



	void Simulate();
};

// Class Foliage.ProceduralFoliageTile
// 0x0000
class UProceduralFoliageTile : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}



};

// Class Foliage.ProceduralFoliageVolume
// 0x0000
class AProceduralFoliageVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
