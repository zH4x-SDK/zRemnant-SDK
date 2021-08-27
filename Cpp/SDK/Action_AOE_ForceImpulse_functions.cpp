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

// Function Action_AOE_ForceImpulse.Action_AOE_ForceImpulse_C.PostDamage
// ()
void UAction_AOE_ForceImpulse_C::PostDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_ForceImpulse.Action_AOE_ForceImpulse_C.PostDamage");

	UAction_AOE_ForceImpulse_C_PostDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_ForceImpulse.Action_AOE_ForceImpulse_C.ExecuteUbergraph_Action_AOE_ForceImpulse
// ()
void UAction_AOE_ForceImpulse_C::ExecuteUbergraph_Action_AOE_ForceImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_ForceImpulse.Action_AOE_ForceImpulse_C.ExecuteUbergraph_Action_AOE_ForceImpulse");

	UAction_AOE_ForceImpulse_C_ExecuteUbergraph_Action_AOE_ForceImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
