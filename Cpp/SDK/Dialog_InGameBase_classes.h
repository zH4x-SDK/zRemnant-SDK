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

// BlueprintGeneratedClass Dialog_InGameBase.Dialog_InGameBase_C
// 0x0000
class ADialog_InGameBase_C : public ADialog_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_InGameBase.Dialog_InGameBase_C");
		return ptr;
	}



	void InpActEvt_Menu_K2Node_InputActionEvent_1();
	void OnBeginDialog();
	void OnEndDialog();
	void ReceiveBeginPlay();
	void OnInteractive_Event_1();
	void ExecuteUbergraph_Dialog_InGameBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
