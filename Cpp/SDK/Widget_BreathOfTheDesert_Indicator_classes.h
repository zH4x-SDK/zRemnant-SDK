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

// WidgetBlueprintGeneratedClass Widget_BreathOfTheDesert_Indicator.Widget_BreathOfTheDesert_Indicator_C
// 0x0000
class UWidget_BreathOfTheDesert_Indicator_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BreathOfTheDesert_Indicator.Widget_BreathOfTheDesert_Indicator_C");
		return ptr;
	}



	void Tick();
	void ExecuteUbergraph_Widget_BreathOfTheDesert_Indicator();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
