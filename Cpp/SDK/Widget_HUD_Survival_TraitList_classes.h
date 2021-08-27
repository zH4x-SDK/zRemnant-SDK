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

// WidgetBlueprintGeneratedClass Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C
// 0x0000
class UWidget_HUD_Survival_TraitList_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C");
		return ptr;
	}



	void Initialize();
	void AnimationPlay();
	void BuildTraitList();
	void ShowTraitNotification();
	void GetRelevantCharacter();
	void Construct();
	void OnTraitAdded();
	void OnTraitLevelChanged();
	void ExecuteUbergraph_Widget_HUD_Survival_TraitList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
