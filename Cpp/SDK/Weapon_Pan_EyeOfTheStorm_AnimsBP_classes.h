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

// AnimBlueprintGeneratedClass Weapon_Pan_EyeOfTheStorm_AnimsBP.Weapon_Pan_EyeOfTheStorm_AnimsBP_C
// 0x0000
class UWeapon_Pan_EyeOfTheStorm_AnimsBP_C : public UAnimInstanceGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_Pan_EyeOfTheStorm_AnimsBP.Weapon_Pan_EyeOfTheStorm_AnimsBP_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_AnimsBP_AnimGraphNode_TransitionResult_BAAA380842A6513CB2344FB9A5C98C7E();
	void ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_AnimsBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
