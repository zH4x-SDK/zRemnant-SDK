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

// Function Dialog_TravelMenu.Dialog_TravelMenu_C.SetContext
// ()
void ADialog_TravelMenu_C::SetContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_TravelMenu.Dialog_TravelMenu_C.SetContext");

	ADialog_TravelMenu_C_SetContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
