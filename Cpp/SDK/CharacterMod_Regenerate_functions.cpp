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

// Function CharacterMod_Regenerate.CharacterMod_Regenerate_C.OnPostComputeStats
// ()
void UCharacterMod_Regenerate_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Regenerate.CharacterMod_Regenerate_C.OnPostComputeStats");

	UCharacterMod_Regenerate_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMod_Regenerate.CharacterMod_Regenerate_C.ExecuteUbergraph_CharacterMod_Regenerate
// ()
void UCharacterMod_Regenerate_C::ExecuteUbergraph_CharacterMod_Regenerate()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Regenerate.CharacterMod_Regenerate_C.ExecuteUbergraph_CharacterMod_Regenerate");

	UCharacterMod_Regenerate_C_ExecuteUbergraph_CharacterMod_Regenerate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
