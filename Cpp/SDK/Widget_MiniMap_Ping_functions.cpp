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

// Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.UpdateMinimapDisplay
// ()
void UWidget_MiniMap_Ping_C::UpdateMinimapDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.UpdateMinimapDisplay");

	UWidget_MiniMap_Ping_C_UpdateMinimapDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.OnRegisteredToPanel
// ()
void UWidget_MiniMap_Ping_C::OnRegisteredToPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.OnRegisteredToPanel");

	UWidget_MiniMap_Ping_C_OnRegisteredToPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.ExecuteUbergraph_Widget_MiniMap_Ping
// ()
void UWidget_MiniMap_Ping_C::ExecuteUbergraph_Widget_MiniMap_Ping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.ExecuteUbergraph_Widget_MiniMap_Ping");

	UWidget_MiniMap_Ping_C_ExecuteUbergraph_Widget_MiniMap_Ping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
