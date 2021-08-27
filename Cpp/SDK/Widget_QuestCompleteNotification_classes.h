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

// WidgetBlueprintGeneratedClass Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C
// 0x0000
class UWidget_QuestCompleteNotification_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C");
		return ptr;
	}



	void ObjectiveSuccess();
	void InitQuests();
	void QuestSuccess();
	void QuestComplete();
	void FindWidgetForQuest();
	void UpdateQuest();
	void Construct();
	void OnNotifyQuestReward_Event_1();
	void ExecuteUbergraph_Widget_QuestCompleteNotification();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
