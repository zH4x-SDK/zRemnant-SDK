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

// AnimBlueprintGeneratedClass Character_Root_Brute_AnimsBP.Character_Root_Brute_AnimsBP_C
// 0x0000
class UCharacter_Root_Brute_AnimsBP_C : public URemnantAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Root_Brute_AnimsBP.Character_Root_Brute_AnimsBP_C");
		return ptr;
	}



	void ExecuteUbergraph_Character_Root_Brute_AnimsBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
