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

// Function BP_BasicLight_Barrel_A.BP_BasicLight_Barrel_A_C.UserConstructionScript
// ()
void ABP_BasicLight_Barrel_A_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasicLight_Barrel_A.BP_BasicLight_Barrel_A_C.UserConstructionScript");

	ABP_BasicLight_Barrel_A_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
