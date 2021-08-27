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

// Function Widget_MiniMap_Door.Widget_MiniMap_Door_C.UpdateMiniMapWidget
// ()
void UWidget_MiniMap_Door_C::UpdateMiniMapWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Door.Widget_MiniMap_Door_C.UpdateMiniMapWidget");

	UWidget_MiniMap_Door_C_UpdateMiniMapWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
