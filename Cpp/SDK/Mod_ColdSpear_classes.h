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

// BlueprintGeneratedClass Mod_ColdSpear.Mod_ColdSpear_C
// 0x0000
class AMod_ColdSpear_C : public ARangedWeapon_Mod_Action_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_ColdSpear.Mod_ColdSpear_C");
		return ptr;
	}



	void GetFireDirection();
	void OnRep_IcicleOn();
	void GetExplosionDamage();
	void GetImpactDamage();
	void ModifyDamage();
	void DoAction();
	void ModifyInspectInfo();
	void OnBeginUse();
	void OnEndUse();
	void OnPreviewStart();
	void OnServer_End();
	void OnServer_TurnOff();
	void OnPreviewEnd();
	void ReceiveBeginPlay();
	void OnActivate();
	void Client_GatherInfo();
	void Server_DoActionWithInfo();
	void ExecuteUbergraph_Mod_ColdSpear();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
