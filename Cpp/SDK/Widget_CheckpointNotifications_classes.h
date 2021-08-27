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

// WidgetBlueprintGeneratedClass Widget_CheckpointNotifications.Widget_CheckpointNotifications_C
// 0x0000
class UWidget_CheckpointNotifications_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_CheckpointNotifications.Widget_CheckpointNotifications_C");
		return ptr;
	}



	void MakePlayerIDAndName();
	void AddCustomNotification();
	void ClearAllNotifications();
	void RemoveNotification();
	void CanAddNotification();
	void AddNotification();
	void Construct();
	void PlayerJoined();
	void PlayerLeft();
	void ExecuteUbergraph_Widget_CheckpointNotifications();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
