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

// Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.UpdateLevelVisibility
// ()
void UWidget_MiniMap_Player_C::UpdateLevelVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.UpdateLevelVisibility");

	UWidget_MiniMap_Player_C_UpdateLevelVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.OnRegisteredToPanel
// ()
void UWidget_MiniMap_Player_C::OnRegisteredToPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.OnRegisteredToPanel");

	UWidget_MiniMap_Player_C_OnRegisteredToPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.ExecuteUbergraph_Widget_MiniMap_Player
// ()
void UWidget_MiniMap_Player_C::ExecuteUbergraph_Widget_MiniMap_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.ExecuteUbergraph_Widget_MiniMap_Player");

	UWidget_MiniMap_Player_C_ExecuteUbergraph_Widget_MiniMap_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
