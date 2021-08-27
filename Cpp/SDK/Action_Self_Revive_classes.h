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

// BlueprintGeneratedClass Action_Self_Revive.Action_Self_Revive_C
// 0x0000
class UAction_Self_Revive_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Self_Revive.Action_Self_Revive_C");
		return ptr;
	}



	void Set_Dragon_Heart_Quantity();
	void OnActionStart();
	void ExecuteUbergraph_Action_Self_Revive();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
