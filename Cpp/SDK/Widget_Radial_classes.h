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

// WidgetBlueprintGeneratedClass Widget_Radial.Widget_Radial_C
// 0x0000
class UWidget_Radial_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Radial.Widget_Radial_C");
		return ptr;
	}



	void GetRadialItemForPanel();
	void InitSlots();
	void Init();
	void GetRadialItem();
	void BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void OnQuickSelect1();
	void OnQuickSelect2();
	void OnQuickSelect3();
	void OnQuickSelect4();
	void Construct();
	void ExecuteUbergraph_Widget_Radial();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
