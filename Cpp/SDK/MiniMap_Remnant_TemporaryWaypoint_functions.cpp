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

// Function MiniMap_Remnant_TemporaryWaypoint.MiniMap_Remnant_TemporaryWaypoint_C.ExecuteUbergraph_MiniMap_Remnant_TemporaryWaypoint
// ()
void UMiniMap_Remnant_TemporaryWaypoint_C::ExecuteUbergraph_MiniMap_Remnant_TemporaryWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Remnant_TemporaryWaypoint.MiniMap_Remnant_TemporaryWaypoint_C.ExecuteUbergraph_MiniMap_Remnant_TemporaryWaypoint");

	UMiniMap_Remnant_TemporaryWaypoint_C_ExecuteUbergraph_MiniMap_Remnant_TemporaryWaypoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
