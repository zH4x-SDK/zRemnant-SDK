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

// Function Dialog_OkDialog.Dialog_OkDialog_C.OnBeginDialog
// ()
void ADialog_OkDialog_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_OkDialog.Dialog_OkDialog_C.OnBeginDialog");

	ADialog_OkDialog_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_OkDialog.Dialog_OkDialog_C.OnEndDialog
// ()
void ADialog_OkDialog_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_OkDialog.Dialog_OkDialog_C.OnEndDialog");

	ADialog_OkDialog_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_OkDialog.Dialog_OkDialog_C.ExecuteUbergraph_Dialog_OkDialog
// ()
void ADialog_OkDialog_C::ExecuteUbergraph_Dialog_OkDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_OkDialog.Dialog_OkDialog_C.ExecuteUbergraph_Dialog_OkDialog");

	ADialog_OkDialog_C_ExecuteUbergraph_Dialog_OkDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
