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

// Class EditableMesh.EditableMeshAdapter
// 0x0000
class UEditableMeshAdapter : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMeshAdapter");
		return ptr;
	}



};

// Class EditableMesh.EditableGeometryCollectionAdapter
// 0x0000
class UEditableGeometryCollectionAdapter : public UEditableMeshAdapter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableGeometryCollectionAdapter");
		return ptr;
	}



};

// Class EditableMesh.EditableMesh
// 0x0000
class UEditableMesh : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMesh");
		return ptr;
	}



	void WeldVertices();
	void TryToRemoveVertex();
	void TryToRemovePolygonEdge();
	void TriangulatePolygons();
	void TessellatePolygons();
	void StartModification();
	void SplitPolygons();
	void SplitPolygonalMesh();
	void SplitEdge();
	void SetVerticesCornerSharpness();
	void SetVerticesAttributes();
	void SetVertexInstancesAttributes();
	void SetTextureCoordinateCount();
	void SetSubdivisionCount();
	void SetPolygonsVertexAttributes();
	void SetEdgesVertices();
	void SetEdgesHardnessAutomatically();
	void SetEdgesHardness();
	void SetEdgesCreaseSharpness();
	void SetEdgesAttributes();
	void SetAllowUndo();
	void SetAllowSpatialDatabase();
	void SetAllowCompact();
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane();
	void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment();
	void SearchSpatialDatabaseForPolygonsInVolume();
	void RevertInstance();
	void Revert();
	void RemovePolygonPerimeterVertices();
	void RebuildRenderMesh();
	void QuadrangulateMesh();
	void PropagateInstanceChanges();
	void MoveVertices();
	void MakeVertexID();
	void MakePolygonID();
	void MakePolygonGroupID();
	void MakeEdgeID();
	void IsValidVertex();
	void IsValidPolygonGroup();
	void IsValidPolygon();
	void IsValidEdge();
	void IsUndoAllowed();
	void IsSpatialDatabaseAllowed();
	void IsPreviewingSubdivisions();
	void IsOrphanedVertex();
	void IsCompactAllowed();
	void IsCommittedAsInstance();
	void IsCommitted();
	void IsBeingModified();
	void InvalidVertexID();
	void InvalidPolygonID();
	void InvalidPolygonGroupID();
	void InvalidEdgeID();
	void InsetPolygons();
	void InsertPolygonPerimeterVertices();
	void InsertEdgeLoop();
	void InitializeAdapters();
	void GetVertexPairEdge();
	void GetVertexInstanceVertex();
	void GetVertexInstanceCount();
	void GetVertexInstanceConnectedPolygons();
	void GetVertexInstanceConnectedPolygonCount();
	void GetVertexInstanceConnectedPolygon();
	void GetVertexCount();
	void GetVertexConnectedPolygons();
	void GetVertexConnectedEdges();
	void GetVertexConnectedEdgeCount();
	void GetVertexConnectedEdge();
	void GetVertexAdjacentVertices();
	void GetTextureCoordinateCount();
	void GetSubdivisionLimitData();
	void GetSubdivisionCount();
	void GetPolygonTriangulatedTriangleCount();
	void GetPolygonTriangulatedTriangle();
	void GetPolygonPerimeterVertices();
	void GetPolygonPerimeterVertexInstances();
	void GetPolygonPerimeterVertexInstance();
	void GetPolygonPerimeterVertexCount();
	void GetPolygonPerimeterVertex();
	void GetPolygonPerimeterEdges();
	void GetPolygonPerimeterEdgeCount();
	void GetPolygonPerimeterEdge();
	void GetPolygonInGroup();
	void GetPolygonGroupCount();
	void GetPolygonCountInGroup();
	void GetPolygonCount();
	void GetPolygonAdjacentPolygons();
	void GetGroupForPolygon();
	void GetFirstValidPolygonGroup();
	void GetEdgeVertices();
	void GetEdgeVertex();
	void GetEdgeThatConnectsVertices();
	void GetEdgeLoopElements();
	void GetEdgeCount();
	void GetEdgeConnectedPolygons();
	void GetEdgeConnectedPolygonCount();
	void GetEdgeConnectedPolygon();
	void GeneratePolygonTangentsAndNormals();
	void FlipPolygons();
	void FindPolygonPerimeterVertexNumberForVertex();
	void FindPolygonPerimeterEdgeNumberForVertices();
	void FindPolygonLoop();
	void ExtrudePolygons();
	void ExtendVertices();
	void ExtendEdges();
	void EndModification();
	void DeleteVertexInstances();
	void DeleteVertexAndConnectedEdgesAndPolygons();
	void DeletePolygons();
	void DeletePolygonGroups();
	void DeleteOrphanVertices();
	void DeleteEdges();
	void DeleteEdgeAndConnectedPolygons();
	void CreateVertices();
	void CreateVertexInstances();
	void CreatePolygons();
	void CreatePolygonGroups();
	void CreateMissingPolygonPerimeterEdges();
	void CreateEmptyVertexRange();
	void CreateEdges();
	void ComputePolygonTriangulation();
	void ComputePolygonsSharedEdges();
	void ComputePolygonPlane();
	void ComputePolygonNormal();
	void ComputePolygonCenter();
	void ComputeBoundingBoxAndSphere();
	void ComputeBoundingBox();
	void ComputeBarycentricWeightForPointOnPolygon();
	void CommitInstance();
	void Commit();
	void ChangePolygonsVertexInstances();
	void BevelPolygons();
	void AssignPolygonsToPolygonGroups();
	void AnyChangesToUndo();
};

// Class EditableMesh.EditableMeshFactory
// 0x0000
class UEditableMeshFactory : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMeshFactory");
		return ptr;
	}



	void MakeEditableMesh();
};

// Class EditableMesh.EditableStaticMeshAdapter
// 0x0000
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableStaticMeshAdapter");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
