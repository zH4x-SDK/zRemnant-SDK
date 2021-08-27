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

// BlueprintGeneratedClass Action_Mod_HowlersImmunity.Action_Mod_HowlersImmunity_C
// 0x0000
class UAction_Mod_HowlersImmunity_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_HowlersImmunity.Action_Mod_HowlersImmunity_C");
		return ptr;
	}



	void Check_Is_Friendly_();
	void OnPostComputeStats();
	void ExecuteUbergraph_Action_Mod_HowlersImmunity();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
