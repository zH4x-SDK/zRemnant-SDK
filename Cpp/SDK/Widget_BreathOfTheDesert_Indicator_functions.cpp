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

// Function Widget_BreathOfTheDesert_Indicator.Widget_BreathOfTheDesert_Indicator_C.Tick
// ()
void UWidget_BreathOfTheDesert_Indicator_C::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BreathOfTheDesert_Indicator.Widget_BreathOfTheDesert_Indicator_C.Tick");

	UWidget_BreathOfTheDesert_Indicator_C_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BreathOfTheDesert_Indicator.Widget_BreathOfTheDesert_Indicator_C.ExecuteUbergraph_Widget_BreathOfTheDesert_Indicator
// ()
void UWidget_BreathOfTheDesert_Indicator_C::ExecuteUbergraph_Widget_BreathOfTheDesert_Indicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BreathOfTheDesert_Indicator.Widget_BreathOfTheDesert_Indicator_C.ExecuteUbergraph_Widget_BreathOfTheDesert_Indicator");

	UWidget_BreathOfTheDesert_Indicator_C_ExecuteUbergraph_Widget_BreathOfTheDesert_Indicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
