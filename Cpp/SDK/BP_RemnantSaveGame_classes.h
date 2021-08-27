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

// BlueprintGeneratedClass BP_RemnantSaveGame.BP_RemnantSaveGame_C
// 0x0000
class UBP_RemnantSaveGame_C : public URemnantSaveGame
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemnantSaveGame.BP_RemnantSaveGame_C");
		return ptr;
	}



	void UpdateSaveInfo();
	void UpdateTimePlayed();
	void PreCommit();
	void ExecuteUbergraph_BP_RemnantSaveGame();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
