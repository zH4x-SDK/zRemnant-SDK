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

// Function Trait_BarkSkin.Trait_BarkSkin_C.GetArmorMod
// ()
void UTrait_BarkSkin_C::GetArmorMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_BarkSkin.Trait_BarkSkin_C.GetArmorMod");

	UTrait_BarkSkin_C_GetArmorMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_BarkSkin.Trait_BarkSkin_C.OnComputeStats
// ()
void UTrait_BarkSkin_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_BarkSkin.Trait_BarkSkin_C.OnComputeStats");

	UTrait_BarkSkin_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_BarkSkin.Trait_BarkSkin_C.ExecuteUbergraph_Trait_BarkSkin
// ()
void UTrait_BarkSkin_C::ExecuteUbergraph_Trait_BarkSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_BarkSkin.Trait_BarkSkin_C.ExecuteUbergraph_Trait_BarkSkin");

	UTrait_BarkSkin_C_ExecuteUbergraph_Trait_BarkSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
