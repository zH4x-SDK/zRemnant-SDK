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

// BlueprintGeneratedClass Quest_Campaign_Main.Quest_Campaign_Main_C
// 0x0000
class AQuest_Campaign_Main_C : public AQuest_RootQuest_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Campaign_Main.Quest_Campaign_Main_C");
		return ptr;
	}



	void OnBeginQuest();
	void ReturnToUndying();
	void Explore17();
	void OnDestroyQuest();
	void CompleteExploreWard17();
	void ExecuteUbergraph_Quest_Campaign_Main();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
