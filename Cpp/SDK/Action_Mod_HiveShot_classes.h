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

// BlueprintGeneratedClass Action_Mod_HiveShot.Action_Mod_HiveShot_C
// 0x0000
class UAction_Mod_HiveShot_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_HiveShot.Action_Mod_HiveShot_C");
		return ptr;
	}



	void GetDamage();
	void GetPlayerAsCause();
	void OnActionStart();
	void ExecuteUbergraph_Action_Mod_HiveShot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
