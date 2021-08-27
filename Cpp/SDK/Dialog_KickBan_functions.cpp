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

// Function Dialog_KickBan.Dialog_KickBan_C.OnBeginDialog
// ()
void ADialog_KickBan_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_KickBan.Dialog_KickBan_C.OnBeginDialog");

	ADialog_KickBan_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_KickBan.Dialog_KickBan_C.ExecuteUbergraph_Dialog_KickBan
// ()
void ADialog_KickBan_C::ExecuteUbergraph_Dialog_KickBan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_KickBan.Dialog_KickBan_C.ExecuteUbergraph_Dialog_KickBan");

	ADialog_KickBan_C_ExecuteUbergraph_Dialog_KickBan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
