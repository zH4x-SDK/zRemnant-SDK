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

// BlueprintGeneratedClass Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C
// 0x0000
class AAura_Mod_HiveShot_InsectCloud_C : public ABP_Aura_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Aura_Mod_HiveShot_InsectCloud.Aura_Mod_HiveShot_InsectCloud_C");
		return ptr;
	}



	void AbrasiveAmuletAddCorrosiveStack();
	void DoActionToCharacter();
	void AddCorrodedStack();
	void CanDoAction();
	void UpdateValidOverlaps();
	void DoAction();
	void ReceiveBeginPlay();
	void ReceiveEndPlay();
	void StopAction();
	void ReceiveTick();
	void ExecuteUbergraph_Aura_Mod_HiveShot_InsectCloud();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
