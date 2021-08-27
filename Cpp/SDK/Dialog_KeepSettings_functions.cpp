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

// Function Dialog_KeepSettings.Dialog_KeepSettings_C.OnBeginDialog
// ()
void ADialog_KeepSettings_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_KeepSettings.Dialog_KeepSettings_C.OnBeginDialog");

	ADialog_KeepSettings_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_KeepSettings.Dialog_KeepSettings_C.OnEndDialog
// ()
void ADialog_KeepSettings_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_KeepSettings.Dialog_KeepSettings_C.OnEndDialog");

	ADialog_KeepSettings_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_KeepSettings.Dialog_KeepSettings_C.ExecuteUbergraph_Dialog_KeepSettings
// ()
void ADialog_KeepSettings_C::ExecuteUbergraph_Dialog_KeepSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_KeepSettings.Dialog_KeepSettings_C.ExecuteUbergraph_Dialog_KeepSettings");

	ADialog_KeepSettings_C_ExecuteUbergraph_Dialog_KeepSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
