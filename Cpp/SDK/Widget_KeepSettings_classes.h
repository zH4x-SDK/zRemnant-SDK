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

// WidgetBlueprintGeneratedClass Widget_KeepSettings.Widget_KeepSettings_C
// 0x0000
class UWidget_KeepSettings_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_KeepSettings.Widget_KeepSettings_C");
		return ptr;
	}



	void Init();
	void BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_Widget_KeepSettings();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
