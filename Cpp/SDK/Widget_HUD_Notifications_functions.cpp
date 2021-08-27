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

// Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.UpdatePawn
// ()
void UWidget_HUD_Notifications_C::UpdatePawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.UpdatePawn");

	UWidget_HUD_Notifications_C_UpdatePawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.ClearNotificationQueue
// ()
void UWidget_HUD_Notifications_C::ClearNotificationQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.ClearNotificationQueue");

	UWidget_HUD_Notifications_C_ClearNotificationQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.ExecuteUbergraph_Widget_HUD_Notifications
// ()
void UWidget_HUD_Notifications_C::ExecuteUbergraph_Widget_HUD_Notifications()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.ExecuteUbergraph_Widget_HUD_Notifications");

	UWidget_HUD_Notifications_C_ExecuteUbergraph_Widget_HUD_Notifications_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
