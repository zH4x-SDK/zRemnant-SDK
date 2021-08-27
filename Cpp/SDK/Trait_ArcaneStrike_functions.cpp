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

// Function Trait_ArcaneStrike.Trait_ArcaneStrike_C.ModifyInspectInfo
// ()
void UTrait_ArcaneStrike_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ArcaneStrike.Trait_ArcaneStrike_C.ModifyInspectInfo");

	UTrait_ArcaneStrike_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_ArcaneStrike.Trait_ArcaneStrike_C.GetMeleeModPowerMod
// ()
void UTrait_ArcaneStrike_C::GetMeleeModPowerMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ArcaneStrike.Trait_ArcaneStrike_C.GetMeleeModPowerMod");

	UTrait_ArcaneStrike_C_GetMeleeModPowerMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_ArcaneStrike.Trait_ArcaneStrike_C.OnHitTarget
// ()
void UTrait_ArcaneStrike_C::OnHitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ArcaneStrike.Trait_ArcaneStrike_C.OnHitTarget");

	UTrait_ArcaneStrike_C_OnHitTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_ArcaneStrike.Trait_ArcaneStrike_C.ExecuteUbergraph_Trait_ArcaneStrike
// ()
void UTrait_ArcaneStrike_C::ExecuteUbergraph_Trait_ArcaneStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ArcaneStrike.Trait_ArcaneStrike_C.ExecuteUbergraph_Trait_ArcaneStrike");

	UTrait_ArcaneStrike_C_ExecuteUbergraph_Trait_ArcaneStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
