#pragma once

// Name: Remnant, Version: 1.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_HUD_Notifications.Widget_HUD_Notifications_C
// 0x0000
class UWidget_HUD_Notifications_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HUD_Notifications.Widget_HUD_Notifications_C");
		return ptr;
	}



	void UpdatePawn();
	void ClearNotificationQueue();
	void ExecuteUbergraph_Widget_HUD_Notifications();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
