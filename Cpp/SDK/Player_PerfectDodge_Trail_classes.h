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

// BlueprintGeneratedClass Player_PerfectDodge_Trail.Player_PerfectDodge_Trail_C
// 0x0000
class APlayer_PerfectDodge_Trail_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Player_PerfectDodge_Trail.Player_PerfectDodge_Trail_C");
		return ptr;
	}



	void UserConstructionScript();
	void Opacity__FinishedFunc();
	void Opacity__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Player_PerfectDodge_Trail();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
