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

// Function BPI_Fusebox.BPI_Fusebox_C.HasFuseInFusebox
// ()
void UBPI_Fusebox_C::HasFuseInFusebox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Fusebox.BPI_Fusebox_C.HasFuseInFusebox");

	UBPI_Fusebox_C_HasFuseInFusebox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
