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

// WidgetBlueprintGeneratedClass Widget_TraitList.Widget_TraitList_C
// 0x0000
class UWidget_TraitList_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TraitList.Widget_TraitList_C");
		return ptr;
	}



	void CreateBackgroundSlots();
	void SetShowLore();
	void GetVisibility_1();
	void ClearTraits();
	void IsEmpty();
	void AddTrait();
	void HasTrait();
	void UpdateTraitList();
	void Focus();
	void BuildTraitList();
	void Construct();
	void OnTraitAdded_Event_1();
	void ExecuteUbergraph_Widget_TraitList();
	void OnTraitClicked__DelegateSignature();
	void OnSelectTrait__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
