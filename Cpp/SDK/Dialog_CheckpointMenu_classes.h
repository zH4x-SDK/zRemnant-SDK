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

// BlueprintGeneratedClass Dialog_CheckpointMenu.Dialog_CheckpointMenu_C
// 0x0000
class ADialog_CheckpointMenu_C : public ADialog_InGameBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_CheckpointMenu.Dialog_CheckpointMenu_C");
		return ptr;
	}



	void SetContext();
	void InpActEvt_Menu_K2Node_InputActionEvent_1();
	void ReceiveBeginPlay();
	void OnNotifyTakeDamage_Event_1();
	void OnEndDialog();
	void OnBeginDialog();
	void ExecuteUbergraph_Dialog_CheckpointMenu();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
