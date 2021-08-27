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

// Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.GetValue
// ()
void UArmorSkill_ModifySingleStat_C::GetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.GetValue");

	UArmorSkill_ModifySingleStat_C_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.OnComputeStats
// ()
void UArmorSkill_ModifySingleStat_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.OnComputeStats");

	UArmorSkill_ModifySingleStat_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.ExecuteUbergraph_ArmorSkill_ModifySingleStat
// ()
void UArmorSkill_ModifySingleStat_C::ExecuteUbergraph_ArmorSkill_ModifySingleStat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.ExecuteUbergraph_ArmorSkill_ModifySingleStat");

	UArmorSkill_ModifySingleStat_C_ExecuteUbergraph_ArmorSkill_ModifySingleStat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
