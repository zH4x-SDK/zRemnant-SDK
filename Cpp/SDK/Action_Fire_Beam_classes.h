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

// BlueprintGeneratedClass Action_Fire_Beam.Action_Fire_Beam_C
// 0x0000
class UAction_Fire_Beam_C : public UBP_ActionBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Fire_Beam.Action_Fire_Beam_C");
		return ptr;
	}



	void SpawnLocation();
	void SetTarget();
	void StartBeam();
	void SpawnBeam();
	void SpawnTarget();
	void Get_Character();
	void StopBeam();
	void OnActionStop();
	void OnActionStart();
	void ExecuteUbergraph_Action_Fire_Beam();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
