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

// WidgetBlueprintGeneratedClass Widget_StatusBar.Widget_StatusBar_C
// 0x0000
class UWidget_StatusBar_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatusBar.Widget_StatusBar_C");
		return ptr;
	}



	void GetVisibility_1();
	void ProgressionBar();
	void OnHealthChanged();
	void InitHealth();
	void Flash();
	void SetPercentage();
	void PreConstruct();
	void DelayedSetPercentage();
	void Tick();
	void ExecuteUbergraph_Widget_StatusBar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
