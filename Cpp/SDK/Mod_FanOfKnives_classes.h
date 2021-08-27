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

// BlueprintGeneratedClass Mod_FanOfKnives.Mod_FanOfKnives_C
// 0x0000
class AMod_FanOfKnives_C : public ARangedWeapon_Mod_Action_MultiTarget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_FanOfKnives.Mod_FanOfKnives_C");
		return ptr;
	}



	void AttachKnives();
	void GetCurrentTargets();
	void ShowReticule();
	void GetFireDirection();
	void OnRep_KnifeOn();
	void GetDotDamage();
	void ModifyDamage();
	void DoAction();
	void ModifyInspectInfo();
	void ReceiveTick();
	void OnServer_TurnOff();
	void OnServer_End();
	void OnPreviewStart();
	void OnEndUse();
	void OnBeginUse();
	void OnPreviewEnd();
	void ReceiveBeginPlay();
	void OnActivate();
	void ClientDoAction();
	void ServerDoAction();
	void ToggleKnifeState();
	void ExecuteUbergraph_Mod_FanOfKnives();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
