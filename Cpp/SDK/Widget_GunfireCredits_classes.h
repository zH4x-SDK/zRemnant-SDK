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

// WidgetBlueprintGeneratedClass Widget_GunfireCredits.Widget_GunfireCredits_C
// 0x0000
class UWidget_GunfireCredits_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_GunfireCredits.Widget_GunfireCredits_C");
		return ptr;
	}



	void EndCreditRoll();
	void SetEndGame();
	void BndEvt__Back_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_GunfireCredits();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
