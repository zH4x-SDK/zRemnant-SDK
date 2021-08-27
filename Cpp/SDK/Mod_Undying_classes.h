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

// BlueprintGeneratedClass Mod_Undying.Mod_Undying_C
// 0x0000
class AMod_Undying_C : public ARangedWeapon_Mod_Action_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Undying.Mod_Undying_C");
		return ptr;
	}



	void HasEzlansBand();
	void GetResurrectionBuffDurationScalar();
	void GetDispalyHealthScalar();
	void GetReviveHealthScalar();
	void DoAction();
	void ModifyInspectInfo();
	void OnChargesChanged();
	void OnAttached();
	void AddModPower();
	void ExecuteUbergraph_Mod_Undying();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
