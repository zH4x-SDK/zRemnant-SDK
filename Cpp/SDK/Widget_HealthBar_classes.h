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

// WidgetBlueprintGeneratedClass Widget_HealthBar.Widget_HealthBar_C
// 0x0000
class UWidget_HealthBar_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HealthBar.Widget_HealthBar_C");
		return ptr;
	}



	void Init();
	void Get_Health_Percent_1();
	void OnTargetInvalid();
	void ExecuteUbergraph_Widget_HealthBar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
