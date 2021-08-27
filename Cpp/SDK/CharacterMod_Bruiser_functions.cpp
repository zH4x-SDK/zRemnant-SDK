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

// Function CharacterMod_Bruiser.CharacterMod_Bruiser_C.ModifyDamage
// ()
void UCharacterMod_Bruiser_C::ModifyDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Bruiser.CharacterMod_Bruiser_C.ModifyDamage");

	UCharacterMod_Bruiser_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CharacterMod_Bruiser.CharacterMod_Bruiser_C.ExecuteUbergraph_CharacterMod_Bruiser
// ()
void UCharacterMod_Bruiser_C::ExecuteUbergraph_CharacterMod_Bruiser()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Bruiser.CharacterMod_Bruiser_C.ExecuteUbergraph_CharacterMod_Bruiser");

	UCharacterMod_Bruiser_C_ExecuteUbergraph_CharacterMod_Bruiser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
