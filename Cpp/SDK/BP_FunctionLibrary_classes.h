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

// BlueprintGeneratedClass BP_FunctionLibrary.BP_FunctionLibrary_C
// 0x0000
class UBP_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FunctionLibrary.BP_FunctionLibrary_C");
		return ptr;
	}



	void GetMinionDamageScalar();
	void GetMinionOwner();
	void ApplySoulEmberBuff();
	void GetMinionDamageMod();
	void GetMaxSummonsForMod();
	void LimitMinions();
	void ScaleDamage();
	void Update_Trigger_Objects();
	void IsDemoFloor();
	void IsDemo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
