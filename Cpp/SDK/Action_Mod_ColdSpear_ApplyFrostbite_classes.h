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

// BlueprintGeneratedClass Action_Mod_ColdSpear_ApplyFrostbite.Action_Mod_ColdSpear_ApplyFrostbite_C
// 0x0000
class UAction_Mod_ColdSpear_ApplyFrostbite_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_ColdSpear_ApplyFrostbite.Action_Mod_ColdSpear_ApplyFrostbite_C");
		return ptr;
	}



	void GetDamageCause();
	void AddFrostbiteStack();
	void OnActionStart();
	void ExecuteUbergraph_Action_Mod_ColdSpear_ApplyFrostbite();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
