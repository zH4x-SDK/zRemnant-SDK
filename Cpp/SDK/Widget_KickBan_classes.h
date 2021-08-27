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

// WidgetBlueprintGeneratedClass Widget_KickBan.Widget_KickBan_C
// 0x0000
class UWidget_KickBan_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_KickBan.Widget_KickBan_C");
		return ptr;
	}



	void GetPopulatedVisibility_1();
	void UpdatePlayerList();
	void NavigateToPlayer();
	void GetEmptyVisibility_1();
	void CanPress();
	void BuildPlayerList();
	void BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__Ban_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void FocusList();
	void OnSelected();
	void BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature();
	void OnCooldown();
	void OnNavigate();
	void OnKick();
	void BndEvt__Tag_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_KickBan();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
