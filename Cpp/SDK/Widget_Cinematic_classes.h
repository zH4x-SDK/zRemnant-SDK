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

// WidgetBlueprintGeneratedClass Widget_Cinematic.Widget_Cinematic_C
// 0x0000
class UWidget_Cinematic_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Cinematic.Widget_Cinematic_C");
		return ptr;
	}



	void DetermineSkipControl();
	void Get_SkipInfo_Visibility_1();
	void OnSkipVoteChanged();
	void UnbindEvents();
	void End();
	void BindEvents();
	void Construct();
	void BndEvt__Widget_ButtonEx_132_K2Node_ComponentBoundEvent_134_OnAdvButtonClickedEvent__DelegateSignature();
	void DelayShowPrompt();
	void Destruct();
	void ExecuteUbergraph_Widget_Cinematic();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
