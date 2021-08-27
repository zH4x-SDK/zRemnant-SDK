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

// Function Trait_Suspicion.Trait_Suspicion_C.FilterIncomingDamage
// ()
void UTrait_Suspicion_C::FilterIncomingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Suspicion.Trait_Suspicion_C.FilterIncomingDamage");

	UTrait_Suspicion_C_FilterIncomingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Suspicion.Trait_Suspicion_C.ModifyInspectInfo
// ()
void UTrait_Suspicion_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Suspicion.Trait_Suspicion_C.ModifyInspectInfo");

	UTrait_Suspicion_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Suspicion.Trait_Suspicion_C.GetDamageMod
// ()
void UTrait_Suspicion_C::GetDamageMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Suspicion.Trait_Suspicion_C.GetDamageMod");

	UTrait_Suspicion_C_GetDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
