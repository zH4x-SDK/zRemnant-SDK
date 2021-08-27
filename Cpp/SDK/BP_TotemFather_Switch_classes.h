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

// BlueprintGeneratedClass BP_TotemFather_Switch.BP_TotemFather_Switch_C
// 0x0000
class ABP_TotemFather_Switch_C : public ADamageableActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TotemFather_Switch.BP_TotemFather_Switch_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnHealthChanged_Event_1();
	void SelectRanged();
	void SelectMelee();
	void ExecuteUbergraph_BP_TotemFather_Switch();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
