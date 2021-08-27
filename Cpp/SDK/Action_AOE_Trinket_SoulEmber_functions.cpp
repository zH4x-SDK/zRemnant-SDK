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

// Function Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C.ModifyDamage
// ()
void UAction_AOE_Trinket_SoulEmber_C::ModifyDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C.ModifyDamage");

	UAction_AOE_Trinket_SoulEmber_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C.GetDamage
// ()
void UAction_AOE_Trinket_SoulEmber_C::GetDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C.GetDamage");

	UAction_AOE_Trinket_SoulEmber_C_GetDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
