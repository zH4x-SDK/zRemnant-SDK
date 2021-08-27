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

// BlueprintGeneratedClass MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C
// 0x0000
class AMiniMap_Display_RevealMap_C : public AMiniMap_Display_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C");
		return ptr;
	}



	void Has_MiniMap();
	void Set_Widget_MiniMap_Default_Visibility();
	void Init();
	void Init_HUD();
	void ReceiveBeginPlay();
	void Map_Initialized_Event_1();
	void ReceiveTick();
	void FoW_Initialized();
	void MapInitEventBound();
	void SetMiniMapMode();
	void ExecuteUbergraph_MiniMap_Display_RevealMap();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
