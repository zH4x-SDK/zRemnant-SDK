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

// BlueprintGeneratedClass Dialog_Wounded.Dialog_Wounded_C
// 0x0000
class ADialog_Wounded_C : public ADialog_InGameBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Wounded.Dialog_Wounded_C");
		return ptr;
	}



	void OnBeginDialog();
	void OnWoundedState_Event_1();
	void OnEndDialog();
	void ExecuteUbergraph_Dialog_Wounded();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
