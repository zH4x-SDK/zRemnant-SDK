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

// BlueprintGeneratedClass Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C
// 0x0000
class AAura_Consumable_FrenzyDust_C : public ABP_Aura_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Aura_Consumable_FrenzyDust.Aura_Consumable_FrenzyDust_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void DoAction();
	void FadeOut();
	void StopAura();
	void ExecuteUbergraph_Aura_Consumable_FrenzyDust();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
