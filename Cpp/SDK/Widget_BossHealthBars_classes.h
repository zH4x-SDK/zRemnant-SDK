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

// WidgetBlueprintGeneratedClass Widget_BossHealthBars.Widget_BossHealthBars_C
// 0x0000
class UWidget_BossHealthBars_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BossHealthBars.Widget_BossHealthBars_C");
		return ptr;
	}



	void RemoveBoss();
	void AddBoss();
	void Construct();
	void OnBossRelevant_Event_1();
	void OnBossNotRelevant_Event_1();
	void ExecuteUbergraph_Widget_BossHealthBars();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
