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

// BlueprintGeneratedClass Action_DOT.Action_DOT_C
// 0x0000
class UAction_DOT_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_DOT.Action_DOT_C");
		return ptr;
	}



	void ShouldDoDamageScaling();
	void CanDoDamage();
	void GetLevelScalar();
	void GetDamageScalar();
	void IsImmune();
	void DoDamage();
	void SetDamage();
	void OnActionStart();
	void OnDOT();
	void OnDead_Event_1();
	void OnActionStop();
	void ExecuteUbergraph_Action_DOT();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
