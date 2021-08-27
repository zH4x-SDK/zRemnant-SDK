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

// Function Trinket_StormAmulet.Trinket_StormAmulet_C.ModifyInspectInfo
// ()
void ATrinket_StormAmulet_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_StormAmulet.Trinket_StormAmulet_C.ModifyInspectInfo");

	ATrinket_StormAmulet_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trinket_StormAmulet.Trinket_StormAmulet_C.OnComputeStats
// ()
void ATrinket_StormAmulet_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_StormAmulet.Trinket_StormAmulet_C.OnComputeStats");

	ATrinket_StormAmulet_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trinket_StormAmulet.Trinket_StormAmulet_C.ExecuteUbergraph_Trinket_StormAmulet
// ()
void ATrinket_StormAmulet_C::ExecuteUbergraph_Trinket_StormAmulet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_StormAmulet.Trinket_StormAmulet_C.ExecuteUbergraph_Trinket_StormAmulet");

	ATrinket_StormAmulet_C_ExecuteUbergraph_Trinket_StormAmulet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
