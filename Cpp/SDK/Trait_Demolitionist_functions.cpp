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

// Function Trait_Demolitionist.Trait_Demolitionist_C.ModifyInspectInfo
// ()
void UTrait_Demolitionist_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Demolitionist.Trait_Demolitionist_C.ModifyInspectInfo");

	UTrait_Demolitionist_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Demolitionist.Trait_Demolitionist_C.ModifyDamage
// ()
void UTrait_Demolitionist_C::ModifyDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Demolitionist.Trait_Demolitionist_C.ModifyDamage");

	UTrait_Demolitionist_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Demolitionist.Trait_Demolitionist_C.GetExplosionDamageMod
// ()
void UTrait_Demolitionist_C::GetExplosionDamageMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Demolitionist.Trait_Demolitionist_C.GetExplosionDamageMod");

	UTrait_Demolitionist_C_GetExplosionDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Demolitionist.Trait_Demolitionist_C.OnComputeStats
// ()
void UTrait_Demolitionist_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Demolitionist.Trait_Demolitionist_C.OnComputeStats");

	UTrait_Demolitionist_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Demolitionist.Trait_Demolitionist_C.ExecuteUbergraph_Trait_Demolitionist
// ()
void UTrait_Demolitionist_C::ExecuteUbergraph_Trait_Demolitionist()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Demolitionist.Trait_Demolitionist_C.ExecuteUbergraph_Trait_Demolitionist");

	UTrait_Demolitionist_C_ExecuteUbergraph_Trait_Demolitionist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
