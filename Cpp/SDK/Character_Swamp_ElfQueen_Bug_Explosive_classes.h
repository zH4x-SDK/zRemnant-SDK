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

// BlueprintGeneratedClass Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C
// 0x0000
class ACharacter_Swamp_ElfQueen_Bug_Explosive_C : public ACharacter_Swamp_ElfQueen_Bug_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveTick();
	void DoExplosion();
	void BndEvt__ExplosionRadiusInner_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature();
	void Explode();
	void ExplodePlayerOnly();
	void ShowSpeedMutation();
	void ChargeStart();
	void ChargeStop();
	void ChargeFastStart();
	void ChargeFastStop();
	void DestroySelf();
	void Escape();
	void OnComputeStats();
	void KilledByPlayer();
	void ExecuteUbergraph_Character_Swamp_ElfQueen_Bug_Explosive();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
