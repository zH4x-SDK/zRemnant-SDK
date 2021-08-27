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

// Function Mod_MantleOfThorns.Mod_MantleOfThorns_C.GetDamageReduceScalar
// ()
void AMod_MantleOfThorns_C::GetDamageReduceScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MantleOfThorns.Mod_MantleOfThorns_C.GetDamageReduceScalar");

	AMod_MantleOfThorns_C_GetDamageReduceScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_MantleOfThorns.Mod_MantleOfThorns_C.GetDamageReflectScalar
// ()
void AMod_MantleOfThorns_C::GetDamageReflectScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MantleOfThorns.Mod_MantleOfThorns_C.GetDamageReflectScalar");

	AMod_MantleOfThorns_C_GetDamageReflectScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_MantleOfThorns.Mod_MantleOfThorns_C.ModifyInspectInfo
// ()
void AMod_MantleOfThorns_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MantleOfThorns.Mod_MantleOfThorns_C.ModifyInspectInfo");

	AMod_MantleOfThorns_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_MantleOfThorns.Mod_MantleOfThorns_C.DoAction
// ()
void AMod_MantleOfThorns_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MantleOfThorns.Mod_MantleOfThorns_C.DoAction");

	AMod_MantleOfThorns_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
