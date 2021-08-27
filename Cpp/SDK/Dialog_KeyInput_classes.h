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

// BlueprintGeneratedClass Dialog_KeyInput.Dialog_KeyInput_C
// 0x0000
class ADialog_KeyInput_C : public ADialog_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_KeyInput.Dialog_KeyInput_C");
		return ptr;
	}



	void IsInvalidInput();
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_17();
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_16();
	void InpActEvt_LeftShift_K2Node_InputKeyEvent_15();
	void InpActEvt_RightShift_K2Node_InputKeyEvent_14();
	void InpActEvt_RightShift_K2Node_InputKeyEvent_13();
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_12();
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_11();
	void InpActEvt_RightAlt_K2Node_InputKeyEvent_10();
	void InpActEvt_RightAlt_K2Node_InputKeyEvent_9();
	void InpActEvt_RightCommand_K2Node_InputKeyEvent_8();
	void InpActEvt_RightCommand_K2Node_InputKeyEvent_7();
	void InpActEvt_LeftCommand_K2Node_InputKeyEvent_6();
	void InpActEvt_LeftCommand_K2Node_InputKeyEvent_5();
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_4();
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_3();
	void InpActEvt_RightControl_K2Node_InputKeyEvent_2();
	void InpActEvt_RightControl_K2Node_InputKeyEvent_1();
	void OnBeginDialog();
	void ExecuteUbergraph_Dialog_KeyInput();
	void KeyInput__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
