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

// Function Trinket_BloodlettersInsignia.Trinket_BloodlettersInsignia_C.ModifyInspectInfo
// ()
void ATrinket_BloodlettersInsignia_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trinket_BloodlettersInsignia.Trinket_BloodlettersInsignia_C.ModifyInspectInfo");

	ATrinket_BloodlettersInsignia_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
