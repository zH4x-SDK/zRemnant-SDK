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

// WidgetBlueprintGeneratedClass Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C
// 0x0000
class UWidget_QuestNotification_Quest_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C");
		return ptr;
	}



	void ResetRootAlpha();
	void OverrideUnHideQuest();
	void HasObjectives();
	void ToggleQuestHidden();
	void Quest_List_Number();
	void Refresh();
	void HasPinnedObjective();
	void FadeOut();
	void HasObjective();
	void UpdateObjectives();
	void Construct();
	void OnFadeOut();
	void OnRemoveFromParent();
	void ResetAlpha();
	void ExecuteUbergraph_Widget_QuestNotification_Quest();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
