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

// BlueprintGeneratedClass Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C
// 0x0000
class UAction_Mod_StormCaller_DFA_C : public UAction_DFA_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C");
		return ptr;
	}



	void OnActionAdded();
	void FilterIncomingDamage();
	void ModifyDamage();
	void OnActionStart();
	void OnDOT();
	void OnActionStop();
	void OnOwnerEnteredInteractive();
	void ExecuteUbergraph_Action_Mod_StormCaller_DFA();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
