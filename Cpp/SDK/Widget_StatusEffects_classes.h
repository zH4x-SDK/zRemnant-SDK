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

// WidgetBlueprintGeneratedClass Widget_StatusEffects.Widget_StatusEffects_C
// 0x0000
class UWidget_StatusEffects_C : public UWIdget_StatusBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatusEffects.Widget_StatusEffects_C");
		return ptr;
	}



	void DetermineDrawableStacks();
	void GetRemainingTimeForAction();
	void StatusEffectSortPredicate();
	void UpdateRenderedActions();
	void AddAction();
	void Construct();
	void OnActionRemoved_Event_1();
	void On_Action_Added();
	void ExecuteUbergraph_Widget_StatusEffects();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
