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

// Function CharacterMod_Vicious.CharacterMod_Vicious_C.OnComputeStats
// ()
void UCharacterMod_Vicious_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Vicious.CharacterMod_Vicious_C.OnComputeStats");

	UCharacterMod_Vicious_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMod_Vicious.CharacterMod_Vicious_C.ExecuteUbergraph_CharacterMod_Vicious
// ()
void UCharacterMod_Vicious_C::ExecuteUbergraph_CharacterMod_Vicious()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Vicious.CharacterMod_Vicious_C.ExecuteUbergraph_CharacterMod_Vicious");

	UCharacterMod_Vicious_C_ExecuteUbergraph_CharacterMod_Vicious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
