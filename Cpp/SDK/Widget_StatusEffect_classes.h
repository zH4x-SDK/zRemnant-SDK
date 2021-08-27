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

// WidgetBlueprintGeneratedClass Widget_StatusEffect.Widget_StatusEffect_C
// 0x0000
class UWidget_StatusEffect_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatusEffect.Widget_StatusEffect_C");
		return ptr;
	}



	void DetermineStacksText();
	void Init();
	void GetVisibility_2();
	void GetVisibility_1();
	void GetColorAndOpacity_1();
	void Get_Name_Text_1();
	void Get_Bar_FillColorAndOpacity_1();
	void Get_Bar_Percent_1();
	void Construct();
	void ExecuteUbergraph_Widget_StatusEffect();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
