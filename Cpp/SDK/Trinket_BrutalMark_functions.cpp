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

// Function Trinket_BrutalMark.Trinket_BrutalMark_C.ModifyInspectInfo
// ()
void ATrinket_BrutalMark_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_BrutalMark.Trinket_BrutalMark_C.ModifyInspectInfo");

	ATrinket_BrutalMark_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trinket_BrutalMark.Trinket_BrutalMark_C.OnEquipped
// ()
void ATrinket_BrutalMark_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_BrutalMark.Trinket_BrutalMark_C.OnEquipped");

	ATrinket_BrutalMark_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trinket_BrutalMark.Trinket_BrutalMark_C.ExecuteUbergraph_Trinket_BrutalMark
// ()
void ATrinket_BrutalMark_C::ExecuteUbergraph_Trinket_BrutalMark()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_BrutalMark.Trinket_BrutalMark_C.ExecuteUbergraph_Trinket_BrutalMark");

	ATrinket_BrutalMark_C_ExecuteUbergraph_Trinket_BrutalMark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
