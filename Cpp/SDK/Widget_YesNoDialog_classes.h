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

// WidgetBlueprintGeneratedClass Widget_YesNoDialog.Widget_YesNoDialog_C
// 0x0000
class UWidget_YesNoDialog_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_YesNoDialog.Widget_YesNoDialog_C");
		return ptr;
	}



	void Init();
	void BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_YesNoDialog();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
