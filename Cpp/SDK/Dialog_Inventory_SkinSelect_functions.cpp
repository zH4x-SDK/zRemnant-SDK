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

// Function Dialog_Inventory_SkinSelect.Dialog_Inventory_SkinSelect_C.Init
// ()
void ADialog_Inventory_SkinSelect_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Inventory_SkinSelect.Dialog_Inventory_SkinSelect_C.Init");

	ADialog_Inventory_SkinSelect_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
