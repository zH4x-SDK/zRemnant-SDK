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

// Enum GeometryCollectionCore.EGeometryCollectionCacheType
enum class GeometryCollectionCore_EGeometryCollectionCacheType : uint8_t
{
	EGeometryCollectionCacheType__None = 0,
	EGeometryCollectionCacheType__Record = 1,
	EGeometryCollectionCacheType__Play = 2,
	EGeometryCollectionCacheType__RecordAndPlay = 3,
	EGeometryCollectionCacheType__EGeometryCollectionCacheType_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionCore.RecordedTransformTrack
// 0x0000
struct FRecordedTransformTrack
{

};

// ScriptStruct GeometryCollectionCore.RecordedFrame
// 0x0000
struct FRecordedFrame
{

};

// ScriptStruct GeometryCollectionCore.SolverTrailingData
// 0x0000
struct FSolverTrailingData
{

};

// ScriptStruct GeometryCollectionCore.SolverCollisionData
// 0x0000
struct FSolverCollisionData
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
