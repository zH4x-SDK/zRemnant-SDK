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

// BlueprintGeneratedClass FunctionLibrary_Quests.FunctionLibrary_Quests_C
// 0x0000
class UFunctionLibrary_Quests_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FunctionLibrary_Quests.FunctionLibrary_Quests_C");
		return ptr;
	}



	void IsPlayerAliveCheck();
	void Player_has_Quest_Item();
	void Objective_Not_Active_or_Complete();
	void Remove_Mini_Map_Waypoint_Component();
	void Put_NPC_on_a_Path();
	void If_Quest_is_Active_Execute_Event();
	void Set_Quest_Entity_State();
	void Is_Quest_Active_by_Name_ID();
	void Set_Entity_Invulnerable();
	void Trigger_ShowDialog();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
