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

// BlueprintGeneratedClass BP_Monster.BP_Monster_C
// 0x0000
class ABP_Monster_C : public AAICharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Monster.BP_Monster_C");
		return ptr;
	}



	void CanUseItem();
	void EvaluatePlayerTargetSwitch();
	void CleanupSpawns();
	void SpawnCharacter();
	void GetEncounterMan();
	void DoEncounter();
	void RunAway();
	void Death_Stingers();
	void OnRep_InCombat();
	void SpawnMinions();
	void GenerateModifier();
	void SetupModifiers();
	void DropLoot();
	void OnFailure_2FFB5FF44E28076CA52495AF9F4E4361();
	void OnSuccess_2FFB5FF44E28076CA52495AF9F4E4361();
	void OnFailure_79E717164DB60DC5A8B19EAF4871DCA8();
	void OnSuccess_79E717164DB60DC5A8B19EAF4871DCA8();
	void OnShadowPlay();
	void OnBeginReadyWeapon();
	void MultiCast_OnBeginReadyWeapon();
	void OnAlert();
	void MulticastAlert();
	void CombatEnter();
	void CombatExit();
	void ReceiveBeginPlay();
	void OnDead_Event_2();
	void DisableCollision();
	void EnableCollision();
	void OnVaultOver_Begin();
	void OnVaultOver_End();
	void BndEvt__WindowCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void OnRunAway();
	void UseItem();
	void ExecuteUbergraph_BP_Monster();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
