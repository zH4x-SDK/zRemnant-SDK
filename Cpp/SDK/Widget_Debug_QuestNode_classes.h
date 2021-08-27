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

// WidgetBlueprintGeneratedClass Widget_Debug_QuestNode.Widget_Debug_QuestNode_C
// 0x0000
class UWidget_Debug_QuestNode_C : public UFocusWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Debug_QuestNode.Widget_Debug_QuestNode_C");
		return ptr;
	}



	void TeleportTo();
	void GetVisibility_1();
	void SetIconIf();
	void SetIcon();
	void Get_Errors_Visibility_1();
	void Get_Label_Text_1();
	void BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_105_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_43_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_Debug_QuestNode();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
