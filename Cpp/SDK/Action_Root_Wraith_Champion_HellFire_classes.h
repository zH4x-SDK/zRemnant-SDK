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

// BlueprintGeneratedClass Action_Root_Wraith_Champion_HellFire.Action_Root_Wraith_Champion_HellFire_C
// 0x0000
class UAction_Root_Wraith_Champion_HellFire_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Root_Wraith_Champion_HellFire.Action_Root_Wraith_Champion_HellFire_C");
		return ptr;
	}



	void OnActionStart();
	void OnActionStop();
	void OnStop();
	void OnFireLoop();
	void ExecuteUbergraph_Action_Root_Wraith_Champion_HellFire();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
