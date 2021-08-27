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

// Function BP_BreathOfTheDesert_Indicator.BP_BreathOfTheDesert_Indicator_C.ReceiveTick
// ()
void ABP_BreathOfTheDesert_Indicator_C::ReceiveTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreathOfTheDesert_Indicator.BP_BreathOfTheDesert_Indicator_C.ReceiveTick");

	ABP_BreathOfTheDesert_Indicator_C_ReceiveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BreathOfTheDesert_Indicator.BP_BreathOfTheDesert_Indicator_C.ExecuteUbergraph_BP_BreathOfTheDesert_Indicator
// ()
void ABP_BreathOfTheDesert_Indicator_C::ExecuteUbergraph_BP_BreathOfTheDesert_Indicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreathOfTheDesert_Indicator.BP_BreathOfTheDesert_Indicator_C.ExecuteUbergraph_BP_BreathOfTheDesert_Indicator");

	ABP_BreathOfTheDesert_Indicator_C_ExecuteUbergraph_BP_BreathOfTheDesert_Indicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
