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

// BlueprintGeneratedClass Character_Swamp_ElfQueen_CorrosivePuddle.Character_Swamp_ElfQueen_CorrosivePuddle_C
// 0x0000
class ACharacter_Swamp_ElfQueen_CorrosivePuddle_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Swamp_ElfQueen_CorrosivePuddle.Character_Swamp_ElfQueen_CorrosivePuddle_C");
		return ptr;
	}



	void UserConstructionScript();
	void Haze_Fade_Out__FinishedFunc();
	void Haze_Fade_Out__UpdateFunc();
	void OnNotifyAllWorldReset();
	void ReceiveBeginPlay();
	void HitEnemies();
	void Replicated_FX();
	void OnWorldReset();
	void ExecuteUbergraph_Character_Swamp_ElfQueen_CorrosivePuddle();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
