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

// Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.FilterIncomingDamage
// ()
void UArmorSkill_Reciprocity_Action_Defense_C::FilterIncomingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.FilterIncomingDamage");

	UArmorSkill_Reciprocity_Action_Defense_C_FilterIncomingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.OnReapplyBuff
// ()
void UArmorSkill_Reciprocity_Action_Defense_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.OnReapplyBuff");

	UArmorSkill_Reciprocity_Action_Defense_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Defense
// ()
void UArmorSkill_Reciprocity_Action_Defense_C::ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Defense()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Defense");

	UArmorSkill_Reciprocity_Action_Defense_C_ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Defense_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
