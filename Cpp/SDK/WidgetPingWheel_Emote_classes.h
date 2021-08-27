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

// WidgetBlueprintGeneratedClass WidgetPingWheel_Emote.WidgetPingWheel_Emote_C
// 0x0000
class UWidgetPingWheel_Emote_C : public UWidgetPingWheel_Item_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WidgetPingWheel_Emote.WidgetPingWheel_Emote_C");
		return ptr;
	}



	void UpdateFromContext();
	void OnIconLoaded();
	void Tick();
	void ExecuteUbergraph_WidgetPingWheel_Emote();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
