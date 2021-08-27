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

// WidgetBlueprintGeneratedClass Widget_StatusEffectStack.Widget_StatusEffectStack_C
// 0x0000
class UWidget_StatusEffectStack_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatusEffectStack.Widget_StatusEffectStack_C");
		return ptr;
	}



	void StopListeningForLevelChange();
	void ListenForLevelChange();
	void DetermineDrawableStacks();
	void GetRemainingTimeForAction();
	void StatusEffectSortPredicate();
	void IsValidStatusEffect();
	void UpdateStatusEffects();
	void Init();
	void OnActionRemoved();
	void OnActionAdded();
	void ExecuteUbergraph_Widget_StatusEffectStack();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
