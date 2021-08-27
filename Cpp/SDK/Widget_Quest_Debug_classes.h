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

// WidgetBlueprintGeneratedClass Widget_Quest_Debug.Widget_Quest_Debug_C
// 0x0000
class UWidget_Quest_Debug_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Quest_Debug.Widget_Quest_Debug_C");
		return ptr;
	}



	void Get_BaseQuestLabel_Text_1();
	void Get_RootQuestLabel_Text_1();
	void Get_ParentQuestLabel_Text_1();
	void GetText_1();
	void Get_RootQuest_Visibility_1();
	void Get_ParentQuest_Visibility_1();
	void Get_BaseQuest_Visibility_1();
	void SelectComponent();
	void Init();
	void GetTile();
	void GetTileID();
	void GetTileVector();
	void GetMinPosition();
	void GetZone();
	void SetZone();
	void Construct();
	void BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_40_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__QuestTree_K2Node_ComponentBoundEvent_86_OnComponentSelected__DelegateSignature();
	void BndEvt__QuestTree_K2Node_ComponentBoundEvent_16_OnComponentClick__DelegateSignature();
	void BndEvt__BaseQuest_K2Node_ComponentBoundEvent_676_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__ParentQuest_K2Node_ComponentBoundEvent_131_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__RootQuest_K2Node_ComponentBoundEvent_320_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_Quest_Debug();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
