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

// Function Action_Character_Root_Priest_ApplyShield.Action_Character_Root_Priest_ApplyShield_C.OnActionStart
// ()
void UAction_Character_Root_Priest_ApplyShield_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Root_Priest_ApplyShield.Action_Character_Root_Priest_ApplyShield_C.OnActionStart");

	UAction_Character_Root_Priest_ApplyShield_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Character_Root_Priest_ApplyShield.Action_Character_Root_Priest_ApplyShield_C.ExecuteUbergraph_Action_Character_Root_Priest_ApplyShield
// ()
void UAction_Character_Root_Priest_ApplyShield_C::ExecuteUbergraph_Action_Character_Root_Priest_ApplyShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Root_Priest_ApplyShield.Action_Character_Root_Priest_ApplyShield_C.ExecuteUbergraph_Action_Character_Root_Priest_ApplyShield");

	UAction_Character_Root_Priest_ApplyShield_C_ExecuteUbergraph_Action_Character_Root_Priest_ApplyShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
