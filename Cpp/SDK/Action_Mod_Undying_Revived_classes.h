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

// BlueprintGeneratedClass Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C
// 0x0000
class UAction_Mod_Undying_Revived_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C");
		return ptr;
	}



	void FilterIncomingDamage();
	void OnComputeStats();
	void ExecuteUbergraph_Action_Mod_Undying_Revived();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
