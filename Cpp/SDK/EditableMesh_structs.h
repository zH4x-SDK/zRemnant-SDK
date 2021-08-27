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
// Enums
//---------------------------------------------------------------------------

// Enum EditableMesh.ETriangleTessellationMode
enum class EditableMesh_ETriangleTessellationMode : uint8_t
{
	ETriangleTessellationMode__ThreeTriangles = 0,
	ETriangleTessellationMode__FourTriangles = 1,
	ETriangleTessellationMode__ETriangleTessellationMode_MAX = 2,

};

// Enum EditableMesh.EInsetPolygonsMode
enum class EditableMesh_EInsetPolygonsMode : uint8_t
{
	EInsetPolygonsMode__All        = 0,
	EInsetPolygonsMode__CenterPolygonOnly = 1,
	EInsetPolygonsMode__SidePolygonsOnly = 2,
	EInsetPolygonsMode__EInsetPolygonsMode_MAX = 3,

};

// Enum EditableMesh.EPolygonEdgeHardness
enum class EditableMesh_EPolygonEdgeHardness : uint8_t
{
	EPolygonEdgeHardness__NewEdgesSoft = 0,
	EPolygonEdgeHardness__NewEdgesHard = 1,
	EPolygonEdgeHardness__AllEdgesSoft = 2,
	EPolygonEdgeHardness__AllEdgesHard = 3,
	EPolygonEdgeHardness__EPolygonEdgeHardness_MAX = 4,

};

// Enum EditableMesh.EMeshElementAttributeType
enum class EditableMesh_EMeshElementAttributeType : uint8_t
{
	EMeshElementAttributeType__None = 0,
	EMeshElementAttributeType__FVector4 = 1,
	EMeshElementAttributeType__FVector = 2,
	EMeshElementAttributeType__FVector2D = 3,
	EMeshElementAttributeType__Float = 4,
	EMeshElementAttributeType__Int = 5,
	EMeshElementAttributeType__Bool = 6,
	EMeshElementAttributeType__FName = 7,
	EMeshElementAttributeType__EMeshElementAttributeType_MAX = 8,

};

// Enum EditableMesh.EMeshTopologyChange
enum class EditableMesh_EMeshTopologyChange : uint8_t
{
	EMeshTopologyChange__NoTopologyChange = 0,
	EMeshTopologyChange__TopologyChange = 1,
	EMeshTopologyChange__EMeshTopologyChange_MAX = 2,

};

// Enum EditableMesh.EMeshModificationType
enum class EditableMesh_EMeshModificationType : uint8_t
{
	EMeshModificationType__FirstInterim = 0,
	EMeshModificationType__Interim = 1,
	EMeshModificationType__Final   = 2,
	EMeshModificationType__EMeshModificationType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EditableMesh.AdaptorPolygon2Group
// 0x0000
struct FAdaptorPolygon2Group
{

};

// ScriptStruct EditableMesh.AdaptorPolygon
// 0x0000
struct FAdaptorPolygon
{

};

// ScriptStruct EditableMesh.AdaptorTriangleID
// 0x0000
struct FAdaptorTriangleID : public FElementID
{

};

// ScriptStruct EditableMesh.PolygonGroupForPolygon
// 0x0000
struct FPolygonGroupForPolygon
{

};

// ScriptStruct EditableMesh.PolygonGroupToCreate
// 0x0000
struct FPolygonGroupToCreate
{

};

// ScriptStruct EditableMesh.MeshElementAttributeList
// 0x0000
struct FMeshElementAttributeList
{

};

// ScriptStruct EditableMesh.MeshElementAttributeData
// 0x0000
struct FMeshElementAttributeData
{

};

// ScriptStruct EditableMesh.MeshElementAttributeValue
// 0x0000
struct FMeshElementAttributeValue
{

};

// ScriptStruct EditableMesh.VertexToMove
// 0x0000
struct FVertexToMove
{

};

// ScriptStruct EditableMesh.VerticesForEdge
// 0x0000
struct FVerticesForEdge
{

};

// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
// 0x0000
struct FChangeVertexInstancesForPolygon
{

};

// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
// 0x0000
struct FVertexInstancesForPolygonHole
{

};

// ScriptStruct EditableMesh.VertexIndexAndInstanceID
// 0x0000
struct FVertexIndexAndInstanceID
{

};

// ScriptStruct EditableMesh.VertexAttributesForPolygon
// 0x0000
struct FVertexAttributesForPolygon
{

};

// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
// 0x0000
struct FVertexAttributesForPolygonHole
{

};

// ScriptStruct EditableMesh.AttributesForEdge
// 0x0000
struct FAttributesForEdge
{

};

// ScriptStruct EditableMesh.AttributesForVertexInstance
// 0x0000
struct FAttributesForVertexInstance
{

};

// ScriptStruct EditableMesh.AttributesForVertex
// 0x0000
struct FAttributesForVertex
{

};

// ScriptStruct EditableMesh.PolygonToSplit
// 0x0000
struct FPolygonToSplit
{

};

// ScriptStruct EditableMesh.VertexPair
// 0x0000
struct FVertexPair
{

};

// ScriptStruct EditableMesh.PolygonToCreate
// 0x0000
struct FPolygonToCreate
{

};

// ScriptStruct EditableMesh.VertexAndAttributes
// 0x0000
struct FVertexAndAttributes
{

};

// ScriptStruct EditableMesh.EdgeToCreate
// 0x0000
struct FEdgeToCreate
{

};

// ScriptStruct EditableMesh.VertexInstanceToCreate
// 0x0000
struct FVertexInstanceToCreate
{

};

// ScriptStruct EditableMesh.VertexToCreate
// 0x0000
struct FVertexToCreate
{

};

// ScriptStruct EditableMesh.SubdivisionLimitData
// 0x0000
struct FSubdivisionLimitData
{

};

// ScriptStruct EditableMesh.SubdividedWireEdge
// 0x0000
struct FSubdividedWireEdge
{

};

// ScriptStruct EditableMesh.SubdivisionLimitSection
// 0x0000
struct FSubdivisionLimitSection
{

};

// ScriptStruct EditableMesh.SubdividedQuad
// 0x0000
struct FSubdividedQuad
{

};

// ScriptStruct EditableMesh.SubdividedQuadVertex
// 0x0000
struct FSubdividedQuadVertex
{

};

// ScriptStruct EditableMesh.RenderingPolygonGroup
// 0x0000
struct FRenderingPolygonGroup
{

};

// ScriptStruct EditableMesh.RenderingPolygon
// 0x0000
struct FRenderingPolygon
{

};

// ScriptStruct EditableMesh.TriangleID
// 0x0000
struct FTriangleID : public FElementID
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
