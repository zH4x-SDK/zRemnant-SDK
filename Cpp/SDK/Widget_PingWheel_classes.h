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

// WidgetBlueprintGeneratedClass Widget_PingWheel.Widget_PingWheel_C
// 0x0000
class UWidget_PingWheel_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PingWheel.Widget_PingWheel_C");
		return ptr;
	}



	void IsContextAvailableForLocation();
	void OnShowEmoteScreen();
	void SelectWidget();
	void AddAmmoContexts();
	void MakeSelection();
	void DetermineHoveredOptionGamepad();
	void DetermineHoveredOptionMouse();
	void AddSubcontextEmote();
	void AddSubcontextPing();
	void AddDefaultSelection();
	void OnPingContextUpdated();
	void Construct();
	void Tick();
	void ExecuteUbergraph_Widget_PingWheel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
