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

// WidgetBlueprintGeneratedClass Widget_QuestNotification.Widget_QuestNotification_C
// 0x0000
class UWidget_QuestNotification_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_QuestNotification.Widget_QuestNotification_C");
		return ptr;
	}



	void GetZoneQuest();
	void UpdateQuestPinning();
	void IsValidQuest();
	void ObjectiveSuccess();
	void InitQuests();
	void QuestSuccess();
	void QuestComplete();
	void FindWidgetForQuest();
	void UpdateQuest();
	void Construct();
	void OnQuestObjectivesUpdate();
	void OnQuestCompleted();
	void OnFinishTravel();
	void OnBeginTravel();
	void ExecuteUbergraph_Widget_QuestNotification();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
