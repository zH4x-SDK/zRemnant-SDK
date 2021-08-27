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

// WidgetBlueprintGeneratedClass Widget_Death.Widget_Death_C
// 0x0000
class UWidget_Death_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Death.Widget_Death_C");
		return ptr;
	}



	void Get_Exit_bIsEnabled_1();
	void Get_Leave_Visibility_1();
	void Get_KickBan_bIsEnabled_1();
	void Get_KickBan_Visibility_1();
	void UpdateKickBan();
	void ShowDeathScreen();
	void Get_HUDRoot_Visibility_1();
	void HasMultipleSpectateOptions();
	void RemoveConfirmDialog();
	void Get_Exit_Visibility_1();
	void Check_is_Alive();
	void PostTravel();
	void EnsureValidTarget();
	void SpectatePrev();
	void SpectateNext();
	void BeginSpectating();
	void GetQuote();
	void FadeOut();
	void FadeIn();
	void Get_Spectate_Visibility();
	void Construct();
	void OnValidTarget();
	void OnInvalidTarget();
	void SpectateFadingEffect();
	void BndEvt__Exit_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void OnExitResult();
	void BndEvt__Next_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__Prev_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature();
	void ShowPartyUI();
	void OnSpectateTargetChanged_Event_1();
	void BndEvt__KickBan_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_Death();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
