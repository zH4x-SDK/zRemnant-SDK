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

// Function Widget_DragonHeartPin.Widget_DragonHeartPin_C.SetEnabled
// ()
void UWidget_DragonHeartPin_C::SetEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_DragonHeartPin.Widget_DragonHeartPin_C.SetEnabled");

	UWidget_DragonHeartPin_C_SetEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
