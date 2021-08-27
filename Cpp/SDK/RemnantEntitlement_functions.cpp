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

// Function RemnantEntitlement.RemnantEntitlement_C.RevokeLicense
// ()
void URemnantEntitlement_C::RevokeLicense()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemnantEntitlement.RemnantEntitlement_C.RevokeLicense");

	URemnantEntitlement_C_RevokeLicense_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RemnantEntitlement.RemnantEntitlement_C.ExecuteUbergraph_RemnantEntitlement
// ()
void URemnantEntitlement_C::ExecuteUbergraph_RemnantEntitlement()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemnantEntitlement.RemnantEntitlement_C.ExecuteUbergraph_RemnantEntitlement");

	URemnantEntitlement_C_ExecuteUbergraph_RemnantEntitlement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
