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

// Function Trinket_MothersRing.Trinket_MothersRing_C.ModifyInspectInfo
// ()
void ATrinket_MothersRing_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_MothersRing.Trinket_MothersRing_C.ModifyInspectInfo");

	ATrinket_MothersRing_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trinket_MothersRing.Trinket_MothersRing_C.OnComputeStats
// ()
void ATrinket_MothersRing_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_MothersRing.Trinket_MothersRing_C.OnComputeStats");

	ATrinket_MothersRing_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trinket_MothersRing.Trinket_MothersRing_C.ExecuteUbergraph_Trinket_MothersRing
// ()
void ATrinket_MothersRing_C::ExecuteUbergraph_Trinket_MothersRing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_MothersRing.Trinket_MothersRing_C.ExecuteUbergraph_Trinket_MothersRing");

	ATrinket_MothersRing_C_ExecuteUbergraph_Trinket_MothersRing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
