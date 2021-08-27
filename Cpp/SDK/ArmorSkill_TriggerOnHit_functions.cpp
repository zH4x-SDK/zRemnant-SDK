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

// Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.Trigger
// ()
void UArmorSkill_TriggerOnHit_C::Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.Trigger");

	UArmorSkill_TriggerOnHit_C_Trigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.OnTakeDamage
// ()
void UArmorSkill_TriggerOnHit_C::OnTakeDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.OnTakeDamage");

	UArmorSkill_TriggerOnHit_C_OnTakeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.ExecuteUbergraph_ArmorSkill_TriggerOnHit
// ()
void UArmorSkill_TriggerOnHit_C::ExecuteUbergraph_ArmorSkill_TriggerOnHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.ExecuteUbergraph_ArmorSkill_TriggerOnHit");

	UArmorSkill_TriggerOnHit_C_ExecuteUbergraph_ArmorSkill_TriggerOnHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
