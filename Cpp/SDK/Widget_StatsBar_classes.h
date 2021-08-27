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

// WidgetBlueprintGeneratedClass Widget_StatsBar.Widget_StatsBar_C
// 0x0000
class UWidget_StatsBar_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatsBar.Widget_StatsBar_C");
		return ptr;
	}



	void Get_SurvivalLevel();
	void NoCurrencyVisibility();
	void OnlyCurrencyVisibility();
	void Refresh();
	void GetCurrency();
	void Get_PlayerNameText_1();
	void Get_Age_Text_1();
	void Get_LevelUP_Visibility_1();
	void Get_QueuedExperience_Text_1();
	void GetPercent_1();
	void Get_ButtonConfirm_Visibility_1();
	void Get_AttributePoints_Text_1();
	void GetVisibility_1();
	void Get_Experience_Text_1();
	void GetLevelText();
	void OnLoaded_771DE5E349697CC0FD3B5E8DAF16135B();
	void Construct();
	void OnPostComputeStats_Event_1();
	void ExecuteUbergraph_Widget_StatsBar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
