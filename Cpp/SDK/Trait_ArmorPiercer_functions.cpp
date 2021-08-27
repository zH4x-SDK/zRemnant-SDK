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

// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ModifyInspectInfo
// ()
void UTrait_ArmorPiercer_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ModifyInspectInfo");

	UTrait_ArmorPiercer_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ModifyDamage
// ()
void UTrait_ArmorPiercer_C::ModifyDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ModifyDamage");

	UTrait_ArmorPiercer_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.GetArmoredDamageMod
// ()
void UTrait_ArmorPiercer_C::GetArmoredDamageMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.GetArmoredDamageMod");

	UTrait_ArmorPiercer_C_GetArmoredDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.OnComputeStats
// ()
void UTrait_ArmorPiercer_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.OnComputeStats");

	UTrait_ArmorPiercer_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ExecuteUbergraph_Trait_ArmorPiercer
// ()
void UTrait_ArmorPiercer_C::ExecuteUbergraph_Trait_ArmorPiercer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ExecuteUbergraph_Trait_ArmorPiercer");

	UTrait_ArmorPiercer_C_ExecuteUbergraph_Trait_ArmorPiercer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
