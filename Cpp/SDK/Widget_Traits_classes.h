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

// WidgetBlueprintGeneratedClass Widget_Traits.Widget_Traits_C
// 0x0000
class UWidget_Traits_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Traits.Widget_Traits_C");
		return ptr;
	}



	void HasNoTraitManualLevelUp();
	void Get_SpendTraitBtn_bIsEnabled_1();
	void Get_LegacyExperienceBar_Percent_1();
	void Get_TraitPoints_Text_1();
	void Get_LegacyExperience_Text_1();
	void Get_LegacyLevel_Text_1();
	void UpdateTraitInfo();
	void BndEvt__Widget_TraitList_K2Node_ComponentBoundEvent_106_OnSelectTrait__DelegateSignature();
	void BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__SpendTraitBtn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__ToggleDescription_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void RefocusScrollList();
	void Construct();
	void ExecuteUbergraph_Widget_Traits();
	void AdvancedStats__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
