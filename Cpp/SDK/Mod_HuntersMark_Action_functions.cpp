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

// Function Mod_HuntersMark_Action.Mod_HuntersMark_Action_C.FilterIncomingDamage
// ()
void UMod_HuntersMark_Action_C::FilterIncomingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark_Action.Mod_HuntersMark_Action_C.FilterIncomingDamage");

	UMod_HuntersMark_Action_C_FilterIncomingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
