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

// WidgetBlueprintGeneratedClass Widget_MiniMap_Ping.Widget_MiniMap_Ping_C
// 0x0000
class UWidget_MiniMap_Ping_C : public URemnantMiniMapWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MiniMap_Ping.Widget_MiniMap_Ping_C");
		return ptr;
	}



	void UpdateMinimapDisplay();
	void OnRegisteredToPanel();
	void ExecuteUbergraph_Widget_MiniMap_Ping();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
