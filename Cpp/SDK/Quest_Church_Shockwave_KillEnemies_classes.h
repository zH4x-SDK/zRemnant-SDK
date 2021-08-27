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

// BlueprintGeneratedClass Quest_Church_Shockwave_KillEnemies.Quest_Church_Shockwave_KillEnemies_C
// 0x0000
class AQuest_Church_Shockwave_KillEnemies_C : public ABP_Shockwave_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Church_Shockwave_KillEnemies.Quest_Church_Shockwave_KillEnemies_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Quest_Church_Shockwave_KillEnemies();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
