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

// Function Mod_VeilOfTheBlackTear.Mod_VeilOfTheBlackTear_C.DoAction
// ()
void AMod_VeilOfTheBlackTear_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_VeilOfTheBlackTear.Mod_VeilOfTheBlackTear_C.DoAction");

	AMod_VeilOfTheBlackTear_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_VeilOfTheBlackTear.Mod_VeilOfTheBlackTear_C.GetDurationScalar
// ()
void AMod_VeilOfTheBlackTear_C::GetDurationScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_VeilOfTheBlackTear.Mod_VeilOfTheBlackTear_C.GetDurationScalar");

	AMod_VeilOfTheBlackTear_C_GetDurationScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_VeilOfTheBlackTear.Mod_VeilOfTheBlackTear_C.ModifyInspectInfo
// ()
void AMod_VeilOfTheBlackTear_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_VeilOfTheBlackTear.Mod_VeilOfTheBlackTear_C.ModifyInspectInfo");

	AMod_VeilOfTheBlackTear_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
