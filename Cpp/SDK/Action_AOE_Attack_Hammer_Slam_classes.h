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

// BlueprintGeneratedClass Action_AOE_Attack_Hammer_Slam.Action_AOE_Attack_Hammer_Slam_C
// 0x0000
class UAction_AOE_Attack_Hammer_Slam_C : public UAction_AOE_Attack_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AOE_Attack_Hammer_Slam.Action_AOE_Attack_Hammer_Slam_C");
		return ptr;
	}



	void IsValidTarget();
	void Get_Socket_Location();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
