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

// Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.Trigger
// ()
void AItem_Trinket_TriggerOnMeleeHit_C::Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.Trigger");

	AItem_Trinket_TriggerOnMeleeHit_C_Trigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.OnHitTarget
// ()
void AItem_Trinket_TriggerOnMeleeHit_C::OnHitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.OnHitTarget");

	AItem_Trinket_TriggerOnMeleeHit_C_OnHitTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.ExecuteUbergraph_Item_Trinket_TriggerOnMeleeHit
// ()
void AItem_Trinket_TriggerOnMeleeHit_C::ExecuteUbergraph_Item_Trinket_TriggerOnMeleeHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.ExecuteUbergraph_Item_Trinket_TriggerOnMeleeHit");

	AItem_Trinket_TriggerOnMeleeHit_C_ExecuteUbergraph_Item_Trinket_TriggerOnMeleeHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
