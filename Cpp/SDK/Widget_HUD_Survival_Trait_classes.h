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

// WidgetBlueprintGeneratedClass Widget_HUD_Survival_Trait.Widget_HUD_Survival_Trait_C
// 0x0000
class UWidget_HUD_Survival_Trait_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HUD_Survival_Trait.Widget_HUD_Survival_Trait_C");
		return ptr;
	}



	void AnimationNew();
	void Initialize();
	void Construct();
	void ExecuteUbergraph_Widget_HUD_Survival_Trait();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
