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

// Function Action_Debuff_Parasite.Action_Debuff_Parasite_C.OnPostComputeStats
// ()
void UAction_Debuff_Parasite_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Parasite.Action_Debuff_Parasite_C.OnPostComputeStats");

	UAction_Debuff_Parasite_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Parasite.Action_Debuff_Parasite_C.OnActionStop
// ()
void UAction_Debuff_Parasite_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Parasite.Action_Debuff_Parasite_C.OnActionStop");

	UAction_Debuff_Parasite_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Parasite.Action_Debuff_Parasite_C.ExecuteUbergraph_Action_Debuff_Parasite
// ()
void UAction_Debuff_Parasite_C::ExecuteUbergraph_Action_Debuff_Parasite()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Parasite.Action_Debuff_Parasite_C.ExecuteUbergraph_Action_Debuff_Parasite");

	UAction_Debuff_Parasite_C_ExecuteUbergraph_Action_Debuff_Parasite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
