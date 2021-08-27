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

// Function Resource_Scraps.Resource_Scraps_C.ReceiveTick
// ()
void AResource_Scraps_C::ReceiveTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Resource_Scraps.Resource_Scraps_C.ReceiveTick");

	AResource_Scraps_C_ReceiveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Resource_Scraps.Resource_Scraps_C.ExecuteUbergraph_Resource_Scraps
// ()
void AResource_Scraps_C::ExecuteUbergraph_Resource_Scraps()
{
	static auto fn = UObject::FindObject<UFunction>("Function Resource_Scraps.Resource_Scraps_C.ExecuteUbergraph_Resource_Scraps");

	AResource_Scraps_C_ExecuteUbergraph_Resource_Scraps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
