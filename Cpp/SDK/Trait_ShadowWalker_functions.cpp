﻿// Name: Remnant, Version: 1.0

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

// Function Trait_ShadowWalker.Trait_ShadowWalker_C.ModifyInspectInfo
// ()
void UTrait_ShadowWalker_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ShadowWalker.Trait_ShadowWalker_C.ModifyInspectInfo");

	UTrait_ShadowWalker_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_ShadowWalker.Trait_ShadowWalker_C.GetAwarenessMod
// ()
void UTrait_ShadowWalker_C::GetAwarenessMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ShadowWalker.Trait_ShadowWalker_C.GetAwarenessMod");

	UTrait_ShadowWalker_C_GetAwarenessMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_ShadowWalker.Trait_ShadowWalker_C.OnComputeStats
// ()
void UTrait_ShadowWalker_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ShadowWalker.Trait_ShadowWalker_C.OnComputeStats");

	UTrait_ShadowWalker_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_ShadowWalker.Trait_ShadowWalker_C.ExecuteUbergraph_Trait_ShadowWalker
// ()
void UTrait_ShadowWalker_C::ExecuteUbergraph_Trait_ShadowWalker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ShadowWalker.Trait_ShadowWalker_C.ExecuteUbergraph_Trait_ShadowWalker");

	UTrait_ShadowWalker_C_ExecuteUbergraph_Trait_ShadowWalker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
