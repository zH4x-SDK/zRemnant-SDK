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

// WidgetBlueprintGeneratedClass Widget_InventoryNotifications.Widget_InventoryNotifications_C
// 0x0000
class UWidget_InventoryNotifications_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_InventoryNotifications.Widget_InventoryNotifications_C");
		return ptr;
	}



	void CanCheckQueue();
	void ClearNotificationQueue();
	void GetRelevantCharacter();
	void GetItemLevel();
	void Add_Loot_Entry();
	void Construct();
	void OnPickupItem_Event_1();
	void UpdatePawn();
	void Tick();
	void CheckQueue();
	void ExecuteUbergraph_Widget_InventoryNotifications();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
