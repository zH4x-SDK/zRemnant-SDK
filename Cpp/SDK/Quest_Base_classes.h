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

// BlueprintGeneratedClass Quest_Base.Quest_Base_C
// 0x0000
class AQuest_Base_C : public ARemnantQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Base.Quest_Base_C");
		return ptr;
	}



	void GetHost();
	void SetAIPersistent();
	void CleanupSpawnsForEventRegion();
	void ShowExitPrompt();
	void RemoveKey();
	void SetKey();
	void HasKey();
	void SetInvulnerable();
	void TriggerDialogResponseForEventRegion();
	void RegisterDefendObjective();
	void SetRewardTag();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
