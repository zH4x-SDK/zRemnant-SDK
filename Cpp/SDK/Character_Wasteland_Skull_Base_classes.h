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

// BlueprintGeneratedClass Character_Wasteland_Skull_Base.Character_Wasteland_Skull_Base_C
// 0x0000
class ACharacter_Wasteland_Skull_Base_C : public ABP_Monster_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Wasteland_Skull_Base.Character_Wasteland_Skull_Base_C");
		return ptr;
	}



	void GroundTrace();
	void SpawnSkullThenRagdoll();
	void SentinelSummon();
	void MiniLasers();
	void Beam_Attack();
	void OnStartBeam();
	void OnStopBeam();
	void SummonBlights();
	void SelfDestruct();
	void ReceiveBeginPlay();
	void MeleeReflect();
	void OnRotateStart();
	void OnRotateStop();
	void IntroComplete();
	void DiveIn();
	void DiveOut();
	void OnDead_Event_2();
	void SelfDestructDelay();
	void SFX_Suicide_Start();
	void SFX_Suicide_Stop();
	void OnDiveInVFX();
	void ExecuteUbergraph_Character_Wasteland_Skull_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
