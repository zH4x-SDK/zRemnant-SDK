﻿// Name: Remnant, Version: 1.0

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

// Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.Check Is Friendly?
// ()
void UAction_Mod_SongOfSwords_C::Check_Is_Friendly_()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.Check Is Friendly?");

	UAction_Mod_SongOfSwords_C_Check_Is_Friendly__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.OnPostComputeStats
// ()
void UAction_Mod_SongOfSwords_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.OnPostComputeStats");

	UAction_Mod_SongOfSwords_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.ExecuteUbergraph_Action_Mod_SongOfSwords
// ()
void UAction_Mod_SongOfSwords_C::ExecuteUbergraph_Action_Mod_SongOfSwords()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.ExecuteUbergraph_Action_Mod_SongOfSwords");

	UAction_Mod_SongOfSwords_C_ExecuteUbergraph_Action_Mod_SongOfSwords_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
