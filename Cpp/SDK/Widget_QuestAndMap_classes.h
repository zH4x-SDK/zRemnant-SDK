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

// WidgetBlueprintGeneratedClass Widget_QuestAndMap.Widget_QuestAndMap_C
// 0x0000
class UWidget_QuestAndMap_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_QuestAndMap.Widget_QuestAndMap_C");
		return ptr;
	}



	void Refresh();
	void InitMiniMap();
	void Construct();
	void OnQuestLoaded_Event_1();
	void OnQuestObjectivesUpdated_Event_1();
	void Destruct();
	void BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_QuestAndMap();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
