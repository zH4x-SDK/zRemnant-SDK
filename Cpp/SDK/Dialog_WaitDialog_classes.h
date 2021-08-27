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

// BlueprintGeneratedClass Dialog_WaitDialog.Dialog_WaitDialog_C
// 0x0000
class ADialog_WaitDialog_C : public ADialog_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_WaitDialog.Dialog_WaitDialog_C");
		return ptr;
	}



	void UpdateWidgetCaption();
	void EndDialogWithFade();
	void EndDialog();
	void OnBeginDialog();
	void ExecuteUbergraph_Dialog_WaitDialog();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
