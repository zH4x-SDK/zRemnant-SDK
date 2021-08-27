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

// BlueprintGeneratedClass Action_Trait_Teamwork.Action_Trait_Teamwork_C
// 0x0000
class UAction_Trait_Teamwork_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Trait_Teamwork.Action_Trait_Teamwork_C");
		return ptr;
	}



	void ModifyInspectInfo();
	void GetExperienceMod();
	void GetModPowerMod();
	void OnComputeStats();
	void OnReapplyBuff();
	void OnLevelChanged();
	void ExecuteUbergraph_Action_Trait_Teamwork();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
