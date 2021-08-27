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

// Class GeometryCollectionEngine.GeometryCollectionActor
// 0x0000
class AGeometryCollectionActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionActor");
		return ptr;
	}



	void RaycastSingle();
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// 0x0000
class UGeometryCollectionCache : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionCache");
		return ptr;
	}



};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// 0x0000
class UGeometryCollectionComponent : public UMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionComponent");
		return ptr;
	}



};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// 0x0000
class AGeometryCollectionDebugDrawActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor");
		return ptr;
	}



};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// 0x0000
class UGeometryCollectionDebugDrawComponent : public UMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent");
		return ptr;
	}



};

// Class GeometryCollectionEngine.GeometryCollection
// 0x0000
class UGeometryCollection : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollection");
		return ptr;
	}



};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// 0x0000
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor");
		return ptr;
	}



};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// 0x0000
class UStaticMeshSimulationComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.StaticMeshSimulationComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
