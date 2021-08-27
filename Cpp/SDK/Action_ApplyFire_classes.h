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

// BlueprintGeneratedClass Action_ApplyFire.Action_ApplyFire_C
// 0x0000
class UAction_ApplyFire_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_ApplyFire.Action_ApplyFire_C");
		return ptr;
	}



	void OnActionStart();
	void ExecuteUbergraph_Action_ApplyFire();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
