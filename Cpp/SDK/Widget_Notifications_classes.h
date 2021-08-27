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

// WidgetBlueprintGeneratedClass Widget_Notifications.Widget_Notifications_C
// 0x0000
class UWidget_Notifications_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Notifications.Widget_Notifications_C");
		return ptr;
	}



	void ClearNotificationQueue();
	void CanQueueInterruptCurrentNotification();
	void IsSurvivalMode();
	void ValidateNextInQueue();
	void InitEmote();
	void QueueEmoteReward();
	void GetItemLevelText();
	void ClearCurrentIndex();
	void Set_New_Item_Icon___Text();
	void CleanBinding();
	void ChangeBackgroundColor();
	void UpdateInputIconSize();
	void IsActiveDialog();
	void GetRelevantCharacter();
	void Set_ItemText();
	void ShowTraitNotification();
	void QueueItemReward();
	void QueueQuestRewardNotification();
	void ShouldBlockNotifications();
	void InitItemUpgraded();
	void Reset();
	void InitItemAdded();
	void InitGeneric();
	void RemoveQueuedNotifications();
	void InitTraitUpgraded();
	void InitLevelUp();
	void QueueNotification();
	void InitTraitAdded();
	void OnLoaded_0F8A8021418434ADF713DEAEB3890386();
	void Construct();
	void OnTraitAdded();
	void OnTraitLevelChanged();
	void CheckQueue();
	void ShowNotification();
	void OnLevelUp();
	void Tick();
	void OnAnimationFinished_Event_1();
	void OnPickupItem();
	void OnNotifyQuestReward();
	void UpdatePawn();
	void OnReceiveAccountAward();
	void OnTraitPointAdded();
	void UnbindAnimationDelegate();
	void ExecuteUbergraph_Widget_Notifications();
	void Queue_Empty__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
