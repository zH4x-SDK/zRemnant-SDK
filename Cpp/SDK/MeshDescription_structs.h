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

// Enum MeshDescription.EComputeNTBsOptions
enum class MeshDescription_EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None      = 0,
	EComputeNTBsOptions__Normals   = 1,
	EComputeNTBsOptions__Tangents  = 2,
	EComputeNTBsOptions__WeightedNTBs = 3,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MeshDescription.ElementID
// 0x0000
struct FElementID
{

};

// ScriptStruct MeshDescription.PolygonGroupID
// 0x0000
struct FPolygonGroupID : public FElementID
{

};

// ScriptStruct MeshDescription.PolygonID
// 0x0000
struct FPolygonID : public FElementID
{

};

// ScriptStruct MeshDescription.VertexID
// 0x0000
struct FVertexID : public FElementID
{

};

// ScriptStruct MeshDescription.EdgeID
// 0x0000
struct FEdgeID : public FElementID
{

};

// ScriptStruct MeshDescription.VertexInstanceID
// 0x0000
struct FVertexInstanceID : public FElementID
{

};

// ScriptStruct MeshDescription.MeshTriangle
// 0x0000
struct FMeshTriangle
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
