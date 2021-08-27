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

// BlueprintGeneratedClass Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C
// 0x0000
class UAction_Root_Cloud_DOT_C : public UAction_DOT_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C");
		return ptr;
	}



	void CheckTag();
	void IsHostile();
	void IsPlayer();
	void IsBoss();
	void CanDoDamage();
	void Release();
	void AllowAction();
	void OnActionStart();
	void OnActionStop();
	void ExecuteUbergraph_Action_Root_Cloud_DOT();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
