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

// Function Mod_SongOfSwords.Mod_SongOfSwords_C.GetMinionDamageModScalar
// ()
void AMod_SongOfSwords_C::GetMinionDamageModScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_SongOfSwords.Mod_SongOfSwords_C.GetMinionDamageModScalar");

	AMod_SongOfSwords_C_GetMinionDamageModScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_SongOfSwords.Mod_SongOfSwords_C.GetDamageModScalar
// ()
void AMod_SongOfSwords_C::GetDamageModScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_SongOfSwords.Mod_SongOfSwords_C.GetDamageModScalar");

	AMod_SongOfSwords_C_GetDamageModScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_SongOfSwords.Mod_SongOfSwords_C.DoAction
// ()
void AMod_SongOfSwords_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_SongOfSwords.Mod_SongOfSwords_C.DoAction");

	AMod_SongOfSwords_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_SongOfSwords.Mod_SongOfSwords_C.ModifyInspectInfo
// ()
void AMod_SongOfSwords_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_SongOfSwords.Mod_SongOfSwords_C.ModifyInspectInfo");

	AMod_SongOfSwords_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
