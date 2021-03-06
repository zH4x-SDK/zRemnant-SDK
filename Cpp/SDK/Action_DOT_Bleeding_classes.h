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

// BlueprintGeneratedClass Action_DOT_Bleeding.Action_DOT_Bleeding_C
// 0x0000
class UAction_DOT_Bleeding_C : public UAction_DOT_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_DOT_Bleeding.Action_DOT_Bleeding_C");
		return ptr;
	}



	void Get_Tag();
	void GetDamageScalar();
	void UpdateDamageScalar();
	void OnActionStart();
	void OnStateChange_Event_1();
	void OnComputeStats();
	void ExecuteUbergraph_Action_DOT_Bleeding();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
