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

// Class NavigationSystem.NavArea
// 0x0000
class UNavArea : public UNavAreaBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea");
		return ptr;
	}



};

// Class NavigationSystem.NavMeshBoundsVolume
// 0x0000
class ANavMeshBoundsVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshBoundsVolume");
		return ptr;
	}



};

// Class NavigationSystem.NavigationSystemV1
// 0x0000
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemV1");
		return ptr;
	}



	void UnregisterNavigationInvoker();
	void SimpleMoveToLocation();
	void SimpleMoveToActor();
	void SetMaxSimultaneousTileGenerationJobsCount();
	void SetGeometryGatheringMode();
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker();
	void ProjectPointToNavigation();
	void OnNavigationBoundsUpdated();
	void NavigationRaycast();
	void K2_ProjectPointToNavigation();
	void K2_GetRandomReachablePointInRadius();
	void K2_GetRandomPointInNavigableRadius();
	void IsNavigationBeingBuiltOrLocked();
	void IsNavigationBeingBuilt();
	void GetRandomReachablePointInRadius();
	void GetRandomPointInNavigableRadius();
	void GetPathLength();
	void GetPathCost();
	void GetNavigationSystem();
	void FindPathToLocationSynchronously();
	void FindPathToActorSynchronously();
};

// Class NavigationSystem.NavRelevantComponent
// 0x0000
class UNavRelevantComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavRelevantComponent");
		return ptr;
	}



	void SetNavigationRelevancy();
};

// Class NavigationSystem.NavLinkCustomComponent
// 0x0000
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavigationQueryFilter
// 0x0000
class UNavigationQueryFilter : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationQueryFilter");
		return ptr;
	}



};

// Class NavigationSystem.NavigationData
// 0x0000
class ANavigationData : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationData");
		return ptr;
	}



};

// Class NavigationSystem.AbstractNavData
// 0x0000
class AAbstractNavData : public ANavigationData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.AbstractNavData");
		return ptr;
	}



};

// Class NavigationSystem.CrowdManagerBase
// 0x0000
class UCrowdManagerBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.CrowdManagerBase");
		return ptr;
	}



};

// Class NavigationSystem.NavArea_Default
// 0x0000
class UNavArea_Default : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Default");
		return ptr;
	}



};

// Class NavigationSystem.NavArea_LowHeight
// 0x0000
class UNavArea_LowHeight : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_LowHeight");
		return ptr;
	}



};

// Class NavigationSystem.NavArea_Null
// 0x0000
class UNavArea_Null : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Null");
		return ptr;
	}



};

// Class NavigationSystem.NavArea_Obstacle
// 0x0000
class UNavArea_Obstacle : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Obstacle");
		return ptr;
	}



};

// Class NavigationSystem.NavAreaMeta
// 0x0000
class UNavAreaMeta : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta");
		return ptr;
	}



};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x0000
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta_SwitchByAgent");
		return ptr;
	}



};

// Class NavigationSystem.NavCollision
// 0x0000
class UNavCollision : public UNavCollisionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavCollision");
		return ptr;
	}



};

// Class NavigationSystem.NavigationGraph
// 0x0000
class ANavigationGraph : public ANavigationData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraph");
		return ptr;
	}



};

// Class NavigationSystem.NavigationGraphNode
// 0x0000
class ANavigationGraphNode : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNode");
		return ptr;
	}



};

// Class NavigationSystem.NavigationGraphNodeComponent
// 0x0000
class UNavigationGraphNodeComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNodeComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavigationInvokerComponent
// 0x0000
class UNavigationInvokerComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationInvokerComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavigationPath
// 0x0000
class UNavigationPath : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPath");
		return ptr;
	}



	void IsValid();
	void IsStringPulled();
	void IsPartial();
	void GetPathLength();
	void GetPathCost();
	void GetDebugString();
	void EnableRecalculationOnInvalidation();
	void EnableDebugDrawing();
};

// Class NavigationSystem.NavigationPathGenerator
// 0x0000
class UNavigationPathGenerator : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPathGenerator");
		return ptr;
	}



};

// Class NavigationSystem.NavigationSystemModuleConfig
// 0x0000
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemModuleConfig");
		return ptr;
	}



};

// Class NavigationSystem.NavigationTestingActor
// 0x0000
class ANavigationTestingActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationTestingActor");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkComponent
// 0x0000
class UNavLinkComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkCustomInterface
// 0x0000
class UNavLinkCustomInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomInterface");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkHostInterface
// 0x0000
class UNavLinkHostInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkHostInterface");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkRenderingComponent
// 0x0000
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkRenderingComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavLinkTrivial
// 0x0000
class UNavLinkTrivial : public UNavLinkDefinition
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkTrivial");
		return ptr;
	}



};

// Class NavigationSystem.NavMeshRenderingComponent
// 0x0000
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshRenderingComponent");
		return ptr;
	}



};

// Class NavigationSystem.NavModifierComponent
// 0x0000
class UNavModifierComponent : public UNavRelevantComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierComponent");
		return ptr;
	}



	void SetAreaClass();
};

// Class NavigationSystem.NavModifierVolume
// 0x0000
class ANavModifierVolume : public AVolume
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierVolume");
		return ptr;
	}



	void SetAreaClass();
};

// Class NavigationSystem.NavNodeInterface
// 0x0000
class UNavNodeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavNodeInterface");
		return ptr;
	}



};

// Class NavigationSystem.NavSystemConfigOverride
// 0x0000
class ANavSystemConfigOverride : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavSystemConfigOverride");
		return ptr;
	}



};

// Class NavigationSystem.NavTestRenderingComponent
// 0x0000
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavTestRenderingComponent");
		return ptr;
	}



};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0x0000
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastFilter_UseDefaultArea");
		return ptr;
	}



};

// Class NavigationSystem.RecastNavMesh
// 0x0000
class ARecastNavMesh : public ANavigationData
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMesh");
		return ptr;
	}



};

// Class NavigationSystem.RecastNavMeshDataChunk
// 0x0000
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMeshDataChunk");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
