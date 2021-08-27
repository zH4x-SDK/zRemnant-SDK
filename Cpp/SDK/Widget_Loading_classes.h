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

// WidgetBlueprintGeneratedClass Widget_Loading.Widget_Loading_C
// 0x0000
class UWidget_Loading_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Loading.Widget_Loading_C");
		return ptr;
	}



	void SetTipImageAndPlayAnimation();
	void UpdateTip();
	void InitTips();
	void IsFinishedTransitioning();
	void HideLoadingScreen();
	void ShowLoadingScreen();
	void OnLoaded_A42900CD43617034973CE2A28642000E();
	void PreConstruct();
	void Construct();
	void PrecacheTipImage();
	void ExecuteUbergraph_Widget_Loading();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
