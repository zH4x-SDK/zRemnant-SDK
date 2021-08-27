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

// BlueprintGeneratedClass Character_Wasteland_Hound.Character_Wasteland_Hound_C
// 0x0000
class ACharacter_Wasteland_Hound_C : public ABP_Monster_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Wasteland_Hound.Character_Wasteland_Hound_C");
		return ptr;
	}



	void MassSummon();
	void Bandit_Neary_by();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick();
	void SFX_Pant_On();
	void SFX_Pant_Off();
	void SFX_Alert();
	void RodBusted();
	void KillMaster();
	void HerdFollow();
	void HerdEat();
	void ArmorVFX();
	void HealthVFX();
	void DamageVFX();
	void OnDead_Event_1();
	void ResetAdds();
	void ExecuteUbergraph_Character_Wasteland_Hound();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
