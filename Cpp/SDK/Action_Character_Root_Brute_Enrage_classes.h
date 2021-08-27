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

// BlueprintGeneratedClass Action_Character_Root_Brute_Enrage.Action_Character_Root_Brute_Enrage_C
// 0x0000
class UAction_Character_Root_Brute_Enrage_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Character_Root_Brute_Enrage.Action_Character_Root_Brute_Enrage_C");
		return ptr;
	}



	void ModifyDamage();
	void FilterIncomingDamage();
	void IsMeleeClass();
	void OnActionStart();
	void OnPostComputeStats();
	void OnActionStop();
	void FX_End();
	void ExecuteUbergraph_Action_Character_Root_Brute_Enrage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
