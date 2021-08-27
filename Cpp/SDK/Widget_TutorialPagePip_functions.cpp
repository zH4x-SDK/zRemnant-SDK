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

// Function Widget_TutorialPagePip.Widget_TutorialPagePip_C.SetCurrent
// ()
void UWidget_TutorialPagePip_C::SetCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TutorialPagePip.Widget_TutorialPagePip_C.SetCurrent");

	UWidget_TutorialPagePip_C_SetCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
