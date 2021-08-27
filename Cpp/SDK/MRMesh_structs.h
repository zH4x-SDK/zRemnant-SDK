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

// Enum MRMesh.EMeshTrackerVertexColorMode
enum class MRMesh_EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None = 0,
	EMeshTrackerVertexColorMode__Confidence = 1,
	EMeshTrackerVertexColorMode__Block = 2,
	EMeshTrackerVertexColorMode__EMeshTrackerVertexColorMode_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MRMesh.MRMeshConfiguration
// 0x0000
struct FMRMeshConfiguration
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
