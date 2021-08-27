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

// BlueprintGeneratedClass Character_Root_Splitter_ChampionClone.Character_Root_Splitter_ChampionClone_C
// 0x0000
class ACharacter_Root_Splitter_ChampionClone_C : public ACharacter_Root_Splitter_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Splitter_ChampionClone.Character_Root_Splitter_ChampionClone_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnNotifyTakeDamage_Event_1();
	void ExecuteUbergraph_Character_Root_Splitter_ChampionClone();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
