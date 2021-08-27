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

// WidgetBlueprintGeneratedClass Widget_Ping.Widget_Ping_C
// 0x0000
class UWidget_Ping_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Ping.Widget_Ping_C");
		return ptr;
	}



	void SetNavigating();
	void FireEmote();
	void SlotEmote();
	void ShowEmoteScreen();
	void MakeSelection();
	void SetPingContext();
	void Tick();
	void Construct();
	void ExecuteUbergraph_Widget_Ping();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
