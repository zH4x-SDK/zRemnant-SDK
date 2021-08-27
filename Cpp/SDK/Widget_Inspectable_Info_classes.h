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

// WidgetBlueprintGeneratedClass Widget_Inspectable_Info.Widget_Inspectable_Info_C
// 0x0000
class UWidget_Inspectable_Info_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Inspectable_Info.Widget_Inspectable_Info_C");
		return ptr;
	}



	void UpdatePageTurns();
	void IncrementPage();
	void InitCurrentPage();
	void Init();
	void OnLeft();
	void OnRight();
	void AnimateInDetailedInfo();
	void AnimateOutDetailedInfo();
	void BndEvt__Widget_ButtonEx_NavLeft_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_Inspectable_Info();
	void OnPageUpdate__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
