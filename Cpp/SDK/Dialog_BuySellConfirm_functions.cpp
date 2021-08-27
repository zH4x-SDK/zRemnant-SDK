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

// Function Dialog_BuySellConfirm.Dialog_BuySellConfirm_C.GetQuantity
// ()
void ADialog_BuySellConfirm_C::GetQuantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_BuySellConfirm.Dialog_BuySellConfirm_C.GetQuantity");

	ADialog_BuySellConfirm_C_GetQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_BuySellConfirm.Dialog_BuySellConfirm_C.Init
// ()
void ADialog_BuySellConfirm_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_BuySellConfirm.Dialog_BuySellConfirm_C.Init");

	ADialog_BuySellConfirm_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
