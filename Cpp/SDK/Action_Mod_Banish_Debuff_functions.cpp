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

// Function Action_Mod_Banish_Debuff.Action_Mod_Banish_Debuff_C.FilterIncomingDamage
// ()
void UAction_Mod_Banish_Debuff_C::FilterIncomingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish_Debuff.Action_Mod_Banish_Debuff_C.FilterIncomingDamage");

	UAction_Mod_Banish_Debuff_C_FilterIncomingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
