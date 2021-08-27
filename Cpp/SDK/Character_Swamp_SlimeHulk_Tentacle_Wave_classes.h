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

// BlueprintGeneratedClass Character_Swamp_SlimeHulk_Tentacle_Wave.Character_Swamp_SlimeHulk_Tentacle_Wave_C
// 0x0000
class ACharacter_Swamp_SlimeHulk_Tentacle_Wave_C : public ACharacterGunfire
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Swamp_SlimeHulk_Tentacle_Wave.Character_Swamp_SlimeHulk_Tentacle_Wave_C");
		return ptr;
	}



	void DetermineForceFeedback();
	void FilterIncomingDamage();
	void OnDestroy();
	void FXSImpact();
	void FX_Destroy();
	void FX_Phase1Activate();
	void FX_Phase3Activate();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature();
	void ReceiveBeginPlay();
	void WaveHitGround();
	void Destroy();
	void MakeWaveVisible();
	void ExecuteUbergraph_Character_Swamp_SlimeHulk_Tentacle_Wave();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
