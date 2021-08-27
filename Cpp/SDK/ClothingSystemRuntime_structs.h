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

// Enum ClothingSystemRuntime.EClothingWindMethod
enum class ClothingSystemRuntime_EClothingWindMethod : uint8_t
{
	EClothingWindMethod__Legacy    = 0,
	EClothingWindMethod__Accurate  = 1,
	EClothingWindMethod__EClothingWindMethod_MAX = 2,

};

// Enum ClothingSystemRuntime.MaskTarget_PhysMesh
enum class ClothingSystemRuntime_EMaskTarget_PhysMesh : uint8_t
{
	MaskTarget_PhysMesh__None      = 0,
	MaskTarget_PhysMesh__MaxDistance = 1,
	MaskTarget_PhysMesh__BackstopDistance = 2,
	MaskTarget_PhysMesh__BackstopRadius = 3,
	MaskTarget_PhysMesh__AnimDriveMultiplier = 4,
	MaskTarget_PhysMesh__MaskTarget_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntime.ClothConfig
// 0x0000
struct FClothConfig
{

};

// ScriptStruct ClothingSystemRuntime.ClothConstraintSetup
// 0x0000
struct FClothConstraintSetup
{

};

// ScriptStruct ClothingSystemRuntime.ClothLODData
// 0x0000
struct FClothLODData
{

};

// ScriptStruct ClothingSystemRuntime.ClothPhysicalMeshData
// 0x0000
struct FClothPhysicalMeshData
{

};

// ScriptStruct ClothingSystemRuntime.ClothVertBoneData
// 0x0000
struct FClothVertBoneData
{

};

// ScriptStruct ClothingSystemRuntime.ClothParameterMask_PhysMesh
// 0x0000
struct FClothParameterMask_PhysMesh
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
