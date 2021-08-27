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

// BlueprintGeneratedClass CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C
// 0x0000
class UCharacterMod_Root_Enchanter_C : public UCharacterMod_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CharacterMod_Root_Enchanter.CharacterMod_Root_Enchanter_C");
		return ptr;
	}



	void Get_Player_Location();
	void OnActionStart();
	void OnSpawn();
	void ReturnToTimer();
	void OnStartTimer();
	void OnDead_Event_1();
	void OnCharacterEvent();
	void ExecuteUbergraph_CharacterMod_Root_Enchanter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
