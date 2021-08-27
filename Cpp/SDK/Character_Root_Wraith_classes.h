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

// BlueprintGeneratedClass Character_Root_Wraith.Character_Root_Wraith_C
// 0x0000
class ACharacter_Root_Wraith_C : public ABP_Monster_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Wraith.Character_Root_Wraith_C");
		return ptr;
	}



	void OnTeleportOut();
	void OnTeleportIn();
	void OnArrowDespawn();
	void OnArrowSpawn();
	void OnProjectileFire();
	void ExecuteUbergraph_Character_Root_Wraith();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
