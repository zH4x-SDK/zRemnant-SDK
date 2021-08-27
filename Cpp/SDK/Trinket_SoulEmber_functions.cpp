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

// Function Trinket_SoulEmber.Trinket_SoulEmber_C.ModifyInspectInfo
// ()
void ATrinket_SoulEmber_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_SoulEmber.Trinket_SoulEmber_C.ModifyInspectInfo");

	ATrinket_SoulEmber_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trinket_SoulEmber.Trinket_SoulEmber_C.OnEquipped
// ()
void ATrinket_SoulEmber_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_SoulEmber.Trinket_SoulEmber_C.OnEquipped");

	ATrinket_SoulEmber_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trinket_SoulEmber.Trinket_SoulEmber_C.OnUnequipped
// ()
void ATrinket_SoulEmber_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_SoulEmber.Trinket_SoulEmber_C.OnUnequipped");

	ATrinket_SoulEmber_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trinket_SoulEmber.Trinket_SoulEmber_C.ExecuteUbergraph_Trinket_SoulEmber
// ()
void ATrinket_SoulEmber_C::ExecuteUbergraph_Trinket_SoulEmber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_SoulEmber.Trinket_SoulEmber_C.ExecuteUbergraph_Trinket_SoulEmber");

	ATrinket_SoulEmber_C_ExecuteUbergraph_Trinket_SoulEmber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
