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

// BlueprintGeneratedClass Action_Debuff_CleanRoom.Action_Debuff_CleanRoom_C
// 0x0000
class UAction_Debuff_CleanRoom_C : public UAction_DOT_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Debuff_CleanRoom.Action_Debuff_CleanRoom_C");
		return ptr;
	}



	void CanDoDamage();
	void OnActionStop();
	void PauseCleanRoomDebuff();
	void MultiCastPauseCleanRoomDebuff();
	void OnHitTarget();
	void ExecuteUbergraph_Action_Debuff_CleanRoom();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
