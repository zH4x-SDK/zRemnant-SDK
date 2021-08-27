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

// BlueprintGeneratedClass Dialog_OkDialog.Dialog_OkDialog_C
// 0x0000
class ADialog_OkDialog_C : public ADialog_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_OkDialog.Dialog_OkDialog_C");
		return ptr;
	}



	void OnBeginDialog();
	void OnEndDialog();
	void ExecuteUbergraph_Dialog_OkDialog();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
