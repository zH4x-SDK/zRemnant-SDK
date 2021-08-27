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

// BlueprintGeneratedClass Character_Swamp_ElfQueen_Bug.Character_Swamp_ElfQueen_Bug_C
// 0x0000
class ACharacter_Swamp_ElfQueen_Bug_C : public ABP_Monster_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Swamp_ElfQueen_Bug.Character_Swamp_ElfQueen_Bug_C");
		return ptr;
	}



	void OnDead_Event_2();
	void ExecuteUbergraph_Character_Swamp_ElfQueen_Bug();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
