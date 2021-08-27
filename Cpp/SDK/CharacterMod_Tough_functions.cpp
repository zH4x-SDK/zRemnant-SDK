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

// Function CharacterMod_Tough.CharacterMod_Tough_C.OnComputeStats
// ()
void UCharacterMod_Tough_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Tough.CharacterMod_Tough_C.OnComputeStats");

	UCharacterMod_Tough_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMod_Tough.CharacterMod_Tough_C.ExecuteUbergraph_CharacterMod_Tough
// ()
void UCharacterMod_Tough_C::ExecuteUbergraph_CharacterMod_Tough()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Tough.CharacterMod_Tough_C.ExecuteUbergraph_CharacterMod_Tough");

	UCharacterMod_Tough_C_ExecuteUbergraph_CharacterMod_Tough_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
