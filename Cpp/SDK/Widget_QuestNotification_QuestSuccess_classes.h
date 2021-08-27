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

// WidgetBlueprintGeneratedClass Widget_QuestNotification_QuestSuccess.Widget_QuestNotification_QuestSuccess_C
// 0x0000
class UWidget_QuestNotification_QuestSuccess_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_QuestNotification_QuestSuccess.Widget_QuestNotification_QuestSuccess_C");
		return ptr;
	}



	void BuildRewardList();
	void FadeOut();
	void Get_QuestName_Text_1();
	void Construct();
	void OnFadeOut();
	void OnRemoveFromParent();
	void ExecuteUbergraph_Widget_QuestNotification_QuestSuccess();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
