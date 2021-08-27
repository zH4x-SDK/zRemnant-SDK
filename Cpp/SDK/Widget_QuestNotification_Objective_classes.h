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

// WidgetBlueprintGeneratedClass Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C
// 0x0000
class UWidget_QuestNotification_Objective_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C");
		return ptr;
	}



	void ResetRootAlpha();
	void OverrideUnHideObjective();
	void ToggleObjectiveHidden();
	void RefreshDefend();
	void RefreshProgress();
	void RefreshComplete();
	void FadeIn();
	void Refresh();
	void GetObjectiveText();
	void ShouldShowCounter();
	void Get_ObjectiveProgress_Text_1();
	void Get_ObjectiveProgress_Visibility_1();
	void Get_ObjectiveLabel_Text_1();
	void Construct();
	void OnObjectiveUpdated_Event_1();
	void OnFadeOut();
	void OnRemoveFromParent();
	void Tick();
	void ResetAlpha();
	void ExecuteUbergraph_Widget_QuestNotification_Objective();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
