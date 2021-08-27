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

// BlueprintGeneratedClass Dialog_Radial.Dialog_Radial_C
// 0x0000
class ADialog_Radial_C : public ADialog_InGameBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Radial.Dialog_Radial_C");
		return ptr;
	}



	void Init();
	void SetContext();
	void InpActEvt_QuickSelect1_K2Node_InputActionEvent_4();
	void InpActEvt_QuickSelect2_K2Node_InputActionEvent_3();
	void InpActEvt_QuickSelect3_K2Node_InputActionEvent_2();
	void InpActEvt_QuickSelect4_K2Node_InputActionEvent_1();
	void InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_1();
	void InpAxisKeyEvt_Gamepad_RightY_K2Node_InputAxisKeyEvent_2();
	void ExecuteUbergraph_Dialog_Radial();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
