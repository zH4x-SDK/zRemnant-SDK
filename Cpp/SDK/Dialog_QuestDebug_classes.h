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

// BlueprintGeneratedClass Dialog_QuestDebug.Dialog_QuestDebug_C
// 0x0000
class ADialog_QuestDebug_C : public ADialog_InGameBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_QuestDebug.Dialog_QuestDebug_C");
		return ptr;
	}



	void InpActEvt_Menu_K2Node_InputActionEvent_1();
	void InpActEvt_Shift_F12_K2Node_InputKeyEvent_1();
	void ExecuteUbergraph_Dialog_QuestDebug();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
