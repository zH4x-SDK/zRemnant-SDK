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

// Enum Foliage.EFoliageScaling
enum class Foliage_EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform       = 0,
	EFoliageScaling__Free          = 1,
	EFoliageScaling__LockXY        = 2,
	EFoliageScaling__LockXZ        = 3,
	EFoliageScaling__LockYZ        = 4,
	EFoliageScaling__EFoliageScaling_MAX = 5,

};

// Enum Foliage.EVertexColorMaskChannel
enum class Foliage_EVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel__Red   = 0,
	EVertexColorMaskChannel__Green = 1,
	EVertexColorMaskChannel__Blue  = 2,
	EVertexColorMaskChannel__Alpha = 3,
	EVertexColorMaskChannel__MAX_None = 4,
	EVertexColorMaskChannel__EVertexColorMaskChannel_MAX = 5,

};

// Enum Foliage.FoliageVertexColorMask
enum class Foliage_EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5,

};

// Enum Foliage.ESimulationQuery
enum class Foliage_ESimulationQuery : uint8_t
{
	ESimulationQuery__CollisionOverlap = 0,
	ESimulationQuery__ShadeOverlap = 1,
	ESimulationQuery__AnyOverlap   = 2,
	ESimulationQuery__ESimulationQuery_MAX = 3,

};

// Enum Foliage.ESimulationOverlap
enum class Foliage_ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap = 0,
	ESimulationOverlap__ShadeOverlap = 1,
	ESimulationOverlap__None       = 2,
	ESimulationOverlap__ESimulationOverlap_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Foliage.FoliageVertexColorChannelMask
// 0x0000
struct FFoliageVertexColorChannelMask
{

};

// ScriptStruct Foliage.FoliageTypeObject
// 0x0000
struct FFoliageTypeObject
{

};

// ScriptStruct Foliage.ProceduralFoliageInstance
// 0x0000
struct FProceduralFoliageInstance
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
