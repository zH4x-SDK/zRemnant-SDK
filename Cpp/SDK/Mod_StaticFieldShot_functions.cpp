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

// Function Mod_StaticFieldShot.Mod_StaticFieldShot_C.ModifyInspectInfo
// ()
void AMod_StaticFieldShot_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_StaticFieldShot.Mod_StaticFieldShot_C.ModifyInspectInfo");

	AMod_StaticFieldShot_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_StaticFieldShot.Mod_StaticFieldShot_C.ModifyDamage
// ()
void AMod_StaticFieldShot_C::ModifyDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_StaticFieldShot.Mod_StaticFieldShot_C.ModifyDamage");

	AMod_StaticFieldShot_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_StaticFieldShot.Mod_StaticFieldShot_C.OnFire
// ()
void AMod_StaticFieldShot_C::OnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_StaticFieldShot.Mod_StaticFieldShot_C.OnFire");

	AMod_StaticFieldShot_C_OnFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_StaticFieldShot.Mod_StaticFieldShot_C.ExecuteUbergraph_Mod_StaticFieldShot
// ()
void AMod_StaticFieldShot_C::ExecuteUbergraph_Mod_StaticFieldShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_StaticFieldShot.Mod_StaticFieldShot_C.ExecuteUbergraph_Mod_StaticFieldShot");

	AMod_StaticFieldShot_C_ExecuteUbergraph_Mod_StaticFieldShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
