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

// BlueprintGeneratedClass Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C
// 0x0000
class AMod_Blizzard_StormCloud_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Blizzard_StormCloud.Mod_Blizzard_StormCloud_C");
		return ptr;
	}



	void CalcMoveToDestination();
	void GetRandomPointInCircle();
	void ReceiveBeginPlay();
	void StartFX();
	void DoRain();
	void StopFX();
	void ExecuteUbergraph_Mod_Blizzard_StormCloud();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
