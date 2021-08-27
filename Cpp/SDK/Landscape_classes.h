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

// Class Landscape.ControlPointMeshComponent
// 0x0000
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeProxy
// 0x0000
class ALandscapeProxy : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeProxy");
		return ptr;
	}



	void SetLandscapeMaterialVectorParameterValue();
	void SetLandscapeMaterialTextureParameterValue();
	void SetLandscapeMaterialScalarParameterValue();
	void EditorSetLandscapeMaterial();
	void EditorApplySpline();
	void ChangeUseTessellationComponentScreenSizeFalloff();
	void ChangeTessellationComponentScreenSizeFalloff();
	void ChangeTessellationComponentScreenSize();
	void ChangeLODDistanceFactor();
	void ChangeComponentScreenSizeToUseSubSections();
};

// Class Landscape.Landscape
// 0x0000
class ALandscape : public ALandscapeProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.Landscape");
		return ptr;
	}



};

// Class Landscape.LandscapeBlueprintCustomBrush
// 0x0000
class ALandscapeBlueprintCustomBrush : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeBlueprintCustomBrush");
		return ptr;
	}



	void Render();
	void Initialize();
};

// Class Landscape.LandscapeBlueprintCustomSimulationBrush
// 0x0000
class ALandscapeBlueprintCustomSimulationBrush : public ALandscapeBlueprintCustomBrush
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeBlueprintCustomSimulationBrush");
		return ptr;
	}



};

// Class Landscape.LandscapeComponent
// 0x0000
class ULandscapeComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeComponent");
		return ptr;
	}



	void GetMaterialInstanceDynamic();
};

// Class Landscape.LandscapeGizmoActor
// 0x0000
class ALandscapeGizmoActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoActiveActor
// 0x0000
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return ptr;
	}



};

// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeGrassType
// 0x0000
class ULandscapeGrassType : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return ptr;
	}



};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x0000
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeInfo
// 0x0000
class ULandscapeInfo : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfo");
		return ptr;
	}



};

// Class Landscape.LandscapeInfoMap
// 0x0000
class ULandscapeInfoMap : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return ptr;
	}



};

// Class Landscape.LandscapeLayerInfoObject
// 0x0000
class ULandscapeLayerInfoObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return ptr;
	}



};

// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0000
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return ptr;
	}



};

// Class Landscape.LandscapeMeshCollisionComponent
// 0x0000
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeMeshProxyActor
// 0x0000
class ALandscapeMeshProxyActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return ptr;
	}



};

// Class Landscape.LandscapeMeshProxyComponent
// 0x0000
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return ptr;
	}



};

// Class Landscape.LandscapeSplinesComponent
// 0x0000
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return ptr;
	}



	void GetSplineMeshComponents();
};

// Class Landscape.LandscapeSplineControlPoint
// 0x0000
class ULandscapeSplineControlPoint : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return ptr;
	}



};

// Class Landscape.LandscapeSplineSegment
// 0x0000
class ULandscapeSplineSegment : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return ptr;
	}



};

// Class Landscape.LandscapeStreamingProxy
// 0x0000
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0000
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0000
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0000
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0000
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0000
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0000
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}



};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0000
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
