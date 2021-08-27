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

// WidgetBlueprintGeneratedClass Widget_SelectQuestItem.Widget_SelectQuestItem_C
// 0x0000
class UWidget_SelectQuestItem_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SelectQuestItem.Widget_SelectQuestItem_C");
		return ptr;
	}



	void UseItem();
	void Construct();
	void BndEvt__QuestInventory_K2Node_ComponentBoundEvent_27_OnItemClicked__DelegateSignature();
	void ExecuteUbergraph_Widget_SelectQuestItem();
	void OnItemUsed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
