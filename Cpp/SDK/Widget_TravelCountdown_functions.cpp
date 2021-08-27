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

// Function Widget_TravelCountdown.Widget_TravelCountdown_C.Get_Countdown_Text_1
// ()
void UWidget_TravelCountdown_C::Get_Countdown_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelCountdown.Widget_TravelCountdown_C.Get_Countdown_Text_1");

	UWidget_TravelCountdown_C_Get_Countdown_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
