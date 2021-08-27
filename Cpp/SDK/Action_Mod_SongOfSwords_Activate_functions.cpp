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

// Function Action_Mod_SongOfSwords_Activate.Action_Mod_SongOfSwords_Activate_C.OnActionStart
// ()
void UAction_Mod_SongOfSwords_Activate_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SongOfSwords_Activate.Action_Mod_SongOfSwords_Activate_C.OnActionStart");

	UAction_Mod_SongOfSwords_Activate_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_SongOfSwords_Activate.Action_Mod_SongOfSwords_Activate_C.OnActionStop
// ()
void UAction_Mod_SongOfSwords_Activate_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SongOfSwords_Activate.Action_Mod_SongOfSwords_Activate_C.OnActionStop");

	UAction_Mod_SongOfSwords_Activate_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_SongOfSwords_Activate.Action_Mod_SongOfSwords_Activate_C.ExecuteUbergraph_Action_Mod_SongOfSwords_Activate
// ()
void UAction_Mod_SongOfSwords_Activate_C::ExecuteUbergraph_Action_Mod_SongOfSwords_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SongOfSwords_Activate.Action_Mod_SongOfSwords_Activate_C.ExecuteUbergraph_Action_Mod_SongOfSwords_Activate");

	UAction_Mod_SongOfSwords_Activate_C_ExecuteUbergraph_Action_Mod_SongOfSwords_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
