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

// BlueprintGeneratedClass Quest_SmallD_TheCleanRoom.Quest_SmallD_TheCleanRoom_C
// 0x0000
class AQuest_SmallD_TheCleanRoom_C : public AQuest_Dungeon_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_SmallD_TheCleanRoom.Quest_SmallD_TheCleanRoom_C");
		return ptr;
	}



	void CanStartEvent();
	void CanEndEvent();
	void PauseDebuff();
	void LightCheckSuccess();
	void LightCheckFail();
	void ReceiveBeginPlay();
	void BndEvt__StartTrigger_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature();
	void BndEvt__TriggerExit_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature();
	void RemoveDebuff();
	void OpenDoorsEnd();
	void OnWorldReset();
	void OpenDoors();
	void DebuffPlayers();
	void BndEvt__CleanRoom_Mid_K2Node_ComponentBoundEvent_8_QuestTileActiveDelegate__DelegateSignature();
	void EndRoomEvent();
	void End_RoomEnemyCheck();
	void KillEnemies();
	void BndEvt__Door1_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature();
	void BndEvt__Door2_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature();
	void BndEvt__Door3_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature();
	void BndEvt__Door4_K2Node_ComponentBoundEvent_5_QuestActorDelegate__DelegateSignature();
	void StartRoomEnemyCheck();
	void StartRoomEvent();
	void BndEvt__Zone_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_SmallD_TheCleanRoom();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
