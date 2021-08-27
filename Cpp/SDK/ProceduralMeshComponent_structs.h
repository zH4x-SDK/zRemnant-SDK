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

// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class ProceduralMeshComponent_EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap = 2,
	EProcMeshSliceCapOption__EProcMeshSliceCapOption_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// 0x0000
struct FProcMeshSection
{

};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// 0x0000
struct FProcMeshVertex
{

};

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// 0x0000
struct FProcMeshTangent
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
