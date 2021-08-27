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

// Function Dialog_YesNoDialog.Dialog_YesNoDialog_C.OnBeginDialog
// ()
void ADialog_YesNoDialog_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_YesNoDialog.Dialog_YesNoDialog_C.OnBeginDialog");

	ADialog_YesNoDialog_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_YesNoDialog.Dialog_YesNoDialog_C.OnEndDialog
// ()
void ADialog_YesNoDialog_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_YesNoDialog.Dialog_YesNoDialog_C.OnEndDialog");

	ADialog_YesNoDialog_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_YesNoDialog.Dialog_YesNoDialog_C.ExecuteUbergraph_Dialog_YesNoDialog
// ()
void ADialog_YesNoDialog_C::ExecuteUbergraph_Dialog_YesNoDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_YesNoDialog.Dialog_YesNoDialog_C.ExecuteUbergraph_Dialog_YesNoDialog");

	ADialog_YesNoDialog_C_ExecuteUbergraph_Dialog_YesNoDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
