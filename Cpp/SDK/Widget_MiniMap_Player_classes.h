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

// WidgetBlueprintGeneratedClass Widget_MiniMap_Player.Widget_MiniMap_Player_C
// 0x0000
class UWidget_MiniMap_Player_C : public URemnantMiniMapWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MiniMap_Player.Widget_MiniMap_Player_C");
		return ptr;
	}



	void UpdateLevelVisibility();
	void OnRegisteredToPanel();
	void ExecuteUbergraph_Widget_MiniMap_Player();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
