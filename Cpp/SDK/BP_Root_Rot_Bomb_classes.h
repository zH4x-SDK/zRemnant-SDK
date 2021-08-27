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

// BlueprintGeneratedClass BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C
// 0x0000
class ABP_Root_Rot_Bomb_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C");
		return ptr;
	}



	void OnNotifyTakeDamage();
	void ReceiveBeginPlay();
	void OnTimer();
	void ExecuteUbergraph_BP_Root_Rot_Bomb();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
