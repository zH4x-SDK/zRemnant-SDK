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

// BlueprintGeneratedClass Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C
// 0x0000
class UAction_Mod_HiveShot_InsectCloud_DOT_C : public UAction_DOT_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C");
		return ptr;
	}



	void AllowAction();
	void RefreshDuration();
	void OnActionStart();
	void TickSpread();
	void OnActionStop();
	void ExecuteUbergraph_Action_Mod_HiveShot_InsectCloud_DOT();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
