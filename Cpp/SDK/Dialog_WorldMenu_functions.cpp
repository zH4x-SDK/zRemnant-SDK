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

// Function Dialog_WorldMenu.Dialog_WorldMenu_C.BeginSurvivalMode
// ()
void ADialog_WorldMenu_C::BeginSurvivalMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WorldMenu.Dialog_WorldMenu_C.BeginSurvivalMode");

	ADialog_WorldMenu_C_BeginSurvivalMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_WorldMenu.Dialog_WorldMenu_C.SetContext
// ()
void ADialog_WorldMenu_C::SetContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_WorldMenu.Dialog_WorldMenu_C.SetContext");

	ADialog_WorldMenu_C_SetContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
