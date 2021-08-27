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

// Function Mod_Blizzard.Mod_Blizzard_C.DoAction
// ()
void AMod_Blizzard_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Blizzard.Mod_Blizzard_C.DoAction");

	AMod_Blizzard_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Blizzard.Mod_Blizzard_C.ModifyDamage
// ()
void AMod_Blizzard_C::ModifyDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Blizzard.Mod_Blizzard_C.ModifyDamage");

	AMod_Blizzard_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Blizzard.Mod_Blizzard_C.ModifyInspectInfo
// ()
void AMod_Blizzard_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Blizzard.Mod_Blizzard_C.ModifyInspectInfo");

	AMod_Blizzard_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Blizzard.Mod_Blizzard_C.OnBeginUse
// ()
void AMod_Blizzard_C::OnBeginUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Blizzard.Mod_Blizzard_C.OnBeginUse");

	AMod_Blizzard_C_OnBeginUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Blizzard.Mod_Blizzard_C.OnEndUse
// ()
void AMod_Blizzard_C::OnEndUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Blizzard.Mod_Blizzard_C.OnEndUse");

	AMod_Blizzard_C_OnEndUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Blizzard.Mod_Blizzard_C.ExecuteUbergraph_Mod_Blizzard
// ()
void AMod_Blizzard_C::ExecuteUbergraph_Mod_Blizzard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Blizzard.Mod_Blizzard_C.ExecuteUbergraph_Mod_Blizzard");

	AMod_Blizzard_C_ExecuteUbergraph_Mod_Blizzard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
