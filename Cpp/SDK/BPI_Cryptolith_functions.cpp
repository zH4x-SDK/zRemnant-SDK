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

// Function BPI_Cryptolith.BPI_Cryptolith_C.SetPhase
// ()
void UBPI_Cryptolith_C::SetPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Cryptolith.BPI_Cryptolith_C.SetPhase");

	UBPI_Cryptolith_C_SetPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Cryptolith.BPI_Cryptolith_C.GetPhase
// ()
void UBPI_Cryptolith_C::GetPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Cryptolith.BPI_Cryptolith_C.GetPhase");

	UBPI_Cryptolith_C_GetPhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
