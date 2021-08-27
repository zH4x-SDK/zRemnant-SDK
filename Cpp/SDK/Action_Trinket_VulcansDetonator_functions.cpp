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

// Function Action_Trinket_VulcansDetonator.Action_Trinket_VulcansDetonator_C.ModifyDamage
// ()
void UAction_Trinket_VulcansDetonator_C::ModifyDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trinket_VulcansDetonator.Action_Trinket_VulcansDetonator_C.ModifyDamage");

	UAction_Trinket_VulcansDetonator_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
