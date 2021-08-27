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

// BlueprintGeneratedClass BP_Beam_Projectile.BP_Beam_Projectile_C
// 0x0000
class ABP_Beam_Projectile_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Beam_Projectile.BP_Beam_Projectile_C");
		return ptr;
	}



	void ModifyBeamStartEnd();
	void GetBeamStartEnd();
	void InitValues();
	void StopBeam();
	void TickBeam();
	void UpdateFX();
	void UpdateBeam();
	void Get_Owning_Character();
	void ActivateAllFX();
	void DeactivateAllFX();
	void ActivateImpactFX();
	void DeactivateImpactFX();
	void ReceiveBeginPlay();
	void ReceiveTick();
	void OnDestroy();
	void ExecuteUbergraph_BP_Beam_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
