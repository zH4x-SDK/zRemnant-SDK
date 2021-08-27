// Name: Remnant, Version: 1.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function cable_mesh_small.cable_mesh_small_C.UserConstructionScript
// ()
void Acable_mesh_small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cable_mesh_small.cable_mesh_small_C.UserConstructionScript");

	Acable_mesh_small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
