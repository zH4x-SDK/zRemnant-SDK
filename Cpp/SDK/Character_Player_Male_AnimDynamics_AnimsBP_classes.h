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

// AnimBlueprintGeneratedClass Character_Player_Male_AnimDynamics_AnimsBP.Character_Player_Male_AnimDynamics_AnimsBP_C
// 0x0000
class UCharacter_Player_Male_AnimDynamics_AnimsBP_C : public UAnimInstanceGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Player_Male_AnimDynamics_AnimsBP.Character_Player_Male_AnimDynamics_AnimsBP_C");
		return ptr;
	}



	void ExecuteUbergraph_Character_Player_Male_AnimDynamics_AnimsBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
