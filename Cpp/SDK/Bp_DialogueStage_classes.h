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

// BlueprintGeneratedClass Bp_DialogueStage.Bp_DialogueStage_C
// 0x0000
class ABp_DialogueStage_C : public ADialogStage
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bp_DialogueStage.Bp_DialogueStage_C");
		return ptr;
	}



	void StageCameraTargetMatches();
	void ExitAnimatedCamera();
	void ShowDialog();
	void SetActive();
	void CacheEventRegion();
	void SetupCamera();
	void IsLocalPlayerInEventRegion();
	void OrientNPCToPlayer();
	void SetupShouldViewStage();
	void CleanupCharacters();
	void SetupCharacters();
	void SetupAnimatedCamera();
	void SetupStage();
	void Begin();
	void End();
	void OnSpectateTargetChanged_Event_1();
	void OnUpdateActiveState_Event_1();
	void ExecuteUbergraph_Bp_DialogueStage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
