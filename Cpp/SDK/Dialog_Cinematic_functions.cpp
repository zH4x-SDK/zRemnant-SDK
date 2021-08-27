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

// Function Dialog_Cinematic.Dialog_Cinematic_C.SetContext
// ()
void ADialog_Cinematic_C::SetContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Cinematic.Dialog_Cinematic_C.SetContext");

	ADialog_Cinematic_C_SetContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Cinematic.Dialog_Cinematic_C.OnEndDialog
// ()
void ADialog_Cinematic_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Cinematic.Dialog_Cinematic_C.OnEndDialog");

	ADialog_Cinematic_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Cinematic.Dialog_Cinematic_C.ExecuteUbergraph_Dialog_Cinematic
// ()
void ADialog_Cinematic_C::ExecuteUbergraph_Dialog_Cinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Cinematic.Dialog_Cinematic_C.ExecuteUbergraph_Dialog_Cinematic");

	ADialog_Cinematic_C_ExecuteUbergraph_Dialog_Cinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
