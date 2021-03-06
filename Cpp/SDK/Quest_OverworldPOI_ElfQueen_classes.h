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

// BlueprintGeneratedClass Quest_OverworldPOI_ElfQueen.Quest_OverworldPOI_ElfQueen_C
// 0x0000
class AQuest_OverworldPOI_ElfQueen_C : public ARemnantQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_OverworldPOI_ElfQueen.Quest_OverworldPOI_ElfQueen_C");
		return ptr;
	}



	void TurnDownBugVolume();
	void ResetBugVolume();
	void ExecuteUbergraph_Quest_OverworldPOI_ElfQueen();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
