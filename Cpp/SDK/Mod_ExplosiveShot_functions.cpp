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

// Function Mod_ExplosiveShot.Mod_ExplosiveShot_C.ModifyInspectInfo
// ()
void AMod_ExplosiveShot_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ExplosiveShot.Mod_ExplosiveShot_C.ModifyInspectInfo");

	AMod_ExplosiveShot_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_ExplosiveShot.Mod_ExplosiveShot_C.ModifyDamage
// ()
void AMod_ExplosiveShot_C::ModifyDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ExplosiveShot.Mod_ExplosiveShot_C.ModifyDamage");

	AMod_ExplosiveShot_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_ExplosiveShot.Mod_ExplosiveShot_C.OnFire
// ()
void AMod_ExplosiveShot_C::OnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ExplosiveShot.Mod_ExplosiveShot_C.OnFire");

	AMod_ExplosiveShot_C_OnFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_ExplosiveShot.Mod_ExplosiveShot_C.ExecuteUbergraph_Mod_ExplosiveShot
// ()
void AMod_ExplosiveShot_C::ExecuteUbergraph_Mod_ExplosiveShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ExplosiveShot.Mod_ExplosiveShot_C.ExecuteUbergraph_Mod_ExplosiveShot");

	AMod_ExplosiveShot_C_ExecuteUbergraph_Mod_ExplosiveShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
