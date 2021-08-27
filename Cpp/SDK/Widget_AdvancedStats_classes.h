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

// WidgetBlueprintGeneratedClass Widget_AdvancedStats.Widget_AdvancedStats_C
// 0x0000
class UWidget_AdvancedStats_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_AdvancedStats.Widget_AdvancedStats_C");
		return ptr;
	}



	void GetPlayerOffDefLevel();
	void GetZoneRating();
	void UpdateOffsetOnController();
	void UpdateRatings();
	void GetWeaponName();
	void GetEncumberanceState();
	void UpdateEncumberance();
	void GetValueColor();
	void UpdateResistances();
	void GetPostfix();
	void GetPrefix();
	void GetStatValue();
	void UpdateArmor();
	void RefreshDetails();
	void Construct();
	void OnPostComputeStats_Event_1();
	void PlayerJoined();
	void ExecuteUbergraph_Widget_AdvancedStats();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
