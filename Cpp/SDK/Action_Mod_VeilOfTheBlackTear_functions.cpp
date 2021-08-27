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

// Function Action_Mod_VeilOfTheBlackTear.Action_Mod_VeilOfTheBlackTear_C.OnActionStart
// ()
void UAction_Mod_VeilOfTheBlackTear_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_VeilOfTheBlackTear.Action_Mod_VeilOfTheBlackTear_C.OnActionStart");

	UAction_Mod_VeilOfTheBlackTear_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_VeilOfTheBlackTear.Action_Mod_VeilOfTheBlackTear_C.OnActionStop
// ()
void UAction_Mod_VeilOfTheBlackTear_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_VeilOfTheBlackTear.Action_Mod_VeilOfTheBlackTear_C.OnActionStop");

	UAction_Mod_VeilOfTheBlackTear_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_VeilOfTheBlackTear.Action_Mod_VeilOfTheBlackTear_C.ExecuteUbergraph_Action_Mod_VeilOfTheBlackTear
// ()
void UAction_Mod_VeilOfTheBlackTear_C::ExecuteUbergraph_Action_Mod_VeilOfTheBlackTear()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_VeilOfTheBlackTear.Action_Mod_VeilOfTheBlackTear_C.ExecuteUbergraph_Action_Mod_VeilOfTheBlackTear");

	UAction_Mod_VeilOfTheBlackTear_C_ExecuteUbergraph_Action_Mod_VeilOfTheBlackTear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
