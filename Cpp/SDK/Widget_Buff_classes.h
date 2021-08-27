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

// WidgetBlueprintGeneratedClass Widget_Buff.Widget_Buff_C
// 0x0000
class UWidget_Buff_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Buff.Widget_Buff_C");
		return ptr;
	}



	void Get_Icon_Brush_1();
	void GetBuffLabel();
	void Single_Digit_Formatting();
	void Format_Time();
	void Get_RadialCooldown_ColorAndOpacity_1();
	void Get_Cooldown_FillColorAndOpacity_1();
	void UpdateTimeRemaining();
	void GetCooldownVisibility();
	void GetVisibility_1();
	void UpdateLevelText();
	void GetIcon();
	void Construct();
	void Tick();
	void ExecuteUbergraph_Widget_Buff();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
