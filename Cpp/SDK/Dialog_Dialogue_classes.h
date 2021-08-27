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

// BlueprintGeneratedClass Dialog_Dialogue.Dialog_Dialogue_C
// 0x0000
class ADialog_Dialogue_C : public ADialog_InGameBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Dialogue.Dialog_Dialogue_C");
		return ptr;
	}



	void UnbindEvents();
	void EndDialog();
	void SetInitiator();
	void SetContext();
	void OnBeginDialog();
	void OnEndDialog();
	void ExecuteUbergraph_Dialog_Dialogue();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
