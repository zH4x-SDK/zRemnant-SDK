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

// BlueprintGeneratedClass Action_Interactive_Damage.Action_Interactive_Damage_C
// 0x0000
class UAction_Interactive_Damage_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Interactive_Damage.Action_Interactive_Damage_C");
		return ptr;
	}



	void OnActionStart();
	void ExecuteUbergraph_Action_Interactive_Damage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
