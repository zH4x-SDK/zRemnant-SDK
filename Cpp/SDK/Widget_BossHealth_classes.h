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

// WidgetBlueprintGeneratedClass Widget_BossHealth.Widget_BossHealth_C
// 0x0000
class UWidget_BossHealth_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BossHealth.Widget_BossHealth_C");
		return ptr;
	}



	void UpdateHealthPercentage();
	void SetLabel();
	void SetAttributes();
	void SetHealthBarColor();
	void Construct();
	void OnNotifyHealthChanged_Event_1();
	void ExecuteUbergraph_Widget_BossHealth();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
