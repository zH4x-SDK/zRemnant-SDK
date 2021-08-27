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

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// 0x0000
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProceduralMeshComponent.KismetProceduralMeshLibrary");
		return ptr;
	}



	void SliceProceduralMesh();
	void GetSectionFromStaticMesh();
	void GetSectionFromProceduralMesh();
	void GenerateBoxMesh();
	void CreateGridMeshWelded();
	void CreateGridMeshTriangles();
	void CreateGridMeshSplit();
	void CopyProceduralMeshFromStaticMeshComponent();
	void ConvertQuadToTriangles();
	void CalculateTangentsForMesh();
};

// Class ProceduralMeshComponent.ProceduralMeshComponent
// 0x0000
class UProceduralMeshComponent : public UMeshComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProceduralMeshComponent.ProceduralMeshComponent");
		return ptr;
	}



	void UpdateMeshSection_LinearColor();
	void UpdateMeshSection();
	void SetMeshSectionVisible();
	void IsMeshSectionVisible();
	void GetNumSections();
	void CreateMeshSection_LinearColor();
	void CreateMeshSection();
	void ClearMeshSection();
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
