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

// Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.OnActionStop
// ()
void UMod_HuntersMark_Buff_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.OnActionStop");

	UMod_HuntersMark_Buff_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.MarkEnemies
// ()
void UMod_HuntersMark_Buff_C::MarkEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.MarkEnemies");

	UMod_HuntersMark_Buff_C_MarkEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.OnActionStart
// ()
void UMod_HuntersMark_Buff_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.OnActionStart");

	UMod_HuntersMark_Buff_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.ExecuteUbergraph_Mod_HuntersMark_Buff
// ()
void UMod_HuntersMark_Buff_C::ExecuteUbergraph_Mod_HuntersMark_Buff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark_Buff.Mod_HuntersMark_Buff_C.ExecuteUbergraph_Mod_HuntersMark_Buff");

	UMod_HuntersMark_Buff_C_ExecuteUbergraph_Mod_HuntersMark_Buff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
