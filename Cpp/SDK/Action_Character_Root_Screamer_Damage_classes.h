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

// BlueprintGeneratedClass Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C
// 0x0000
class UAction_Character_Root_Screamer_Damage_C : public UBP_ActionBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Character_Root_Screamer_Damage.Action_Character_Root_Screamer_Damage_C");
		return ptr;
	}



	void GetTime();
	void OnStop();
	void OnActionStart();
	void OnTimer();
	void OnDead_Event_1();
	void OnStateChange_Event_1();
	void ExecuteUbergraph_Action_Character_Root_Screamer_Damage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
