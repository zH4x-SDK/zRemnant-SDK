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

// Function Action_Debuff_Radiation.Action_Debuff_Radiation_C.OnPostComputeStats
// ()
void UAction_Debuff_Radiation_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Radiation.Action_Debuff_Radiation_C.OnPostComputeStats");

	UAction_Debuff_Radiation_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Radiation.Action_Debuff_Radiation_C.ExecuteUbergraph_Action_Debuff_Radiation
// ()
void UAction_Debuff_Radiation_C::ExecuteUbergraph_Action_Debuff_Radiation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Radiation.Action_Debuff_Radiation_C.ExecuteUbergraph_Action_Debuff_Radiation");

	UAction_Debuff_Radiation_C_ExecuteUbergraph_Action_Debuff_Radiation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
