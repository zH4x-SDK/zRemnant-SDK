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

// BlueprintGeneratedClass Action_Character_Root_Priest_ApplyShield.Action_Character_Root_Priest_ApplyShield_C
// 0x0000
class UAction_Character_Root_Priest_ApplyShield_C : public UBP_ActionBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Character_Root_Priest_ApplyShield.Action_Character_Root_Priest_ApplyShield_C");
		return ptr;
	}



	void OnActionStart();
	void ExecuteUbergraph_Action_Character_Root_Priest_ApplyShield();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
