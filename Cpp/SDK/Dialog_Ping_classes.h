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

// BlueprintGeneratedClass Dialog_Ping.Dialog_Ping_C
// 0x0000
class ADialog_Ping_C : public ADialog_InGameBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Ping.Dialog_Ping_C");
		return ptr;
	}



	void PingOnRelease();
	void MakePingSelection();
	void FireEmote();
	void ValidateAimInput();
	void ShowEmotesScreen();
	void AddPingContext();
	void InpActEvt_Ping_K2Node_InputActionEvent_14();
	void InpActEvt_Ping_K2Node_InputActionEvent_13();
	void InpActEvt_Melee_K2Node_InputActionEvent_12();
	void InpActEvt_Fire_K2Node_InputActionEvent_11();
	void InpActEvt_Fire_K2Node_InputActionEvent_10();
	void InpActEvt_Aim_K2Node_InputActionEvent_9();
	void InpActEvt_UI_Back_K2Node_InputActionEvent_8();
	void InpActEvt_ToggleWeapon_K2Node_InputActionEvent_7();
	void InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_6();
	void InpActEvt_UI_PingNavigateRight_K2Node_InputActionEvent_5();
	void InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_4();
	void InpActEvt_UI_PingNavigateLeft_K2Node_InputActionEvent_3();
	void InpActEvt_DragonHeart_K2Node_InputActionEvent_2();
	void InpActEvt_AltFire_K2Node_InputActionEvent_1();
	void InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_4();
	void InpActEvt_Gamepad_RightStick_Right_K2Node_InputKeyEvent_3();
	void InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_2();
	void InpActEvt_Gamepad_RightStick_Left_K2Node_InputKeyEvent_1();
	void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_1();
	void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_2();
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_3();
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_4();
	void OnBeginDialog();
	void OnEvent();
	void OnEndDialog();
	void ExecuteUbergraph_Dialog_Ping();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
