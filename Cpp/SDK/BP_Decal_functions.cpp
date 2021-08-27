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

// Function BP_Decal.BP_Decal_C.UserConstructionScript
// ()
void ABP_Decal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decal.BP_Decal_C.UserConstructionScript");

	ABP_Decal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Decal.BP_Decal_C.UpdateSortOrder
// ()
void ABP_Decal_C::UpdateSortOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decal.BP_Decal_C.UpdateSortOrder");

	ABP_Decal_C_UpdateSortOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Decal.BP_Decal_C.ExecuteUbergraph_BP_Decal
// ()
void ABP_Decal_C::ExecuteUbergraph_BP_Decal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decal.BP_Decal_C.ExecuteUbergraph_BP_Decal");

	ABP_Decal_C_ExecuteUbergraph_BP_Decal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
