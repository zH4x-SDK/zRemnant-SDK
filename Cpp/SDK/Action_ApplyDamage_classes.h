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

// BlueprintGeneratedClass Action_ApplyDamage.Action_ApplyDamage_C
// 0x0000
class UAction_ApplyDamage_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_ApplyDamage.Action_ApplyDamage_C");
		return ptr;
	}



	void OnActionStart();
	void ExecuteUbergraph_Action_ApplyDamage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
