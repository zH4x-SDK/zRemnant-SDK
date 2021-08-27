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

// BlueprintGeneratedClass BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C
// 0x0000
class ABP_Multispawn_Waypoint_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Multispawn_Waypoint.BP_Multispawn_Waypoint_C");
		return ptr;
	}



	void ClearSpawnPositionStatus();
	void GetAvailableSpawnTransform();
	void UserConstructionScript();
	void Finished();
	void ClientShowCharacterSwap();
	void EvemtClosedCharacterSelect();
	void EventPossessedBy_Event_1();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Multispawn_Waypoint();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
