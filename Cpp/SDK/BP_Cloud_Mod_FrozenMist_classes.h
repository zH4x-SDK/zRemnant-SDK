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

// BlueprintGeneratedClass BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C
// 0x0000
class ABP_Cloud_Mod_FrozenMist_C : public ABP_Aura_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cloud_Mod_FrozenMist.BP_Cloud_Mod_FrozenMist_C");
		return ptr;
	}



	void TestDriftstone();
	void StopActionOnCharacter();
	void DoActionToCharacter();
	void AddFrostbiteStack();
	void SFX_Start();
	void SFX_Stop();
	void ReceiveBeginPlay();
	void DoAction();
	void StopAction();
	void MulticastFadeOut();
	void ReceiveTick();
	void ExecuteUbergraph_BP_Cloud_Mod_FrozenMist();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
