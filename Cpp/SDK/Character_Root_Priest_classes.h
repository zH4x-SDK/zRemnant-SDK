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

// BlueprintGeneratedClass Character_Root_Priest.Character_Root_Priest_C
// 0x0000
class ACharacter_Root_Priest_C : public ABP_Monster_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Priest.Character_Root_Priest_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnBuffStart();
	void OnBuffEnd();
	void SFX_Buff_On();
	void SFX_Buff_Off();
	void OnBuffHollows();
	void OnAlert();
	void CombatExit();
	void OnSeedCallerThrow();
	void ExecuteUbergraph_Character_Root_Priest();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
